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


#include "OAIBTAppElementBasicInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTAppElementBasicInfo::OAIBTAppElementBasicInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIBTAppElementBasicInfo::OAIBTAppElementBasicInfo() {
    init();
}

OAIBTAppElementBasicInfo::~OAIBTAppElementBasicInfo() {
    this->cleanup();
}

void
OAIBTAppElementBasicInfo::init() {
    change_id = new QString("");
    m_change_id_isSet = false;
    error_code = 0;
    m_error_code_isSet = false;
    error_description = new QString("");
    m_error_description_isSet = false;
    error_value = new QString("");
    m_error_value_isSet = false;
    parent_change_id = new QString("");
    m_parent_change_id_isSet = false;
}

void
OAIBTAppElementBasicInfo::cleanup() {
    if(change_id != nullptr) { 
        delete change_id;
    }

    if(error_description != nullptr) { 
        delete error_description;
    }
    if(error_value != nullptr) { 
        delete error_value;
    }
    if(parent_change_id != nullptr) { 
        delete parent_change_id;
    }
}

OAIBTAppElementBasicInfo*
OAIBTAppElementBasicInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTAppElementBasicInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&change_id, pJson["changeId"], "QString", "QString");
    
    ::OpenAPI::setValue(&error_code, pJson["errorCode"], "qint32", "");
    
    ::OpenAPI::setValue(&error_description, pJson["errorDescription"], "QString", "QString");
    
    ::OpenAPI::setValue(&error_value, pJson["errorValue"], "QString", "QString");
    
    ::OpenAPI::setValue(&parent_change_id, pJson["parentChangeId"], "QString", "QString");
    
}

QString
OAIBTAppElementBasicInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTAppElementBasicInfo::asJsonObject() {
    QJsonObject obj;
    if(change_id != nullptr && *change_id != QString("")){
        toJsonValue(QString("changeId"), change_id, obj, QString("QString"));
    }
    if(m_error_code_isSet){
        obj.insert("errorCode", QJsonValue(error_code));
    }
    if(error_description != nullptr && *error_description != QString("")){
        toJsonValue(QString("errorDescription"), error_description, obj, QString("QString"));
    }
    if(error_value != nullptr && *error_value != QString("")){
        toJsonValue(QString("errorValue"), error_value, obj, QString("QString"));
    }
    if(parent_change_id != nullptr && *parent_change_id != QString("")){
        toJsonValue(QString("parentChangeId"), parent_change_id, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTAppElementBasicInfo::getChangeId() {
    return change_id;
}
void
OAIBTAppElementBasicInfo::setChangeId(QString* change_id) {
    this->change_id = change_id;
    this->m_change_id_isSet = true;
}

qint32
OAIBTAppElementBasicInfo::getErrorCode() {
    return error_code;
}
void
OAIBTAppElementBasicInfo::setErrorCode(qint32 error_code) {
    this->error_code = error_code;
    this->m_error_code_isSet = true;
}

QString*
OAIBTAppElementBasicInfo::getErrorDescription() {
    return error_description;
}
void
OAIBTAppElementBasicInfo::setErrorDescription(QString* error_description) {
    this->error_description = error_description;
    this->m_error_description_isSet = true;
}

QString*
OAIBTAppElementBasicInfo::getErrorValue() {
    return error_value;
}
void
OAIBTAppElementBasicInfo::setErrorValue(QString* error_value) {
    this->error_value = error_value;
    this->m_error_value_isSet = true;
}

QString*
OAIBTAppElementBasicInfo::getParentChangeId() {
    return parent_change_id;
}
void
OAIBTAppElementBasicInfo::setParentChangeId(QString* parent_change_id) {
    this->parent_change_id = parent_change_id;
    this->m_parent_change_id_isSet = true;
}


bool
OAIBTAppElementBasicInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(change_id != nullptr && *change_id != QString("")){ isObjectUpdated = true; break;}
        if(m_error_code_isSet){ isObjectUpdated = true; break;}
        if(error_description != nullptr && *error_description != QString("")){ isObjectUpdated = true; break;}
        if(error_value != nullptr && *error_value != QString("")){ isObjectUpdated = true; break;}
        if(parent_change_id != nullptr && *parent_change_id != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

