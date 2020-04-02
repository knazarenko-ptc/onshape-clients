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


#include "OAIBTAppElementReferenceResolveInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTAppElementReferenceResolveInfo::OAIBTAppElementReferenceResolveInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIBTAppElementReferenceResolveInfo::OAIBTAppElementReferenceResolveInfo() {
    init();
}

OAIBTAppElementReferenceResolveInfo::~OAIBTAppElementReferenceResolveInfo() {
    this->cleanup();
}

void
OAIBTAppElementReferenceResolveInfo::init() {
    change_id = new QString("");
    m_change_id_isSet = false;
    error_code = 0;
    m_error_code_isSet = false;
    error_description = new QString("");
    m_error_description_isSet = false;
    error_value = new QString("");
    m_error_value_isSet = false;
    id_tag = new QString("");
    m_id_tag_isSet = false;
    id_tag_is_valid = false;
    m_id_tag_is_valid_isSet = false;
    is_configurable = false;
    m_is_configurable_isSet = false;
    is_flattened_part = false;
    m_is_flattened_part_isSet = false;
    is_sketch_only = false;
    m_is_sketch_only_isSet = false;
    is_surface = false;
    m_is_surface_isSet = false;
    part_number = new QString("");
    m_part_number_isSet = false;
    reference_id = new QString("");
    m_reference_id_isSet = false;
    reference_type = 0;
    m_reference_type_isSet = false;
    resolved_document_microversion_id = new QString("");
    m_resolved_document_microversion_id_isSet = false;
    resolved_element_microversion_id = new QString("");
    m_resolved_element_microversion_id_isSet = false;
    revision = new QString("");
    m_revision_isSet = false;
    sketch_ids = new QList<QString*>();
    m_sketch_ids_isSet = false;
    target_configuration = new QString("");
    m_target_configuration_isSet = false;
    target_document_id = new QString("");
    m_target_document_id_isSet = false;
    target_document_microversion_id = new QString("");
    m_target_document_microversion_id_isSet = false;
    target_element_id = new QString("");
    m_target_element_id_isSet = false;
    target_element_microversion_id = new QString("");
    m_target_element_microversion_id_isSet = false;
    target_version_id = new QString("");
    m_target_version_id_isSet = false;
    track_new_versions = false;
    m_track_new_versions_isSet = false;
}

void
OAIBTAppElementReferenceResolveInfo::cleanup() {
    if(change_id != nullptr) { 
        delete change_id;
    }

    if(error_description != nullptr) { 
        delete error_description;
    }
    if(error_value != nullptr) { 
        delete error_value;
    }
    if(id_tag != nullptr) { 
        delete id_tag;
    }





    if(part_number != nullptr) { 
        delete part_number;
    }
    if(reference_id != nullptr) { 
        delete reference_id;
    }

    if(resolved_document_microversion_id != nullptr) { 
        delete resolved_document_microversion_id;
    }
    if(resolved_element_microversion_id != nullptr) { 
        delete resolved_element_microversion_id;
    }
    if(revision != nullptr) { 
        delete revision;
    }
    if(sketch_ids != nullptr) { 
        auto arr = sketch_ids;
        for(auto o: *arr) { 
            delete o;
        }
        delete sketch_ids;
    }
    if(target_configuration != nullptr) { 
        delete target_configuration;
    }
    if(target_document_id != nullptr) { 
        delete target_document_id;
    }
    if(target_document_microversion_id != nullptr) { 
        delete target_document_microversion_id;
    }
    if(target_element_id != nullptr) { 
        delete target_element_id;
    }
    if(target_element_microversion_id != nullptr) { 
        delete target_element_microversion_id;
    }
    if(target_version_id != nullptr) { 
        delete target_version_id;
    }

}

