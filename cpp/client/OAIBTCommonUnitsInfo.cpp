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


#include "OAIBTCommonUnitsInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTCommonUnitsInfo::OAIBTCommonUnitsInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIBTCommonUnitsInfo::OAIBTCommonUnitsInfo() {
    init();
}

OAIBTCommonUnitsInfo::~OAIBTCommonUnitsInfo() {
    this->cleanup();
}

void
OAIBTCommonUnitsInfo::init() {
    units = new QList<OAIBTCommonUnitInfo*>();
    m_units_isSet = false;
}

void
OAIBTCommonUnitsInfo::cleanup() {
    if(units != nullptr) { 
        auto arr = units;
        for(auto o: *arr) { 
            delete o;
        }
        delete units;
    }
}

OAIBTCommonUnitsInfo*
OAIBTCommonUnitsInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTCommonUnitsInfo::fromJsonObject(QJsonObject pJson) {
    
    ::OpenAPI::setValue(&units, pJson["units"], "QList", "OAIBTCommonUnitInfo");
}

QString
OAIBTCommonUnitsInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTCommonUnitsInfo::asJsonObject() {
    QJsonObject obj;
    if(units->size() > 0){
        toJsonArray((QList<void*>*)units, obj, "units", "OAIBTCommonUnitInfo");
    }

    return obj;
}

QList<OAIBTCommonUnitInfo*>*
OAIBTCommonUnitsInfo::getUnits() {
    return units;
}
void
OAIBTCommonUnitsInfo::setUnits(QList<OAIBTCommonUnitInfo*>* units) {
    this->units = units;
    this->m_units_isSet = true;
}


bool
OAIBTCommonUnitsInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(units->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

