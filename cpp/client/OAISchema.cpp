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


#include "OAISchema.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAISchema::OAISchema(QString json) {
    init();
    this->fromJson(json);
}

OAISchema::OAISchema() {
    init();
}

OAISchema::~OAISchema() {
    this->cleanup();
}

void
OAISchema::init() {
    additional_properties = NULL;
    m_additional_properties_isSet = false;
    _default = NULL;
    m__default_isSet = false;
    deprecated = false;
    m_deprecated_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    discriminator = new OAIDiscriminator();
    m_discriminator_isSet = false;
    _enum = new QList<OAIObject*>();
    m__enum_isSet = false;
    example = NULL;
    m_example_isSet = false;
    exclusive_maximum = false;
    m_exclusive_maximum_isSet = false;
    exclusive_minimum = false;
    m_exclusive_minimum_isSet = false;
    extensions = new QMap<QString, OAIObject*>();
    m_extensions_isSet = false;
    external_docs = new OAIExternalDocumentation();
    m_external_docs_isSet = false;
    format = new QString("");
    m_format_isSet = false;
    getref = new QString("");
    m_getref_isSet = false;
    max_items = 0;
    m_max_items_isSet = false;
    max_length = 0;
    m_max_length_isSet = false;
    max_properties = 0;
    m_max_properties_isSet = false;
    maximum = 0.0;
    m_maximum_isSet = false;
    min_items = 0;
    m_min_items_isSet = false;
    min_length = 0;
    m_min_length_isSet = false;
    min_properties = 0;
    m_min_properties_isSet = false;
    minimum = 0.0;
    m_minimum_isSet = false;
    multiple_of = 0.0;
    m_multiple_of_isSet = false;
    _not = new OAISchema();
    m__not_isSet = false;
    nullable = false;
    m_nullable_isSet = false;
    pattern = new QString("");
    m_pattern_isSet = false;
    properties = new QMap<QString, OAISchema*>();
    m_properties_isSet = false;
    read_only = false;
    m_read_only_isSet = false;
    required = new QList<QString*>();
    m_required_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    type = new QString("");
    m_type_isSet = false;
    unique_items = false;
    m_unique_items_isSet = false;
    write_only = false;
    m_write_only_isSet = false;
    xml = new OAIXML();
    m_xml_isSet = false;
}

void
OAISchema::cleanup() {
    if(additional_properties != nullptr) { 
        delete additional_properties;
    }
    if(_default != nullptr) { 
        delete _default;
    }

    if(description != nullptr) { 
        delete description;
    }
    if(discriminator != nullptr) { 
        delete discriminator;
    }
    if(_enum != nullptr) { 
        auto arr = _enum;
        for(auto o: *arr) { 
            delete o;
        }
        delete _enum;
    }
    if(example != nullptr) { 
        delete example;
    }


    if(extensions != nullptr) { 
        auto arr = extensions;
        for(auto o: *arr) { 
            delete o;
        }
        delete extensions;
    }
    if(external_docs != nullptr) { 
        delete external_docs;
    }
    if(format != nullptr) { 
        delete format;
    }
    if(getref != nullptr) { 
        delete getref;
    }



    if(maximum != nullptr) { 
        delete maximum;
    }



    if(minimum != nullptr) { 
        delete minimum;
    }
    if(multiple_of != nullptr) { 
        delete multiple_of;
    }
    if(_not != nullptr) { 
        delete _not;
    }

    if(pattern != nullptr) { 
        delete pattern;
    }
    if(properties != nullptr) { 
        auto arr = properties;
        for(auto o: *arr) { 
            delete o;
        }
        delete properties;
    }

    if(required != nullptr) { 
        auto arr = required;
        for(auto o: *arr) { 
            delete o;
        }
        delete required;
    }
    if(title != nullptr) { 
        delete title;
    }
    if(type != nullptr) { 
        delete type;
    }


    if(xml != nullptr) { 
        delete xml;
    }
}

