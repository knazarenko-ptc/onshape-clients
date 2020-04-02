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


#include "OAIBTPTopLevelUserTypeDeclaration-288.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTPTopLevelUserTypeDeclaration-288::OAIBTPTopLevelUserTypeDeclaration-288(QString json) {
    init();
    this->fromJson(json);
}

OAIBTPTopLevelUserTypeDeclaration-288::OAIBTPTopLevelUserTypeDeclaration-288() {
    init();
}

OAIBTPTopLevelUserTypeDeclaration-288::~OAIBTPTopLevelUserTypeDeclaration-288() {
    this->cleanup();
}

void
OAIBTPTopLevelUserTypeDeclaration-288::init() {
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
    deprecated = false;
    m_deprecated_isSet = false;
    symbol_name = new OAIBTPIdentifier-8();
    m_symbol_name_isSet = false;
    arguments_to_document = new QList<OAIBTPArgumentDeclaration-232*>();
    m_arguments_to_document_isSet = false;
    deprecated_explanation = new QString("");
    m_deprecated_explanation_isSet = false;
    for_export = false;
    m_for_export_isSet = false;
    space_after_export = new OAIBTPSpace-10();
    m_space_after_export_isSet = false;
    annotation = new OAIBTPAnnotation-231();
    m_annotation_isSet = false;
    space_after_version = new OAIBTPSpace-10();
    m_space_after_version_isSet = false;
    version = new OAIBTPLiteralNumber-258();
    m_version_isSet = false;
    name = new OAIBTPIdentifier-8();
    m_name_isSet = false;
    typecheck = new OAIBTPName-261();
    m_typecheck_isSet = false;
}

void
OAIBTPTopLevelUserTypeDeclaration-288::cleanup() {

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



    if(symbol_name != nullptr) { 
        delete symbol_name;
    }
    if(arguments_to_document != nullptr) { 
        auto arr = arguments_to_document;
        for(auto o: *arr) { 
            delete o;
        }
        delete arguments_to_document;
    }
    if(deprecated_explanation != nullptr) { 
        delete deprecated_explanation;
    }

    if(space_after_export != nullptr) { 
        delete space_after_export;
    }
    if(annotation != nullptr) { 
        delete annotation;
    }
    if(space_after_version != nullptr) { 
        delete space_after_version;
    }
    if(version != nullptr) { 
        delete version;
    }
    if(name != nullptr) { 
        delete name;
    }
    if(typecheck != nullptr) { 
        delete typecheck;
    }
}

OAIBTPTopLevelUserTypeDeclaration-288*
OAIBTPTopLevelUserTypeDeclaration-288::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTPTopLevelUserTypeDeclaration-288::fromJsonObject(QJsonObject pJson) {
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
    
    ::OpenAPI::setValue(&deprecated, pJson["deprecated"], "bool", "");
    
    ::OpenAPI::setValue(&symbol_name, pJson["symbolName"], "OAIBTPIdentifier-8", "OAIBTPIdentifier-8");
    
    
    ::OpenAPI::setValue(&arguments_to_document, pJson["argumentsToDocument"], "QList", "OAIBTPArgumentDeclaration-232");
    ::OpenAPI::setValue(&deprecated_explanation, pJson["deprecatedExplanation"], "QString", "QString");
    
    ::OpenAPI::setValue(&for_export, pJson["forExport"], "bool", "");
    
    ::OpenAPI::setValue(&space_after_export, pJson["spaceAfterExport"], "OAIBTPSpace-10", "OAIBTPSpace-10");
    
    ::OpenAPI::setValue(&annotation, pJson["annotation"], "OAIBTPAnnotation-231", "OAIBTPAnnotation-231");
    
    ::OpenAPI::setValue(&space_after_version, pJson["spaceAfterVersion"], "OAIBTPSpace-10", "OAIBTPSpace-10");
    
    ::OpenAPI::setValue(&version, pJson["version"], "OAIBTPLiteralNumber-258", "OAIBTPLiteralNumber-258");
    
    ::OpenAPI::setValue(&name, pJson["name"], "OAIBTPIdentifier-8", "OAIBTPIdentifier-8");
    
    ::OpenAPI::setValue(&typecheck, pJson["typecheck"], "OAIBTPName-261", "OAIBTPName-261");
    
}

