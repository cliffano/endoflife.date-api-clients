/**
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 *
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.models


import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * Details of a single release cycle of a given product. There might be some slight variations to this depending on the product.
 *
 * @param cycle Release Cycle
 * @param releaseDate Release Date for the first release in this cycle
 * @param eol End of Life Date for this release cycle
 * @param latest Latest release in this cycle
 * @param link Link to changelog for the latest release, if available
 * @param lts Whether this release cycle has long-term-support (LTS). Can be a date instead in YYYY-MM-DD format as well if the release enters LTS status on a given date. 
 * @param support Whether this release cycle has active support
 * @param discontinued Whether this cycle is now discontinued.
 */


data class Cycle (

    /* Release Cycle */
    @Json(name = "cycle")
    val cycle: kotlin.Any? = null,

    /* Release Date for the first release in this cycle */
    @Json(name = "releaseDate")
    val releaseDate: kotlin.Any? = null,

    /* End of Life Date for this release cycle */
    @Json(name = "eol")
    val eol: kotlin.Any? = null,

    /* Latest release in this cycle */
    @Json(name = "latest")
    val latest: kotlin.Any? = null,

    /* Link to changelog for the latest release, if available */
    @Json(name = "link")
    val link: kotlin.Any? = null,

    /* Whether this release cycle has long-term-support (LTS). Can be a date instead in YYYY-MM-DD format as well if the release enters LTS status on a given date.  */
    @Json(name = "lts")
    val lts: kotlin.Any? = null,

    /* Whether this release cycle has active support */
    @Json(name = "support")
    val support: kotlin.Any? = null,

    /* Whether this cycle is now discontinued. */
    @Json(name = "discontinued")
    val discontinued: kotlin.Any? = null

)

