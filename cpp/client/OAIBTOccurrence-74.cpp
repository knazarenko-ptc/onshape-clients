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


#include "OAIBTOccurrence-74.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTOccurrence-74::OAIBTOccurrence-74(QString json) {
    init();
    this->fromJson(json);
}

OAIBTOccurrence-74::OAIBTOccurrence-74() {
    init();
}

OAIBTOccurrence-74::~OAIBTOccurrence-74() {
    this->cleanup();
}

void
OAIBTOccurrence-74::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    full_path_as_string = new QString("");
    m_full_path_as_string_isSet = false;
    head_instance_id = new QString("");
    m_head_instance_id_isSet = false;
    occurrence_without_head = new OAIBTOccurrence-74();
    m_occurrence_without_head_isSet = false;
    occurrence_without_tail = new OAIBTOccurrence-74();
    m_occurrence_without_tail_isSet = false;
    parent = new OAIBTOccurrence-74();
    m_parent_isSet = false;
    path = new QList<QString*>();
    m_path_isSet = false;
    pattern_descendant = false;
    m_pattern_descendant_isSet = false;
    root_occurrence = false;
    m_root_occurrence_isSet = false;
    tail_instance_id = new QString("");
    m_tail_instance_id_isSet = false;
}

void
OAIBTOccurrence-74::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(full_path_as_string != nullptr) { 
        delete full_path_as_string;
    }
    if(head_instance_id != nullptr) { 
        delete head_instance_id;
    }
    if(occurrence_without_head != nullptr) { 
        delete occurrence_without_head;
    }
    if(occurrence_without_tail != nullptr) { 
        delete occurrence_without_tail;
    }
    if(parent != nullptr) { 
        delete parent;
    }
    if(path != nullptr) { 
        auto arr = path;
        for(auto o: *arr) { 
            delete o;
        }
        delete path;
    }


    if(tail_instance_id != nullptr) { 
        delete tail_instance_id;
    }
}

OAIBTOccurrence-74*
OAIBTOccurrence-74::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTOccurrence-74::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&full_path_as_string, pJson["fullPathAsString"], "QString", "QString");
    
    ::OpenAPI::setValue(&head_instance_id, pJson["headInstanceId"], "QString", "QString");
    
    ::OpenAPI::setValue(&occurrence_without_head, pJson["occurrenceWithoutHead"], "OAIBTOccurrence-74", "OAIBTOccurrence-74");
    
    ::OpenAPI::setValue(&occurrence_without_tail, pJson["occurrenceWithoutTail"], "OAIBTOccurrence-74", "OAIBTOccurrence-74");
    
    ::OpenAPI::setValue(&parent, pJson["parent"], "OAIBTOccurrence-74", "OAIBTOccurrence-74");
    
    
    ::OpenAPI::setValue(&path, pJson["path"], "QList", "QString");
    ::OpenAPI::setValue(&pattern_descendant, pJson["patternDescendant"], "bool", "");
    
    ::OpenAPI::setValue(&root_occurrence, pJson["rootOccurrence"], "bool", "");
    
    ::OpenAPI::setValue(&tail_instance_id, pJson["tailInstanceId"], "QString", "QString");
    
}

