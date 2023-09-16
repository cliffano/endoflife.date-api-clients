<?php
/**
 * CycleTest
 *
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server\Tests\Model
 * @author   openapi-generator contributors
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * endoflife.date
 *
 * Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)
 *
 * The version of the OpenAPI document: 0.0.1
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the model.
 */

namespace OpenAPI\Server\Model;

use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * CycleTest Class Doc Comment
 *
 * @category    Class
 * @description Details of a single release cycle of a given product. There might be some slight variations to this depending on the product.
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\Cycle
 */
class CycleTest extends TestCase
{
    protected Cycle|MockObject $object;

    /**
     * Setup before running any test case
     */
    public static function setUpBeforeClass(): void
    {
    }

    /**
     * Setup before running each test case
     */
    public function setUp(): void
    {
         $this->object = $this->getMockBuilder(Cycle::class)->getMockForAbstractClass();
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
     * @group integration
     * @small
     */
    public function testTestClassExists(): void
    {
        $this->assertTrue(class_exists(Cycle::class));
        $this->assertInstanceOf(Cycle::class, $this->object);
    }

    /**
     * Test attribute "cycle"
     *
     * @group unit
     * @small
     */
    public function testPropertyCycle(): void
    {
        $this->markTestSkipped('Test for property cycle not implemented');
    }

    /**
     * Test attribute "releaseDate"
     *
     * @group unit
     * @small
     */
    public function testPropertyReleaseDate(): void
    {
        $this->markTestSkipped('Test for property releaseDate not implemented');
    }

    /**
     * Test attribute "eol"
     *
     * @group unit
     * @small
     */
    public function testPropertyEol(): void
    {
        $this->markTestSkipped('Test for property eol not implemented');
    }

    /**
     * Test attribute "latest"
     *
     * @group unit
     * @small
     */
    public function testPropertyLatest(): void
    {
        $this->markTestSkipped('Test for property latest not implemented');
    }

    /**
     * Test attribute "link"
     *
     * @group unit
     * @small
     */
    public function testPropertyLink(): void
    {
        $this->markTestSkipped('Test for property link not implemented');
    }

    /**
     * Test attribute "lts"
     *
     * @group unit
     * @small
     */
    public function testPropertyLts(): void
    {
        $this->markTestSkipped('Test for property lts not implemented');
    }

    /**
     * Test attribute "support"
     *
     * @group unit
     * @small
     */
    public function testPropertySupport(): void
    {
        $this->markTestSkipped('Test for property support not implemented');
    }

    /**
     * Test attribute "discontinued"
     *
     * @group unit
     * @small
     */
    public function testPropertyDiscontinued(): void
    {
        $this->markTestSkipped('Test for property discontinued not implemented');
    }
}
