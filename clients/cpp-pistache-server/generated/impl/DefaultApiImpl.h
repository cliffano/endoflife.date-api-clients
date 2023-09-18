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

/*
* DefaultApiImpl.h
*
* 
*/

#ifndef DEFAULT_API_IMPL_H_
#define DEFAULT_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <DefaultApi.h>


#include "Cycle.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class  DefaultApiImpl : public org::openapitools::server::api::DefaultApi {
public:
    explicit DefaultApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~DefaultApiImpl() override = default;

    void get_api_all_json(Pistache::Http::ResponseWriter &response);
    void get_api_product_cycle_json(const org::openapitools::server::model::nlohmann::json &product, const org::openapitools::server::model::nlohmann::json &cycle, Pistache::Http::ResponseWriter &response);
    void get_api_product_json(const org::openapitools::server::model::nlohmann::json &product, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif