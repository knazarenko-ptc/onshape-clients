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


#include "OAIBTFSValueString-1422.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTFSValueString-1422::OAIBTFSValueString-1422(QString json) {
    init();
    this->fromJson(json);
}

OAIBTFSValueString-1422::OAIBTFSValueString-1422() {
    init();
}

OAIBTFSValueString-1422::~OAIBTFSValueString-1422() {
    this->cleanup();
}

void
OAIBTFSValueString-1422::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    configuration_value_string = new QString("");
    m_configuration_value_string_isSet = false;
    type_tag = new QString("");
    m_type_tag_isSet = false;
    value_object = new QString("");
    m_value_object_isSet = false;
    value = new QString("");
    m_value_isSet = false;
}

void
OAIBTFSValueString-1422::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(configuration_value_string != nullptr) { 
        delete configuration_value_string;
    }
    if(type_tag != nullptr) { 
        delete type_tag;
    }
    if(value_object != nullptr) { 
        delete value_object;
    }
    if(value != nullptr) { 
        delete value;
    }
}

OAIBTFSValueString-1422*
OAIBTFSValueString-1422::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTFSValueString-1422::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&configuration_value_string, pJson["configurationValueString"], "QString", "QString");
    
    ::OpenAPI::setValue(&type_tag, pJson["typeTag"], "QString", "QString");
    
    ::OpenAPI::setValue(&value_object, pJson["valueObject"], "QString", "QString");
    
    ::OpenAPI::setValue(&value, pJson["value"], "QString", "QString");
    
}

QString
OAIBTFSValueString-1422::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTFSValueString-1422::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(configuration_value_string != nullptr && *configuration_value_string != QString("")){
        toJsonValue(QString("configurationValueString"), configuration_value_string, obj, QString("QString"));
    }
    if(type_tag != nullptr && *type_tag != QString("")){
        toJsonValue(QString("typeTag"), type_tag, obj, QString("QString"));
    }
    if(value_object != nullptr && *value_object != QString("")){
        toJsonValue(QString("valueObject"), value_object, obj, QString("QString"));
    }
    if(value != nullptr && *value != QString("")){
        toJsonValue(QString("value"), value, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTFSValueString-1422::getBtType() {
    return bt_type;
}
void
OAIBTFSValueString-1422::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTFSValueString-1422::getConfigurationValueString() {
    return configuration_value_string;
}
void
OAIBTFSValueString-1422::setConfigurationValueString(QString* configuration_value_string) {
    this->configuration_value_string = configuration_value_string;
    this->m_configuration_value_string_isSet = true;
}

QString*
OAIBTFSValueString-1422::getTypeTag() {
    return type_tag;
}
void
OAIBTFSValueString-1422::setTypeTag(QString* type_tag) {
    this->type_tag = type_tag;
    this->m_type_tag_isSet = true;
}

QString*
OAIBTFSValueString-1422::getValueObject() {
    return value_object;
}
void
OAIBTFSValueString-1422::setValueObject(QString* value_object) {
    this->value_object = value_object;
    this->m_value_object_isSet = true;
}

QString*
OAIBTFSValueString-1422::getValue() {
    return value;
}
void
OAIBTFSValueString-1422::setValue(QString* value) {
    this->value = value;
    this->m_value_isSet = true;
}


bool
OAIBTFSValueString-1422::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(configuration_value_string != nullptr && *configuration_value_string != QString("")){ isObjectUpdated = true; break;}
        if(type_tag != nullptr && *type_tag != QString("")){ isObjectUpdated = true; break;}
        if(value_object != nullptr && *value_object != QString("")){ isObjectUpdated = true; break;}
        if(value != nullptr && *value != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

