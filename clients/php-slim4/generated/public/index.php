<?php

/**
 * endoflife.date
 * PHP version 7.4
 *
 * @package OpenAPIServer
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */

/**
 * Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)
 * The version of the OpenAPI document: 0.0.1
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 */

require_once __DIR__ . '/../vendor/autoload.php';

use DI\Bridge\Slim\Bridge;
use DI\ContainerBuilder;
use OpenAPIServer\App\RegisterDependencies;
use OpenAPIServer\App\RegisterRoutes;
use OpenAPIServer\App\RegisterMiddlewares;
use OpenAPIServer\App\ResponseEmitter;
use Neomerx\Cors\Contracts\AnalyzerInterface;
use Slim\Factory\ServerRequestCreatorFactory;
use Slim\Middleware\ErrorMiddleware;

// Instantiate PHP-DI ContainerBuilder
$builder = new ContainerBuilder();

// consider prod by default
$env;
switch (strtolower($_SERVER['APP_ENV'] ?? 'prod')) {
    case 'development':
    case 'dev':
        $env = 'dev';
        break;
    case 'production':
    case 'prod':
    default:
        $env = 'prod';
}

// Main configuration
$builder->addDefinitions(__DIR__ . "/../config/{$env}/default.inc.php");

// Config file for the environment if exists
$userConfig = __DIR__ . "/../config/{$env}/config.inc.php";
if (file_exists($userConfig)) {
    $builder->addDefinitions($userConfig);
}

// Set up dependencies
$dependencies = new RegisterDependencies();
$dependencies($builder);

// Build PHP-DI Container instance
$container = $builder->build();

// Instantiate the app
$app = Bridge::create($container);

// Register middleware
$middleware = new RegisterMiddlewares();
$middleware($app);

// Register routes
// yes, it's anti-pattern you shouldn't get deps from container directly
$routes = $container->get(RegisterRoutes::class);
$routes($app);

// Create Request object from globals
$serverRequestCreator = ServerRequestCreatorFactory::create();
$request = $serverRequestCreator->createServerRequestFromGlobals();

// Get error middleware from container
// also anti-pattern, of course we know
$errorMiddleware = $container->get(ErrorMiddleware::class);

// Run App & Emit Response
$response = $app->handle($request);
$responseEmitter = (new ResponseEmitter())
    ->setRequest($request)
    ->setErrorMiddleware($errorMiddleware)
    ->setAnalyzer($container->get(AnalyzerInterface::class));

$responseEmitter->emit($response);
