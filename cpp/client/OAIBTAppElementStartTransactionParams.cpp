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


#include "OAIBTAppElementStartTransactionParams.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTAppElementStartTransactionParams::OAIBTAppElementStartTransactionParams(QString json) {
    init();
    this->fromJson(json);
}

OAIBTAppElementStartTransactionParams::OAIBTAppElementStartTransactionParams() {
    init();
}

OAIBTAppElementStartTransactionParams::~OAIBTAppElementStartTransactionParams() {
    this->cleanup();
}

void
OAIBTAppElementStartTransactionParams::init() {
    parent_change_id = new QString("");
    m_parent_change_id_isSet = false;
    return_error = false;
    m_return_error_isSet = false;
}

void
OAIBTAppElementStartTransactionParams::cleanup() {
    if(parent_change_id != nullptr) { 
        delete parent_change_id;
    }

}

OAIBTAppElementStartTransactionParams*
OAIBTAppElementStartTransactionParams::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTAppElementStartTransactionParams::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&parent_change_id, pJson["parentChangeId"], "QString", "QString");
    
    ::OpenAPI::setValue(&return_error, pJson["returnError"], "bool", "");
    
}

QString
OAIBTAppElementStartTransactionParams::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTAppElementStartTransactionParams::asJsonObject() {
    QJsonObject obj;
    if(parent_change_id != nullptr && *parent_change_id != QString("")){
        toJsonValue(QString("parentChangeId"), parent_change_id, obj, QString("QString"));
    }
    if(m_return_error_isSet){
        obj.insert("returnError", QJsonValue(return_error));
    }

    return obj;
}

QString*
OAIBTAppElementStartTransactionParams::getParentChangeId() {
    return parent_change_id;
}
void
OAIBTAppElementStartTransactionParams::setParentChangeId(QString* parent_change_id) {
    this->parent_change_id = parent_change_id;
    this->m_parent_change_id_isSet = true;
}

bool
OAIBTAppElementStartTransactionParams::isReturnError() {
    return return_error;
}
void
OAIBTAppElementStartTransactionParams::setReturnError(bool return_error) {
    this->return_error = return_error;
    this->m_return_error_isSet = true;
}


bool
OAIBTAppElementStartTransactionParams::isSet(){
    bool isObjectUpdated = false;
    do{
        if(parent_change_id != nullptr && *parent_change_id != QString("")){ isObjectUpdated = true; break;}
        if(m_return_error_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

