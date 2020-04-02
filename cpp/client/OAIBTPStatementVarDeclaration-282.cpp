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


#include "OAIBTPStatementVarDeclaration-282.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTPStatementVarDeclaration-282::OAIBTPStatementVarDeclaration-282(QString json) {
    init();
    this->fromJson(json);
}

OAIBTPStatementVarDeclaration-282::OAIBTPStatementVarDeclaration-282() {
    init();
}

OAIBTPStatementVarDeclaration-282::~OAIBTPStatementVarDeclaration-282() {
    this->cleanup();
}

void
OAIBTPStatementVarDeclaration-282::init() {
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
    standard_type = new QString("");
    m_standard_type_isSet = false;
    type_name = new QString("");
    m_type_name_isSet = false;
    name = new OAIBTPIdentifier-8();
    m_name_isSet = false;
    type = new OAIBTPTypeName-290();
    m_type_isSet = false;
    value = new OAIBTPExpression-9();
    m_value_isSet = false;
}

void
OAIBTPStatementVarDeclaration-282::cleanup() {

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
    if(standard_type != nullptr) { 
        delete standard_type;
    }
    if(type_name != nullptr) { 
        delete type_name;
    }
    if(name != nullptr) { 
        delete name;
    }
    if(type != nullptr) { 
        delete type;
    }
    if(value != nullptr) { 
        delete value;
    }
}

OAIBTPStatementVarDeclaration-282*
OAIBTPStatementVarDeclaration-282::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTPStatementVarDeclaration-282::fromJsonObject(QJsonObject pJson) {
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
    
    ::OpenAPI::setValue(&standard_type, pJson["standardType"], "QString", "QString");
    
    ::OpenAPI::setValue(&type_name, pJson["typeName"], "QString", "QString");
    
    ::OpenAPI::setValue(&name, pJson["name"], "OAIBTPIdentifier-8", "OAIBTPIdentifier-8");
    
    ::OpenAPI::setValue(&type, pJson["type"], "OAIBTPTypeName-290", "OAIBTPTypeName-290");
    
    ::OpenAPI::setValue(&value, pJson["value"], "OAIBTPExpression-9", "OAIBTPExpression-9");
    
}

QString
OAIBTPStatementVarDeclaration-282::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTPStatementVarDeclaration-282::asJsonObject() {
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
    if(standard_type != nullptr && *standard_type != QString("")){
        toJsonValue(QString("standardType"), standard_type, obj, QString("QString"));
    }
    if(type_name != nullptr && *type_name != QString("")){
        toJsonValue(QString("typeName"), type_name, obj, QString("QString"));
    }
    if((name != nullptr) && (name->isSet())){
        toJsonValue(QString("name"), name, obj, QString("OAIBTPIdentifier-8"));
    }
    if((type != nullptr) && (type->isSet())){
        toJsonValue(QString("type"), type, obj, QString("OAIBTPTypeName-290"));
    }
    if((value != nullptr) && (value->isSet())){
        toJsonValue(QString("value"), value, obj, QString("OAIBTPExpression-9"));
    }

    return obj;
}

bool
OAIBTPStatementVarDeclaration-282::isAtomic() {
    return atomic;
}
void
OAIBTPStatementVarDeclaration-282::setAtomic(bool atomic) {
    this->atomic = atomic;
    this->m_atomic_isSet = true;
}

QString*
OAIBTPStatementVarDeclaration-282::getBtType() {
    return bt_type;
}
void
OAIBTPStatementVarDeclaration-282::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTPStatementVarDeclaration-282::getDocumentationType() {
    return documentation_type;
}
void
OAIBTPStatementVarDeclaration-282::setDocumentationType(QString* documentation_type) {
    this->documentation_type = documentation_type;
    this->m_documentation_type_isSet = true;
}

qint32
OAIBTPStatementVarDeclaration-282::getEndSourceLocation() {
    return end_source_location;
}
void
OAIBTPStatementVarDeclaration-282::setEndSourceLocation(qint32 end_source_location) {
    this->end_source_location = end_source_location;
    this->m_end_source_location_isSet = true;
}