OAIBTAppElementReferenceResolveInfo*
OAIBTAppElementReferenceResolveInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTAppElementReferenceResolveInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&change_id, pJson["changeId"], "QString", "QString");
    
    ::OpenAPI::setValue(&error_code, pJson["errorCode"], "qint32", "");
    
    ::OpenAPI::setValue(&error_description, pJson["errorDescription"], "QString", "QString");
    
    ::OpenAPI::setValue(&error_value, pJson["errorValue"], "QString", "QString");
    
    ::OpenAPI::setValue(&id_tag, pJson["idTag"], "QString", "QString");
    
    ::OpenAPI::setValue(&id_tag_is_valid, pJson["idTagIsValid"], "bool", "");
    
    ::OpenAPI::setValue(&is_configurable, pJson["isConfigurable"], "bool", "");
    
    ::OpenAPI::setValue(&is_flattened_part, pJson["isFlattenedPart"], "bool", "");
    
    ::OpenAPI::setValue(&is_sketch_only, pJson["isSketchOnly"], "bool", "");
    
    ::OpenAPI::setValue(&is_surface, pJson["isSurface"], "bool", "");
    
    ::OpenAPI::setValue(&part_number, pJson["partNumber"], "QString", "QString");
    
    ::OpenAPI::setValue(&reference_id, pJson["referenceId"], "QString", "QString");
    
    ::OpenAPI::setValue(&reference_type, pJson["referenceType"], "qint32", "");
    
    ::OpenAPI::setValue(&resolved_document_microversion_id, pJson["resolvedDocumentMicroversionId"], "QString", "QString");
    
    ::OpenAPI::setValue(&resolved_element_microversion_id, pJson["resolvedElementMicroversionId"], "QString", "QString");
    
    ::OpenAPI::setValue(&revision, pJson["revision"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&sketch_ids, pJson["sketchIds"], "QList", "QString");
    ::OpenAPI::setValue(&target_configuration, pJson["targetConfiguration"], "QString", "QString");
    
    ::OpenAPI::setValue(&target_document_id, pJson["targetDocumentId"], "QString", "QString");
    
    ::OpenAPI::setValue(&target_document_microversion_id, pJson["targetDocumentMicroversionId"], "QString", "QString");
    
    ::OpenAPI::setValue(&target_element_id, pJson["targetElementId"], "QString", "QString");
    
    ::OpenAPI::setValue(&target_element_microversion_id, pJson["targetElementMicroversionId"], "QString", "QString");
    
    ::OpenAPI::setValue(&target_version_id, pJson["targetVersionId"], "QString", "QString");
    
    ::OpenAPI::setValue(&track_new_versions, pJson["trackNewVersions"], "bool", "");
    
}

QString
OAIBTAppElementReferenceResolveInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTAppElementReferenceResolveInfo::asJsonObject() {
    QJsonObject obj;
    if(change_id != nullptr && *change_id != QString("")){
        toJsonValue(QString("changeId"), change_id, obj, QString("QString"));
    }
    if(m_error_code_isSet){
        obj.insert("errorCode", QJsonValue(error_code));
    }
    if(error_description != nullptr && *error_description != QString("")){
        toJsonValue(QString("errorDescription"), error_description, obj, QString("QString"));
    }
    if(error_value != nullptr && *error_value != QString("")){
        toJsonValue(QString("errorValue"), error_value, obj, QString("QString"));
    }
    if(id_tag != nullptr && *id_tag != QString("")){
        toJsonValue(QString("idTag"), id_tag, obj, QString("QString"));
    }
    if(m_id_tag_is_valid_isSet){
        obj.insert("idTagIsValid", QJsonValue(id_tag_is_valid));
    }
    if(m_is_configurable_isSet){
        obj.insert("isConfigurable", QJsonValue(is_configurable));
    }
    if(m_is_flattened_part_isSet){
        obj.insert("isFlattenedPart", QJsonValue(is_flattened_part));
    }
    if(m_is_sketch_only_isSet){
        obj.insert("isSketchOnly", QJsonValue(is_sketch_only));
    }
    if(m_is_surface_isSet){
        obj.insert("isSurface", QJsonValue(is_surface));
    }
    if(part_number != nullptr && *part_number != QString("")){
        toJsonValue(QString("partNumber"), part_number, obj, QString("QString"));
    }
    if(reference_id != nullptr && *reference_id != QString("")){
        toJsonValue(QString("referenceId"), reference_id, obj, QString("QString"));
    }
    if(m_reference_type_isSet){
        obj.insert("referenceType", QJsonValue(reference_type));
    }
    if(resolved_document_microversion_id != nullptr && *resolved_document_microversion_id != QString("")){
        toJsonValue(QString("resolvedDocumentMicroversionId"), resolved_document_microversion_id, obj, QString("QString"));
    }
    if(resolved_element_microversion_id != nullptr && *resolved_element_microversion_id != QString("")){
        toJsonValue(QString("resolvedElementMicroversionId"), resolved_element_microversion_id, obj, QString("QString"));
    }
    if(revision != nullptr && *revision != QString("")){
        toJsonValue(QString("revision"), revision, obj, QString("QString"));
    }
    if(sketch_ids->size() > 0){
        toJsonArray((QList<void*>*)sketch_ids, obj, "sketchIds", "QString");
    }
    if(target_configuration != nullptr && *target_configuration != QString("")){
        toJsonValue(QString("targetConfiguration"), target_configuration, obj, QString("QString"));
    }
    if(target_document_id != nullptr && *target_document_id != QString("")){
        toJsonValue(QString("targetDocumentId"), target_document_id, obj, QString("QString"));
    }
    if(target_document_microversion_id != nullptr && *target_document_microversion_id != QString("")){
        toJsonValue(QString("targetDocumentMicroversionId"), target_document_microversion_id, obj, QString("QString"));
    }
    if(target_element_id != nullptr && *target_element_id != QString("")){
        toJsonValue(QString("targetElementId"), target_element_id, obj, QString("QString"));
    }
    if(target_element_microversion_id != nullptr && *target_element_microversion_id != QString("")){
        toJsonValue(QString("targetElementMicroversionId"), target_element_microversion_id, obj, QString("QString"));
    }
    if(target_version_id != nullptr && *target_version_id != QString("")){
        toJsonValue(QString("targetVersionId"), target_version_id, obj, QString("QString"));
    }
    if(m_track_new_versions_isSet){
        obj.insert("trackNewVersions", QJsonValue(track_new_versions));
    }

    return obj;
}

