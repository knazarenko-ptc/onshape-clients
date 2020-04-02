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


#include "OAIBTMoveElementParams.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTMoveElementParams::OAIBTMoveElementParams(QString json) {
    init();
    this->fromJson(json);
}

OAIBTMoveElementParams::OAIBTMoveElementParams() {
    init();
}

OAIBTMoveElementParams::~OAIBTMoveElementParams() {
    this->cleanup();
}

void
OAIBTMoveElementParams::init() {
    anchor_element_id = new QString("");
    m_anchor_element_id_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    element_original_to_new_map = new QMap<QString, QString*>();
    m_element_original_to_new_map_isSet = false;
    elements = new QList<QString*>();
    m_elements_isSet = false;
    generate_unknown_messages = false;
    m_generate_unknown_messages_isSet = false;
    import_data = new QList<QByteArray*>();
    m_import_data_isSet = false;
    is_copy = false;
    m_is_copy_isSet = false;
    is_deep_copy = false;
    m_is_deep_copy_isSet = false;
    is_group_anchor = false;
    m_is_group_anchor_isSet = false;
    is_new_document = false;
    m_is_new_document_isSet = false;
    is_public = false;
    m_is_public_isSet = false;
    is_selective_part_out = false;
    m_is_selective_part_out_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    need_new_version = false;
    m_need_new_version_isSet = false;
    owner_email = new QString("");
    m_owner_email_isSet = false;
    owner_id = new QString("");
    m_owner_id_isSet = false;
    owner_type = 0;
    m_owner_type_isSet = false;
    parent_id = new QString("");
    m_parent_id_isSet = false;
    project_id = new QString("");
    m_project_id_isSet = false;
    source_document_id = new QString("");
    m_source_document_id_isSet = false;
    source_workspace_id = new QString("");
    m_source_workspace_id_isSet = false;
    tags = new QList<QString*>();
    m_tags_isSet = false;
    target_document_id = new QString("");
    m_target_document_id_isSet = false;
    target_workspace_id = new QString("");
    m_target_workspace_id_isSet = false;
    version_name = new QString("");
    m_version_name_isSet = false;
}

void
OAIBTMoveElementParams::cleanup() {
    if(anchor_element_id != nullptr) { 
        delete anchor_element_id;
    }
    if(description != nullptr) { 
        delete description;
    }
    if(element_original_to_new_map != nullptr) { 
        auto arr = element_original_to_new_map;
        for(auto o: *arr) { 
            delete o;
        }
        delete element_original_to_new_map;
    }
    if(elements != nullptr) { 
        auto arr = elements;
        for(auto o: *arr) { 
            delete o;
        }
        delete elements;
    }

    if(import_data != nullptr) { 
        auto arr = import_data;
        for(auto o: *arr) { 
            delete o;
        }
        delete import_data;
    }






    if(name != nullptr) { 
        delete name;
    }

    if(owner_email != nullptr) { 
        delete owner_email;
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
    if(source_document_id != nullptr) { 
        delete source_document_id;
    }
    if(source_workspace_id != nullptr) { 
        delete source_workspace_id;
    }
    if(tags != nullptr) { 
        auto arr = tags;
        for(auto o: *arr) { 
            delete o;
        }
        delete tags;
    }
    if(target_document_id != nullptr) { 
        delete target_document_id;
    }
    if(target_workspace_id != nullptr) { 
        delete target_workspace_id;
    }
    if(version_name != nullptr) { 
        delete version_name;
    }
}

OAIBTMoveElementParams*
OAIBTMoveElementParams::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTMoveElementParams::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&anchor_element_id, pJson["anchorElementId"], "QString", "QString");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&element_original_to_new_map, pJson["elementOriginalToNewMap"], "QMap", "QString");
    
    ::OpenAPI::setValue(&elements, pJson["elements"], "QList", "QString");
    ::OpenAPI::setValue(&generate_unknown_messages, pJson["generateUnknownMessages"], "bool", "");
    
    
    ::OpenAPI::setValue(&import_data, pJson["importData"], "QList", "QByteArray");
    ::OpenAPI::setValue(&is_copy, pJson["isCopy"], "bool", "");
    
    ::OpenAPI::setValue(&is_deep_copy, pJson["isDeepCopy"], "bool", "");
    
    ::OpenAPI::setValue(&is_group_anchor, pJson["isGroupAnchor"], "bool", "");
    
    ::OpenAPI::setValue(&is_new_document, pJson["isNewDocument"], "bool", "");
    
    ::OpenAPI::setValue(&is_public, pJson["isPublic"], "bool", "");
    
    ::OpenAPI::setValue(&is_selective_part_out, pJson["isSelectivePartOut"], "bool", "");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&need_new_version, pJson["needNewVersion"], "bool", "");
    
    ::OpenAPI::setValue(&owner_email, pJson["ownerEmail"], "QString", "QString");
    
    ::OpenAPI::setValue(&owner_id, pJson["ownerId"], "QString", "QString");
    
    ::OpenAPI::setValue(&owner_type, pJson["ownerType"], "qint32", "");
    
    ::OpenAPI::setValue(&parent_id, pJson["parentId"], "QString", "QString");
    
    ::OpenAPI::setValue(&project_id, pJson["projectId"], "QString", "QString");
    
    ::OpenAPI::setValue(&source_document_id, pJson["sourceDocumentId"], "QString", "QString");
    
    ::OpenAPI::setValue(&source_workspace_id, pJson["sourceWorkspaceId"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&tags, pJson["tags"], "QList", "QString");
    ::OpenAPI::setValue(&target_document_id, pJson["targetDocumentId"], "QString", "QString");
    
    ::OpenAPI::setValue(&target_workspace_id, pJson["targetWorkspaceId"], "QString", "QString");
    
    ::OpenAPI::setValue(&version_name, pJson["versionName"], "QString", "QString");
    
}

