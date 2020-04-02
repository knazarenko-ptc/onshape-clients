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


#include "OAIBTMConfigurationParameterEnum-105.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTMConfigurationParameterEnum-105::OAIBTMConfigurationParameterEnum-105(QString json) {
    init();
    this->fromJson(json);
}

OAIBTMConfigurationParameterEnum-105::OAIBTMConfigurationParameterEnum-105() {
    init();
}

OAIBTMConfigurationParameterEnum-105::~OAIBTMConfigurationParameterEnum-105() {
    this->cleanup();
}

void
OAIBTMConfigurationParameterEnum-105::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    generated_parameter_id = new OAIBTTreeNode-20();
    m_generated_parameter_id_isSet = false;
    import_microversion = new QString("");
    m_import_microversion_isSet = false;
    node_id = new QString("");
    m_node_id_isSet = false;
    parameter_id = new QString("");
    m_parameter_id_isSet = false;
    parameter_name = new QString("");
    m_parameter_name_isSet = false;
    parameter_type = new QString("");
    m_parameter_type_isSet = false;
    valid = false;
    m_valid_isSet = false;
    option_ids = new QList<QString*>();
    m_option_ids_isSet = false;
    enum_name = new QString("");
    m_enum_name_isSet = false;
    _namespace = new QString("");
    m__namespace_isSet = false;
    default_value = new QString("");
    m_default_value_isSet = false;
    options = new QList<OAIBTMEnumOption-592*>();
    m_options_isSet = false;
}

void
OAIBTMConfigurationParameterEnum-105::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(generated_parameter_id != nullptr) { 
        delete generated_parameter_id;
    }
    if(import_microversion != nullptr) { 
        delete import_microversion;
    }
    if(node_id != nullptr) { 
        delete node_id;
    }
    if(parameter_id != nullptr) { 
        delete parameter_id;
    }
    if(parameter_name != nullptr) { 
        delete parameter_name;
    }
    if(parameter_type != nullptr) { 
        delete parameter_type;
    }

    if(option_ids != nullptr) { 
        auto arr = option_ids;
        for(auto o: *arr) { 
            delete o;
        }
        delete option_ids;
    }
    if(enum_name != nullptr) { 
        delete enum_name;
    }
    if(_namespace != nullptr) { 
        delete _namespace;
    }
    if(default_value != nullptr) { 
        delete default_value;
    }
    if(options != nullptr) { 
        auto arr = options;
        for(auto o: *arr) { 
            delete o;
        }
        delete options;
    }
}

OAIBTMConfigurationParameterEnum-105*
OAIBTMConfigurationParameterEnum-105::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTMConfigurationParameterEnum-105::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&generated_parameter_id, pJson["generatedParameterId"], "OAIBTTreeNode-20", "OAIBTTreeNode-20");
    
    ::OpenAPI::setValue(&import_microversion, pJson["importMicroversion"], "QString", "QString");
    
    ::OpenAPI::setValue(&node_id, pJson["nodeId"], "QString", "QString");
    
    ::OpenAPI::setValue(&parameter_id, pJson["parameterId"], "QString", "QString");
    
    ::OpenAPI::setValue(&parameter_name, pJson["parameterName"], "QString", "QString");
    
    ::OpenAPI::setValue(&parameter_type, pJson["parameterType"], "QString", "QString");
    
    ::OpenAPI::setValue(&valid, pJson["valid"], "bool", "");
    
    
    ::OpenAPI::setValue(&option_ids, pJson["optionIds"], "QList", "QString");
    ::OpenAPI::setValue(&enum_name, pJson["enumName"], "QString", "QString");
    
    ::OpenAPI::setValue(&_namespace, pJson["namespace"], "QString", "QString");
    
    ::OpenAPI::setValue(&default_value, pJson["defaultValue"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&options, pJson["options"], "QList", "OAIBTMEnumOption-592");
}

QString
OAIBTMConfigurationParameterEnum-105::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTMConfigurationParameterEnum-105::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if((generated_parameter_id != nullptr) && (generated_parameter_id->isSet())){
        toJsonValue(QString("generatedParameterId"), generated_parameter_id, obj, QString("OAIBTTreeNode-20"));
    }
    if(import_microversion != nullptr && *import_microversion != QString("")){
        toJsonValue(QString("importMicroversion"), import_microversion, obj, QString("QString"));
    }
    if(node_id != nullptr && *node_id != QString("")){
        toJsonValue(QString("nodeId"), node_id, obj, QString("QString"));
    }
    if(parameter_id != nullptr && *parameter_id != QString("")){
        toJsonValue(QString("parameterId"), parameter_id, obj, QString("QString"));
    }
    if(parameter_name != nullptr && *parameter_name != QString("")){
        toJsonValue(QString("parameterName"), parameter_name, obj, QString("QString"));
    }
    if(parameter_type != nullptr && *parameter_type != QString("")){
        toJsonValue(QString("parameterType"), parameter_type, obj, QString("QString"));
    }
    if(m_valid_isSet){
        obj.insert("valid", QJsonValue(valid));
    }
    if(option_ids->size() > 0){
        toJsonArray((QList<void*>*)option_ids, obj, "optionIds", "QString");
    }
    if(enum_name != nullptr && *enum_name != QString("")){
        toJsonValue(QString("enumName"), enum_name, obj, QString("QString"));
    }
    if(_namespace != nullptr && *_namespace != QString("")){
        toJsonValue(QString("namespace"), _namespace, obj, QString("QString"));
    }
    if(default_value != nullptr && *default_value != QString("")){
        toJsonValue(QString("defaultValue"), default_value, obj, QString("QString"));
    }
    if(options->size() > 0){
        toJsonArray((QList<void*>*)options, obj, "options", "OAIBTMEnumOption-592");
    }

    return obj;
}

