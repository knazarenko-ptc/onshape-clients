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


#include "OAIBTExportModelEdge-1782.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTExportModelEdge-1782::OAIBTExportModelEdge-1782(QString json) {
    init();
    this->fromJson(json);
}

OAIBTExportModelEdge-1782::OAIBTExportModelEdge-1782() {
    init();
}

OAIBTExportModelEdge-1782::~OAIBTExportModelEdge-1782() {
    this->cleanup();
}

void
OAIBTExportModelEdge-1782::init() {
    curve = new OAIBTCurveDescription-1583();
    m_curve_isSet = false;
    geometry = new OAIBTExportModelEdgeGeometry-1125();
    m_geometry_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    vertices = new QList<QString*>();
    m_vertices_isSet = false;
}

void
OAIBTExportModelEdge-1782::cleanup() {
    if(curve != nullptr) { 
        delete curve;
    }
    if(geometry != nullptr) { 
        delete geometry;
    }
    if(id != nullptr) { 
        delete id;
    }
    if(vertices != nullptr) { 
        auto arr = vertices;
        for(auto o: *arr) { 
            delete o;
        }
        delete vertices;
    }
}

OAIBTExportModelEdge-1782*
OAIBTExportModelEdge-1782::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTExportModelEdge-1782::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&curve, pJson["curve"], "OAIBTCurveDescription-1583", "OAIBTCurveDescription-1583");
    
    ::OpenAPI::setValue(&geometry, pJson["geometry"], "OAIBTExportModelEdgeGeometry-1125", "OAIBTExportModelEdgeGeometry-1125");
    
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&vertices, pJson["vertices"], "QList", "QString");
}

QString
OAIBTExportModelEdge-1782::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTExportModelEdge-1782::asJsonObject() {
    QJsonObject obj;
    if((curve != nullptr) && (curve->isSet())){
        toJsonValue(QString("curve"), curve, obj, QString("OAIBTCurveDescription-1583"));
    }
    if((geometry != nullptr) && (geometry->isSet())){
        toJsonValue(QString("geometry"), geometry, obj, QString("OAIBTExportModelEdgeGeometry-1125"));
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(vertices->size() > 0){
        toJsonArray((QList<void*>*)vertices, obj, "vertices", "QString");
    }

    return obj;
}

OAIBTCurveDescription-1583*
OAIBTExportModelEdge-1782::getCurve() {
    return curve;
}
void
OAIBTExportModelEdge-1782::setCurve(OAIBTCurveDescription-1583* curve) {
    this->curve = curve;
    this->m_curve_isSet = true;
}

OAIBTExportModelEdgeGeometry-1125*
OAIBTExportModelEdge-1782::getGeometry() {
    return geometry;
}
void
OAIBTExportModelEdge-1782::setGeometry(OAIBTExportModelEdgeGeometry-1125* geometry) {
    this->geometry = geometry;
    this->m_geometry_isSet = true;
}

QString*
OAIBTExportModelEdge-1782::getId() {
    return id;
}
void
OAIBTExportModelEdge-1782::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

QList<QString*>*
OAIBTExportModelEdge-1782::getVertices() {
    return vertices;
}
void
OAIBTExportModelEdge-1782::setVertices(QList<QString*>* vertices) {
    this->vertices = vertices;
    this->m_vertices_isSet = true;
}


bool
OAIBTExportModelEdge-1782::isSet(){
    bool isObjectUpdated = false;
    do{
        if(curve != nullptr && curve->isSet()){ isObjectUpdated = true; break;}
        if(geometry != nullptr && geometry->isSet()){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(vertices->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

