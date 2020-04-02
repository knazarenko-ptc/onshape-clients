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


#include "OAIBTExportTessellatedFacesBody-1321.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTExportTessellatedFacesBody-1321::OAIBTExportTessellatedFacesBody-1321(QString json) {
    init();
    this->fromJson(json);
}

OAIBTExportTessellatedFacesBody-1321::OAIBTExportTessellatedFacesBody-1321() {
    init();
}

OAIBTExportTessellatedFacesBody-1321::~OAIBTExportTessellatedFacesBody-1321() {
    this->cleanup();
}

void
OAIBTExportTessellatedFacesBody-1321::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    constituents = new QList<QString*>();
    m_constituents_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    body_type = new QString("");
    m_body_type_isSet = false;
    appearance = new OAIBTGraphicsAppearance-1152();
    m_appearance_isSet = false;
    faces = new QList<OAIBTExportTessellatedFacesFace-1192*>();
    m_faces_isSet = false;
    facet_points = new QList<OAIBTVector3d-389*>();
    m_facet_points_isSet = false;
}

void
OAIBTExportTessellatedFacesBody-1321::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(constituents != nullptr) { 
        auto arr = constituents;
        for(auto o: *arr) { 
            delete o;
        }
        delete constituents;
    }
    if(id != nullptr) { 
        delete id;
    }
    if(body_type != nullptr) { 
        delete body_type;
    }
    if(appearance != nullptr) { 
        delete appearance;
    }
    if(faces != nullptr) { 
        auto arr = faces;
        for(auto o: *arr) { 
            delete o;
        }
        delete faces;
    }
    if(facet_points != nullptr) { 
        auto arr = facet_points;
        for(auto o: *arr) { 
            delete o;
        }
        delete facet_points;
    }
}

OAIBTExportTessellatedFacesBody-1321*
OAIBTExportTessellatedFacesBody-1321::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTExportTessellatedFacesBody-1321::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&constituents, pJson["constituents"], "QList", "QString");
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&body_type, pJson["bodyType"], "QString", "QString");
    
    ::OpenAPI::setValue(&appearance, pJson["appearance"], "OAIBTGraphicsAppearance-1152", "OAIBTGraphicsAppearance-1152");
    
    
    ::OpenAPI::setValue(&faces, pJson["faces"], "QList", "OAIBTExportTessellatedFacesFace-1192");
    
    ::OpenAPI::setValue(&facet_points, pJson["facetPoints"], "QList", "OAIBTVector3d-389");
}

QString
OAIBTExportTessellatedFacesBody-1321::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTExportTessellatedFacesBody-1321::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(constituents->size() > 0){
        toJsonArray((QList<void*>*)constituents, obj, "constituents", "QString");
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(body_type != nullptr && *body_type != QString("")){
        toJsonValue(QString("bodyType"), body_type, obj, QString("QString"));
    }
    if((appearance != nullptr) && (appearance->isSet())){
        toJsonValue(QString("appearance"), appearance, obj, QString("OAIBTGraphicsAppearance-1152"));
    }
    if(faces->size() > 0){
        toJsonArray((QList<void*>*)faces, obj, "faces", "OAIBTExportTessellatedFacesFace-1192");
    }
    if(facet_points->size() > 0){
        toJsonArray((QList<void*>*)facet_points, obj, "facetPoints", "OAIBTVector3d-389");
    }

    return obj;
}

QString*
OAIBTExportTessellatedFacesBody-1321::getBtType() {
    return bt_type;
}
void
OAIBTExportTessellatedFacesBody-1321::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QList<QString*>*
OAIBTExportTessellatedFacesBody-1321::getConstituents() {
    return constituents;
}
void
OAIBTExportTessellatedFacesBody-1321::setConstituents(QList<QString*>* constituents) {
    this->constituents = constituents;
    this->m_constituents_isSet = true;
}

QString*
OAIBTExportTessellatedFacesBody-1321::getId() {
    return id;
}
void
OAIBTExportTessellatedFacesBody-1321::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString*
OAIBTExportTessellatedFacesBody-1321::getBodyType() {
    return body_type;
}
void
OAIBTExportTessellatedFacesBody-1321::setBodyType(QString* body_type) {
    this->body_type = body_type;
    this->m_body_type_isSet = true;
}

OAIBTGraphicsAppearance-1152*
OAIBTExportTessellatedFacesBody-1321::getAppearance() {
    return appearance;
}
void
OAIBTExportTessellatedFacesBody-1321::setAppearance(OAIBTGraphicsAppearance-1152* appearance) {
    this->appearance = appearance;
    this->m_appearance_isSet = true;
}

QList<OAIBTExportTessellatedFacesFace-1192*>*
OAIBTExportTessellatedFacesBody-1321::getFaces() {
    return faces;
}
void
OAIBTExportTessellatedFacesBody-1321::setFaces(QList<OAIBTExportTessellatedFacesFace-1192*>* faces) {
    this->faces = faces;
    this->m_faces_isSet = true;
}

QList<OAIBTVector3d-389*>*
OAIBTExportTessellatedFacesBody-1321::getFacetPoints() {
    return facet_points;
}
void
OAIBTExportTessellatedFacesBody-1321::setFacetPoints(QList<OAIBTVector3d-389*>* facet_points) {
    this->facet_points = facet_points;
    this->m_facet_points_isSet = true;
}


bool
OAIBTExportTessellatedFacesBody-1321::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(constituents->size() > 0){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(body_type != nullptr && *body_type != QString("")){ isObjectUpdated = true; break;}
        if(appearance != nullptr && appearance->isSet()){ isObjectUpdated = true; break;}
        if(faces->size() > 0){ isObjectUpdated = true; break;}
        if(facet_points->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