QString
OAIBTOccurrence-74::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTOccurrence-74::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(full_path_as_string != nullptr && *full_path_as_string != QString("")){
        toJsonValue(QString("fullPathAsString"), full_path_as_string, obj, QString("QString"));
    }
    if(head_instance_id != nullptr && *head_instance_id != QString("")){
        toJsonValue(QString("headInstanceId"), head_instance_id, obj, QString("QString"));
    }
    if((occurrence_without_head != nullptr) && (occurrence_without_head->isSet())){
        toJsonValue(QString("occurrenceWithoutHead"), occurrence_without_head, obj, QString("OAIBTOccurrence-74"));
    }
    if((occurrence_without_tail != nullptr) && (occurrence_without_tail->isSet())){
        toJsonValue(QString("occurrenceWithoutTail"), occurrence_without_tail, obj, QString("OAIBTOccurrence-74"));
    }
    if((parent != nullptr) && (parent->isSet())){
        toJsonValue(QString("parent"), parent, obj, QString("OAIBTOccurrence-74"));
    }
    if(path->size() > 0){
        toJsonArray((QList<void*>*)path, obj, "path", "QString");
    }
    if(m_pattern_descendant_isSet){
        obj.insert("patternDescendant", QJsonValue(pattern_descendant));
    }
    if(m_root_occurrence_isSet){
        obj.insert("rootOccurrence", QJsonValue(root_occurrence));
    }
    if(tail_instance_id != nullptr && *tail_instance_id != QString("")){
        toJsonValue(QString("tailInstanceId"), tail_instance_id, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTOccurrence-74::getBtType() {
    return bt_type;
}
void
OAIBTOccurrence-74::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTOccurrence-74::getFullPathAsString() {
    return full_path_as_string;
}
void
OAIBTOccurrence-74::setFullPathAsString(QString* full_path_as_string) {
    this->full_path_as_string = full_path_as_string;
    this->m_full_path_as_string_isSet = true;
}

QString*
OAIBTOccurrence-74::getHeadInstanceId() {
    return head_instance_id;
}
void
OAIBTOccurrence-74::setHeadInstanceId(QString* head_instance_id) {
    this->head_instance_id = head_instance_id;
    this->m_head_instance_id_isSet = true;
}

OAIBTOccurrence-74*
OAIBTOccurrence-74::getOccurrenceWithoutHead() {
    return occurrence_without_head;
}
void
OAIBTOccurrence-74::setOccurrenceWithoutHead(OAIBTOccurrence-74* occurrence_without_head) {
    this->occurrence_without_head = occurrence_without_head;
    this->m_occurrence_without_head_isSet = true;
}

OAIBTOccurrence-74*
OAIBTOccurrence-74::getOccurrenceWithoutTail() {
    return occurrence_without_tail;
}
void
OAIBTOccurrence-74::setOccurrenceWithoutTail(OAIBTOccurrence-74* occurrence_without_tail) {
    this->occurrence_without_tail = occurrence_without_tail;
    this->m_occurrence_without_tail_isSet = true;
}

OAIBTOccurrence-74*
OAIBTOccurrence-74::getParent() {
    return parent;
}
void
OAIBTOccurrence-74::setParent(OAIBTOccurrence-74* parent) {
    this->parent = parent;
    this->m_parent_isSet = true;
}

QList<QString*>*
OAIBTOccurrence-74::getPath() {
    return path;
}
void
OAIBTOccurrence-74::setPath(QList<QString*>* path) {
    this->path = path;
    this->m_path_isSet = true;
}

bool
OAIBTOccurrence-74::isPatternDescendant() {
    return pattern_descendant;
}
void
OAIBTOccurrence-74::setPatternDescendant(bool pattern_descendant) {
    this->pattern_descendant = pattern_descendant;
    this->m_pattern_descendant_isSet = true;
}

bool
OAIBTOccurrence-74::isRootOccurrence() {
    return root_occurrence;
}
void
OAIBTOccurrence-74::setRootOccurrence(bool root_occurrence) {
    this->root_occurrence = root_occurrence;
    this->m_root_occurrence_isSet = true;
}

QString*
OAIBTOccurrence-74::getTailInstanceId() {
    return tail_instance_id;
}
void
OAIBTOccurrence-74::setTailInstanceId(QString* tail_instance_id) {
    this->tail_instance_id = tail_instance_id;
    this->m_tail_instance_id_isSet = true;
}


bool
OAIBTOccurrence-74::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(full_path_as_string != nullptr && *full_path_as_string != QString("")){ isObjectUpdated = true; break;}
        if(head_instance_id != nullptr && *head_instance_id != QString("")){ isObjectUpdated = true; break;}
        if(occurrence_without_head != nullptr && occurrence_without_head->isSet()){ isObjectUpdated = true; break;}
        if(occurrence_without_tail != nullptr && occurrence_without_tail->isSet()){ isObjectUpdated = true; break;}
        if(parent != nullptr && parent->isSet()){ isObjectUpdated = true; break;}
        if(path->size() > 0){ isObjectUpdated = true; break;}
        if(m_pattern_descendant_isSet){ isObjectUpdated = true; break;}
        if(m_root_occurrence_isSet){ isObjectUpdated = true; break;}
        if(tail_instance_id != nullptr && *tail_instance_id != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