QString
OAIBTPTopLevelUserTypeDeclaration-288::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTPTopLevelUserTypeDeclaration-288::asJsonObject() {
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
    if(m_deprecated_isSet){
        obj.insert("deprecated", QJsonValue(deprecated));
    }
    if((symbol_name != nullptr) && (symbol_name->isSet())){
        toJsonValue(QString("symbolName"), symbol_name, obj, QString("OAIBTPIdentifier-8"));
    }
    if(arguments_to_document->size() > 0){
        toJsonArray((QList<void*>*)arguments_to_document, obj, "argumentsToDocument", "OAIBTPArgumentDeclaration-232");
    }
    if(deprecated_explanation != nullptr && *deprecated_explanation != QString("")){
        toJsonValue(QString("deprecatedExplanation"), deprecated_explanation, obj, QString("QString"));
    }
    if(m_for_export_isSet){
        obj.insert("forExport", QJsonValue(for_export));
    }
    if((space_after_export != nullptr) && (space_after_export->isSet())){
        toJsonValue(QString("spaceAfterExport"), space_after_export, obj, QString("OAIBTPSpace-10"));
    }
    if((annotation != nullptr) && (annotation->isSet())){
        toJsonValue(QString("annotation"), annotation, obj, QString("OAIBTPAnnotation-231"));
    }
    if((space_after_version != nullptr) && (space_after_version->isSet())){
        toJsonValue(QString("spaceAfterVersion"), space_after_version, obj, QString("OAIBTPSpace-10"));
    }
    if((version != nullptr) && (version->isSet())){
        toJsonValue(QString("version"), version, obj, QString("OAIBTPLiteralNumber-258"));
    }
    if((name != nullptr) && (name->isSet())){
        toJsonValue(QString("name"), name, obj, QString("OAIBTPIdentifier-8"));
    }
    if((typecheck != nullptr) && (typecheck->isSet())){
        toJsonValue(QString("typecheck"), typecheck, obj, QString("OAIBTPName-261"));
    }

    return obj;
}

