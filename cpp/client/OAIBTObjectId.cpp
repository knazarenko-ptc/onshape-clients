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


#include "OAIBTObjectId.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTObjectId::OAIBTObjectId(QString json) {
    init();
    this->fromJson(json);
}

OAIBTObjectId::OAIBTObjectId() {
    init();
}

OAIBTObjectId::~OAIBTObjectId() {
    this->cleanup();
}

void
OAIBTObjectId::init() {
    empty = false;
    m_empty_isSet = false;
}

void
OAIBTObjectId::cleanup() {

}

OAIBTObjectId*
OAIBTObjectId::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTObjectId::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&empty, pJson["empty"], "bool", "");
    
}

QString
OAIBTObjectId::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTObjectId::asJsonObject() {
    QJsonObject obj;
    if(m_empty_isSet){
        obj.insert("empty", QJsonValue(empty));
    }

    return obj;
}

bool
OAIBTObjectId::isEmpty() {
    return empty;
}
void
OAIBTObjectId::setEmpty(bool empty) {
    this->empty = empty;
    this->m_empty_isSet = true;
}


bool
OAIBTObjectId::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_empty_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

