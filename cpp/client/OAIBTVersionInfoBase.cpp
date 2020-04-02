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


#include "OAIBTVersionInfoBase.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTVersionInfoBase::OAIBTVersionInfoBase(QString json) {
    init();
    this->fromJson(json);
}

OAIBTVersionInfoBase::OAIBTVersionInfoBase() {
    init();
}

OAIBTVersionInfoBase::~OAIBTVersionInfoBase() {
    this->cleanup();
}

void
OAIBTVersionInfoBase::init() {
    href = new QString("");
    m_href_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    json_type = new QString("");
    m_json_type_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    view_ref = new QString("");
    m_view_ref_isSet = false;
    creator = new OAIBTUserBasicSummaryInfo();
    m_creator_isSet = false;
    document_id = new QString("");
    m_document_id_isSet = false;
    created_at = NULL;
    m_created_at_isSet = false;
    thumbnail = new OAIBTThumbnailInfo();
    m_thumbnail_isSet = false;
    parents = new QList<OAIBTVersionInfo*>();
    m_parents_isSet = false;
    microversion = new QString("");
    m_microversion_isSet = false;
    last_modifier = new OAIBTUserBasicSummaryInfo();
    m_last_modifier_isSet = false;
    modified_at = NULL;
    m_modified_at_isSet = false;
    override_date = NULL;
    m_override_date_isSet = false;
    type = new QString("");
    m_type_isSet = false;
    parent = new QString("");
    m_parent_isSet = false;
    description = new QString("");
    m_description_isSet = false;
}

void
OAIBTVersionInfoBase::cleanup() {
    if(href != nullptr) { 
        delete href;
    }
    if(id != nullptr) { 
        delete id;
    }
    if(json_type != nullptr) { 
        delete json_type;
    }
    if(name != nullptr) { 
        delete name;
    }
    if(view_ref != nullptr) { 
        delete view_ref;
    }
    if(creator != nullptr) { 
        delete creator;
    }
    if(document_id != nullptr) { 
        delete document_id;
    }
    if(created_at != nullptr) { 
        delete created_at;
    }
    if(thumbnail != nullptr) { 
        delete thumbnail;
    }
    if(parents != nullptr) { 
        auto arr = parents;
        for(auto o: *arr) { 
            delete o;
        }
        delete parents;
    }
    if(microversion != nullptr) { 
        delete microversion;
    }
    if(last_modifier != nullptr) { 
        delete last_modifier;
    }
    if(modified_at != nullptr) { 
        delete modified_at;
    }
    if(override_date != nullptr) { 
        delete override_date;
    }
    if(type != nullptr) { 
        delete type;
    }
    if(parent != nullptr) { 
        delete parent;
    }
    if(description != nullptr) { 
        delete description;
    }
}

