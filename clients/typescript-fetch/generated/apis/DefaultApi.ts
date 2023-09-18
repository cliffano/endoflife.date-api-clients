/* tslint:disable */
/* eslint-disable */
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


import * as runtime from '../runtime';
import type {
  Cycle,
} from '../models/index';
import {
    CycleFromJSON,
    CycleToJSON,
} from '../models/index';

export interface GetApiProductCycleJsonRequest {
    product: any;
    cycle: any;
}

export interface GetApiProductJsonRequest {
    product: any;
}

/**
 * 
 */
export class DefaultApi extends runtime.BaseAPI {

    /**
     * Return a list of all products. Each of these can be used for the other API endpoints.
     * All Products
     */
    async getApiAllJsonRaw(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<any>> {
        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        const response = await this.request({
            path: `/api/all.json`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        if (this.isJsonMime(response.headers.get('content-type'))) {
            return new runtime.JSONApiResponse<any>(response);
        } else {
            return new runtime.TextApiResponse(response) as any;
        }
    }

    /**
     * Return a list of all products. Each of these can be used for the other API endpoints.
     * All Products
     */
    async getApiAllJson(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<any> {
        const response = await this.getApiAllJsonRaw(initOverrides);
        return await response.value();
    }

    /**
     * Gets details of a single cycle
     * Single cycle details
     */
    async getApiProductCycleJsonRaw(requestParameters: GetApiProductCycleJsonRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<Cycle>> {
        if (requestParameters.product === null || requestParameters.product === undefined) {
            throw new runtime.RequiredError('product','Required parameter requestParameters.product was null or undefined when calling getApiProductCycleJson.');
        }

        if (requestParameters.cycle === null || requestParameters.cycle === undefined) {
            throw new runtime.RequiredError('cycle','Required parameter requestParameters.cycle was null or undefined when calling getApiProductCycleJson.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        const response = await this.request({
            path: `/api/{product}/{cycle}.json`.replace(`{${"product"}}`, encodeURIComponent(String(requestParameters.product))).replace(`{${"cycle"}}`, encodeURIComponent(String(requestParameters.cycle))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => CycleFromJSON(jsonValue));
    }

    /**
     * Gets details of a single cycle
     * Single cycle details
     */
    async getApiProductCycleJson(requestParameters: GetApiProductCycleJsonRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<Cycle> {
        const response = await this.getApiProductCycleJsonRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Get EoL dates of all cycles of a given product.
     * Get All Details
     */
    async getApiProductJsonRaw(requestParameters: GetApiProductJsonRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<any>> {
        if (requestParameters.product === null || requestParameters.product === undefined) {
            throw new runtime.RequiredError('product','Required parameter requestParameters.product was null or undefined when calling getApiProductJson.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        const response = await this.request({
            path: `/api/{product}.json`.replace(`{${"product"}}`, encodeURIComponent(String(requestParameters.product))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        if (this.isJsonMime(response.headers.get('content-type'))) {
            return new runtime.JSONApiResponse<any>(response);
        } else {
            return new runtime.TextApiResponse(response) as any;
        }
    }

    /**
     * Get EoL dates of all cycles of a given product.
     * Get All Details
     */
    async getApiProductJson(requestParameters: GetApiProductJsonRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<any> {
        const response = await this.getApiProductJsonRaw(requestParameters, initOverrides);
        return await response.value();
    }

}