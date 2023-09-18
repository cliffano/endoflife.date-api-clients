# coding: utf-8

# flake8: noqa

"""
    endoflife.date

    Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)

    The version of the OpenAPI document: 0.0.1
    Contact: blah@cliffano.com
    Generated by OpenAPI Generator (https://openapi-generator.tech)

    Do not edit the class manually.
"""  # noqa: E501


__version__ = "0.9.0-pre.0"

# import apis into sdk package
from endoflifedate.api.default_api import DefaultApi

# import ApiClient
from endoflifedate.api_response import ApiResponse
from endoflifedate.api_client import ApiClient
from endoflifedate.configuration import Configuration
from endoflifedate.exceptions import OpenApiException
from endoflifedate.exceptions import ApiTypeError
from endoflifedate.exceptions import ApiValueError
from endoflifedate.exceptions import ApiKeyError
from endoflifedate.exceptions import ApiAttributeError
from endoflifedate.exceptions import ApiException

# import models into sdk package
from endoflifedate.models.cycle import Cycle