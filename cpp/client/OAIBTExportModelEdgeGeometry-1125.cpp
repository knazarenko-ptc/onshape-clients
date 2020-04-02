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


#include "OAIBTExportModelEdgeGeometry-1125.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTExportModelEdgeGeometry-1125::OAIBTExportModelEdgeGeometry-1125(QString json) {
    init();
    this->fromJson(json);
}

OAIBTExportModelEdgeGeometry-1125::OAIBTExportModelEdgeGeometry-1125() {
    init();
}

OAIBTExportModelEdgeGeometry-1125::~OAIBTExportModelEdgeGeometry-1125() {
    this->cleanup();
}

void
OAIBTExportModelEdgeGeometry-1125::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    end_point = new OAIBTVector3d-389();
    m_end_point_isSet = false;
    end_vector = new OAIBTVector3d-389();
    m_end_vector_isSet = false;
    length = 0.0;
    m_length_isSet = false;
    mid_point = new OAIBTVector3d-389();
    m_mid_point_isSet = false;
    quarter_point = new OAIBTVector3d-389();
    m_quarter_point_isSet = false;
    start_point = new OAIBTVector3d-389();
    m_start_point_isSet = false;
    start_vector = new OAIBTVector3d-389();
    m_start_vector_isSet = false;
}

void
OAIBTExportModelEdgeGeometry-1125::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(end_point != nullptr) { 
        delete end_point;
    }
    if(end_vector != nullptr) { 
        delete end_vector;
    }

    if(mid_point != nullptr) { 
        delete mid_point;
    }
    if(quarter_point != nullptr) { 
        delete quarter_point;
    }
    if(start_point != nullptr) { 
        delete start_point;
    }
    if(start_vector != nullptr) { 
        delete start_vector;
    }
}

OAIBTExportModelEdgeGeometry-1125*
OAIBTExportModelEdgeGeometry-1125::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTExportModelEdgeGeometry-1125::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&end_point, pJson["endPoint"], "OAIBTVector3d-389", "OAIBTVector3d-389");
    
    ::OpenAPI::setValue(&end_vector, pJson["endVector"], "OAIBTVector3d-389", "OAIBTVector3d-389");
    
    ::OpenAPI::setValue(&length, pJson["length"], "double", "");
    
    ::OpenAPI::setValue(&mid_point, pJson["midPoint"], "OAIBTVector3d-389", "OAIBTVector3d-389");
    
    ::OpenAPI::setValue(&quarter_point, pJson["quarterPoint"], "OAIBTVector3d-389", "OAIBTVector3d-389");
    
    ::OpenAPI::setValue(&start_point, pJson["startPoint"], "OAIBTVector3d-389", "OAIBTVector3d-389");
    
    ::OpenAPI::setValue(&start_vector, pJson["startVector"], "OAIBTVector3d-389", "OAIBTVector3d-389");
    
}

QString
OAIBTExportModelEdgeGeometry-1125::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTExportModelEdgeGeometry-1125::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if((end_point != nullptr) && (end_point->isSet())){
        toJsonValue(QString("endPoint"), end_point, obj, QString("OAIBTVector3d-389"));
    }
    if((end_vector != nullptr) && (end_vector->isSet())){
        toJsonValue(QString("endVector"), end_vector, obj, QString("OAIBTVector3d-389"));
    }
    if(m_length_isSet){
        obj.insert("length", QJsonValue(length));
    }
    if((mid_point != nullptr) && (mid_point->isSet())){
        toJsonValue(QString("midPoint"), mid_point, obj, QString("OAIBTVector3d-389"));
    }
    if((quarter_point != nullptr) && (quarter_point->isSet())){
        toJsonValue(QString("quarterPoint"), quarter_point, obj, QString("OAIBTVector3d-389"));
    }
    if((start_point != nullptr) && (start_point->isSet())){
        toJsonValue(QString("startPoint"), start_point, obj, QString("OAIBTVector3d-389"));
    }
    if((start_vector != nullptr) && (start_vector->isSet())){
        toJsonValue(QString("startVector"), start_vector, obj, QString("OAIBTVector3d-389"));
    }

    return obj;
}

QString*
OAIBTExportModelEdgeGeometry-1125::getBtType() {
    return bt_type;
}
void
OAIBTExportModelEdgeGeometry-1125::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

OAIBTVector3d-389*
OAIBTExportModelEdgeGeometry-1125::getEndPoint() {
    return end_point;
}
void
OAIBTExportModelEdgeGeometry-1125::setEndPoint(OAIBTVector3d-389* end_point) {
    this->end_point = end_point;
    this->m_end_point_isSet = true;
}

OAIBTVector3d-389*
OAIBTExportModelEdgeGeometry-1125::getEndVector() {
    return end_vector;
}
void
OAIBTExportModelEdgeGeometry-1125::setEndVector(OAIBTVector3d-389* end_vector) {
    this->end_vector = end_vector;
    this->m_end_vector_isSet = true;
}

double
OAIBTExportModelEdgeGeometry-1125::getLength() {
    return length;
}
void
OAIBTExportModelEdgeGeometry-1125::setLength(double length) {
    this->length = length;
    this->m_length_isSet = true;
}

OAIBTVector3d-389*
OAIBTExportModelEdgeGeometry-1125::getMidPoint() {
    return mid_point;
}
void
OAIBTExportModelEdgeGeometry-1125::setMidPoint(OAIBTVector3d-389* mid_point) {
    this->mid_point = mid_point;
    this->m_mid_point_isSet = true;
}

OAIBTVector3d-389*
OAIBTExportModelEdgeGeometry-1125::getQuarterPoint() {
    return quarter_point;
}
void
OAIBTExportModelEdgeGeometry-1125::setQuarterPoint(OAIBTVector3d-389* quarter_point) {
    this->quarter_point = quarter_point;
    this->m_quarter_point_isSet = true;
}

OAIBTVector3d-389*
OAIBTExportModelEdgeGeometry-1125::getStartPoint() {
    return start_point;
}
void
OAIBTExportModelEdgeGeometry-1125::setStartPoint(OAIBTVector3d-389* start_point) {
    this->start_point = start_point;
    this->m_start_point_isSet = true;
}

OAIBTVector3d-389*
OAIBTExportModelEdgeGeometry-1125::getStartVector() {
    return start_vector;
}
void
OAIBTExportModelEdgeGeometry-1125::setStartVector(OAIBTVector3d-389* start_vector) {
    this->start_vector = start_vector;
    this->m_start_vector_isSet = true;
}


bool
OAIBTExportModelEdgeGeometry-1125::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(end_point != nullptr && end_point->isSet()){ isObjectUpdated = true; break;}
        if(end_vector != nullptr && end_vector->isSet()){ isObjectUpdated = true; break;}
        if(m_length_isSet){ isObjectUpdated = true; break;}
        if(mid_point != nullptr && mid_point->isSet()){ isObjectUpdated = true; break;}
        if(quarter_point != nullptr && quarter_point->isSet()){ isObjectUpdated = true; break;}
        if(start_point != nullptr && start_point->isSet()){ isObjectUpdated = true; break;}
        if(start_vector != nullptr && start_vector->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

