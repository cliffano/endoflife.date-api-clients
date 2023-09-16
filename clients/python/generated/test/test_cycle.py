# coding: utf-8

"""
    endoflife.date

    Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)

    The version of the OpenAPI document: 0.0.1
    Contact: blah@cliffano.com
    Generated by OpenAPI Generator (https://openapi-generator.tech)

    Do not edit the class manually.
"""  # noqa: E501


import unittest
import datetime

import endoflifedate
from endoflifedate.models.cycle import Cycle  # noqa: E501
from endoflifedate.rest import ApiException

class TestCycle(unittest.TestCase):
    """Cycle unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test Cycle
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # uncomment below to create an instance of `Cycle`
        """
        model = endoflifedate.models.cycle.Cycle()  # noqa: E501
        if include_optional :
            return Cycle(
                cycle = None, 
                release_date = None, 
                eol = None, 
                latest = None, 
                link = None, 
                lts = None, 
                support = None, 
                discontinued = None
            )
        else :
            return Cycle(
        )
        """

    def testCycle(self):
        """Test Cycle"""
        # inst_req_only = self.make_instance(include_optional=False)
        # inst_req_and_optional = self.make_instance(include_optional=True)

if __name__ == '__main__':
    unittest.main()
