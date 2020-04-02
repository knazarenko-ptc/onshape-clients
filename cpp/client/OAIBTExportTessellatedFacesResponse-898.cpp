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


#include "OAIBTExportTessellatedFacesResponse-898.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTExportTessellatedFacesResponse-898::OAIBTExportTessellatedFacesResponse-898(QString json) {
    init();
    this->fromJson(json);
}

OAIBTExportTessellatedFacesResponse-898::OAIBTExportTessellatedFacesResponse-898() {
    init();
}

OAIBTExportTessellatedFacesResponse-898::~OAIBTExportTessellatedFacesResponse-898() {
    this->cleanup();
}

void
OAIBTExportTessellatedFacesResponse-898::init() {
    bodies = new QList<OAIBTExportTessellatedBody-3398*>();
    m_bodies_isSet = false;
    error_enum = new QString("");
    m_error_enum_isSet = false;
    facet_points = new QList<OAIBTVector3d-389*>();
    m_facet_points_isSet = false;
}

void
OAIBTExportTessellatedFacesResponse-898::cleanup() {
    if(bodies != nullptr) { 
        auto arr = bodies;
        for(auto o: *arr) { 
            delete o;
        }
        delete bodies;
    }
    if(error_enum != nullptr) { 
        delete error_enum;
    }
    if(facet_points != nullptr) { 
        auto arr = facet_points;
        for(auto o: *arr) { 
            delete o;
        }
        delete facet_points;
    }
}

OAIBTExportTessellatedFacesResponse-898*
OAIBTExportTessellatedFacesResponse-898::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTExportTessellatedFacesResponse-898::fromJsonObject(QJsonObject pJson) {
    
    ::OpenAPI::setValue(&bodies, pJson["bodies"], "QList", "OAIBTExportTessellatedBody-3398");
    ::OpenAPI::setValue(&error_enum, pJson["errorEnum"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&facet_points, pJson["facetPoints"], "QList", "OAIBTVector3d-389");
}

QString
OAIBTExportTessellatedFacesResponse-898::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTExportTessellatedFacesResponse-898::asJsonObject() {
    QJsonObject obj;
    if(bodies->size() > 0){
        toJsonArray((QList<void*>*)bodies, obj, "bodies", "OAIBTExportTessellatedBody-3398");
    }
    if(error_enum != nullptr && *error_enum != QString("")){
        toJsonValue(QString("errorEnum"), error_enum, obj, QString("QString"));
    }
    if(facet_points->size() > 0){
        toJsonArray((QList<void*>*)facet_points, obj, "facetPoints", "OAIBTVector3d-389");
    }

    return obj;
}

QList<OAIBTExportTessellatedBody-3398*>*
OAIBTExportTessellatedFacesResponse-898::getBodies() {
    return bodies;
}
void
OAIBTExportTessellatedFacesResponse-898::setBodies(QList<OAIBTExportTessellatedBody-3398*>* bodies) {
    this->bodies = bodies;
    this->m_bodies_isSet = true;
}

QString*
OAIBTExportTessellatedFacesResponse-898::getErrorEnum() {
    return error_enum;
}
void
OAIBTExportTessellatedFacesResponse-898::setErrorEnum(QString* error_enum) {
    this->error_enum = error_enum;
    this->m_error_enum_isSet = true;
}

QList<OAIBTVector3d-389*>*
OAIBTExportTessellatedFacesResponse-898::getFacetPoints() {
    return facet_points;
}
void
OAIBTExportTessellatedFacesResponse-898::setFacetPoints(QList<OAIBTVector3d-389*>* facet_points) {
    this->facet_points = facet_points;
    this->m_facet_points_isSet = true;
}


bool
OAIBTExportTessellatedFacesResponse-898::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bodies->size() > 0){ isObjectUpdated = true; break;}
        if(error_enum != nullptr && *error_enum != QString("")){ isObjectUpdated = true; break;}
        if(facet_points->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

