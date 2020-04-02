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


#include "OAIBTCurveGeometryLine-117.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTCurveGeometryLine-117::OAIBTCurveGeometryLine-117(QString json) {
    init();
    this->fromJson(json);
}

OAIBTCurveGeometryLine-117::OAIBTCurveGeometryLine-117() {
    init();
}

OAIBTCurveGeometryLine-117::~OAIBTCurveGeometryLine-117() {
    this->cleanup();
}

void
OAIBTCurveGeometryLine-117::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    pnt_x = 0.0;
    m_pnt_x_isSet = false;
    pnt_y = 0.0;
    m_pnt_y_isSet = false;
    dir_x = 0.0;
    m_dir_x_isSet = false;
    dir_y = 0.0;
    m_dir_y_isSet = false;
}

void
OAIBTCurveGeometryLine-117::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }




}

OAIBTCurveGeometryLine-117*
OAIBTCurveGeometryLine-117::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTCurveGeometryLine-117::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&pnt_x, pJson["pntX"], "double", "");
    
    ::OpenAPI::setValue(&pnt_y, pJson["pntY"], "double", "");
    
    ::OpenAPI::setValue(&dir_x, pJson["dirX"], "double", "");
    
    ::OpenAPI::setValue(&dir_y, pJson["dirY"], "double", "");
    
}

QString
OAIBTCurveGeometryLine-117::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTCurveGeometryLine-117::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(m_pnt_x_isSet){
        obj.insert("pntX", QJsonValue(pnt_x));
    }
    if(m_pnt_y_isSet){
        obj.insert("pntY", QJsonValue(pnt_y));
    }
    if(m_dir_x_isSet){
        obj.insert("dirX", QJsonValue(dir_x));
    }
    if(m_dir_y_isSet){
        obj.insert("dirY", QJsonValue(dir_y));
    }

    return obj;
}

QString*
OAIBTCurveGeometryLine-117::getBtType() {
    return bt_type;
}
void
OAIBTCurveGeometryLine-117::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

double
OAIBTCurveGeometryLine-117::getPntX() {
    return pnt_x;
}
void
OAIBTCurveGeometryLine-117::setPntX(double pnt_x) {
    this->pnt_x = pnt_x;
    this->m_pnt_x_isSet = true;
}

double
OAIBTCurveGeometryLine-117::getPntY() {
    return pnt_y;
}
void
OAIBTCurveGeometryLine-117::setPntY(double pnt_y) {
    this->pnt_y = pnt_y;
    this->m_pnt_y_isSet = true;
}

double
OAIBTCurveGeometryLine-117::getDirX() {
    return dir_x;
}
void
OAIBTCurveGeometryLine-117::setDirX(double dir_x) {
    this->dir_x = dir_x;
    this->m_dir_x_isSet = true;
}

double
OAIBTCurveGeometryLine-117::getDirY() {
    return dir_y;
}
void
OAIBTCurveGeometryLine-117::setDirY(double dir_y) {
    this->dir_y = dir_y;
    this->m_dir_y_isSet = true;
}


bool
OAIBTCurveGeometryLine-117::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(m_pnt_x_isSet){ isObjectUpdated = true; break;}
        if(m_pnt_y_isSet){ isObjectUpdated = true; break;}
        if(m_dir_x_isSet){ isObjectUpdated = true; break;}
        if(m_dir_y_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

