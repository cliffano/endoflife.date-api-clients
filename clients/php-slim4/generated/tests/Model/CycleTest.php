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
 * Please update the test case below to test the model.
 */
namespace OpenAPIServer\Model;

use PHPUnit\Framework\TestCase;
use OpenAPIServer\Model\Cycle;

/**
 * CycleTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\Cycle
 */
class CycleTest extends TestCase
{

    /**
     * Setup before running any test cases
     */
    public static function setUpBeforeClass(): void
    {
    }

    /**
     * Setup before running each test case
     */
    public function setUp(): void
    {
    }

    /**
     * Clean up after running each test case
     */
    public function tearDown(): void
    {
    }

    /**
     * Clean up after running all test cases
     */
    public static function tearDownAfterClass(): void
    {
    }

    /**
     * Test "Cycle"
     */
    public function testCycle()
    {
        $testCycle = new Cycle();
        $namespacedClassname = Cycle::getModelsNamespace() . '\\Cycle';
        $this->assertSame('\\' . Cycle::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "Cycle" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "cycle"
     */
    public function testPropertyCycle()
    {
        $this->markTestIncomplete(
            'Test of "cycle" property in "Cycle" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "releaseDate"
     */
    public function testPropertyReleaseDate()
    {
        $this->markTestIncomplete(
            'Test of "releaseDate" property in "Cycle" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "eol"
     */
    public function testPropertyEol()
    {
        $this->markTestIncomplete(
            'Test of "eol" property in "Cycle" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "latest"
     */
    public function testPropertyLatest()
    {
        $this->markTestIncomplete(
            'Test of "latest" property in "Cycle" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "link"
     */
    public function testPropertyLink()
    {
        $this->markTestIncomplete(
            'Test of "link" property in "Cycle" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "lts"
     */
    public function testPropertyLts()
    {
        $this->markTestIncomplete(
            'Test of "lts" property in "Cycle" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "support"
     */
    public function testPropertySupport()
    {
        $this->markTestIncomplete(
            'Test of "support" property in "Cycle" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "discontinued"
     */
    public function testPropertyDiscontinued()
    {
        $this->markTestIncomplete(
            'Test of "discontinued" property in "Cycle" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = Cycle::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
