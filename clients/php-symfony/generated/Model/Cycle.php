<?php
/**
 * Cycle
 *
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
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
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the Cycle model.
 *
 * Details of a single release cycle of a given product. There might be some slight variations to this depending on the product.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class Cycle 
{
        /**
     * Release Cycle
     *
     * @var 
     * @SerializedName("cycle")
     * @Assert\Type("AnyType")
     * @Type("AnyType")
     */
    protected  $cycle = null;

    /**
     * Release Date for the first release in this cycle
     *
     * @var 
     * @SerializedName("releaseDate")
     * @Assert\Type("AnyType")
     * @Type("AnyType")
     * @Assert\Length(
     *   max = 10
     * )
     * @Assert\Length(
     *   min = 10
     * )
     */
    protected  $releaseDate = null;

    /**
     * End of Life Date for this release cycle
     *
     * @var 
     * @SerializedName("eol")
     * @Assert\Type("AnyType")
     * @Type("AnyType")
     * @Assert\Length(
     *   min = 1
     * )
     */
    protected  $eol = null;

    /**
     * Latest release in this cycle
     *
     * @var 
     * @SerializedName("latest")
     * @Assert\Type("AnyType")
     * @Type("AnyType")
     * @Assert\Length(
     *   min = 1
     * )
     */
    protected  $latest = null;

    /**
     * Link to changelog for the latest release, if available
     *
     * @var 
     * @SerializedName("link")
     * @Assert\Type("AnyType")
     * @Type("AnyType")
     * @Assert\Length(
     *   min = 1
     * )
     */
    protected  $link = null;

    /**
     * Whether this release cycle has long-term-support (LTS). Can be a date instead in YYYY-MM-DD format as well if the release enters LTS status on a given date.
     *
     * @var 
     * @SerializedName("lts")
     * @Assert\Type("AnyType")
     * @Type("AnyType")
     */
    protected  $lts = null;

    /**
     * Whether this release cycle has active support
     *
     * @var 
     * @SerializedName("support")
     * @Assert\Type("AnyType")
     * @Type("AnyType")
     * @Assert\Length(
     *   max = 10
     * )
     * @Assert\Length(
     *   min = 10
     * )
     */
    protected  $support = null;

    /**
     * Whether this cycle is now discontinued.
     *
     * @var 
     * @SerializedName("discontinued")
     * @Assert\Type("AnyType")
     * @Type("AnyType")
     * @Assert\Length(
     *   max = 10
     * )
     * @Assert\Length(
     *   min = 10
     * )
     */
    protected  $discontinued = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->cycle = $data['cycle'] ?? null;
        $this->releaseDate = $data['releaseDate'] ?? null;
        $this->eol = $data['eol'] ?? null;
        $this->latest = $data['latest'] ?? null;
        $this->link = $data['link'] ?? null;
        $this->lts = $data['lts'] ?? null;
        $this->support = $data['support'] ?? null;
        $this->discontinued = $data['discontinued'] ?? null;
    }

    /**
     * Gets cycle.
     *
     * @return 
     */
    public function getCycle(): 
    {
        return $this->cycle;
    }

    /**
     * Sets cycle.
     *
     * @param  $cycle  Release Cycle
     *
     * @return $this
     */
    public function setCycle( $cycle = null): self
    {
        $this->cycle = $cycle;

        return $this;
    }

    /**
     * Gets releaseDate.
     *
     * @return 
     */
    public function getReleaseDate(): 
    {
        return $this->releaseDate;
    }

    /**
     * Sets releaseDate.
     *
     * @param  $releaseDate  Release Date for the first release in this cycle
     *
     * @return $this
     */
    public function setReleaseDate( $releaseDate = null): self
    {
        $this->releaseDate = $releaseDate;

        return $this;
    }

    /**
     * Gets eol.
     *
     * @return 
     */
    public function getEol(): 
    {
        return $this->eol;
    }

    /**
     * Sets eol.
     *
     * @param  $eol  End of Life Date for this release cycle
     *
     * @return $this
     */
    public function setEol( $eol = null): self
    {
        $this->eol = $eol;

        return $this;
    }

    /**
     * Gets latest.
     *
     * @return 
     */
    public function getLatest(): 
    {
        return $this->latest;
    }

    /**
     * Sets latest.
     *
     * @param  $latest  Latest release in this cycle
     *
     * @return $this
     */
    public function setLatest( $latest = null): self
    {
        $this->latest = $latest;

        return $this;
    }

    /**
     * Gets link.
     *
     * @return 
     */
    public function getLink(): 
    {
        return $this->link;
    }

    /**
     * Sets link.
     *
     * @param  $link  Link to changelog for the latest release, if available
     *
     * @return $this
     */
    public function setLink( $link = null): self
    {
        $this->link = $link;

        return $this;
    }

    /**
     * Gets lts.
     *
     * @return 
     */
    public function getLts(): 
    {
        return $this->lts;
    }

    /**
     * Sets lts.
     *
     * @param  $lts  Whether this release cycle has long-term-support (LTS). Can be a date instead in YYYY-MM-DD format as well if the release enters LTS status on a given date.
     *
     * @return $this
     */
    public function setLts( $lts = null): self
    {
        $this->lts = $lts;

        return $this;
    }

    /**
     * Gets support.
     *
     * @return 
     */
    public function getSupport(): 
    {
        return $this->support;
    }

    /**
     * Sets support.
     *
     * @param  $support  Whether this release cycle has active support
     *
     * @return $this
     */
    public function setSupport( $support = null): self
    {
        $this->support = $support;

        return $this;
    }

    /**
     * Gets discontinued.
     *
     * @return 
     */
    public function getDiscontinued(): 
    {
        return $this->discontinued;
    }

    /**
     * Sets discontinued.
     *
     * @param  $discontinued  Whether this cycle is now discontinued.
     *
     * @return $this
     */
    public function setDiscontinued( $discontinued = null): self
    {
        $this->discontinued = $discontinued;

        return $this;
    }
}


