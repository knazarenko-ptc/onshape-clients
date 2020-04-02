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


#include "OAIBTSMOtherJointTableRowMetadata-2640.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTSMOtherJointTableRowMetadata-2640::OAIBTSMOtherJointTableRowMetadata-2640(QString json) {
    init();
    this->fromJson(json);
}

OAIBTSMOtherJointTableRowMetadata-2640::OAIBTSMOtherJointTableRowMetadata-2640() {
    init();
}

OAIBTSMOtherJointTableRowMetadata-2640::~OAIBTSMOtherJointTableRowMetadata-2640() {
    this->cleanup();
}

void
OAIBTSMOtherJointTableRowMetadata-2640::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    cross_highlight_data_if_any = new OAIBTTableCrossHighlightData-1753();
    m_cross_highlight_data_if_any_isSet = false;
    cross_highlight_data = new OAIBTTableCrossHighlightData-1753();
    m_cross_highlight_data_isSet = false;
}

void
OAIBTSMOtherJointTableRowMetadata-2640::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(cross_highlight_data_if_any != nullptr) { 
        delete cross_highlight_data_if_any;
    }
    if(cross_highlight_data != nullptr) { 
        delete cross_highlight_data;
    }
}

OAIBTSMOtherJointTableRowMetadata-2640*
OAIBTSMOtherJointTableRowMetadata-2640::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTSMOtherJointTableRowMetadata-2640::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&cross_highlight_data_if_any, pJson["crossHighlightDataIfAny"], "OAIBTTableCrossHighlightData-1753", "OAIBTTableCrossHighlightData-1753");
    
    ::OpenAPI::setValue(&cross_highlight_data, pJson["crossHighlightData"], "OAIBTTableCrossHighlightData-1753", "OAIBTTableCrossHighlightData-1753");
    
}

QString
OAIBTSMOtherJointTableRowMetadata-2640::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTSMOtherJointTableRowMetadata-2640::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if((cross_highlight_data_if_any != nullptr) && (cross_highlight_data_if_any->isSet())){
        toJsonValue(QString("crossHighlightDataIfAny"), cross_highlight_data_if_any, obj, QString("OAIBTTableCrossHighlightData-1753"));
    }
    if((cross_highlight_data != nullptr) && (cross_highlight_data->isSet())){
        toJsonValue(QString("crossHighlightData"), cross_highlight_data, obj, QString("OAIBTTableCrossHighlightData-1753"));
    }

    return obj;
}

QString*
OAIBTSMOtherJointTableRowMetadata-2640::getBtType() {
    return bt_type;
}
void
OAIBTSMOtherJointTableRowMetadata-2640::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

OAIBTTableCrossHighlightData-1753*
OAIBTSMOtherJointTableRowMetadata-2640::getCrossHighlightDataIfAny() {
    return cross_highlight_data_if_any;
}
void
OAIBTSMOtherJointTableRowMetadata-2640::setCrossHighlightDataIfAny(OAIBTTableCrossHighlightData-1753* cross_highlight_data_if_any) {
    this->cross_highlight_data_if_any = cross_highlight_data_if_any;
    this->m_cross_highlight_data_if_any_isSet = true;
}

OAIBTTableCrossHighlightData-1753*
OAIBTSMOtherJointTableRowMetadata-2640::getCrossHighlightData() {
    return cross_highlight_data;
}
void
OAIBTSMOtherJointTableRowMetadata-2640::setCrossHighlightData(OAIBTTableCrossHighlightData-1753* cross_highlight_data) {
    this->cross_highlight_data = cross_highlight_data;
    this->m_cross_highlight_data_isSet = true;
}


bool
OAIBTSMOtherJointTableRowMetadata-2640::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(cross_highlight_data_if_any != nullptr && cross_highlight_data_if_any->isSet()){ isObjectUpdated = true; break;}
        if(cross_highlight_data != nullptr && cross_highlight_data->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