bool
OAIBTPTopLevelUserTypeDeclaration-288::isAtomic() {
    return atomic;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setAtomic(bool atomic) {
    this->atomic = atomic;
    this->m_atomic_isSet = true;
}

QString*
OAIBTPTopLevelUserTypeDeclaration-288::getBtType() {
    return bt_type;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTPTopLevelUserTypeDeclaration-288::getDocumentationType() {
    return documentation_type;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setDocumentationType(QString* documentation_type) {
    this->documentation_type = documentation_type;
    this->m_documentation_type_isSet = true;
}

qint32
OAIBTPTopLevelUserTypeDeclaration-288::getEndSourceLocation() {
    return end_source_location;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setEndSourceLocation(qint32 end_source_location) {
    this->end_source_location = end_source_location;
    this->m_end_source_location_isSet = true;
}

QString*
OAIBTPTopLevelUserTypeDeclaration-288::getNodeId() {
    return node_id;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setNodeId(QString* node_id) {
    this->node_id = node_id;
    this->m_node_id_isSet = true;
}

QString*
OAIBTPTopLevelUserTypeDeclaration-288::getShortDescriptor() {
    return short_descriptor;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setShortDescriptor(QString* short_descriptor) {
    this->short_descriptor = short_descriptor;
    this->m_short_descriptor_isSet = true;
}

OAIBTPSpace-10*
OAIBTPTopLevelUserTypeDeclaration-288::getSpaceAfter() {
    return space_after;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setSpaceAfter(OAIBTPSpace-10* space_after) {
    this->space_after = space_after;
    this->m_space_after_isSet = true;
}

OAIBTPSpace-10*
OAIBTPTopLevelUserTypeDeclaration-288::getSpaceBefore() {
    return space_before;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setSpaceBefore(OAIBTPSpace-10* space_before) {
    this->space_before = space_before;
    this->m_space_before_isSet = true;
}

bool
OAIBTPTopLevelUserTypeDeclaration-288::isSpaceDefault() {
    return space_default;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setSpaceDefault(bool space_default) {
    this->space_default = space_default;
    this->m_space_default_isSet = true;
}

qint32
OAIBTPTopLevelUserTypeDeclaration-288::getStartSourceLocation() {
    return start_source_location;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setStartSourceLocation(qint32 start_source_location) {
    this->start_source_location = start_source_location;
    this->m_start_source_location_isSet = true;
}

bool
OAIBTPTopLevelUserTypeDeclaration-288::isDeprecated() {
    return deprecated;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setDeprecated(bool deprecated) {
    this->deprecated = deprecated;
    this->m_deprecated_isSet = true;
}

OAIBTPIdentifier-8*
OAIBTPTopLevelUserTypeDeclaration-288::getSymbolName() {
    return symbol_name;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setSymbolName(OAIBTPIdentifier-8* symbol_name) {
    this->symbol_name = symbol_name;
    this->m_symbol_name_isSet = true;
}

QList<OAIBTPArgumentDeclaration-232*>*
OAIBTPTopLevelUserTypeDeclaration-288::getArgumentsToDocument() {
    return arguments_to_document;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setArgumentsToDocument(QList<OAIBTPArgumentDeclaration-232*>* arguments_to_document) {
    this->arguments_to_document = arguments_to_document;
    this->m_arguments_to_document_isSet = true;
}

QString*
OAIBTPTopLevelUserTypeDeclaration-288::getDeprecatedExplanation() {
    return deprecated_explanation;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setDeprecatedExplanation(QString* deprecated_explanation) {
    this->deprecated_explanation = deprecated_explanation;
    this->m_deprecated_explanation_isSet = true;
}

bool
OAIBTPTopLevelUserTypeDeclaration-288::isForExport() {
    return for_export;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setForExport(bool for_export) {
    this->for_export = for_export;
    this->m_for_export_isSet = true;
}

OAIBTPSpace-10*
OAIBTPTopLevelUserTypeDeclaration-288::getSpaceAfterExport() {
    return space_after_export;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setSpaceAfterExport(OAIBTPSpace-10* space_after_export) {
    this->space_after_export = space_after_export;
    this->m_space_after_export_isSet = true;
}

OAIBTPAnnotation-231*
OAIBTPTopLevelUserTypeDeclaration-288::getAnnotation() {
    return annotation;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setAnnotation(OAIBTPAnnotation-231* annotation) {
    this->annotation = annotation;
    this->m_annotation_isSet = true;
}

OAIBTPSpace-10*
OAIBTPTopLevelUserTypeDeclaration-288::getSpaceAfterVersion() {
    return space_after_version;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setSpaceAfterVersion(OAIBTPSpace-10* space_after_version) {
    this->space_after_version = space_after_version;
    this->m_space_after_version_isSet = true;
}

OAIBTPLiteralNumber-258*
OAIBTPTopLevelUserTypeDeclaration-288::getVersion() {
    return version;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setVersion(OAIBTPLiteralNumber-258* version) {
    this->version = version;
    this->m_version_isSet = true;
}

OAIBTPIdentifier-8*
OAIBTPTopLevelUserTypeDeclaration-288::getName() {
    return name;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setName(OAIBTPIdentifier-8* name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIBTPName-261*
OAIBTPTopLevelUserTypeDeclaration-288::getTypecheck() {
    return typecheck;
}
void
OAIBTPTopLevelUserTypeDeclaration-288::setTypecheck(OAIBTPName-261* typecheck) {
    this->typecheck = typecheck;
    this->m_typecheck_isSet = true;
}


bool
OAIBTPTopLevelUserTypeDeclaration-288::isSet(){
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
        if(m_deprecated_isSet){ isObjectUpdated = true; break;}
        if(symbol_name != nullptr && symbol_name->isSet()){ isObjectUpdated = true; break;}
        if(arguments_to_document->size() > 0){ isObjectUpdated = true; break;}
        if(deprecated_explanation != nullptr && *deprecated_explanation != QString("")){ isObjectUpdated = true; break;}
        if(m_for_export_isSet){ isObjectUpdated = true; break;}
        if(space_after_export != nullptr && space_after_export->isSet()){ isObjectUpdated = true; break;}
        if(annotation != nullptr && annotation->isSet()){ isObjectUpdated = true; break;}
        if(space_after_version != nullptr && space_after_version->isSet()){ isObjectUpdated = true; break;}
        if(version != nullptr && version->isSet()){ isObjectUpdated = true; break;}
        if(name != nullptr && name->isSet()){ isObjectUpdated = true; break;}
        if(typecheck != nullptr && typecheck->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

