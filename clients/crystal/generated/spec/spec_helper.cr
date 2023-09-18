# #endoflife.date
#
##Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)
#
#The version of the OpenAPI document: 0.0.1
#Contact: blah@cliffano.com
#Generated by: https://openapi-generator.tech
#OpenAPI Generator version: 7.0.0
#

# load modules
require "spec"
require "json"
require "../src/openapi_client"

def assert_compilation_error(path : String, message : String) : Nil
  buffer = IO::Memory.new
  result = Process.run("crystal", ["run", "--no-color", "--no-codegen", path], error: buffer)
  result.success?.should be_false
  buffer.to_s.should contain message
  buffer.close
end