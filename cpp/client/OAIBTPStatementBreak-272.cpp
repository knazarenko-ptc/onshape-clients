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


#include "OAIBTPStatementBreak-272.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTPStatementBreak-272::OAIBTPStatementBreak-272(QString json) {
    init();
    this->fromJson(json);
}

OAIBTPStatementBreak-272::OAIBTPStatementBreak-272() {
    init();
}

OAIBTPStatementBreak-272::~OAIBTPStatementBreak-272() {
    this->cleanup();
}

void
OAIBTPStatementBreak-272::init() {
    atomic = false;
    m_atomic_isSet = false;
    bt_type = new QString("");
    m_bt_type_isSet = false;
    documentation_type = new QString("");
    m_documentation_type_isSet = false;
    end_source_location = 0;
    m_end_source_location_isSet = false;
    node_id = new QString("");
    m_node_id_isSet = false;
    short_descriptor = new QString("");
    m_short_descriptor_isSet = false;
    space_after = new OAIBTPSpace-10();
    m_space_after_isSet = false;
    space_before = new OAIBTPSpace-10();
    m_space_before_isSet = false;
    space_default = false;
    m_space_default_isSet = false;
    start_source_location = 0;
    m_start_source_location_isSet = false;
    annotation = new OAIBTPAnnotation-231();
    m_annotation_isSet = false;
    space_after_break = new OAIBTPSpace-10();
    m_space_after_break_isSet = false;
}

void
OAIBTPStatementBreak-272::cleanup() {

    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(documentation_type != nullptr) { 
        delete documentation_type;
    }

    if(node_id != nullptr) { 
        delete node_id;
    }
    if(short_descriptor != nullptr) { 
        delete short_descriptor;
    }
    if(space_after != nullptr) { 
        delete space_after;
    }
    if(space_before != nullptr) { 
        delete space_before;
    }


    if(annotation != nullptr) { 
        delete annotation;
    }
    if(space_after_break != nullptr) { 
        delete space_after_break;
    }
}

OAIBTPStatementBreak-272*
OAIBTPStatementBreak-272::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTPStatementBreak-272::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&atomic, pJson["atomic"], "bool", "");
    
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&documentation_type, pJson["documentationType"], "QString", "QString");
    
    ::OpenAPI::setValue(&end_source_location, pJson["endSourceLocation"], "qint32", "");
    
    ::OpenAPI::setValue(&node_id, pJson["nodeId"], "QString", "QString");
    
    ::OpenAPI::setValue(&short_descriptor, pJson["shortDescriptor"], "QString", "QString");
    
    ::OpenAPI::setValue(&space_after, pJson["spaceAfter"], "OAIBTPSpace-10", "OAIBTPSpace-10");
    
    ::OpenAPI::setValue(&space_before, pJson["spaceBefore"], "OAIBTPSpace-10", "OAIBTPSpace-10");
    
    ::OpenAPI::setValue(&space_default, pJson["spaceDefault"], "bool", "");
    
    ::OpenAPI::setValue(&start_source_location, pJson["startSourceLocation"], "qint32", "");
    
    ::OpenAPI::setValue(&annotation, pJson["annotation"], "OAIBTPAnnotation-231", "OAIBTPAnnotation-231");
    
    ::OpenAPI::setValue(&space_after_break, pJson["spaceAfterBreak"], "OAIBTPSpace-10", "OAIBTPSpace-10");
    
}

QString
OAIBTPStatementBreak-272::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTPStatementBreak-272::asJsonObject() {
    QJsonObject obj;
    if(m_atomic_isSet){
        obj.insert("atomic", QJsonValue(atomic));
    }
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(documentation_type != nullptr && *documentation_type != QString("")){
        toJsonValue(QString("documentationType"), documentation_type, obj, QString("QString"));
    }
    if(m_end_source_location_isSet){
        obj.insert("endSourceLocation", QJsonValue(end_source_location));
    }
    if(node_id != nullptr && *node_id != QString("")){
        toJsonValue(QString("nodeId"), node_id, obj, QString("QString"));
    }
    if(short_descriptor != nullptr && *short_descriptor != QString("")){
        toJsonValue(QString("shortDescriptor"), short_descriptor, obj, QString("QString"));
    }
    if((space_after != nullptr) && (space_after->isSet())){
        toJsonValue(QString("spaceAfter"), space_after, obj, QString("OAIBTPSpace-10"));
    }
    if((space_before != nullptr) && (space_before->isSet())){
        toJsonValue(QString("spaceBefore"), space_before, obj, QString("OAIBTPSpace-10"));
    }
    if(m_space_default_isSet){
        obj.insert("spaceDefault", QJsonValue(space_default));
    }
    if(m_start_source_location_isSet){
        obj.insert("startSourceLocation", QJsonValue(start_source_location));
    }
    if((annotation != nullptr) && (annotation->isSet())){
        toJsonValue(QString("annotation"), annotation, obj, QString("OAIBTPAnnotation-231"));
    }
    if((space_after_break != nullptr) && (space_after_break->isSet())){
        toJsonValue(QString("spaceAfterBreak"), space_after_break, obj, QString("OAIBTPSpace-10"));
    }

    return obj;
}