QString*
OAIBTAppElementReferenceResolveInfo::getChangeId() {
    return change_id;
}
void
OAIBTAppElementReferenceResolveInfo::setChangeId(QString* change_id) {
    this->change_id = change_id;
    this->m_change_id_isSet = true;
}

qint32
OAIBTAppElementReferenceResolveInfo::getErrorCode() {
    return error_code;
}
void
OAIBTAppElementReferenceResolveInfo::setErrorCode(qint32 error_code) {
    this->error_code = error_code;
    this->m_error_code_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getErrorDescription() {
    return error_description;
}
void
OAIBTAppElementReferenceResolveInfo::setErrorDescription(QString* error_description) {
    this->error_description = error_description;
    this->m_error_description_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getErrorValue() {
    return error_value;
}
void
OAIBTAppElementReferenceResolveInfo::setErrorValue(QString* error_value) {
    this->error_value = error_value;
    this->m_error_value_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getIdTag() {
    return id_tag;
}
void
OAIBTAppElementReferenceResolveInfo::setIdTag(QString* id_tag) {
    this->id_tag = id_tag;
    this->m_id_tag_isSet = true;
}

bool
OAIBTAppElementReferenceResolveInfo::isIdTagIsValid() {
    return id_tag_is_valid;
}
void
OAIBTAppElementReferenceResolveInfo::setIdTagIsValid(bool id_tag_is_valid) {
    this->id_tag_is_valid = id_tag_is_valid;
    this->m_id_tag_is_valid_isSet = true;
}

bool
OAIBTAppElementReferenceResolveInfo::isIsConfigurable() {
    return is_configurable;
}
void
OAIBTAppElementReferenceResolveInfo::setIsConfigurable(bool is_configurable) {
    this->is_configurable = is_configurable;
    this->m_is_configurable_isSet = true;
}

bool
OAIBTAppElementReferenceResolveInfo::isIsFlattenedPart() {
    return is_flattened_part;
}
void
OAIBTAppElementReferenceResolveInfo::setIsFlattenedPart(bool is_flattened_part) {
    this->is_flattened_part = is_flattened_part;
    this->m_is_flattened_part_isSet = true;
}

bool
OAIBTAppElementReferenceResolveInfo::isIsSketchOnly() {
    return is_sketch_only;
}
void
OAIBTAppElementReferenceResolveInfo::setIsSketchOnly(bool is_sketch_only) {
    this->is_sketch_only = is_sketch_only;
    this->m_is_sketch_only_isSet = true;
}

bool
OAIBTAppElementReferenceResolveInfo::isIsSurface() {
    return is_surface;
}
void
OAIBTAppElementReferenceResolveInfo::setIsSurface(bool is_surface) {
    this->is_surface = is_surface;
    this->m_is_surface_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getPartNumber() {
    return part_number;
}
void
OAIBTAppElementReferenceResolveInfo::setPartNumber(QString* part_number) {
    this->part_number = part_number;
    this->m_part_number_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getReferenceId() {
    return reference_id;
}
void
OAIBTAppElementReferenceResolveInfo::setReferenceId(QString* reference_id) {
    this->reference_id = reference_id;
    this->m_reference_id_isSet = true;
}

qint32
OAIBTAppElementReferenceResolveInfo::getReferenceType() {
    return reference_type;
}
void
OAIBTAppElementReferenceResolveInfo::setReferenceType(qint32 reference_type) {
    this->reference_type = reference_type;
    this->m_reference_type_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getResolvedDocumentMicroversionId() {
    return resolved_document_microversion_id;
}
void
OAIBTAppElementReferenceResolveInfo::setResolvedDocumentMicroversionId(QString* resolved_document_microversion_id) {
    this->resolved_document_microversion_id = resolved_document_microversion_id;
    this->m_resolved_document_microversion_id_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getResolvedElementMicroversionId() {
    return resolved_element_microversion_id;
}
void
OAIBTAppElementReferenceResolveInfo::setResolvedElementMicroversionId(QString* resolved_element_microversion_id) {
    this->resolved_element_microversion_id = resolved_element_microversion_id;
    this->m_resolved_element_microversion_id_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getRevision() {
    return revision;
}
void
OAIBTAppElementReferenceResolveInfo::setRevision(QString* revision) {
    this->revision = revision;
    this->m_revision_isSet = true;
}

QList<QString*>*
OAIBTAppElementReferenceResolveInfo::getSketchIds() {
    return sketch_ids;
}
void
OAIBTAppElementReferenceResolveInfo::setSketchIds(QList<QString*>* sketch_ids) {
    this->sketch_ids = sketch_ids;
    this->m_sketch_ids_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getTargetConfiguration() {
    return target_configuration;
}
void
OAIBTAppElementReferenceResolveInfo::setTargetConfiguration(QString* target_configuration) {
    this->target_configuration = target_configuration;
    this->m_target_configuration_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getTargetDocumentId() {
    return target_document_id;
}
void
OAIBTAppElementReferenceResolveInfo::setTargetDocumentId(QString* target_document_id) {
    this->target_document_id = target_document_id;
    this->m_target_document_id_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getTargetDocumentMicroversionId() {
    return target_document_microversion_id;
}
void
OAIBTAppElementReferenceResolveInfo::setTargetDocumentMicroversionId(QString* target_document_microversion_id) {
    this->target_document_microversion_id = target_document_microversion_id;
    this->m_target_document_microversion_id_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getTargetElementId() {
    return target_element_id;
}
void
OAIBTAppElementReferenceResolveInfo::setTargetElementId(QString* target_element_id) {
    this->target_element_id = target_element_id;
    this->m_target_element_id_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getTargetElementMicroversionId() {
    return target_element_microversion_id;
}
void
OAIBTAppElementReferenceResolveInfo::setTargetElementMicroversionId(QString* target_element_microversion_id) {
    this->target_element_microversion_id = target_element_microversion_id;
    this->m_target_element_microversion_id_isSet = true;
}

QString*
OAIBTAppElementReferenceResolveInfo::getTargetVersionId() {
    return target_version_id;
}
void
OAIBTAppElementReferenceResolveInfo::setTargetVersionId(QString* target_version_id) {
    this->target_version_id = target_version_id;
    this->m_target_version_id_isSet = true;
}

bool
OAIBTAppElementReferenceResolveInfo::isTrackNewVersions() {
    return track_new_versions;
}
void
OAIBTAppElementReferenceResolveInfo::setTrackNewVersions(bool track_new_versions) {
    this->track_new_versions = track_new_versions;
    this->m_track_new_versions_isSet = true;
}


bool
OAIBTAppElementReferenceResolveInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(change_id != nullptr && *change_id != QString("")){ isObjectUpdated = true; break;}
        if(m_error_code_isSet){ isObjectUpdated = true; break;}
        if(error_description != nullptr && *error_description != QString("")){ isObjectUpdated = true; break;}
        if(error_value != nullptr && *error_value != QString("")){ isObjectUpdated = true; break;}
        if(id_tag != nullptr && *id_tag != QString("")){ isObjectUpdated = true; break;}
        if(m_id_tag_is_valid_isSet){ isObjectUpdated = true; break;}
        if(m_is_configurable_isSet){ isObjectUpdated = true; break;}
        if(m_is_flattened_part_isSet){ isObjectUpdated = true; break;}
        if(m_is_sketch_only_isSet){ isObjectUpdated = true; break;}
        if(m_is_surface_isSet){ isObjectUpdated = true; break;}
        if(part_number != nullptr && *part_number != QString("")){ isObjectUpdated = true; break;}
        if(reference_id != nullptr && *reference_id != QString("")){ isObjectUpdated = true; break;}
        if(m_reference_type_isSet){ isObjectUpdated = true; break;}
        if(resolved_document_microversion_id != nullptr && *resolved_document_microversion_id != QString("")){ isObjectUpdated = true; break;}
        if(resolved_element_microversion_id != nullptr && *resolved_element_microversion_id != QString("")){ isObjectUpdated = true; break;}
        if(revision != nullptr && *revision != QString("")){ isObjectUpdated = true; break;}
        if(sketch_ids->size() > 0){ isObjectUpdated = true; break;}
        if(target_configuration != nullptr && *target_configuration != QString("")){ isObjectUpdated = true; break;}
        if(target_document_id != nullptr && *target_document_id != QString("")){ isObjectUpdated = true; break;}
        if(target_document_microversion_id != nullptr && *target_document_microversion_id != QString("")){ isObjectUpdated = true; break;}
        if(target_element_id != nullptr && *target_element_id != QString("")){ isObjectUpdated = true; break;}
        if(target_element_microversion_id != nullptr && *target_element_microversion_id != QString("")){ isObjectUpdated = true; break;}
        if(target_version_id != nullptr && *target_version_id != QString("")){ isObjectUpdated = true; break;}
        if(m_track_new_versions_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

