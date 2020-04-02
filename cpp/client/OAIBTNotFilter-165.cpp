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


#include "OAIBTNotFilter-165.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTNotFilter-165::OAIBTNotFilter-165(QString json) {
    init();
    this->fromJson(json);
}

OAIBTNotFilter-165::OAIBTNotFilter-165() {
    init();
}

OAIBTNotFilter-165::~OAIBTNotFilter-165() {
    this->cleanup();
}

void
OAIBTNotFilter-165::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    operand = new OAIBTQueryFilter-183();
    m_operand_isSet = false;
}

void
OAIBTNotFilter-165::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(operand != nullptr) { 
        delete operand;
    }
}

OAIBTNotFilter-165*
OAIBTNotFilter-165::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTNotFilter-165::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&operand, pJson["operand"], "OAIBTQueryFilter-183", "OAIBTQueryFilter-183");
    
}

QString
OAIBTNotFilter-165::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTNotFilter-165::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if((operand != nullptr) && (operand->isSet())){
        toJsonValue(QString("operand"), operand, obj, QString("OAIBTQueryFilter-183"));
    }

    return obj;
}

QString*
OAIBTNotFilter-165::getBtType() {
    return bt_type;
}
void
OAIBTNotFilter-165::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

OAIBTQueryFilter-183*
OAIBTNotFilter-165::getOperand() {
    return operand;
}
void
OAIBTNotFilter-165::setOperand(OAIBTQueryFilter-183* operand) {
    this->operand = operand;
    this->m_operand_isSet = true;
}


bool
OAIBTNotFilter-165::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(operand != nullptr && operand->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

