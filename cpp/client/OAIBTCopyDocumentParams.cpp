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


#include "OAIBTCopyDocumentParams.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTCopyDocumentParams::OAIBTCopyDocumentParams(QString json) {
    init();
    this->fromJson(json);
}

OAIBTCopyDocumentParams::OAIBTCopyDocumentParams() {
    init();
}

OAIBTCopyDocumentParams::~OAIBTCopyDocumentParams() {
    this->cleanup();
}

void
OAIBTCopyDocumentParams::init() {
    beta_capability_ids = new QList<QString*>();
    m_beta_capability_ids_isSet = false;
    is_public = false;
    m_is_public_isSet = false;
    new_name = new QString("");
    m_new_name_isSet = false;
    owner_id = new QString("");
    m_owner_id_isSet = false;
    owner_type_index = 0;
    m_owner_type_index_isSet = false;
    parent_id = new QString("");
    m_parent_id_isSet = false;
    project_id = new QString("");
    m_project_id_isSet = false;
}

void
OAIBTCopyDocumentParams::cleanup() {
    if(beta_capability_ids != nullptr) { 
        auto arr = beta_capability_ids;
        for(auto o: *arr) { 
            delete o;
        }
        delete beta_capability_ids;
    }

    if(new_name != nullptr) { 
        delete new_name;
    }
    if(owner_id != nullptr) { 
        delete owner_id;
    }

    if(parent_id != nullptr) { 
        delete parent_id;
    }
    if(project_id != nullptr) { 
        delete project_id;
    }
}

OAIBTCopyDocumentParams*
OAIBTCopyDocumentParams::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTCopyDocumentParams::fromJsonObject(QJsonObject pJson) {
    
    ::OpenAPI::setValue(&beta_capability_ids, pJson["betaCapabilityIds"], "QList", "QString");
    ::OpenAPI::setValue(&is_public, pJson["isPublic"], "bool", "");
    
    ::OpenAPI::setValue(&new_name, pJson["newName"], "QString", "QString");
    
    ::OpenAPI::setValue(&owner_id, pJson["ownerId"], "QString", "QString");
    
    ::OpenAPI::setValue(&owner_type_index, pJson["ownerTypeIndex"], "qint32", "");
    
    ::OpenAPI::setValue(&parent_id, pJson["parentId"], "QString", "QString");
    
    ::OpenAPI::setValue(&project_id, pJson["projectId"], "QString", "QString");
    
}

QString
OAIBTCopyDocumentParams::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTCopyDocumentParams::asJsonObject() {
    QJsonObject obj;
    if(beta_capability_ids->size() > 0){
        toJsonArray((QList<void*>*)beta_capability_ids, obj, "betaCapabilityIds", "QString");
    }
    if(m_is_public_isSet){
        obj.insert("isPublic", QJsonValue(is_public));
    }
    if(new_name != nullptr && *new_name != QString("")){
        toJsonValue(QString("newName"), new_name, obj, QString("QString"));
    }
    if(owner_id != nullptr && *owner_id != QString("")){
        toJsonValue(QString("ownerId"), owner_id, obj, QString("QString"));
    }
    if(m_owner_type_index_isSet){
        obj.insert("ownerTypeIndex", QJsonValue(owner_type_index));
    }
    if(parent_id != nullptr && *parent_id != QString("")){
        toJsonValue(QString("parentId"), parent_id, obj, QString("QString"));
    }
    if(project_id != nullptr && *project_id != QString("")){
        toJsonValue(QString("projectId"), project_id, obj, QString("QString"));
    }

    return obj;
}

QList<QString*>*
OAIBTCopyDocumentParams::getBetaCapabilityIds() {
    return beta_capability_ids;
}
void
OAIBTCopyDocumentParams::setBetaCapabilityIds(QList<QString*>* beta_capability_ids) {
    this->beta_capability_ids = beta_capability_ids;
    this->m_beta_capability_ids_isSet = true;
}

bool
OAIBTCopyDocumentParams::isIsPublic() {
    return is_public;
}
void
OAIBTCopyDocumentParams::setIsPublic(bool is_public) {
    this->is_public = is_public;
    this->m_is_public_isSet = true;
}

QString*
OAIBTCopyDocumentParams::getNewName() {
    return new_name;
}
void
OAIBTCopyDocumentParams::setNewName(QString* new_name) {
    this->new_name = new_name;
    this->m_new_name_isSet = true;
}

QString*
OAIBTCopyDocumentParams::getOwnerId() {
    return owner_id;
}
void
OAIBTCopyDocumentParams::setOwnerId(QString* owner_id) {
    this->owner_id = owner_id;
    this->m_owner_id_isSet = true;
}

qint32
OAIBTCopyDocumentParams::getOwnerTypeIndex() {
    return owner_type_index;
}
void
OAIBTCopyDocumentParams::setOwnerTypeIndex(qint32 owner_type_index) {
    this->owner_type_index = owner_type_index;
    this->m_owner_type_index_isSet = true;
}

QString*
OAIBTCopyDocumentParams::getParentId() {
    return parent_id;
}
void
OAIBTCopyDocumentParams::setParentId(QString* parent_id) {
    this->parent_id = parent_id;
    this->m_parent_id_isSet = true;
}

QString*
OAIBTCopyDocumentParams::getProjectId() {
    return project_id;
}
void
OAIBTCopyDocumentParams::setProjectId(QString* project_id) {
    this->project_id = project_id;
    this->m_project_id_isSet = true;
}


bool
OAIBTCopyDocumentParams::isSet(){
    bool isObjectUpdated = false;
    do{
        if(beta_capability_ids->size() > 0){ isObjectUpdated = true; break;}
        if(m_is_public_isSet){ isObjectUpdated = true; break;}
        if(new_name != nullptr && *new_name != QString("")){ isObjectUpdated = true; break;}
        if(owner_id != nullptr && *owner_id != QString("")){ isObjectUpdated = true; break;}
        if(m_owner_type_index_isSet){ isObjectUpdated = true; break;}
        if(parent_id != nullptr && *parent_id != QString("")){ isObjectUpdated = true; break;}
        if(project_id != nullptr && *project_id != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

