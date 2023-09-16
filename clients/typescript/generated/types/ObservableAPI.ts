import { ResponseContext, RequestContext, HttpFile, HttpInfo } from '../http/http';
import { Configuration} from '../configuration'
import { Observable, of, from } from '../rxjsStub';
import {mergeMap, map} from  '../rxjsStub';
import { Cycle } from '../models/Cycle';

import { DefaultApiRequestFactory, DefaultApiResponseProcessor} from "../apis/DefaultApi";
export class ObservableDefaultApi {
    private requestFactory: DefaultApiRequestFactory;
    private responseProcessor: DefaultApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: DefaultApiRequestFactory,
        responseProcessor?: DefaultApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new DefaultApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new DefaultApiResponseProcessor();
    }

    /**
     * Return a list of all products. Each of these can be used for the other API endpoints.
     * All Products
     */
    public getApiAllJsonWithHttpInfo(_options?: Configuration): Observable<HttpInfo<any>> {
        const requestContextPromise = this.requestFactory.getApiAllJson(_options);

        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (let middleware of this.configuration.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => this.configuration.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (let middleware of this.configuration.middleware) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getApiAllJsonWithHttpInfo(rsp)));
            }));
    }

    /**
     * Return a list of all products. Each of these can be used for the other API endpoints.
     * All Products
     */
    public getApiAllJson(_options?: Configuration): Observable<any> {
        return this.getApiAllJsonWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<any>) => apiResponse.data));
    }

    /**
     * Gets details of a single cycle
     * Single cycle details
     * @param product Product URL as per the canonical URL on the endofife.date website
     * @param cycle Release Cycle for which the details must be fetched
     */
    public getApiProductCycleJsonWithHttpInfo(product: any, cycle: any, _options?: Configuration): Observable<HttpInfo<Cycle>> {
        const requestContextPromise = this.requestFactory.getApiProductCycleJson(product, cycle, _options);

        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (let middleware of this.configuration.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => this.configuration.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (let middleware of this.configuration.middleware) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getApiProductCycleJsonWithHttpInfo(rsp)));
            }));
    }

    /**
     * Gets details of a single cycle
     * Single cycle details
     * @param product Product URL as per the canonical URL on the endofife.date website
     * @param cycle Release Cycle for which the details must be fetched
     */
    public getApiProductCycleJson(product: any, cycle: any, _options?: Configuration): Observable<Cycle> {
        return this.getApiProductCycleJsonWithHttpInfo(product, cycle, _options).pipe(map((apiResponse: HttpInfo<Cycle>) => apiResponse.data));
    }

    /**
     * Get EoL dates of all cycles of a given product.
     * Get All Details
     * @param product Product URL as per the canonical URL on the endofife.date website
     */
    public getApiProductJsonWithHttpInfo(product: any, _options?: Configuration): Observable<HttpInfo<any>> {
        const requestContextPromise = this.requestFactory.getApiProductJson(product, _options);

        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (let middleware of this.configuration.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => this.configuration.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (let middleware of this.configuration.middleware) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getApiProductJsonWithHttpInfo(rsp)));
            }));
    }

    /**
     * Get EoL dates of all cycles of a given product.
     * Get All Details
     * @param product Product URL as per the canonical URL on the endofife.date website
     */
    public getApiProductJson(product: any, _options?: Configuration): Observable<any> {
        return this.getApiProductJsonWithHttpInfo(product, _options).pipe(map((apiResponse: HttpInfo<any>) => apiResponse.data));
    }

}
