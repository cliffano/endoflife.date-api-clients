#
# endoflife.date
# 
# Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)
# The version of the OpenAPI document: 0.0.1
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech
#

import json
import tables

import model_any_type

type Cycle* = object
  ## Details of a single release cycle of a given product. There might be some slight variations to this depending on the product.
  cycle*: AnyType ## Release Cycle
  releaseDate*: AnyType ## Release Date for the first release in this cycle
  eol*: AnyType ## End of Life Date for this release cycle
  latest*: AnyType ## Latest release in this cycle
  link*: AnyType ## Link to changelog for the latest release, if available
  lts*: AnyType ## Whether this release cycle has long-term-support (LTS). Can be a date instead in YYYY-MM-DD format as well if the release enters LTS status on a given date. 
  support*: AnyType ## Whether this release cycle has active support
  discontinued*: AnyType ## Whether this cycle is now discontinued.
