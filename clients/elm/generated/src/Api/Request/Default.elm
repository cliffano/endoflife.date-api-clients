{-
   endoflife.date
   Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)

   The version of the OpenAPI document: 0.0.1
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.Default exposing
    ( getApiAllJson
    , getApiProductCycleJson
    , getApiProductJson
    )

import Api
import Api.Data exposing (..)
import Dict
import Http
import Json.Decode
import Json.Encode

{-| Return a list of all products. Each of these can be used for the other API endpoints.
-}
getApiAllJson : Api.Request Api.Data.AnyType
getApiAllJson =
    Api.request
        "GET"
        "/api/all.json"
        []
        []
        []
        Nothing
        Api.Data.anyTypeDecoder


{-| Gets details of a single cycle
-}
getApiProductCycleJson : Api.Data.AnyType -> Api.Data.AnyType -> Api.Request Api.Data.Cycle
getApiProductCycleJson product_path cycle_path =
    Api.request
        "GET"
        "/api/{product}/{cycle}.json"
        [ ( "product",  product_path ), ( "cycle",  cycle_path ) ]
        []
        []
        Nothing
        Api.Data.cycleDecoder


{-| Get EoL dates of all cycles of a given product.
-}
getApiProductJson : Api.Data.AnyType -> Api.Request Api.Data.AnyType
getApiProductJson product_path =
    Api.request
        "GET"
        "/api/{product}.json"
        [ ( "product",  product_path ) ]
        []
        []
        Nothing
        Api.Data.anyTypeDecoder
