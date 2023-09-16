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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>


#include "OAIApiRouter.h"
#include "OAIDefaultApiRequest.h"


namespace OpenAPI {

OAIApiRouter::OAIApiRouter() {
    createApiHandlers();
}

OAIApiRouter::~OAIApiRouter(){

}

void OAIApiRouter::createApiHandlers() { 
    mOAIDefaultApiHandler = QSharedPointer<OAIDefaultApiHandler>::create();
}


void OAIApiRouter::setOAIDefaultApiHandler(QSharedPointer<OAIDefaultApiHandler> handler){
    mOAIDefaultApiHandler = handler;
}

void OAIApiRouter::setUpRoutes() {
    
    Routes.insert(QString("%1 %2").arg("GET").arg("/api/all.json").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIDefaultApiRequest(socket, mOAIDefaultApiHandler);
            reqObj->getApiAll_jsonRequest();
    });
}

void OAIApiRouter::processRequest(QHttpEngine::Socket *socket){
    if( handleRequest(socket) ){
        return;
    }
    if( handleRequestAndExtractPathParam(socket) ){
        return;
    }
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }
}

bool OAIApiRouter::handleRequest(QHttpEngine::Socket *socket){
    auto reqPath = QString("%1 %2").arg(fromQHttpEngineMethod(socket->method())).arg(socket->path()).toLower();
    if ( Routes.contains(reqPath) ) {
        Routes.value(reqPath).operator()(socket);
        return true;
    }
    return false;
}

bool OAIApiRouter::handleRequestAndExtractPathParam(QHttpEngine::Socket *socket){
    auto reqPath = QString("%1 %2").arg(fromQHttpEngineMethod(socket->method())).arg(socket->path()).toLower();
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/api/{product}/{cycle}.json").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString product = match.captured(QString("product").toLower());
                QString cycle = match.captured(QString("cycle").toLower());
                auto reqObj = new OAIDefaultApiRequest(socket, mOAIDefaultApiHandler);
                reqObj->getApiProductCycle_jsonRequest(product, cycle);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/api/{product}.json").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString product = match.captured(QString("product").toLower());
                auto reqObj = new OAIDefaultApiRequest(socket, mOAIDefaultApiHandler);
                reqObj->getApiProduct_jsonRequest(product);
                return true;
            }
        }
    }
    return false;
}

}
