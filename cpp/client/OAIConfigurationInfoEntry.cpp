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


#include "OAIConfigurationInfoEntry.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIConfigurationInfoEntry::OAIConfigurationInfoEntry(QString json) {
    init();
    this->fromJson(json);
}

OAIConfigurationInfoEntry::OAIConfigurationInfoEntry() {
    init();
}

OAIConfigurationInfoEntry::~OAIConfigurationInfoEntry() {
    this->cleanup();
}

void
OAIConfigurationInfoEntry::init() {
    _explicit = false;
    m__explicit_isSet = false;
    parameter_display_value = new QString("");
    m_parameter_display_value_isSet = false;
    parameter_id = new QString("");
    m_parameter_id_isSet = false;
    parameter_name = new QString("");
    m_parameter_name_isSet = false;
    parameter_value = new QString("");
    m_parameter_value_isSet = false;
}

void
OAIConfigurationInfoEntry::cleanup() {

    if(parameter_display_value != nullptr) { 
        delete parameter_display_value;
    }
    if(parameter_id != nullptr) { 
        delete parameter_id;
    }
    if(parameter_name != nullptr) { 
        delete parameter_name;
    }
    if(parameter_value != nullptr) { 
        delete parameter_value;
    }
}

OAIConfigurationInfoEntry*
OAIConfigurationInfoEntry::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIConfigurationInfoEntry::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_explicit, pJson["explicit"], "bool", "");
    
    ::OpenAPI::setValue(&parameter_display_value, pJson["parameterDisplayValue"], "QString", "QString");
    
    ::OpenAPI::setValue(&parameter_id, pJson["parameterId"], "QString", "QString");
    
    ::OpenAPI::setValue(&parameter_name, pJson["parameterName"], "QString", "QString");
    
    ::OpenAPI::setValue(&parameter_value, pJson["parameterValue"], "QString", "QString");
    
}

QString
OAIConfigurationInfoEntry::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIConfigurationInfoEntry::asJsonObject() {
    QJsonObject obj;
    if(m__explicit_isSet){
        obj.insert("explicit", QJsonValue(_explicit));
    }
    if(parameter_display_value != nullptr && *parameter_display_value != QString("")){
        toJsonValue(QString("parameterDisplayValue"), parameter_display_value, obj, QString("QString"));
    }
    if(parameter_id != nullptr && *parameter_id != QString("")){
        toJsonValue(QString("parameterId"), parameter_id, obj, QString("QString"));
    }
    if(parameter_name != nullptr && *parameter_name != QString("")){
        toJsonValue(QString("parameterName"), parameter_name, obj, QString("QString"));
    }
    if(parameter_value != nullptr && *parameter_value != QString("")){
        toJsonValue(QString("parameterValue"), parameter_value, obj, QString("QString"));
    }

    return obj;
}

bool
OAIConfigurationInfoEntry::isExplicit() {
    return _explicit;
}
void
OAIConfigurationInfoEntry::setExplicit(bool _explicit) {
    this->_explicit = _explicit;
    this->m__explicit_isSet = true;
}

QString*
OAIConfigurationInfoEntry::getParameterDisplayValue() {
    return parameter_display_value;
}
void
OAIConfigurationInfoEntry::setParameterDisplayValue(QString* parameter_display_value) {
    this->parameter_display_value = parameter_display_value;
    this->m_parameter_display_value_isSet = true;
}

QString*
OAIConfigurationInfoEntry::getParameterId() {
    return parameter_id;
}
void
OAIConfigurationInfoEntry::setParameterId(QString* parameter_id) {
    this->parameter_id = parameter_id;
    this->m_parameter_id_isSet = true;
}

QString*
OAIConfigurationInfoEntry::getParameterName() {
    return parameter_name;
}
void
OAIConfigurationInfoEntry::setParameterName(QString* parameter_name) {
    this->parameter_name = parameter_name;
    this->m_parameter_name_isSet = true;
}

QString*
OAIConfigurationInfoEntry::getParameterValue() {
    return parameter_value;
}
void
OAIConfigurationInfoEntry::setParameterValue(QString* parameter_value) {
    this->parameter_value = parameter_value;
    this->m_parameter_value_isSet = true;
}


bool
OAIConfigurationInfoEntry::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m__explicit_isSet){ isObjectUpdated = true; break;}
        if(parameter_display_value != nullptr && *parameter_display_value != QString("")){ isObjectUpdated = true; break;}
        if(parameter_id != nullptr && *parameter_id != QString("")){ isObjectUpdated = true; break;}
        if(parameter_name != nullptr && *parameter_name != QString("")){ isObjectUpdated = true; break;}
        if(parameter_value != nullptr && *parameter_value != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

