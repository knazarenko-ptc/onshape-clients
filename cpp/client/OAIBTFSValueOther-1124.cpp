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


#include "OAIBTFSValueOther-1124.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTFSValueOther-1124::OAIBTFSValueOther-1124(QString json) {
    init();
    this->fromJson(json);
}

OAIBTFSValueOther-1124::OAIBTFSValueOther-1124() {
    init();
}

OAIBTFSValueOther-1124::~OAIBTFSValueOther-1124() {
    this->cleanup();
}

void
OAIBTFSValueOther-1124::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    configuration_value_string = new QString("");
    m_configuration_value_string_isSet = false;
    type_tag = new QString("");
    m_type_tag_isSet = false;
    value_object = NULL;
    m_value_object_isSet = false;
    type = new QString("");
    m_type_isSet = false;
}

void
OAIBTFSValueOther-1124::cleanup() {
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
    if(type != nullptr) { 
        delete type;
    }
}

OAIBTFSValueOther-1124*
OAIBTFSValueOther-1124::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTFSValueOther-1124::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&configuration_value_string, pJson["configurationValueString"], "QString", "QString");
    
    ::OpenAPI::setValue(&type_tag, pJson["typeTag"], "QString", "QString");
    
    ::OpenAPI::setValue(&value_object, pJson["valueObject"], "OAIObject", "OAIObject");
    
    ::OpenAPI::setValue(&type, pJson["type"], "QString", "QString");
    
}

QString
OAIBTFSValueOther-1124::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTFSValueOther-1124::asJsonObject() {
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
    if((value_object != nullptr) && (value_object->isSet())){
        toJsonValue(QString("valueObject"), value_object, obj, QString("OAIObject"));
    }
    if(type != nullptr && *type != QString("")){
        toJsonValue(QString("type"), type, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTFSValueOther-1124::getBtType() {
    return bt_type;
}
void
OAIBTFSValueOther-1124::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTFSValueOther-1124::getConfigurationValueString() {
    return configuration_value_string;
}
void
OAIBTFSValueOther-1124::setConfigurationValueString(QString* configuration_value_string) {
    this->configuration_value_string = configuration_value_string;
    this->m_configuration_value_string_isSet = true;
}

QString*
OAIBTFSValueOther-1124::getTypeTag() {
    return type_tag;
}
void
OAIBTFSValueOther-1124::setTypeTag(QString* type_tag) {
    this->type_tag = type_tag;
    this->m_type_tag_isSet = true;
}

OAIObject*
OAIBTFSValueOther-1124::getValueObject() {
    return value_object;
}
void
OAIBTFSValueOther-1124::setValueObject(OAIObject* value_object) {
    this->value_object = value_object;
    this->m_value_object_isSet = true;
}

QString*
OAIBTFSValueOther-1124::getType() {
    return type;
}
void
OAIBTFSValueOther-1124::setType(QString* type) {
    this->type = type;
    this->m_type_isSet = true;
}


bool
OAIBTFSValueOther-1124::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(configuration_value_string != nullptr && *configuration_value_string != QString("")){ isObjectUpdated = true; break;}
        if(type_tag != nullptr && *type_tag != QString("")){ isObjectUpdated = true; break;}
        if(value_object != nullptr && value_object->isSet()){ isObjectUpdated = true; break;}
        if(type != nullptr && *type != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

