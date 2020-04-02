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


#include "OAIBTCommonUnitInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTCommonUnitInfo::OAIBTCommonUnitInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIBTCommonUnitInfo::OAIBTCommonUnitInfo() {
    init();
}

OAIBTCommonUnitInfo::~OAIBTCommonUnitInfo() {
    this->cleanup();
}

void
OAIBTCommonUnitInfo::init() {
    abbreviation = new QString("");
    m_abbreviation_isSet = false;
    unit = new QString("");
    m_unit_isSet = false;
    unit_name = new QString("");
    m_unit_name_isSet = false;
    unit_type = new QString("");
    m_unit_type_isSet = false;
    value_in_base_units = 0.0;
    m_value_in_base_units_isSet = false;
}

void
OAIBTCommonUnitInfo::cleanup() {
    if(abbreviation != nullptr) { 
        delete abbreviation;
    }
    if(unit != nullptr) { 
        delete unit;
    }
    if(unit_name != nullptr) { 
        delete unit_name;
    }
    if(unit_type != nullptr) { 
        delete unit_type;
    }

}

OAIBTCommonUnitInfo*
OAIBTCommonUnitInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTCommonUnitInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&abbreviation, pJson["abbreviation"], "QString", "QString");
    
    ::OpenAPI::setValue(&unit, pJson["unit"], "QString", "QString");
    
    ::OpenAPI::setValue(&unit_name, pJson["unitName"], "QString", "QString");
    
    ::OpenAPI::setValue(&unit_type, pJson["unitType"], "QString", "QString");
    
    ::OpenAPI::setValue(&value_in_base_units, pJson["valueInBaseUnits"], "double", "");
    
}

QString
OAIBTCommonUnitInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTCommonUnitInfo::asJsonObject() {
    QJsonObject obj;
    if(abbreviation != nullptr && *abbreviation != QString("")){
        toJsonValue(QString("abbreviation"), abbreviation, obj, QString("QString"));
    }
    if(unit != nullptr && *unit != QString("")){
        toJsonValue(QString("unit"), unit, obj, QString("QString"));
    }
    if(unit_name != nullptr && *unit_name != QString("")){
        toJsonValue(QString("unitName"), unit_name, obj, QString("QString"));
    }
    if(unit_type != nullptr && *unit_type != QString("")){
        toJsonValue(QString("unitType"), unit_type, obj, QString("QString"));
    }
    if(m_value_in_base_units_isSet){
        obj.insert("valueInBaseUnits", QJsonValue(value_in_base_units));
    }

    return obj;
}

QString*
OAIBTCommonUnitInfo::getAbbreviation() {
    return abbreviation;
}
void
OAIBTCommonUnitInfo::setAbbreviation(QString* abbreviation) {
    this->abbreviation = abbreviation;
    this->m_abbreviation_isSet = true;
}

QString*
OAIBTCommonUnitInfo::getUnit() {
    return unit;
}
void
OAIBTCommonUnitInfo::setUnit(QString* unit) {
    this->unit = unit;
    this->m_unit_isSet = true;
}

QString*
OAIBTCommonUnitInfo::getUnitName() {
    return unit_name;
}
void
OAIBTCommonUnitInfo::setUnitName(QString* unit_name) {
    this->unit_name = unit_name;
    this->m_unit_name_isSet = true;
}

QString*
OAIBTCommonUnitInfo::getUnitType() {
    return unit_type;
}
void
OAIBTCommonUnitInfo::setUnitType(QString* unit_type) {
    this->unit_type = unit_type;
    this->m_unit_type_isSet = true;
}

double
OAIBTCommonUnitInfo::getValueInBaseUnits() {
    return value_in_base_units;
}
void
OAIBTCommonUnitInfo::setValueInBaseUnits(double value_in_base_units) {
    this->value_in_base_units = value_in_base_units;
    this->m_value_in_base_units_isSet = true;
}


bool
OAIBTCommonUnitInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(abbreviation != nullptr && *abbreviation != QString("")){ isObjectUpdated = true; break;}
        if(unit != nullptr && *unit != QString("")){ isObjectUpdated = true; break;}
        if(unit_name != nullptr && *unit_name != QString("")){ isObjectUpdated = true; break;}
        if(unit_type != nullptr && *unit_type != QString("")){ isObjectUpdated = true; break;}
        if(m_value_in_base_units_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

