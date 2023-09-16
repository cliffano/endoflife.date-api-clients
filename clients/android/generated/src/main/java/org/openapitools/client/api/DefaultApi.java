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

package org.openapitools.client.api;

import org.openapitools.client.ApiInvoker;
import org.openapitools.client.ApiException;
import org.openapitools.client.Pair;

import org.openapitools.client.model.*;

import java.util.*;

import com.android.volley.Response;
import com.android.volley.VolleyError;

import org.openapitools.client.model.Cycle;
import org.openapitools.client.model.OasAnyTypeNotMapped;

import org.apache.http.HttpEntity;
import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.TimeoutException;

public class DefaultApi {
  String basePath = "https://endoflife.date";
  ApiInvoker apiInvoker = ApiInvoker.getInstance();

  public void addHeader(String key, String value) {
    getInvoker().addDefaultHeader(key, value);
  }

  public ApiInvoker getInvoker() {
    return apiInvoker;
  }

  public void setBasePath(String basePath) {
    this.basePath = basePath;
  }

  public String getBasePath() {
    return basePath;
  }

  /**
  * All Products
  * Return a list of all products. Each of these can be used for the other API endpoints.
   * @return OasAnyTypeNotMapped
  */
  public OasAnyTypeNotMapped getApiAllJson () throws TimeoutException, ExecutionException, InterruptedException, ApiException {
    Object postBody = null;

    // create path and map variables
    String path = "/api/all.json";

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();
    String[] contentTypes = {
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
    }

    String[] authNames = new String[] {  };

    try {
      String localVarResponse = apiInvoker.invokeAPI (basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType, authNames);
      if (localVarResponse != null) {
         return (OasAnyTypeNotMapped) ApiInvoker.deserialize(localVarResponse, "", OasAnyTypeNotMapped.class);
      } else {
         return null;
      }
    } catch (ApiException ex) {
       throw ex;
    } catch (InterruptedException ex) {
       throw ex;
    } catch (ExecutionException ex) {
      if (ex.getCause() instanceof VolleyError) {
        VolleyError volleyError = (VolleyError)ex.getCause();
        if (volleyError.networkResponse != null) {
          throw new ApiException(volleyError.networkResponse.statusCode, volleyError.getMessage());
        }
      }
      throw ex;
    } catch (TimeoutException ex) {
      throw ex;
    }
  }

