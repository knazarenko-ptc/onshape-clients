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


#include "OAIBTCurveGeometrySpline-118.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTCurveGeometrySpline-118::OAIBTCurveGeometrySpline-118(QString json) {
    init();
    this->fromJson(json);
}

OAIBTCurveGeometrySpline-118::OAIBTCurveGeometrySpline-118() {
    init();
}

OAIBTCurveGeometrySpline-118::~OAIBTCurveGeometrySpline-118() {
    this->cleanup();
}

void
OAIBTCurveGeometrySpline-118::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    degree = 0;
    m_degree_isSet = false;
    is_periodic = false;
    m_is_periodic_isSet = false;
    is_rational = false;
    m_is_rational_isSet = false;
    control_point_count = 0;
    m_control_point_count_isSet = false;
    control_points = new QList<double>();
    m_control_points_isSet = false;
    knots = new QList<double>();
    m_knots_isSet = false;
}

void
OAIBTCurveGeometrySpline-118::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }





    if(control_points != nullptr) { 
        delete control_points;
    }

    if(knots != nullptr) { 
        delete knots;
    }
}

OAIBTCurveGeometrySpline-118*
OAIBTCurveGeometrySpline-118::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTCurveGeometrySpline-118::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&degree, pJson["degree"], "qint32", "");
    
    ::OpenAPI::setValue(&is_periodic, pJson["isPeriodic"], "bool", "");
    
    ::OpenAPI::setValue(&is_rational, pJson["isRational"], "bool", "");
    
    ::OpenAPI::setValue(&control_point_count, pJson["controlPointCount"], "qint32", "");
    
    
    ::OpenAPI::setValue(&control_points, pJson["controlPoints"], "QList", "double");
    
    ::OpenAPI::setValue(&knots, pJson["knots"], "QList", "double");
}

QString
OAIBTCurveGeometrySpline-118::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTCurveGeometrySpline-118::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(m_degree_isSet){
        obj.insert("degree", QJsonValue(degree));
    }
    if(m_is_periodic_isSet){
        obj.insert("isPeriodic", QJsonValue(is_periodic));
    }
    if(m_is_rational_isSet){
        obj.insert("isRational", QJsonValue(is_rational));
    }
    if(m_control_point_count_isSet){
        obj.insert("controlPointCount", QJsonValue(control_point_count));
    }
    if(control_points->size() > 0){
        toJsonArray((QList<void*>*)control_points, obj, "controlPoints", "");
    }
    if(knots->size() > 0){
        toJsonArray((QList<void*>*)knots, obj, "knots", "");
    }

    return obj;
}

QString*
OAIBTCurveGeometrySpline-118::getBtType() {
    return bt_type;
}
void
OAIBTCurveGeometrySpline-118::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

qint32
OAIBTCurveGeometrySpline-118::getDegree() {
    return degree;
}
void
OAIBTCurveGeometrySpline-118::setDegree(qint32 degree) {
    this->degree = degree;
    this->m_degree_isSet = true;
}

bool
OAIBTCurveGeometrySpline-118::isIsPeriodic() {
    return is_periodic;
}
void
OAIBTCurveGeometrySpline-118::setIsPeriodic(bool is_periodic) {
    this->is_periodic = is_periodic;
    this->m_is_periodic_isSet = true;
}

bool
OAIBTCurveGeometrySpline-118::isIsRational() {
    return is_rational;
}
void
OAIBTCurveGeometrySpline-118::setIsRational(bool is_rational) {
    this->is_rational = is_rational;
    this->m_is_rational_isSet = true;
}

qint32
OAIBTCurveGeometrySpline-118::getControlPointCount() {
    return control_point_count;
}
void
OAIBTCurveGeometrySpline-118::setControlPointCount(qint32 control_point_count) {
    this->control_point_count = control_point_count;
    this->m_control_point_count_isSet = true;
}

QList<double>*
OAIBTCurveGeometrySpline-118::getControlPoints() {
    return control_points;
}
void
OAIBTCurveGeometrySpline-118::setControlPoints(QList<double>* control_points) {
    this->control_points = control_points;
    this->m_control_points_isSet = true;
}

QList<double>*
OAIBTCurveGeometrySpline-118::getKnots() {
    return knots;
}
void
OAIBTCurveGeometrySpline-118::setKnots(QList<double>* knots) {
    this->knots = knots;
    this->m_knots_isSet = true;
}


bool
OAIBTCurveGeometrySpline-118::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(m_degree_isSet){ isObjectUpdated = true; break;}
        if(m_is_periodic_isSet){ isObjectUpdated = true; break;}
        if(m_is_rational_isSet){ isObjectUpdated = true; break;}
        if(m_control_point_count_isSet){ isObjectUpdated = true; break;}
        if(m_control_points_isSet){ isObjectUpdated = true; break;}
        if(control_points->size() > 0){ isObjectUpdated = true; break;}
        if(m_knots_isSet){ isObjectUpdated = true; break;}
        if(knots->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

