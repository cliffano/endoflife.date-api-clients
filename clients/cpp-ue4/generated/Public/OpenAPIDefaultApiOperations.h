/**
 * endoflife.date
 * Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)
 *
 * OpenAPI spec version: 0.0.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIDefaultApi.h"

#include "OpenAPICycle.h"

namespace OpenAPI
{

/* All Products
 *
 * Return a list of all products. Each of these can be used for the other API endpoints.
*/
class OPENAPI_API OpenAPIDefaultApi::GetApiAllJsonRequest : public Request
{
public:
    virtual ~GetApiAllJsonRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

};

class OPENAPI_API OpenAPIDefaultApi::GetApiAllJsonResponse : public Response
{
public:
    virtual ~GetApiAllJsonResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TSharedPtr<FJsonValue> Content;
};

/* Single cycle details
 *
 * Gets details of a single cycle
*/
class OPENAPI_API OpenAPIDefaultApi::GetApiProductCycleJsonRequest : public Request
{
public:
    virtual ~GetApiProductCycleJsonRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Product URL as per the canonical URL on the endofife.date website */
	TSharedPtr<FJsonValue> Product;
	/* Release Cycle for which the details must be fetched */
	TSharedPtr<FJsonValue> Cycle;
};

class OPENAPI_API OpenAPIDefaultApi::GetApiProductCycleJsonResponse : public Response
{
public:
    virtual ~GetApiProductCycleJsonResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICycle Content;
};

/* Get All Details
 *
 * Get EoL dates of all cycles of a given product.
*/
class OPENAPI_API OpenAPIDefaultApi::GetApiProductJsonRequest : public Request
{
public:
    virtual ~GetApiProductJsonRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Product URL as per the canonical URL on the endofife.date website */
	TSharedPtr<FJsonValue> Product;
};

class OPENAPI_API OpenAPIDefaultApi::GetApiProductJsonResponse : public Response
{
public:
    virtual ~GetApiProductJsonResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TSharedPtr<FJsonValue> Content;
};

}
