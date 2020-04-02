/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * OpenAPI spec version: 1.111
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIBTApplicationElementThumbnailParamsArray.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTApplicationElementThumbnailParamsArray::OAIBTApplicationElementThumbnailParamsArray(QString json) {
    init();
    this->fromJson(json);
}

OAIBTApplicationElementThumbnailParamsArray::OAIBTApplicationElementThumbnailParamsArray() {
    init();
}

OAIBTApplicationElementThumbnailParamsArray::~OAIBTApplicationElementThumbnailParamsArray() {
    this->cleanup();
}

void
OAIBTApplicationElementThumbnailParamsArray::init() {
    thumbnails = new QList<OAIBTApplicationElementThumbnailParams*>();
    m_thumbnails_isSet = false;
}

void
OAIBTApplicationElementThumbnailParamsArray::cleanup() {
    if(thumbnails != nullptr) { 
        auto arr = thumbnails;
        for(auto o: *arr) { 
            delete o;
        }
        delete thumbnails;
    }
}

OAIBTApplicationElementThumbnailParamsArray*
OAIBTApplicationElementThumbnailParamsArray::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTApplicationElementThumbnailParamsArray::fromJsonObject(QJsonObject pJson) {
    
    ::OpenAPI::setValue(&thumbnails, pJson["thumbnails"], "QList", "OAIBTApplicationElementThumbnailParams");
}

QString
OAIBTApplicationElementThumbnailParamsArray::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTApplicationElementThumbnailParamsArray::asJsonObject() {
    QJsonObject obj;
    if(thumbnails->size() > 0){
        toJsonArray((QList<void*>*)thumbnails, obj, "thumbnails", "OAIBTApplicationElementThumbnailParams");
    }

    return obj;
}

QList<OAIBTApplicationElementThumbnailParams*>*
OAIBTApplicationElementThumbnailParamsArray::getThumbnails() {
    return thumbnails;
}
void
OAIBTApplicationElementThumbnailParamsArray::setThumbnails(QList<OAIBTApplicationElementThumbnailParams*>* thumbnails) {
    this->thumbnails = thumbnails;
    this->m_thumbnails_isSet = true;
}


bool
OAIBTApplicationElementThumbnailParamsArray::isSet(){
    bool isObjectUpdated = false;
    do{
        if(thumbnails->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

