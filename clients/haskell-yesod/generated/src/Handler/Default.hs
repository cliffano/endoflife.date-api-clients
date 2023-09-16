{-# LANGUAGE NoImplicitPrelude #-}
{-# OPTIONS_GHC -fno-warn-unused-matches #-}
module Handler.Default where

import           Import


-- | All Products
--
-- Return a list of all products. Each of these can be used for the other API endpoints.
-- operationId: getApiAll.json
getApiAllJsonR :: Handler Value
getApiAllJsonR = notImplemented

-- | Get All Details
--
-- Get EoL dates of all cycles of a given product.
-- operationId: getApiProduct.json
getApi{Product}JsonR :: Value -- ^ Product URL as per the canonical URL on the endofife.date website
                     -> Handler Value
getApi{Product}JsonR product = notImplemented

-- | Single cycle details
--
-- Gets details of a single cycle
-- operationId: getApiProductCycle.json
getApiByValue{Cycle}JsonR :: Value -- ^ Product URL as per the canonical URL on the endofife.date website
                          -> Value -- ^ Release Cycle for which the details must be fetched
                          -> Handler Value
getApiByValue{Cycle}JsonR product cycle = notImplemented
