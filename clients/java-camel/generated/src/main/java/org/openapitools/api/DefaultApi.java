/**
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (7.0.0).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.api;

import org.apache.camel.builder.RouteBuilder;
import org.apache.camel.model.rest.RestParamType;
import org.springframework.stereotype.Component;
import org.openapitools.model.*;
import org.apache.camel.model.rest.RestBindingMode;
import org.apache.camel.LoggingLevel;

@Component
public class DefaultApi extends RouteBuilder {

    @Override
    public void configure() throws Exception {
        

        /**
        GET /api/all.json : All Products
        **/
        rest()
            .get("/api/all.json")
                .description("All Products")
                .id("getApiAllJsonApi")
                .produces("application/json")
                .outType(Object.class)
                .to("direct:getApiAllJson");
        

        /**
        GET /api/{product}/{cycle}.json : Single cycle details
        **/
        rest()
            .get("/api/{product}/{cycle}.json")
                .description("Single cycle details")
                .id("getApiProductCycleJsonApi")
                .produces("application/json")
                .outType(Cycle.class)
                .param()
                    .name("product")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Product URL as per the canonical URL on the endofife.date website")
                .endParam()
                .param()
                    .name("cycle")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Release Cycle for which the details must be fetched")
                .endParam()
                .to("direct:getApiProductCycleJson");
        

        /**
        GET /api/{product}.json : Get All Details
        **/
        rest()
            .get("/api/{product}.json")
                .description("Get All Details")
                .id("getApiProductJsonApi")
                .produces("application/json")
                .outType(Object.class)
                .param()
                    .name("product")
                    .type(RestParamType.path)
                    .required(true)
                    .description("Product URL as per the canonical URL on the endofife.date website")
                .endParam()
                .to("direct:getApiProductJson");
        
    }
}
