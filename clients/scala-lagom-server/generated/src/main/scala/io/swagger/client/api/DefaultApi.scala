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

package io.swagger.client.api

import akka.{Done, NotUsed}
import com.lightbend.lagom.scaladsl.api.transport.Method
import com.lightbend.lagom.scaladsl.api.{Service, ServiceCall}
import play.api.libs.json._
import com.lightbend.lagom.scaladsl.api.deser.PathParamSerializer

import io.swagger.client.model.AnyType
import io.swagger.client.model.Cycle

trait DefaultApi extends Service {


  final override def descriptor = {
    import Service._
    named("DefaultApi").withCalls(
      restCall(Method.GET, "/api/all.json", getApiAllJson _), 
      restCall(Method.GET, "/api/:product/:cycle.json", getApiProductCycleJson _), 
      restCall(Method.GET, "/api/:product.json", getApiProductJson _)
    ).withAutoAcl(true)
  }


  /**
    * All Products
    * Return a list of all products. Each of these can be used for the other API endpoints.
    * 
    * @return AnyType
    */
  def getApiAllJson(): ServiceCall[NotUsed ,AnyType]
  
  /**
    * Single cycle details
    * Gets details of a single cycle
    *  
    * @param product Product URL as per the canonical URL on the endofife.date website  
    * @param cycle Release Cycle for which the details must be fetched 
    * @return Cycle
    */
  def getApiProductCycleJson(product: AnyType, cycle: AnyType): ServiceCall[NotUsed ,Cycle]
  
  /**
    * Get All Details
    * Get EoL dates of all cycles of a given product.
    *  
    * @param product Product URL as per the canonical URL on the endofife.date website 
    * @return AnyType
    */
  def getApiProductJson(product: AnyType): ServiceCall[NotUsed ,AnyType]
  

  }
