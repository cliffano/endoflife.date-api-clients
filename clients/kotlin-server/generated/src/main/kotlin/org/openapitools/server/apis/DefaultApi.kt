/**
* endoflife.date
* Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)
*
* The version of the OpenAPI document: 0.0.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.apis

import com.google.gson.Gson
import io.ktor.http.*
import io.ktor.server.application.*
import io.ktor.server.auth.*
import io.ktor.server.response.*
import org.openapitools.server.Paths
import io.ktor.server.resources.options
import io.ktor.server.resources.get
import io.ktor.server.resources.post
import io.ktor.server.resources.put
import io.ktor.server.resources.delete
import io.ktor.server.resources.head
import io.ktor.server.resources.patch
import io.ktor.server.routing.*
import org.openapitools.server.infrastructure.ApiPrincipal
import org.openapitools.server.models.Cycle

fun Route.DefaultApi() {
    val gson = Gson()
    val empty = mutableMapOf<String, Any?>()

    get<Paths.getApiAllJson> {
        call.respond(HttpStatusCode.NotImplemented)
    }

    get<Paths.getApiProductCycleJson> {
        val exampleContentType = "application/json"
        val exampleContentString = """{
          "eol" : "",
          "releaseDate" : "",
          "link" : "",
          "lts" : "",
          "discontinued" : "",
          "cycle" : "",
          "support" : "",
          "latest" : ""
        }"""
        
        when (exampleContentType) {
            "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
            "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
            else -> call.respondText(exampleContentString)
        }
    }

    get<Paths.getApiProductJson> {
        call.respond(HttpStatusCode.NotImplemented)
    }

}
