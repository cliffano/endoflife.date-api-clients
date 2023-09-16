from typing import List, Dict
from aiohttp import web

from openapi_server.models.cycle import Cycle
from openapi_server import util


async def get_api_all_json(request: web.Request, ) -> web.Response:
    """All Products

    Return a list of all products. Each of these can be used for the other API endpoints.


    """
    return web.Response(status=200)


async def get_api_product_cycle_json(request: web.Request, product, cycle) -> web.Response:
    """Single cycle details

    Gets details of a single cycle

    :param product: Product URL as per the canonical URL on the endofife.date website
    :type product: dict | bytes
    :param cycle: Release Cycle for which the details must be fetched
    :type cycle: dict | bytes

    """
    product = .from_dict(product)
    cycle = .from_dict(cycle)
    return web.Response(status=200)


async def get_api_product_json(request: web.Request, product) -> web.Response:
    """Get All Details

    Get EoL dates of all cycles of a given product.

    :param product: Product URL as per the canonical URL on the endofife.date website
    :type product: dict | bytes

    """
    product = .from_dict(product)
    return web.Response(status=200)