bool
OAIBTPStatementBreak-272::isAtomic() {
    return atomic;
}
void
OAIBTPStatementBreak-272::setAtomic(bool atomic) {
    this->atomic = atomic;
    this->m_atomic_isSet = true;
}

QString*
OAIBTPStatementBreak-272::getBtType() {
    return bt_type;
}
void
OAIBTPStatementBreak-272::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTPStatementBreak-272::getDocumentationType() {
    return documentation_type;
}
void
OAIBTPStatementBreak-272::setDocumentationType(QString* documentation_type) {
    this->documentation_type = documentation_type;
    this->m_documentation_type_isSet = true;
}

qint32
OAIBTPStatementBreak-272::getEndSourceLocation() {
    return end_source_location;
}
void
OAIBTPStatementBreak-272::setEndSourceLocation(qint32 end_source_location) {
    this->end_source_location = end_source_location;
    this->m_end_source_location_isSet = true;
}

QString*
OAIBTPStatementBreak-272::getNodeId() {
    return node_id;
}
void
OAIBTPStatementBreak-272::setNodeId(QString* node_id) {
    this->node_id = node_id;
    this->m_node_id_isSet = true;
}

QString*
OAIBTPStatementBreak-272::getShortDescriptor() {
    return short_descriptor;
}
void
OAIBTPStatementBreak-272::setShortDescriptor(QString* short_descriptor) {
    this->short_descriptor = short_descriptor;
    this->m_short_descriptor_isSet = true;
}

OAIBTPSpace-10*
OAIBTPStatementBreak-272::getSpaceAfter() {
    return space_after;
}
void
OAIBTPStatementBreak-272::setSpaceAfter(OAIBTPSpace-10* space_after) {
    this->space_after = space_after;
    this->m_space_after_isSet = true;
}

OAIBTPSpace-10*
OAIBTPStatementBreak-272::getSpaceBefore() {
    return space_before;
}
void
OAIBTPStatementBreak-272::setSpaceBefore(OAIBTPSpace-10* space_before) {
    this->space_before = space_before;
    this->m_space_before_isSet = true;
}

bool
OAIBTPStatementBreak-272::isSpaceDefault() {
    return space_default;
}
void
OAIBTPStatementBreak-272::setSpaceDefault(bool space_default) {
    this->space_default = space_default;
    this->m_space_default_isSet = true;
}

qint32
OAIBTPStatementBreak-272::getStartSourceLocation() {
    return start_source_location;
}
void
OAIBTPStatementBreak-272::setStartSourceLocation(qint32 start_source_location) {
    this->start_source_location = start_source_location;
    this->m_start_source_location_isSet = true;
}

OAIBTPAnnotation-231*
OAIBTPStatementBreak-272::getAnnotation() {
    return annotation;
}
void
OAIBTPStatementBreak-272::setAnnotation(OAIBTPAnnotation-231* annotation) {
    this->annotation = annotation;
    this->m_annotation_isSet = true;
}

OAIBTPSpace-10*
OAIBTPStatementBreak-272::getSpaceAfterBreak() {
    return space_after_break;
}
void
OAIBTPStatementBreak-272::setSpaceAfterBreak(OAIBTPSpace-10* space_after_break) {
    this->space_after_break = space_after_break;
    this->m_space_after_break_isSet = true;
}


bool
OAIBTPStatementBreak-272::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_atomic_isSet){ isObjectUpdated = true; break;}
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(documentation_type != nullptr && *documentation_type != QString("")){ isObjectUpdated = true; break;}
        if(m_end_source_location_isSet){ isObjectUpdated = true; break;}
        if(node_id != nullptr && *node_id != QString("")){ isObjectUpdated = true; break;}
        if(short_descriptor != nullptr && *short_descriptor != QString("")){ isObjectUpdated = true; break;}
        if(space_after != nullptr && space_after->isSet()){ isObjectUpdated = true; break;}
        if(space_before != nullptr && space_before->isSet()){ isObjectUpdated = true; break;}
        if(m_space_default_isSet){ isObjectUpdated = true; break;}
        if(m_start_source_location_isSet){ isObjectUpdated = true; break;}
        if(annotation != nullptr && annotation->isSet()){ isObjectUpdated = true; break;}
        if(space_after_break != nullptr && space_after_break->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

