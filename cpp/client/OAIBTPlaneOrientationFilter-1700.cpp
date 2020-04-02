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


#include "OAIBTPlaneOrientationFilter-1700.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTPlaneOrientationFilter-1700::OAIBTPlaneOrientationFilter-1700(QString json) {
    init();
    this->fromJson(json);
}

OAIBTPlaneOrientationFilter-1700::OAIBTPlaneOrientationFilter-1700() {
    init();
}

OAIBTPlaneOrientationFilter-1700::~OAIBTPlaneOrientationFilter-1700() {
    this->cleanup();
}

void
OAIBTPlaneOrientationFilter-1700::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    normal = new OAIBTVector3d-389();
    m_normal_isSet = false;
}

void
OAIBTPlaneOrientationFilter-1700::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(normal != nullptr) { 
        delete normal;
    }
}

OAIBTPlaneOrientationFilter-1700*
OAIBTPlaneOrientationFilter-1700::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTPlaneOrientationFilter-1700::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&normal, pJson["normal"], "OAIBTVector3d-389", "OAIBTVector3d-389");
    
}

QString
OAIBTPlaneOrientationFilter-1700::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTPlaneOrientationFilter-1700::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if((normal != nullptr) && (normal->isSet())){
        toJsonValue(QString("normal"), normal, obj, QString("OAIBTVector3d-389"));
    }

    return obj;
}

QString*
OAIBTPlaneOrientationFilter-1700::getBtType() {
    return bt_type;
}
void
OAIBTPlaneOrientationFilter-1700::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

OAIBTVector3d-389*
OAIBTPlaneOrientationFilter-1700::getNormal() {
    return normal;
}
void
OAIBTPlaneOrientationFilter-1700::setNormal(OAIBTVector3d-389* normal) {
    this->normal = normal;
    this->m_normal_isSet = true;
}


bool
OAIBTPlaneOrientationFilter-1700::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(normal != nullptr && normal->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

