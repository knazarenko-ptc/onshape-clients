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


#include "OAIBTFullElementId-756.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTFullElementId-756::OAIBTFullElementId-756(QString json) {
    init();
    this->fromJson(json);
}

OAIBTFullElementId-756::OAIBTFullElementId-756() {
    init();
}

OAIBTFullElementId-756::~OAIBTFullElementId-756() {
    this->cleanup();
}

void
OAIBTFullElementId-756::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    configured = false;
    m_configured_isSet = false;
    element_id = new QString("");
    m_element_id_isSet = false;
    microversion_id = new OAIBTMicroversionId-366();
    m_microversion_id_isSet = false;
    microversion_id_and_configuration = new OAIBTMicroversionIdAndConfiguration-2338();
    m_microversion_id_and_configuration_isSet = false;
    target = new OAIBTMicroversionIdAndConfiguration-2338();
    m_target_isSet = false;
}

void
OAIBTFullElementId-756::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }

    if(element_id != nullptr) { 
        delete element_id;
    }
    if(microversion_id != nullptr) { 
        delete microversion_id;
    }
    if(microversion_id_and_configuration != nullptr) { 
        delete microversion_id_and_configuration;
    }
    if(target != nullptr) { 
        delete target;
    }
}

OAIBTFullElementId-756*
OAIBTFullElementId-756::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTFullElementId-756::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&configured, pJson["configured"], "bool", "");
    
    ::OpenAPI::setValue(&element_id, pJson["elementId"], "QString", "QString");
    
    ::OpenAPI::setValue(&microversion_id, pJson["microversionId"], "OAIBTMicroversionId-366", "OAIBTMicroversionId-366");
    
    ::OpenAPI::setValue(&microversion_id_and_configuration, pJson["microversionIdAndConfiguration"], "OAIBTMicroversionIdAndConfiguration-2338", "OAIBTMicroversionIdAndConfiguration-2338");
    
    ::OpenAPI::setValue(&target, pJson["target"], "OAIBTMicroversionIdAndConfiguration-2338", "OAIBTMicroversionIdAndConfiguration-2338");
    
}

QString
OAIBTFullElementId-756::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTFullElementId-756::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(m_configured_isSet){
        obj.insert("configured", QJsonValue(configured));
    }
    if(element_id != nullptr && *element_id != QString("")){
        toJsonValue(QString("elementId"), element_id, obj, QString("QString"));
    }
    if((microversion_id != nullptr) && (microversion_id->isSet())){
        toJsonValue(QString("microversionId"), microversion_id, obj, QString("OAIBTMicroversionId-366"));
    }
    if((microversion_id_and_configuration != nullptr) && (microversion_id_and_configuration->isSet())){
        toJsonValue(QString("microversionIdAndConfiguration"), microversion_id_and_configuration, obj, QString("OAIBTMicroversionIdAndConfiguration-2338"));
    }
    if((target != nullptr) && (target->isSet())){
        toJsonValue(QString("target"), target, obj, QString("OAIBTMicroversionIdAndConfiguration-2338"));
    }

    return obj;
}

QString*
OAIBTFullElementId-756::getBtType() {
    return bt_type;
}
void
OAIBTFullElementId-756::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

bool
OAIBTFullElementId-756::isConfigured() {
    return configured;
}
void
OAIBTFullElementId-756::setConfigured(bool configured) {
    this->configured = configured;
    this->m_configured_isSet = true;
}

QString*
OAIBTFullElementId-756::getElementId() {
    return element_id;
}
void
OAIBTFullElementId-756::setElementId(QString* element_id) {
    this->element_id = element_id;
    this->m_element_id_isSet = true;
}

OAIBTMicroversionId-366*
OAIBTFullElementId-756::getMicroversionId() {
    return microversion_id;
}
void
OAIBTFullElementId-756::setMicroversionId(OAIBTMicroversionId-366* microversion_id) {
    this->microversion_id = microversion_id;
    this->m_microversion_id_isSet = true;
}

OAIBTMicroversionIdAndConfiguration-2338*
OAIBTFullElementId-756::getMicroversionIdAndConfiguration() {
    return microversion_id_and_configuration;
}
void
OAIBTFullElementId-756::setMicroversionIdAndConfiguration(OAIBTMicroversionIdAndConfiguration-2338* microversion_id_and_configuration) {
    this->microversion_id_and_configuration = microversion_id_and_configuration;
    this->m_microversion_id_and_configuration_isSet = true;
}

OAIBTMicroversionIdAndConfiguration-2338*
OAIBTFullElementId-756::getTarget() {
    return target;
}
void
OAIBTFullElementId-756::setTarget(OAIBTMicroversionIdAndConfiguration-2338* target) {
    this->target = target;
    this->m_target_isSet = true;
}


bool
OAIBTFullElementId-756::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(m_configured_isSet){ isObjectUpdated = true; break;}
        if(element_id != nullptr && *element_id != QString("")){ isObjectUpdated = true; break;}
        if(microversion_id != nullptr && microversion_id->isSet()){ isObjectUpdated = true; break;}
        if(microversion_id_and_configuration != nullptr && microversion_id_and_configuration->isSet()){ isObjectUpdated = true; break;}
        if(target != nullptr && target->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

