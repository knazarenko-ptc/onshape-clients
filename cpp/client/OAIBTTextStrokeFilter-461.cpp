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


#include "OAIBTTextStrokeFilter-461.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTTextStrokeFilter-461::OAIBTTextStrokeFilter-461(QString json) {
    init();
    this->fromJson(json);
}

OAIBTTextStrokeFilter-461::OAIBTTextStrokeFilter-461() {
    init();
}

OAIBTTextStrokeFilter-461::~OAIBTTextStrokeFilter-461() {
    this->cleanup();
}

void
OAIBTTextStrokeFilter-461::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    is_stroke = false;
    m_is_stroke_isSet = false;
}

void
OAIBTTextStrokeFilter-461::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }

}

OAIBTTextStrokeFilter-461*
OAIBTTextStrokeFilter-461::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTTextStrokeFilter-461::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&is_stroke, pJson["isStroke"], "bool", "");
    
}

QString
OAIBTTextStrokeFilter-461::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTTextStrokeFilter-461::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(m_is_stroke_isSet){
        obj.insert("isStroke", QJsonValue(is_stroke));
    }

    return obj;
}

QString*
OAIBTTextStrokeFilter-461::getBtType() {
    return bt_type;
}
void
OAIBTTextStrokeFilter-461::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

bool
OAIBTTextStrokeFilter-461::isIsStroke() {
    return is_stroke;
}
void
OAIBTTextStrokeFilter-461::setIsStroke(bool is_stroke) {
    this->is_stroke = is_stroke;
    this->m_is_stroke_isSet = true;
}


bool
OAIBTTextStrokeFilter-461::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(m_is_stroke_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