OAIBTVersionInfoBase*
OAIBTVersionInfoBase::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTVersionInfoBase::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&href, pJson["href"], "QString", "QString");
    
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&json_type, pJson["jsonType"], "QString", "QString");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&view_ref, pJson["viewRef"], "QString", "QString");
    
    ::OpenAPI::setValue(&creator, pJson["creator"], "OAIBTUserBasicSummaryInfo", "OAIBTUserBasicSummaryInfo");
    
    ::OpenAPI::setValue(&document_id, pJson["documentId"], "QString", "QString");
    
    ::OpenAPI::setValue(&created_at, pJson["createdAt"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&thumbnail, pJson["thumbnail"], "OAIBTThumbnailInfo", "OAIBTThumbnailInfo");
    
    
    ::OpenAPI::setValue(&parents, pJson["parents"], "QList", "OAIBTVersionInfo");
    ::OpenAPI::setValue(&microversion, pJson["microversion"], "QString", "QString");
    
    ::OpenAPI::setValue(&last_modifier, pJson["lastModifier"], "OAIBTUserBasicSummaryInfo", "OAIBTUserBasicSummaryInfo");
    
    ::OpenAPI::setValue(&modified_at, pJson["modifiedAt"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&override_date, pJson["overrideDate"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&type, pJson["type"], "QString", "QString");
    
    ::OpenAPI::setValue(&parent, pJson["parent"], "QString", "QString");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
}

QString
OAIBTVersionInfoBase::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTVersionInfoBase::asJsonObject() {
    QJsonObject obj;
    if(href != nullptr && *href != QString("")){
        toJsonValue(QString("href"), href, obj, QString("QString"));
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(json_type != nullptr && *json_type != QString("")){
        toJsonValue(QString("jsonType"), json_type, obj, QString("QString"));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(view_ref != nullptr && *view_ref != QString("")){
        toJsonValue(QString("viewRef"), view_ref, obj, QString("QString"));
    }
    if((creator != nullptr) && (creator->isSet())){
        toJsonValue(QString("creator"), creator, obj, QString("OAIBTUserBasicSummaryInfo"));
    }
    if(document_id != nullptr && *document_id != QString("")){
        toJsonValue(QString("documentId"), document_id, obj, QString("QString"));
    }
    if(created_at != nullptr) { 
        toJsonValue(QString("createdAt"), created_at, obj, QString("QDateTime"));
    }
    if((thumbnail != nullptr) && (thumbnail->isSet())){
        toJsonValue(QString("thumbnail"), thumbnail, obj, QString("OAIBTThumbnailInfo"));
    }
    if(parents->size() > 0){
        toJsonArray((QList<void*>*)parents, obj, "parents", "OAIBTVersionInfo");
    }
    if(microversion != nullptr && *microversion != QString("")){
        toJsonValue(QString("microversion"), microversion, obj, QString("QString"));
    }
    if((last_modifier != nullptr) && (last_modifier->isSet())){
        toJsonValue(QString("lastModifier"), last_modifier, obj, QString("OAIBTUserBasicSummaryInfo"));
    }
    if(modified_at != nullptr) { 
        toJsonValue(QString("modifiedAt"), modified_at, obj, QString("QDateTime"));
    }
    if(override_date != nullptr) { 
        toJsonValue(QString("overrideDate"), override_date, obj, QString("QDateTime"));
    }
    if(type != nullptr && *type != QString("")){
        toJsonValue(QString("type"), type, obj, QString("QString"));
    }
    if(parent != nullptr && *parent != QString("")){
        toJsonValue(QString("parent"), parent, obj, QString("QString"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTVersionInfoBase::getHref() {
    return href;
}
void
OAIBTVersionInfoBase::setHref(QString* href) {
    this->href = href;
    this->m_href_isSet = true;
}

QString*
OAIBTVersionInfoBase::getId() {
    return id;
}
void
OAIBTVersionInfoBase::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString*
OAIBTVersionInfoBase::getJsonType() {
    return json_type;
}
void
OAIBTVersionInfoBase::setJsonType(QString* json_type) {
    this->json_type = json_type;
    this->m_json_type_isSet = true;
}

QString*
OAIBTVersionInfoBase::getName() {
    return name;
}
void
OAIBTVersionInfoBase::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

QString*
OAIBTVersionInfoBase::getViewRef() {
    return view_ref;
}
void
OAIBTVersionInfoBase::setViewRef(QString* view_ref) {
    this->view_ref = view_ref;
    this->m_view_ref_isSet = true;
}

OAIBTUserBasicSummaryInfo*
OAIBTVersionInfoBase::getCreator() {
    return creator;
}
void
OAIBTVersionInfoBase::setCreator(OAIBTUserBasicSummaryInfo* creator) {
    this->creator = creator;
    this->m_creator_isSet = true;
}

QString*
OAIBTVersionInfoBase::getDocumentId() {
    return document_id;
}
void
OAIBTVersionInfoBase::setDocumentId(QString* document_id) {
    this->document_id = document_id;
    this->m_document_id_isSet = true;
}

QDateTime*
OAIBTVersionInfoBase::getCreatedAt() {
    return created_at;
}
void
OAIBTVersionInfoBase::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
    this->m_created_at_isSet = true;
}

OAIBTThumbnailInfo*
OAIBTVersionInfoBase::getThumbnail() {
    return thumbnail;
}
void
OAIBTVersionInfoBase::setThumbnail(OAIBTThumbnailInfo* thumbnail) {
    this->thumbnail = thumbnail;
    this->m_thumbnail_isSet = true;
}

QList<OAIBTVersionInfo*>*
OAIBTVersionInfoBase::getParents() {
    return parents;
}
void
OAIBTVersionInfoBase::setParents(QList<OAIBTVersionInfo*>* parents) {
    this->parents = parents;
    this->m_parents_isSet = true;
}

QString*
OAIBTVersionInfoBase::getMicroversion() {
    return microversion;
}
void
OAIBTVersionInfoBase::setMicroversion(QString* microversion) {
    this->microversion = microversion;
    this->m_microversion_isSet = true;
}

OAIBTUserBasicSummaryInfo*
OAIBTVersionInfoBase::getLastModifier() {
    return last_modifier;
}
void
OAIBTVersionInfoBase::setLastModifier(OAIBTUserBasicSummaryInfo* last_modifier) {
    this->last_modifier = last_modifier;
    this->m_last_modifier_isSet = true;
}

QDateTime*
OAIBTVersionInfoBase::getModifiedAt() {
    return modified_at;
}
void
OAIBTVersionInfoBase::setModifiedAt(QDateTime* modified_at) {
    this->modified_at = modified_at;
    this->m_modified_at_isSet = true;
}

QDateTime*
OAIBTVersionInfoBase::getOverrideDate() {
    return override_date;
}
void
OAIBTVersionInfoBase::setOverrideDate(QDateTime* override_date) {
    this->override_date = override_date;
    this->m_override_date_isSet = true;
}

QString*
OAIBTVersionInfoBase::getType() {
    return type;
}
void
OAIBTVersionInfoBase::setType(QString* type) {
    this->type = type;
    this->m_type_isSet = true;
}

QString*
OAIBTVersionInfoBase::getParent() {
    return parent;
}
void
OAIBTVersionInfoBase::setParent(QString* parent) {
    this->parent = parent;
    this->m_parent_isSet = true;
}

QString*
OAIBTVersionInfoBase::getDescription() {
    return description;
}
void
OAIBTVersionInfoBase::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}


bool
OAIBTVersionInfoBase::isSet(){
    bool isObjectUpdated = false;
    do{
        if(href != nullptr && *href != QString("")){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(json_type != nullptr && *json_type != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(view_ref != nullptr && *view_ref != QString("")){ isObjectUpdated = true; break;}
        if(creator != nullptr && creator->isSet()){ isObjectUpdated = true; break;}
        if(document_id != nullptr && *document_id != QString("")){ isObjectUpdated = true; break;}
        if(thumbnail != nullptr && thumbnail->isSet()){ isObjectUpdated = true; break;}
        if(parents->size() > 0){ isObjectUpdated = true; break;}
        if(microversion != nullptr && *microversion != QString("")){ isObjectUpdated = true; break;}
        if(last_modifier != nullptr && last_modifier->isSet()){ isObjectUpdated = true; break;}
        if(type != nullptr && *type != QString("")){ isObjectUpdated = true; break;}
        if(parent != nullptr && *parent != QString("")){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