      /**
   * All Products
   * Return a list of all products. Each of these can be used for the other API endpoints.

  */
  public void getApiAllJson (final Response.Listener<OasAnyTypeNotMapped> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = null;


    // create path and map variables
    String path = "/api/all.json".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();



    String[] contentTypes = {
      
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
          }

    String[] authNames = new String[] {  };

    try {
      apiInvoker.invokeAPI(basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType, authNames,
        new Response.Listener<String>() {
          @Override
          public void onResponse(String localVarResponse) {
            try {
              responseListener.onResponse((OasAnyTypeNotMapped) ApiInvoker.deserialize(localVarResponse,  "", OasAnyTypeNotMapped.class));
            } catch (ApiException exception) {
               errorListener.onErrorResponse(new VolleyError(exception));
            }
          }
      }, new Response.ErrorListener() {
          @Override
          public void onErrorResponse(VolleyError error) {
            errorListener.onErrorResponse(error);
          }
      });
    } catch (ApiException ex) {
      errorListener.onErrorResponse(new VolleyError(ex));
    }
  }
  /**
  * Single cycle details
  * Gets details of a single cycle
   * @param product Product URL as per the canonical URL on the endofife.date website
   * @param cycle Release Cycle for which the details must be fetched
   * @return Cycle
  */
  public Cycle getApiProductCycleJson (OasAnyTypeNotMapped product, OasAnyTypeNotMapped cycle) throws TimeoutException, ExecutionException, InterruptedException, ApiException {
    Object postBody = null;
    // verify the required parameter 'product' is set
    if (product == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'product' when calling getApiProductCycleJson",
        new ApiException(400, "Missing the required parameter 'product' when calling getApiProductCycleJson"));
    }
    // verify the required parameter 'cycle' is set
    if (cycle == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'cycle' when calling getApiProductCycleJson",
        new ApiException(400, "Missing the required parameter 'cycle' when calling getApiProductCycleJson"));
    }

    // create path and map variables
    String path = "/api/{product}/{cycle}.json".replaceAll("\\{" + "product" + "\\}", apiInvoker.escapeString(product.toString())).replaceAll("\\{" + "cycle" + "\\}", apiInvoker.escapeString(cycle.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();
    String[] contentTypes = {
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
    }

    String[] authNames = new String[] {  };

    try {
      String localVarResponse = apiInvoker.invokeAPI (basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType, authNames);
      if (localVarResponse != null) {
         return (Cycle) ApiInvoker.deserialize(localVarResponse, "", Cycle.class);
      } else {
         return null;
      }
    } catch (ApiException ex) {
       throw ex;
    } catch (InterruptedException ex) {
       throw ex;
    } catch (ExecutionException ex) {
      if (ex.getCause() instanceof VolleyError) {
        VolleyError volleyError = (VolleyError)ex.getCause();
        if (volleyError.networkResponse != null) {
          throw new ApiException(volleyError.networkResponse.statusCode, volleyError.getMessage());
        }
      }
      throw ex;
    } catch (TimeoutException ex) {
      throw ex;
    }
  }

      /**
   * Single cycle details
   * Gets details of a single cycle
   * @param product Product URL as per the canonical URL on the endofife.date website   * @param cycle Release Cycle for which the details must be fetched
  */
  public void getApiProductCycleJson (OasAnyTypeNotMapped product, OasAnyTypeNotMapped cycle, final Response.Listener<Cycle> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = null;

    // verify the required parameter 'product' is set
    if (product == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'product' when calling getApiProductCycleJson",
        new ApiException(400, "Missing the required parameter 'product' when calling getApiProductCycleJson"));
    }
    // verify the required parameter 'cycle' is set
    if (cycle == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'cycle' when calling getApiProductCycleJson",
        new ApiException(400, "Missing the required parameter 'cycle' when calling getApiProductCycleJson"));
    }

    // create path and map variables
    String path = "/api/{product}/{cycle}.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "product" + "\\}", apiInvoker.escapeString(product.toString())).replaceAll("\\{" + "cycle" + "\\}", apiInvoker.escapeString(cycle.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();



    String[] contentTypes = {
      
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
          }

    String[] authNames = new String[] {  };

    try {
      apiInvoker.invokeAPI(basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType, authNames,
        new Response.Listener<String>() {
          @Override
          public void onResponse(String localVarResponse) {
            try {
              responseListener.onResponse((Cycle) ApiInvoker.deserialize(localVarResponse,  "", Cycle.class));
            } catch (ApiException exception) {
               errorListener.onErrorResponse(new VolleyError(exception));
            }
          }
      }, new Response.ErrorListener() {
          @Override
          public void onErrorResponse(VolleyError error) {
            errorListener.onErrorResponse(error);
          }
      });
    } catch (ApiException ex) {
      errorListener.onErrorResponse(new VolleyError(ex));
    }
  }
  /**
  * Get All Details
  * Get EoL dates of all cycles of a given product.
   * @param product Product URL as per the canonical URL on the endofife.date website
   * @return OasAnyTypeNotMapped
  */
  public OasAnyTypeNotMapped getApiProductJson (OasAnyTypeNotMapped product) throws TimeoutException, ExecutionException, InterruptedException, ApiException {
    Object postBody = null;
    // verify the required parameter 'product' is set
    if (product == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'product' when calling getApiProductJson",
        new ApiException(400, "Missing the required parameter 'product' when calling getApiProductJson"));
    }

    // create path and map variables
    String path = "/api/{product}.json".replaceAll("\\{" + "product" + "\\}", apiInvoker.escapeString(product.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();
    String[] contentTypes = {
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
    }

    String[] authNames = new String[] {  };

    try {
      String localVarResponse = apiInvoker.invokeAPI (basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType, authNames);
      if (localVarResponse != null) {
         return (OasAnyTypeNotMapped) ApiInvoker.deserialize(localVarResponse, "", OasAnyTypeNotMapped.class);
      } else {
         return null;
      }
    } catch (ApiException ex) {
       throw ex;
    } catch (InterruptedException ex) {
       throw ex;
    } catch (ExecutionException ex) {
      if (ex.getCause() instanceof VolleyError) {
        VolleyError volleyError = (VolleyError)ex.getCause();
        if (volleyError.networkResponse != null) {
          throw new ApiException(volleyError.networkResponse.statusCode, volleyError.getMessage());
        }
      }
      throw ex;
    } catch (TimeoutException ex) {
      throw ex;
    }
  }

      /**
   * Get All Details
   * Get EoL dates of all cycles of a given product.
   * @param product Product URL as per the canonical URL on the endofife.date website
  */
  public void getApiProductJson (OasAnyTypeNotMapped product, final Response.Listener<OasAnyTypeNotMapped> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = null;

    // verify the required parameter 'product' is set
    if (product == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'product' when calling getApiProductJson",
        new ApiException(400, "Missing the required parameter 'product' when calling getApiProductJson"));
    }

    // create path and map variables
    String path = "/api/{product}.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "product" + "\\}", apiInvoker.escapeString(product.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();



    String[] contentTypes = {
      
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
          }

    String[] authNames = new String[] {  };

    try {
      apiInvoker.invokeAPI(basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType, authNames,
        new Response.Listener<String>() {
          @Override
          public void onResponse(String localVarResponse) {
            try {
              responseListener.onResponse((OasAnyTypeNotMapped) ApiInvoker.deserialize(localVarResponse,  "", OasAnyTypeNotMapped.class));
            } catch (ApiException exception) {
               errorListener.onErrorResponse(new VolleyError(exception));
            }
          }
      }, new Response.ErrorListener() {
          @Override
          public void onErrorResponse(VolleyError error) {
            errorListener.onErrorResponse(error);
          }
      });
    } catch (ApiException ex) {
      errorListener.onErrorResponse(new VolleyError(ex));
    }
  }
}