QString
OAIBTMoveElementParams::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTMoveElementParams::asJsonObject() {
    QJsonObject obj;
    if(anchor_element_id != nullptr && *anchor_element_id != QString("")){
        toJsonValue(QString("anchorElementId"), anchor_element_id, obj, QString("QString"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if(element_original_to_new_map->size() > 0){
        toJsonMap((QMap<QString, void*>*) element_original_to_new_map, obj, "elementOriginalToNewMap", "QString");
    }
    if(elements->size() > 0){
        toJsonArray((QList<void*>*)elements, obj, "elements", "QString");
    }
    if(m_generate_unknown_messages_isSet){
        obj.insert("generateUnknownMessages", QJsonValue(generate_unknown_messages));
    }
    if(import_data->size() > 0){
        toJsonArray((QList<void*>*)import_data, obj, "importData", "QByteArray");
    }
    if(m_is_copy_isSet){
        obj.insert("isCopy", QJsonValue(is_copy));
    }
    if(m_is_deep_copy_isSet){
        obj.insert("isDeepCopy", QJsonValue(is_deep_copy));
    }
    if(m_is_group_anchor_isSet){
        obj.insert("isGroupAnchor", QJsonValue(is_group_anchor));
    }
    if(m_is_new_document_isSet){
        obj.insert("isNewDocument", QJsonValue(is_new_document));
    }
    if(m_is_public_isSet){
        obj.insert("isPublic", QJsonValue(is_public));
    }
    if(m_is_selective_part_out_isSet){
        obj.insert("isSelectivePartOut", QJsonValue(is_selective_part_out));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(m_need_new_version_isSet){
        obj.insert("needNewVersion", QJsonValue(need_new_version));
    }
    if(owner_email != nullptr && *owner_email != QString("")){
        toJsonValue(QString("ownerEmail"), owner_email, obj, QString("QString"));
    }
    if(owner_id != nullptr && *owner_id != QString("")){
        toJsonValue(QString("ownerId"), owner_id, obj, QString("QString"));
    }
    if(m_owner_type_isSet){
        obj.insert("ownerType", QJsonValue(owner_type));
    }
    if(parent_id != nullptr && *parent_id != QString("")){
        toJsonValue(QString("parentId"), parent_id, obj, QString("QString"));
    }
    if(project_id != nullptr && *project_id != QString("")){
        toJsonValue(QString("projectId"), project_id, obj, QString("QString"));
    }
    if(source_document_id != nullptr && *source_document_id != QString("")){
        toJsonValue(QString("sourceDocumentId"), source_document_id, obj, QString("QString"));
    }
    if(source_workspace_id != nullptr && *source_workspace_id != QString("")){
        toJsonValue(QString("sourceWorkspaceId"), source_workspace_id, obj, QString("QString"));
    }
    if(tags->size() > 0){
        toJsonArray((QList<void*>*)tags, obj, "tags", "QString");
    }
    if(target_document_id != nullptr && *target_document_id != QString("")){
        toJsonValue(QString("targetDocumentId"), target_document_id, obj, QString("QString"));
    }
    if(target_workspace_id != nullptr && *target_workspace_id != QString("")){
        toJsonValue(QString("targetWorkspaceId"), target_workspace_id, obj, QString("QString"));
    }
    if(version_name != nullptr && *version_name != QString("")){
        toJsonValue(QString("versionName"), version_name, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTMoveElementParams::getAnchorElementId() {
    return anchor_element_id;
}
void
OAIBTMoveElementParams::setAnchorElementId(QString* anchor_element_id) {
    this->anchor_element_id = anchor_element_id;
    this->m_anchor_element_id_isSet = true;
}

QString*
OAIBTMoveElementParams::getDescription() {
    return description;
}
void
OAIBTMoveElementParams::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

QMap<QString, QString*>*
OAIBTMoveElementParams::getElementOriginalToNewMap() {
    return element_original_to_new_map;
}
void
OAIBTMoveElementParams::setElementOriginalToNewMap(QMap<QString, QString*>* element_original_to_new_map) {
    this->element_original_to_new_map = element_original_to_new_map;
    this->m_element_original_to_new_map_isSet = true;
}

QList<QString*>*
OAIBTMoveElementParams::getElements() {
    return elements;
}
void
OAIBTMoveElementParams::setElements(QList<QString*>* elements) {
    this->elements = elements;
    this->m_elements_isSet = true;
}

bool
OAIBTMoveElementParams::isGenerateUnknownMessages() {
    return generate_unknown_messages;
}
void
OAIBTMoveElementParams::setGenerateUnknownMessages(bool generate_unknown_messages) {
    this->generate_unknown_messages = generate_unknown_messages;
    this->m_generate_unknown_messages_isSet = true;
}

QList<QByteArray*>*
OAIBTMoveElementParams::getImportData() {
    return import_data;
}
void
OAIBTMoveElementParams::setImportData(QList<QByteArray*>* import_data) {
    this->import_data = import_data;
    this->m_import_data_isSet = true;
}

bool
OAIBTMoveElementParams::isIsCopy() {
    return is_copy;
}
void
OAIBTMoveElementParams::setIsCopy(bool is_copy) {
    this->is_copy = is_copy;
    this->m_is_copy_isSet = true;
}

bool
OAIBTMoveElementParams::isIsDeepCopy() {
    return is_deep_copy;
}
void
OAIBTMoveElementParams::setIsDeepCopy(bool is_deep_copy) {
    this->is_deep_copy = is_deep_copy;
    this->m_is_deep_copy_isSet = true;
}

bool
OAIBTMoveElementParams::isIsGroupAnchor() {
    return is_group_anchor;
}
void
OAIBTMoveElementParams::setIsGroupAnchor(bool is_group_anchor) {
    this->is_group_anchor = is_group_anchor;
    this->m_is_group_anchor_isSet = true;
}

bool
OAIBTMoveElementParams::isIsNewDocument() {
    return is_new_document;
}
void
OAIBTMoveElementParams::setIsNewDocument(bool is_new_document) {
    this->is_new_document = is_new_document;
    this->m_is_new_document_isSet = true;
}

bool
OAIBTMoveElementParams::isIsPublic() {
    return is_public;
}
void
OAIBTMoveElementParams::setIsPublic(bool is_public) {
    this->is_public = is_public;
    this->m_is_public_isSet = true;
}

bool
OAIBTMoveElementParams::isIsSelectivePartOut() {
    return is_selective_part_out;
}
void
OAIBTMoveElementParams::setIsSelectivePartOut(bool is_selective_part_out) {
    this->is_selective_part_out = is_selective_part_out;
    this->m_is_selective_part_out_isSet = true;
}

QString*
OAIBTMoveElementParams::getName() {
    return name;
}
void
OAIBTMoveElementParams::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool
OAIBTMoveElementParams::isNeedNewVersion() {
    return need_new_version;
}
void
OAIBTMoveElementParams::setNeedNewVersion(bool need_new_version) {
    this->need_new_version = need_new_version;
    this->m_need_new_version_isSet = true;
}

QString*
OAIBTMoveElementParams::getOwnerEmail() {
    return owner_email;
}
void
OAIBTMoveElementParams::setOwnerEmail(QString* owner_email) {
    this->owner_email = owner_email;
    this->m_owner_email_isSet = true;
}

QString*
OAIBTMoveElementParams::getOwnerId() {
    return owner_id;
}
void
OAIBTMoveElementParams::setOwnerId(QString* owner_id) {
    this->owner_id = owner_id;
    this->m_owner_id_isSet = true;
}

qint32
OAIBTMoveElementParams::getOwnerType() {
    return owner_type;
}
void
OAIBTMoveElementParams::setOwnerType(qint32 owner_type) {
    this->owner_type = owner_type;
    this->m_owner_type_isSet = true;
}

QString*
OAIBTMoveElementParams::getParentId() {
    return parent_id;
}
void
OAIBTMoveElementParams::setParentId(QString* parent_id) {
    this->parent_id = parent_id;
    this->m_parent_id_isSet = true;
}

QString*
OAIBTMoveElementParams::getProjectId() {
    return project_id;
}
void
OAIBTMoveElementParams::setProjectId(QString* project_id) {
    this->project_id = project_id;
    this->m_project_id_isSet = true;
}

QString*
OAIBTMoveElementParams::getSourceDocumentId() {
    return source_document_id;
}
void
OAIBTMoveElementParams::setSourceDocumentId(QString* source_document_id) {
    this->source_document_id = source_document_id;
    this->m_source_document_id_isSet = true;
}

QString*
OAIBTMoveElementParams::getSourceWorkspaceId() {
    return source_workspace_id;
}
void
OAIBTMoveElementParams::setSourceWorkspaceId(QString* source_workspace_id) {
    this->source_workspace_id = source_workspace_id;
    this->m_source_workspace_id_isSet = true;
}

QList<QString*>*
OAIBTMoveElementParams::getTags() {
    return tags;
}
void
OAIBTMoveElementParams::setTags(QList<QString*>* tags) {
    this->tags = tags;
    this->m_tags_isSet = true;
}

QString*
OAIBTMoveElementParams::getTargetDocumentId() {
    return target_document_id;
}
void
OAIBTMoveElementParams::setTargetDocumentId(QString* target_document_id) {
    this->target_document_id = target_document_id;
    this->m_target_document_id_isSet = true;
}

QString*
OAIBTMoveElementParams::getTargetWorkspaceId() {
    return target_workspace_id;
}
void
OAIBTMoveElementParams::setTargetWorkspaceId(QString* target_workspace_id) {
    this->target_workspace_id = target_workspace_id;
    this->m_target_workspace_id_isSet = true;
}

QString*
OAIBTMoveElementParams::getVersionName() {
    return version_name;
}
void
OAIBTMoveElementParams::setVersionName(QString* version_name) {
    this->version_name = version_name;
    this->m_version_name_isSet = true;
}


bool
OAIBTMoveElementParams::isSet(){
    bool isObjectUpdated = false;
    do{
        if(anchor_element_id != nullptr && *anchor_element_id != QString("")){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(element_original_to_new_map->size() > 0){ isObjectUpdated = true; break;}
        if(elements->size() > 0){ isObjectUpdated = true; break;}
        if(m_generate_unknown_messages_isSet){ isObjectUpdated = true; break;}
        if(import_data->size() > 0){ isObjectUpdated = true; break;}
        if(m_is_copy_isSet){ isObjectUpdated = true; break;}
        if(m_is_deep_copy_isSet){ isObjectUpdated = true; break;}
        if(m_is_group_anchor_isSet){ isObjectUpdated = true; break;}
        if(m_is_new_document_isSet){ isObjectUpdated = true; break;}
        if(m_is_public_isSet){ isObjectUpdated = true; break;}
        if(m_is_selective_part_out_isSet){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(m_need_new_version_isSet){ isObjectUpdated = true; break;}
        if(owner_email != nullptr && *owner_email != QString("")){ isObjectUpdated = true; break;}
        if(owner_id != nullptr && *owner_id != QString("")){ isObjectUpdated = true; break;}
        if(m_owner_type_isSet){ isObjectUpdated = true; break;}
        if(parent_id != nullptr && *parent_id != QString("")){ isObjectUpdated = true; break;}
        if(project_id != nullptr && *project_id != QString("")){ isObjectUpdated = true; break;}
        if(source_document_id != nullptr && *source_document_id != QString("")){ isObjectUpdated = true; break;}
        if(source_workspace_id != nullptr && *source_workspace_id != QString("")){ isObjectUpdated = true; break;}
        if(tags->size() > 0){ isObjectUpdated = true; break;}
        if(target_document_id != nullptr && *target_document_id != QString("")){ isObjectUpdated = true; break;}
        if(target_workspace_id != nullptr && *target_workspace_id != QString("")){ isObjectUpdated = true; break;}
        if(version_name != nullptr && *version_name != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