OAISchema*
OAISchema::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAISchema::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&additional_properties, pJson["additionalProperties"], "OAIObject", "OAIObject");
    
    ::OpenAPI::setValue(&_default, pJson["default"], "OAIObject", "OAIObject");
    
    ::OpenAPI::setValue(&deprecated, pJson["deprecated"], "bool", "");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    ::OpenAPI::setValue(&discriminator, pJson["discriminator"], "OAIDiscriminator", "OAIDiscriminator");
    
    
    ::OpenAPI::setValue(&_enum, pJson["enum"], "QList", "OAIObject");
    ::OpenAPI::setValue(&example, pJson["example"], "OAIObject", "OAIObject");
    
    ::OpenAPI::setValue(&exclusive_maximum, pJson["exclusiveMaximum"], "bool", "");
    
    ::OpenAPI::setValue(&exclusive_minimum, pJson["exclusiveMinimum"], "bool", "");
    
    
    ::OpenAPI::setValue(&extensions, pJson["extensions"], "QMap", "OAIObject");
    ::OpenAPI::setValue(&external_docs, pJson["externalDocs"], "OAIExternalDocumentation", "OAIExternalDocumentation");
    
    ::OpenAPI::setValue(&format, pJson["format"], "QString", "QString");
    
    ::OpenAPI::setValue(&getref, pJson["get$ref"], "QString", "QString");
    
    ::OpenAPI::setValue(&max_items, pJson["maxItems"], "qint32", "");
    
    ::OpenAPI::setValue(&max_length, pJson["maxLength"], "qint32", "");
    
    ::OpenAPI::setValue(&max_properties, pJson["maxProperties"], "qint32", "");
    
    ::OpenAPI::setValue(&maximum, pJson["maximum"], "OAINumber", "OAINumber");
    
    ::OpenAPI::setValue(&min_items, pJson["minItems"], "qint32", "");
    
    ::OpenAPI::setValue(&min_length, pJson["minLength"], "qint32", "");
    
    ::OpenAPI::setValue(&min_properties, pJson["minProperties"], "qint32", "");
    
    ::OpenAPI::setValue(&minimum, pJson["minimum"], "OAINumber", "OAINumber");
    
    ::OpenAPI::setValue(&multiple_of, pJson["multipleOf"], "OAINumber", "OAINumber");
    
    ::OpenAPI::setValue(&_not, pJson["not"], "OAISchema", "OAISchema");
    
    ::OpenAPI::setValue(&nullable, pJson["nullable"], "bool", "");
    
    ::OpenAPI::setValue(&pattern, pJson["pattern"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&properties, pJson["properties"], "QMap", "OAISchema");
    ::OpenAPI::setValue(&read_only, pJson["readOnly"], "bool", "");
    
    
    ::OpenAPI::setValue(&required, pJson["required"], "QList", "QString");
    ::OpenAPI::setValue(&title, pJson["title"], "QString", "QString");
    
    ::OpenAPI::setValue(&type, pJson["type"], "QString", "QString");
    
    ::OpenAPI::setValue(&unique_items, pJson["uniqueItems"], "bool", "");
    
    ::OpenAPI::setValue(&write_only, pJson["writeOnly"], "bool", "");
    
    ::OpenAPI::setValue(&xml, pJson["xml"], "OAIXML", "OAIXML");
    
}

