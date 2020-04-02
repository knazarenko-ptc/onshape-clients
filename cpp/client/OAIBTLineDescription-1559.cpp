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


#include "OAIBTLineDescription-1559.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTLineDescription-1559::OAIBTLineDescription-1559(QString json) {
    init();
    this->fromJson(json);
}

OAIBTLineDescription-1559::OAIBTLineDescription-1559() {
    init();
}

OAIBTLineDescription-1559::~OAIBTLineDescription-1559() {
    this->cleanup();
}

void
OAIBTLineDescription-1559::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    type = new QString("");
    m_type_isSet = false;
    direction = new OAIBTVector3d-389();
    m_direction_isSet = false;
    origin = new OAIBTVector3d-389();
    m_origin_isSet = false;
}

void
OAIBTLineDescription-1559::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(type != nullptr) { 
        delete type;
    }
    if(direction != nullptr) { 
        delete direction;
    }
    if(origin != nullptr) { 
        delete origin;
    }
}

OAIBTLineDescription-1559*
OAIBTLineDescription-1559::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTLineDescription-1559::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&type, pJson["type"], "QString", "QString");
    
    ::OpenAPI::setValue(&direction, pJson["direction"], "OAIBTVector3d-389", "OAIBTVector3d-389");
    
    ::OpenAPI::setValue(&origin, pJson["origin"], "OAIBTVector3d-389", "OAIBTVector3d-389");
    
}

QString
OAIBTLineDescription-1559::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTLineDescription-1559::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(type != nullptr && *type != QString("")){
        toJsonValue(QString("type"), type, obj, QString("QString"));
    }
    if((direction != nullptr) && (direction->isSet())){
        toJsonValue(QString("direction"), direction, obj, QString("OAIBTVector3d-389"));
    }
    if((origin != nullptr) && (origin->isSet())){
        toJsonValue(QString("origin"), origin, obj, QString("OAIBTVector3d-389"));
    }

    return obj;
}

QString*
OAIBTLineDescription-1559::getBtType() {
    return bt_type;
}
void
OAIBTLineDescription-1559::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTLineDescription-1559::getType() {
    return type;
}
void
OAIBTLineDescription-1559::setType(QString* type) {
    this->type = type;
    this->m_type_isSet = true;
}

OAIBTVector3d-389*
OAIBTLineDescription-1559::getDirection() {
    return direction;
}
void
OAIBTLineDescription-1559::setDirection(OAIBTVector3d-389* direction) {
    this->direction = direction;
    this->m_direction_isSet = true;
}

OAIBTVector3d-389*
OAIBTLineDescription-1559::getOrigin() {
    return origin;
}
void
OAIBTLineDescription-1559::setOrigin(OAIBTVector3d-389* origin) {
    this->origin = origin;
    this->m_origin_isSet = true;
}


bool
OAIBTLineDescription-1559::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(type != nullptr && *type != QString("")){ isObjectUpdated = true; break;}
        if(direction != nullptr && direction->isSet()){ isObjectUpdated = true; break;}
        if(origin != nullptr && origin->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

