# 

Documentation for the endoflife.date API. The API is currently in Alpha. Additional information about the API can be found on the [endoflife.date wiki](https://github.com/endoflife-date/endoflife.date/wiki)

This Groovy package, using the [http-builder-ng library](https://http-builder-ng.github.io/http-builder-ng/), is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: 0.0.1
- Package version: 0.0.1
- Build date: 2023-09-16T14:42:19.950898Z[Etc/UTC]
- Build package: org.openapitools.codegen.languages.GroovyClientCodegen
For more information, please visit [https://github.com/cliffano/endoflife.date-api-clients](https://github.com/cliffano/endoflife.date-api-clients)

## Requirements

* Groovy 2.5.7
* Gradle 4.9

## Build

First, create the gradle wrapper script:

```
gradle wrapper
```

Then, run:

```
./gradlew check assemble
```

## Getting Started


```groovy
def apiInstance = new DefaultApi()

apiInstance.getApiAllJson()
    {
    // on success
    def result = (Object)it
    println result
    
}
    {
    // on failure
    statusCode, message ->
        println "${statusCode} ${message}"
};
```

