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


#include "OAIBTCurveGeometryConic-2284.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTCurveGeometryConic-2284::OAIBTCurveGeometryConic-2284(QString json) {
    init();
    this->fromJson(json);
}

OAIBTCurveGeometryConic-2284::OAIBTCurveGeometryConic-2284() {
    init();
}

OAIBTCurveGeometryConic-2284::~OAIBTCurveGeometryConic-2284() {
    this->cleanup();
}

void
OAIBTCurveGeometryConic-2284::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    points = new QList<double>();
    m_points_isSet = false;
    rho = 0.0;
    m_rho_isSet = false;
}

void
OAIBTCurveGeometryConic-2284::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }

    if(points != nullptr) { 
        delete points;
    }

}

OAIBTCurveGeometryConic-2284*
OAIBTCurveGeometryConic-2284::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTCurveGeometryConic-2284::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&points, pJson["points"], "QList", "double");
    ::OpenAPI::setValue(&rho, pJson["rho"], "double", "");
    
}

QString
OAIBTCurveGeometryConic-2284::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTCurveGeometryConic-2284::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(points->size() > 0){
        toJsonArray((QList<void*>*)points, obj, "points", "");
    }
    if(m_rho_isSet){
        obj.insert("rho", QJsonValue(rho));
    }

    return obj;
}

QString*
OAIBTCurveGeometryConic-2284::getBtType() {
    return bt_type;
}
void
OAIBTCurveGeometryConic-2284::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QList<double>*
OAIBTCurveGeometryConic-2284::getPoints() {
    return points;
}
void
OAIBTCurveGeometryConic-2284::setPoints(QList<double>* points) {
    this->points = points;
    this->m_points_isSet = true;
}

double
OAIBTCurveGeometryConic-2284::getRho() {
    return rho;
}
void
OAIBTCurveGeometryConic-2284::setRho(double rho) {
    this->rho = rho;
    this->m_rho_isSet = true;
}


bool
OAIBTCurveGeometryConic-2284::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(m_points_isSet){ isObjectUpdated = true; break;}
        if(points->size() > 0){ isObjectUpdated = true; break;}
        if(m_rho_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

