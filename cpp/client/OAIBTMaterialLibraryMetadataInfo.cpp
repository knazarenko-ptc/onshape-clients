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


#include "OAIBTMaterialLibraryMetadataInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTMaterialLibraryMetadataInfo::OAIBTMaterialLibraryMetadataInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIBTMaterialLibraryMetadataInfo::OAIBTMaterialLibraryMetadataInfo() {
    init();
}

OAIBTMaterialLibraryMetadataInfo::~OAIBTMaterialLibraryMetadataInfo() {
    this->cleanup();
}

void
OAIBTMaterialLibraryMetadataInfo::init() {
    document_id = new QString("");
    m_document_id_isSet = false;
    document_name = new QString("");
    m_document_name_isSet = false;
    element_id = new QString("");
    m_element_id_isSet = false;
    is_public = false;
    m_is_public_isSet = false;
    library_name = new QString("");
    m_library_name_isSet = false;
    owner_name = new QString("");
    m_owner_name_isSet = false;
    version_id = new QString("");
    m_version_id_isSet = false;
    workspace_id = new QString("");
    m_workspace_id_isSet = false;
}

void
OAIBTMaterialLibraryMetadataInfo::cleanup() {
    if(document_id != nullptr) { 
        delete document_id;
    }
    if(document_name != nullptr) { 
        delete document_name;
    }
    if(element_id != nullptr) { 
        delete element_id;
    }

    if(library_name != nullptr) { 
        delete library_name;
    }
    if(owner_name != nullptr) { 
        delete owner_name;
    }
    if(version_id != nullptr) { 
        delete version_id;
    }
    if(workspace_id != nullptr) { 
        delete workspace_id;
    }
}

OAIBTMaterialLibraryMetadataInfo*
OAIBTMaterialLibraryMetadataInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTMaterialLibraryMetadataInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&document_id, pJson["documentId"], "QString", "QString");
    
    ::OpenAPI::setValue(&document_name, pJson["documentName"], "QString", "QString");
    
    ::OpenAPI::setValue(&element_id, pJson["elementId"], "QString", "QString");
    
    ::OpenAPI::setValue(&is_public, pJson["isPublic"], "bool", "");
    
    ::OpenAPI::setValue(&library_name, pJson["libraryName"], "QString", "QString");
    
    ::OpenAPI::setValue(&owner_name, pJson["ownerName"], "QString", "QString");
    
    ::OpenAPI::setValue(&version_id, pJson["versionId"], "QString", "QString");
    
    ::OpenAPI::setValue(&workspace_id, pJson["workspaceId"], "QString", "QString");
    
}

QString
OAIBTMaterialLibraryMetadataInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTMaterialLibraryMetadataInfo::asJsonObject() {
    QJsonObject obj;
    if(document_id != nullptr && *document_id != QString("")){
        toJsonValue(QString("documentId"), document_id, obj, QString("QString"));
    }
    if(document_name != nullptr && *document_name != QString("")){
        toJsonValue(QString("documentName"), document_name, obj, QString("QString"));
    }
    if(element_id != nullptr && *element_id != QString("")){
        toJsonValue(QString("elementId"), element_id, obj, QString("QString"));
    }
    if(m_is_public_isSet){
        obj.insert("isPublic", QJsonValue(is_public));
    }
    if(library_name != nullptr && *library_name != QString("")){
        toJsonValue(QString("libraryName"), library_name, obj, QString("QString"));
    }
    if(owner_name != nullptr && *owner_name != QString("")){
        toJsonValue(QString("ownerName"), owner_name, obj, QString("QString"));
    }
    if(version_id != nullptr && *version_id != QString("")){
        toJsonValue(QString("versionId"), version_id, obj, QString("QString"));
    }
    if(workspace_id != nullptr && *workspace_id != QString("")){
        toJsonValue(QString("workspaceId"), workspace_id, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTMaterialLibraryMetadataInfo::getDocumentId() {
    return document_id;
}
void
OAIBTMaterialLibraryMetadataInfo::setDocumentId(QString* document_id) {
    this->document_id = document_id;
    this->m_document_id_isSet = true;
}

QString*
OAIBTMaterialLibraryMetadataInfo::getDocumentName() {
    return document_name;
}
void
OAIBTMaterialLibraryMetadataInfo::setDocumentName(QString* document_name) {
    this->document_name = document_name;
    this->m_document_name_isSet = true;
}

QString*
OAIBTMaterialLibraryMetadataInfo::getElementId() {
    return element_id;
}
void
OAIBTMaterialLibraryMetadataInfo::setElementId(QString* element_id) {
    this->element_id = element_id;
    this->m_element_id_isSet = true;
}

bool
OAIBTMaterialLibraryMetadataInfo::isIsPublic() {
    return is_public;
}
void
OAIBTMaterialLibraryMetadataInfo::setIsPublic(bool is_public) {
    this->is_public = is_public;
    this->m_is_public_isSet = true;
}

QString*
OAIBTMaterialLibraryMetadataInfo::getLibraryName() {
    return library_name;
}
void
OAIBTMaterialLibraryMetadataInfo::setLibraryName(QString* library_name) {
    this->library_name = library_name;
    this->m_library_name_isSet = true;
}

QString*
OAIBTMaterialLibraryMetadataInfo::getOwnerName() {
    return owner_name;
}
void
OAIBTMaterialLibraryMetadataInfo::setOwnerName(QString* owner_name) {
    this->owner_name = owner_name;
    this->m_owner_name_isSet = true;
}

QString*
OAIBTMaterialLibraryMetadataInfo::getVersionId() {
    return version_id;
}
void
OAIBTMaterialLibraryMetadataInfo::setVersionId(QString* version_id) {
    this->version_id = version_id;
    this->m_version_id_isSet = true;
}

QString*
OAIBTMaterialLibraryMetadataInfo::getWorkspaceId() {
    return workspace_id;
}
void
OAIBTMaterialLibraryMetadataInfo::setWorkspaceId(QString* workspace_id) {
    this->workspace_id = workspace_id;
    this->m_workspace_id_isSet = true;
}


bool
OAIBTMaterialLibraryMetadataInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(document_id != nullptr && *document_id != QString("")){ isObjectUpdated = true; break;}
        if(document_name != nullptr && *document_name != QString("")){ isObjectUpdated = true; break;}
        if(element_id != nullptr && *element_id != QString("")){ isObjectUpdated = true; break;}
        if(m_is_public_isSet){ isObjectUpdated = true; break;}
        if(library_name != nullptr && *library_name != QString("")){ isObjectUpdated = true; break;}
        if(owner_name != nullptr && *owner_name != QString("")){ isObjectUpdated = true; break;}
        if(version_id != nullptr && *version_id != QString("")){ isObjectUpdated = true; break;}
        if(workspace_id != nullptr && *workspace_id != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