QString*
OAIBTPStatementVarDeclaration-282::getNodeId() {
    return node_id;
}
void
OAIBTPStatementVarDeclaration-282::setNodeId(QString* node_id) {
    this->node_id = node_id;
    this->m_node_id_isSet = true;
}

QString*
OAIBTPStatementVarDeclaration-282::getShortDescriptor() {
    return short_descriptor;
}
void
OAIBTPStatementVarDeclaration-282::setShortDescriptor(QString* short_descriptor) {
    this->short_descriptor = short_descriptor;
    this->m_short_descriptor_isSet = true;
}

OAIBTPSpace-10*
OAIBTPStatementVarDeclaration-282::getSpaceAfter() {
    return space_after;
}
void
OAIBTPStatementVarDeclaration-282::setSpaceAfter(OAIBTPSpace-10* space_after) {
    this->space_after = space_after;
    this->m_space_after_isSet = true;
}

OAIBTPSpace-10*
OAIBTPStatementVarDeclaration-282::getSpaceBefore() {
    return space_before;
}
void
OAIBTPStatementVarDeclaration-282::setSpaceBefore(OAIBTPSpace-10* space_before) {
    this->space_before = space_before;
    this->m_space_before_isSet = true;
}

bool
OAIBTPStatementVarDeclaration-282::isSpaceDefault() {
    return space_default;
}
void
OAIBTPStatementVarDeclaration-282::setSpaceDefault(bool space_default) {
    this->space_default = space_default;
    this->m_space_default_isSet = true;
}

qint32
OAIBTPStatementVarDeclaration-282::getStartSourceLocation() {
    return start_source_location;
}
void
OAIBTPStatementVarDeclaration-282::setStartSourceLocation(qint32 start_source_location) {
    this->start_source_location = start_source_location;
    this->m_start_source_location_isSet = true;
}

OAIBTPAnnotation-231*
OAIBTPStatementVarDeclaration-282::getAnnotation() {
    return annotation;
}
void
OAIBTPStatementVarDeclaration-282::setAnnotation(OAIBTPAnnotation-231* annotation) {
    this->annotation = annotation;
    this->m_annotation_isSet = true;
}

QString*
OAIBTPStatementVarDeclaration-282::getStandardType() {
    return standard_type;
}
void
OAIBTPStatementVarDeclaration-282::setStandardType(QString* standard_type) {
    this->standard_type = standard_type;
    this->m_standard_type_isSet = true;
}

QString*
OAIBTPStatementVarDeclaration-282::getTypeName() {
    return type_name;
}
void
OAIBTPStatementVarDeclaration-282::setTypeName(QString* type_name) {
    this->type_name = type_name;
    this->m_type_name_isSet = true;
}

OAIBTPIdentifier-8*
OAIBTPStatementVarDeclaration-282::getName() {
    return name;
}
void
OAIBTPStatementVarDeclaration-282::setName(OAIBTPIdentifier-8* name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIBTPTypeName-290*
OAIBTPStatementVarDeclaration-282::getType() {
    return type;
}
void
OAIBTPStatementVarDeclaration-282::setType(OAIBTPTypeName-290* type) {
    this->type = type;
    this->m_type_isSet = true;
}

OAIBTPExpression-9*
OAIBTPStatementVarDeclaration-282::getValue() {
    return value;
}
void
OAIBTPStatementVarDeclaration-282::setValue(OAIBTPExpression-9* value) {
    this->value = value;
    this->m_value_isSet = true;
}


bool
OAIBTPStatementVarDeclaration-282::isSet(){
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
        if(standard_type != nullptr && *standard_type != QString("")){ isObjectUpdated = true; break;}
        if(type_name != nullptr && *type_name != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && name->isSet()){ isObjectUpdated = true; break;}
        if(type != nullptr && type->isSet()){ isObjectUpdated = true; break;}
        if(value != nullptr && value->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

