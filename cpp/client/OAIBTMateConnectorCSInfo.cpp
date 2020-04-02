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


#include "OAIBTMateConnectorCSInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTMateConnectorCSInfo::OAIBTMateConnectorCSInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIBTMateConnectorCSInfo::OAIBTMateConnectorCSInfo() {
    init();
}

OAIBTMateConnectorCSInfo::~OAIBTMateConnectorCSInfo() {
    this->cleanup();
}

void
OAIBTMateConnectorCSInfo::init() {
    getx_axis = new QList<double>();
    m_getx_axis_isSet = false;
    gety_axis = new QList<double>();
    m_gety_axis_isSet = false;
    getz_axis = new QList<double>();
    m_getz_axis_isSet = false;
    origin = new QList<double>();
    m_origin_isSet = false;
}

void
OAIBTMateConnectorCSInfo::cleanup() {

    if(getx_axis != nullptr) { 
        delete getx_axis;
    }

    if(gety_axis != nullptr) { 
        delete gety_axis;
    }

    if(getz_axis != nullptr) { 
        delete getz_axis;
    }

    if(origin != nullptr) { 
        delete origin;
    }
}

OAIBTMateConnectorCSInfo*
OAIBTMateConnectorCSInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTMateConnectorCSInfo::fromJsonObject(QJsonObject pJson) {
    
    ::OpenAPI::setValue(&getx_axis, pJson["getxAxis"], "QList", "double");
    
    ::OpenAPI::setValue(&gety_axis, pJson["getyAxis"], "QList", "double");
    
    ::OpenAPI::setValue(&getz_axis, pJson["getzAxis"], "QList", "double");
    
    ::OpenAPI::setValue(&origin, pJson["origin"], "QList", "double");
}

QString
OAIBTMateConnectorCSInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTMateConnectorCSInfo::asJsonObject() {
    QJsonObject obj;
    if(getx_axis->size() > 0){
        toJsonArray((QList<void*>*)getx_axis, obj, "getxAxis", "");
    }
    if(gety_axis->size() > 0){
        toJsonArray((QList<void*>*)gety_axis, obj, "getyAxis", "");
    }
    if(getz_axis->size() > 0){
        toJsonArray((QList<void*>*)getz_axis, obj, "getzAxis", "");
    }
    if(origin->size() > 0){
        toJsonArray((QList<void*>*)origin, obj, "origin", "");
    }

    return obj;
}

QList<double>*
OAIBTMateConnectorCSInfo::getGetxAxis() {
    return getx_axis;
}
void
OAIBTMateConnectorCSInfo::setGetxAxis(QList<double>* getx_axis) {
    this->getx_axis = getx_axis;
    this->m_getx_axis_isSet = true;
}

QList<double>*
OAIBTMateConnectorCSInfo::getGetyAxis() {
    return gety_axis;
}
void
OAIBTMateConnectorCSInfo::setGetyAxis(QList<double>* gety_axis) {
    this->gety_axis = gety_axis;
    this->m_gety_axis_isSet = true;
}

QList<double>*
OAIBTMateConnectorCSInfo::getGetzAxis() {
    return getz_axis;
}
void
OAIBTMateConnectorCSInfo::setGetzAxis(QList<double>* getz_axis) {
    this->getz_axis = getz_axis;
    this->m_getz_axis_isSet = true;
}

QList<double>*
OAIBTMateConnectorCSInfo::getOrigin() {
    return origin;
}
void
OAIBTMateConnectorCSInfo::setOrigin(QList<double>* origin) {
    this->origin = origin;
    this->m_origin_isSet = true;
}


bool
OAIBTMateConnectorCSInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_getx_axis_isSet){ isObjectUpdated = true; break;}
        if(getx_axis->size() > 0){ isObjectUpdated = true; break;}
        if(m_gety_axis_isSet){ isObjectUpdated = true; break;}
        if(gety_axis->size() > 0){ isObjectUpdated = true; break;}
        if(m_getz_axis_isSet){ isObjectUpdated = true; break;}
        if(getz_axis->size() > 0){ isObjectUpdated = true; break;}
        if(m_origin_isSet){ isObjectUpdated = true; break;}
        if(origin->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

