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


#include "OAIBTBodyTypeFilter-112.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTBodyTypeFilter-112::OAIBTBodyTypeFilter-112(QString json) {
    init();
    this->fromJson(json);
}

OAIBTBodyTypeFilter-112::OAIBTBodyTypeFilter-112() {
    init();
}

OAIBTBodyTypeFilter-112::~OAIBTBodyTypeFilter-112() {
    this->cleanup();
}

void
OAIBTBodyTypeFilter-112::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    body_type = new QString("");
    m_body_type_isSet = false;
}

void
OAIBTBodyTypeFilter-112::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(body_type != nullptr) { 
        delete body_type;
    }
}

OAIBTBodyTypeFilter-112*
OAIBTBodyTypeFilter-112::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTBodyTypeFilter-112::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&body_type, pJson["bodyType"], "QString", "QString");
    
}

QString
OAIBTBodyTypeFilter-112::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTBodyTypeFilter-112::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(body_type != nullptr && *body_type != QString("")){
        toJsonValue(QString("bodyType"), body_type, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTBodyTypeFilter-112::getBtType() {
    return bt_type;
}
void
OAIBTBodyTypeFilter-112::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTBodyTypeFilter-112::getBodyType() {
    return body_type;
}
void
OAIBTBodyTypeFilter-112::setBodyType(QString* body_type) {
    this->body_type = body_type;
    this->m_body_type_isSet = true;
}


bool
OAIBTBodyTypeFilter-112::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(body_type != nullptr && *body_type != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