QString*
OAIBTMConfigurationParameterEnum-105::getBtType() {
    return bt_type;
}
void
OAIBTMConfigurationParameterEnum-105::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

OAIBTTreeNode-20*
OAIBTMConfigurationParameterEnum-105::getGeneratedParameterId() {
    return generated_parameter_id;
}
void
OAIBTMConfigurationParameterEnum-105::setGeneratedParameterId(OAIBTTreeNode-20* generated_parameter_id) {
    this->generated_parameter_id = generated_parameter_id;
    this->m_generated_parameter_id_isSet = true;
}

QString*
OAIBTMConfigurationParameterEnum-105::getImportMicroversion() {
    return import_microversion;
}
void
OAIBTMConfigurationParameterEnum-105::setImportMicroversion(QString* import_microversion) {
    this->import_microversion = import_microversion;
    this->m_import_microversion_isSet = true;
}

QString*
OAIBTMConfigurationParameterEnum-105::getNodeId() {
    return node_id;
}
void
OAIBTMConfigurationParameterEnum-105::setNodeId(QString* node_id) {
    this->node_id = node_id;
    this->m_node_id_isSet = true;
}

QString*
OAIBTMConfigurationParameterEnum-105::getParameterId() {
    return parameter_id;
}
void
OAIBTMConfigurationParameterEnum-105::setParameterId(QString* parameter_id) {
    this->parameter_id = parameter_id;
    this->m_parameter_id_isSet = true;
}

QString*
OAIBTMConfigurationParameterEnum-105::getParameterName() {
    return parameter_name;
}
void
OAIBTMConfigurationParameterEnum-105::setParameterName(QString* parameter_name) {
    this->parameter_name = parameter_name;
    this->m_parameter_name_isSet = true;
}

QString*
OAIBTMConfigurationParameterEnum-105::getParameterType() {
    return parameter_type;
}
void
OAIBTMConfigurationParameterEnum-105::setParameterType(QString* parameter_type) {
    this->parameter_type = parameter_type;
    this->m_parameter_type_isSet = true;
}

bool
OAIBTMConfigurationParameterEnum-105::isValid() {
    return valid;
}
void
OAIBTMConfigurationParameterEnum-105::setValid(bool valid) {
    this->valid = valid;
    this->m_valid_isSet = true;
}

QList<QString*>*
OAIBTMConfigurationParameterEnum-105::getOptionIds() {
    return option_ids;
}
void
OAIBTMConfigurationParameterEnum-105::setOptionIds(QList<QString*>* option_ids) {
    this->option_ids = option_ids;
    this->m_option_ids_isSet = true;
}

QString*
OAIBTMConfigurationParameterEnum-105::getEnumName() {
    return enum_name;
}
void
OAIBTMConfigurationParameterEnum-105::setEnumName(QString* enum_name) {
    this->enum_name = enum_name;
    this->m_enum_name_isSet = true;
}

QString*
OAIBTMConfigurationParameterEnum-105::getNamespace() {
    return _namespace;
}
void
OAIBTMConfigurationParameterEnum-105::setNamespace(QString* _namespace) {
    this->_namespace = _namespace;
    this->m__namespace_isSet = true;
}

QString*
OAIBTMConfigurationParameterEnum-105::getDefaultValue() {
    return default_value;
}
void
OAIBTMConfigurationParameterEnum-105::setDefaultValue(QString* default_value) {
    this->default_value = default_value;
    this->m_default_value_isSet = true;
}

QList<OAIBTMEnumOption-592*>*
OAIBTMConfigurationParameterEnum-105::getOptions() {
    return options;
}
void
OAIBTMConfigurationParameterEnum-105::setOptions(QList<OAIBTMEnumOption-592*>* options) {
    this->options = options;
    this->m_options_isSet = true;
}


bool
OAIBTMConfigurationParameterEnum-105::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(generated_parameter_id != nullptr && generated_parameter_id->isSet()){ isObjectUpdated = true; break;}
        if(import_microversion != nullptr && *import_microversion != QString("")){ isObjectUpdated = true; break;}
        if(node_id != nullptr && *node_id != QString("")){ isObjectUpdated = true; break;}
        if(parameter_id != nullptr && *parameter_id != QString("")){ isObjectUpdated = true; break;}
        if(parameter_name != nullptr && *parameter_name != QString("")){ isObjectUpdated = true; break;}
        if(parameter_type != nullptr && *parameter_type != QString("")){ isObjectUpdated = true; break;}
        if(m_valid_isSet){ isObjectUpdated = true; break;}
        if(option_ids->size() > 0){ isObjectUpdated = true; break;}
        if(enum_name != nullptr && *enum_name != QString("")){ isObjectUpdated = true; break;}
        if(_namespace != nullptr && *_namespace != QString("")){ isObjectUpdated = true; break;}
        if(default_value != nullptr && *default_value != QString("")){ isObjectUpdated = true; break;}
        if(options->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

