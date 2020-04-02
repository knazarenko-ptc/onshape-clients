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


#include "OAIBTParameterVisibilityAlwaysHidden-176.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTParameterVisibilityAlwaysHidden-176::OAIBTParameterVisibilityAlwaysHidden-176(QString json) {
    init();
    this->fromJson(json);
}

OAIBTParameterVisibilityAlwaysHidden-176::OAIBTParameterVisibilityAlwaysHidden-176() {
    init();
}

OAIBTParameterVisibilityAlwaysHidden-176::~OAIBTParameterVisibilityAlwaysHidden-176() {
    this->cleanup();
}

void
OAIBTParameterVisibilityAlwaysHidden-176::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
}

void
OAIBTParameterVisibilityAlwaysHidden-176::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
}

OAIBTParameterVisibilityAlwaysHidden-176*
OAIBTParameterVisibilityAlwaysHidden-176::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTParameterVisibilityAlwaysHidden-176::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
}

QString
OAIBTParameterVisibilityAlwaysHidden-176::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTParameterVisibilityAlwaysHidden-176::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTParameterVisibilityAlwaysHidden-176::getBtType() {
    return bt_type;
}
void
OAIBTParameterVisibilityAlwaysHidden-176::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}


bool
OAIBTParameterVisibilityAlwaysHidden-176::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