QString
OAISchema::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAISchema::asJsonObject() {
    QJsonObject obj;
    if((additional_properties != nullptr) && (additional_properties->isSet())){
        toJsonValue(QString("additionalProperties"), additional_properties, obj, QString("OAIObject"));
    }
    if((_default != nullptr) && (_default->isSet())){
        toJsonValue(QString("default"), _default, obj, QString("OAIObject"));
    }
    if(m_deprecated_isSet){
        obj.insert("deprecated", QJsonValue(deprecated));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if((discriminator != nullptr) && (discriminator->isSet())){
        toJsonValue(QString("discriminator"), discriminator, obj, QString("OAIDiscriminator"));
    }
    if(_enum->size() > 0){
        toJsonArray((QList<void*>*)_enum, obj, "enum", "OAIObject");
    }
    if((example != nullptr) && (example->isSet())){
        toJsonValue(QString("example"), example, obj, QString("OAIObject"));
    }
    if(m_exclusive_maximum_isSet){
        obj.insert("exclusiveMaximum", QJsonValue(exclusive_maximum));
    }
    if(m_exclusive_minimum_isSet){
        obj.insert("exclusiveMinimum", QJsonValue(exclusive_minimum));
    }
    if(extensions->size() > 0){
        toJsonMap((QMap<QString, void*>*) extensions, obj, "extensions", "OAIObject");
    }
    if((external_docs != nullptr) && (external_docs->isSet())){
        toJsonValue(QString("externalDocs"), external_docs, obj, QString("OAIExternalDocumentation"));
    }
    if(format != nullptr && *format != QString("")){
        toJsonValue(QString("format"), format, obj, QString("QString"));
    }
    if(getref != nullptr && *getref != QString("")){
        toJsonValue(QString("get$ref"), getref, obj, QString("QString"));
    }
    if(m_max_items_isSet){
        obj.insert("maxItems", QJsonValue(max_items));
    }
    if(m_max_length_isSet){
        obj.insert("maxLength", QJsonValue(max_length));
    }
    if(m_max_properties_isSet){
        obj.insert("maxProperties", QJsonValue(max_properties));
    }
    if((maximum != nullptr) && (maximum->isSet())){
        toJsonValue(QString("maximum"), maximum, obj, QString("OAINumber"));
    }
    if(m_min_items_isSet){
        obj.insert("minItems", QJsonValue(min_items));
    }
    if(m_min_length_isSet){
        obj.insert("minLength", QJsonValue(min_length));
    }
    if(m_min_properties_isSet){
        obj.insert("minProperties", QJsonValue(min_properties));
    }
    if((minimum != nullptr) && (minimum->isSet())){
        toJsonValue(QString("minimum"), minimum, obj, QString("OAINumber"));
    }
    if((multiple_of != nullptr) && (multiple_of->isSet())){
        toJsonValue(QString("multipleOf"), multiple_of, obj, QString("OAINumber"));
    }
    if((_not != nullptr) && (_not->isSet())){
        toJsonValue(QString("not"), _not, obj, QString("OAISchema"));
    }
    if(m_nullable_isSet){
        obj.insert("nullable", QJsonValue(nullable));
    }
    if(pattern != nullptr && *pattern != QString("")){
        toJsonValue(QString("pattern"), pattern, obj, QString("QString"));
    }
    if(properties->size() > 0){
        toJsonMap((QMap<QString, void*>*) properties, obj, "properties", "OAISchema");
    }
    if(m_read_only_isSet){
        obj.insert("readOnly", QJsonValue(read_only));
    }
    if(required->size() > 0){
        toJsonArray((QList<void*>*)required, obj, "required", "QString");
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(type != nullptr && *type != QString("")){
        toJsonValue(QString("type"), type, obj, QString("QString"));
    }
    if(m_unique_items_isSet){
        obj.insert("uniqueItems", QJsonValue(unique_items));
    }
    if(m_write_only_isSet){
        obj.insert("writeOnly", QJsonValue(write_only));
    }
    if((xml != nullptr) && (xml->isSet())){
        toJsonValue(QString("xml"), xml, obj, QString("OAIXML"));
    }

    return obj;
}

OAIObject*
OAISchema::getAdditionalProperties() {
    return additional_properties;
}
void
OAISchema::setAdditionalProperties(OAIObject* additional_properties) {
    this->additional_properties = additional_properties;
    this->m_additional_properties_isSet = true;
}

OAIObject*
OAISchema::getDefault() {
    return _default;
}
void
OAISchema::setDefault(OAIObject* _default) {
    this->_default = _default;
    this->m__default_isSet = true;
}

bool
OAISchema::isDeprecated() {
    return deprecated;
}
void
OAISchema::setDeprecated(bool deprecated) {
    this->deprecated = deprecated;
    this->m_deprecated_isSet = true;
}

QString*
OAISchema::getDescription() {
    return description;
}
void
OAISchema::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

OAIDiscriminator*
OAISchema::getDiscriminator() {
    return discriminator;
}
void
OAISchema::setDiscriminator(OAIDiscriminator* discriminator) {
    this->discriminator = discriminator;
    this->m_discriminator_isSet = true;
}

QList<OAIObject*>*
OAISchema::getEnum() {
    return _enum;
}
void
OAISchema::setEnum(QList<OAIObject*>* _enum) {
    this->_enum = _enum;
    this->m__enum_isSet = true;
}

OAIObject*
OAISchema::getExample() {
    return example;
}
void
OAISchema::setExample(OAIObject* example) {
    this->example = example;
    this->m_example_isSet = true;
}

bool
OAISchema::isExclusiveMaximum() {
    return exclusive_maximum;
}
void
OAISchema::setExclusiveMaximum(bool exclusive_maximum) {
    this->exclusive_maximum = exclusive_maximum;
    this->m_exclusive_maximum_isSet = true;
}

bool
OAISchema::isExclusiveMinimum() {
    return exclusive_minimum;
}
void
OAISchema::setExclusiveMinimum(bool exclusive_minimum) {
    this->exclusive_minimum = exclusive_minimum;
    this->m_exclusive_minimum_isSet = true;
}

QMap<QString, OAIObject*>*
OAISchema::getExtensions() {
    return extensions;
}
void
OAISchema::setExtensions(QMap<QString, OAIObject*>* extensions) {
    this->extensions = extensions;
    this->m_extensions_isSet = true;
}

OAIExternalDocumentation*
OAISchema::getExternalDocs() {
    return external_docs;
}
void
OAISchema::setExternalDocs(OAIExternalDocumentation* external_docs) {
    this->external_docs = external_docs;
    this->m_external_docs_isSet = true;
}

QString*
OAISchema::getFormat() {
    return format;
}
void
OAISchema::setFormat(QString* format) {
    this->format = format;
    this->m_format_isSet = true;
}

QString*
OAISchema::getGetref() {
    return getref;
}
void
OAISchema::setGetref(QString* getref) {
    this->getref = getref;
    this->m_getref_isSet = true;
}

qint32
OAISchema::getMaxItems() {
    return max_items;
}
void
OAISchema::setMaxItems(qint32 max_items) {
    this->max_items = max_items;
    this->m_max_items_isSet = true;
}

qint32
OAISchema::getMaxLength() {
    return max_length;
}
void
OAISchema::setMaxLength(qint32 max_length) {
    this->max_length = max_length;
    this->m_max_length_isSet = true;
}

qint32
OAISchema::getMaxProperties() {
    return max_properties;
}
void
OAISchema::setMaxProperties(qint32 max_properties) {
    this->max_properties = max_properties;
    this->m_max_properties_isSet = true;
}

OAINumber*
OAISchema::getMaximum() {
    return maximum;
}
void
OAISchema::setMaximum(OAINumber* maximum) {
    this->maximum = maximum;
    this->m_maximum_isSet = true;
}

qint32
OAISchema::getMinItems() {
    return min_items;
}
void
OAISchema::setMinItems(qint32 min_items) {
    this->min_items = min_items;
    this->m_min_items_isSet = true;
}

qint32
OAISchema::getMinLength() {
    return min_length;
}
void
OAISchema::setMinLength(qint32 min_length) {
    this->min_length = min_length;
    this->m_min_length_isSet = true;
}

qint32
OAISchema::getMinProperties() {
    return min_properties;
}
void
OAISchema::setMinProperties(qint32 min_properties) {
    this->min_properties = min_properties;
    this->m_min_properties_isSet = true;
}

OAINumber*
OAISchema::getMinimum() {
    return minimum;
}
void
OAISchema::setMinimum(OAINumber* minimum) {
    this->minimum = minimum;
    this->m_minimum_isSet = true;
}

OAINumber*
OAISchema::getMultipleOf() {
    return multiple_of;
}
void
OAISchema::setMultipleOf(OAINumber* multiple_of) {
    this->multiple_of = multiple_of;
    this->m_multiple_of_isSet = true;
}

OAISchema*
OAISchema::getNot() {
    return _not;
}
void
OAISchema::setNot(OAISchema* _not) {
    this->_not = _not;
    this->m__not_isSet = true;
}

bool
OAISchema::isNullable() {
    return nullable;
}
void
OAISchema::setNullable(bool nullable) {
    this->nullable = nullable;
    this->m_nullable_isSet = true;
}

QString*
OAISchema::getPattern() {
    return pattern;
}
void
OAISchema::setPattern(QString* pattern) {
    this->pattern = pattern;
    this->m_pattern_isSet = true;
}

QMap<QString, OAISchema*>*
OAISchema::getProperties() {
    return properties;
}
void
OAISchema::setProperties(QMap<QString, OAISchema*>* properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool
OAISchema::isReadOnly() {
    return read_only;
}
void
OAISchema::setReadOnly(bool read_only) {
    this->read_only = read_only;
    this->m_read_only_isSet = true;
}

QList<QString*>*
OAISchema::getRequired() {
    return required;
}
void
OAISchema::setRequired(QList<QString*>* required) {
    this->required = required;
    this->m_required_isSet = true;
}

QString*
OAISchema::getTitle() {
    return title;
}
void
OAISchema::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
OAISchema::getType() {
    return type;
}
void
OAISchema::setType(QString* type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool
OAISchema::isUniqueItems() {
    return unique_items;
}
void
OAISchema::setUniqueItems(bool unique_items) {
    this->unique_items = unique_items;
    this->m_unique_items_isSet = true;
}

bool
OAISchema::isWriteOnly() {
    return write_only;
}
void
OAISchema::setWriteOnly(bool write_only) {
    this->write_only = write_only;
    this->m_write_only_isSet = true;
}

OAIXML*
OAISchema::getXml() {
    return xml;
}
void
OAISchema::setXml(OAIXML* xml) {
    this->xml = xml;
    this->m_xml_isSet = true;
}


bool
OAISchema::isSet(){
    bool isObjectUpdated = false;
    do{
        if(additional_properties != nullptr && additional_properties->isSet()){ isObjectUpdated = true; break;}
        if(_default != nullptr && _default->isSet()){ isObjectUpdated = true; break;}
        if(m_deprecated_isSet){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(discriminator != nullptr && discriminator->isSet()){ isObjectUpdated = true; break;}
        if(_enum->size() > 0){ isObjectUpdated = true; break;}
        if(example != nullptr && example->isSet()){ isObjectUpdated = true; break;}
        if(m_exclusive_maximum_isSet){ isObjectUpdated = true; break;}
        if(m_exclusive_minimum_isSet){ isObjectUpdated = true; break;}
        if(extensions->size() > 0){ isObjectUpdated = true; break;}
        if(external_docs != nullptr && external_docs->isSet()){ isObjectUpdated = true; break;}
        if(format != nullptr && *format != QString("")){ isObjectUpdated = true; break;}
        if(getref != nullptr && *getref != QString("")){ isObjectUpdated = true; break;}
        if(m_max_items_isSet){ isObjectUpdated = true; break;}
        if(m_max_length_isSet){ isObjectUpdated = true; break;}
        if(m_max_properties_isSet){ isObjectUpdated = true; break;}
        if(maximum != nullptr && maximum->isSet()){ isObjectUpdated = true; break;}
        if(m_min_items_isSet){ isObjectUpdated = true; break;}
        if(m_min_length_isSet){ isObjectUpdated = true; break;}
        if(m_min_properties_isSet){ isObjectUpdated = true; break;}
        if(minimum != nullptr && minimum->isSet()){ isObjectUpdated = true; break;}
        if(multiple_of != nullptr && multiple_of->isSet()){ isObjectUpdated = true; break;}
        if(_not != nullptr && _not->isSet()){ isObjectUpdated = true; break;}
        if(m_nullable_isSet){ isObjectUpdated = true; break;}
        if(pattern != nullptr && *pattern != QString("")){ isObjectUpdated = true; break;}
        if(properties->size() > 0){ isObjectUpdated = true; break;}
        if(m_read_only_isSet){ isObjectUpdated = true; break;}
        if(required->size() > 0){ isObjectUpdated = true; break;}
        if(title != nullptr && *title != QString("")){ isObjectUpdated = true; break;}
        if(type != nullptr && *type != QString("")){ isObjectUpdated = true; break;}
        if(m_unique_items_isSet){ isObjectUpdated = true; break;}
        if(m_write_only_isSet){ isObjectUpdated = true; break;}
        if(xml != nullptr && xml->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

