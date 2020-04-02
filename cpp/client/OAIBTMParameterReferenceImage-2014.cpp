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


#include "OAIBTMParameterReferenceImage-2014.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTMParameterReferenceImage-2014::OAIBTMParameterReferenceImage-2014(QString json) {
    init();
    this->fromJson(json);
}

OAIBTMParameterReferenceImage-2014::OAIBTMParameterReferenceImage-2014() {
    init();
}

OAIBTMParameterReferenceImage-2014::~OAIBTMParameterReferenceImage-2014() {
    this->cleanup();
}

void
OAIBTMParameterReferenceImage-2014::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    import_microversion = new QString("");
    m_import_microversion_isSet = false;
    node_id = new QString("");
    m_node_id_isSet = false;
    parameter_id = new QString("");
    m_parameter_id_isSet = false;
    element_id = new QString("");
    m_element_id_isSet = false;
    feature_script_type = new QString("");
    m_feature_script_type_isSet = false;
    _namespace = new QString("");
    m__namespace_isSet = false;
}

void
OAIBTMParameterReferenceImage-2014::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
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
    if(element_id != nullptr) { 
        delete element_id;
    }
    if(feature_script_type != nullptr) { 
        delete feature_script_type;
    }
    if(_namespace != nullptr) { 
        delete _namespace;
    }
}

OAIBTMParameterReferenceImage-2014*
OAIBTMParameterReferenceImage-2014::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTMParameterReferenceImage-2014::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&import_microversion, pJson["importMicroversion"], "QString", "QString");
    
    ::OpenAPI::setValue(&node_id, pJson["nodeId"], "QString", "QString");
    
    ::OpenAPI::setValue(&parameter_id, pJson["parameterId"], "QString", "QString");
    
    ::OpenAPI::setValue(&element_id, pJson["elementId"], "QString", "QString");
    
    ::OpenAPI::setValue(&feature_script_type, pJson["featureScriptType"], "QString", "QString");
    
    ::OpenAPI::setValue(&_namespace, pJson["namespace"], "QString", "QString");
    
}

QString
OAIBTMParameterReferenceImage-2014::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTMParameterReferenceImage-2014::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
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
    if(element_id != nullptr && *element_id != QString("")){
        toJsonValue(QString("elementId"), element_id, obj, QString("QString"));
    }
    if(feature_script_type != nullptr && *feature_script_type != QString("")){
        toJsonValue(QString("featureScriptType"), feature_script_type, obj, QString("QString"));
    }
    if(_namespace != nullptr && *_namespace != QString("")){
        toJsonValue(QString("namespace"), _namespace, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTMParameterReferenceImage-2014::getBtType() {
    return bt_type;
}
void
OAIBTMParameterReferenceImage-2014::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTMParameterReferenceImage-2014::getImportMicroversion() {
    return import_microversion;
}
void
OAIBTMParameterReferenceImage-2014::setImportMicroversion(QString* import_microversion) {
    this->import_microversion = import_microversion;
    this->m_import_microversion_isSet = true;
}

QString*
OAIBTMParameterReferenceImage-2014::getNodeId() {
    return node_id;
}
void
OAIBTMParameterReferenceImage-2014::setNodeId(QString* node_id) {
    this->node_id = node_id;
    this->m_node_id_isSet = true;
}

QString*
OAIBTMParameterReferenceImage-2014::getParameterId() {
    return parameter_id;
}
void
OAIBTMParameterReferenceImage-2014::setParameterId(QString* parameter_id) {
    this->parameter_id = parameter_id;
    this->m_parameter_id_isSet = true;
}

QString*
OAIBTMParameterReferenceImage-2014::getElementId() {
    return element_id;
}
void
OAIBTMParameterReferenceImage-2014::setElementId(QString* element_id) {
    this->element_id = element_id;
    this->m_element_id_isSet = true;
}

QString*
OAIBTMParameterReferenceImage-2014::getFeatureScriptType() {
    return feature_script_type;
}
void
OAIBTMParameterReferenceImage-2014::setFeatureScriptType(QString* feature_script_type) {
    this->feature_script_type = feature_script_type;
    this->m_feature_script_type_isSet = true;
}

QString*
OAIBTMParameterReferenceImage-2014::getNamespace() {
    return _namespace;
}
void
OAIBTMParameterReferenceImage-2014::setNamespace(QString* _namespace) {
    this->_namespace = _namespace;
    this->m__namespace_isSet = true;
}


bool
OAIBTMParameterReferenceImage-2014::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(import_microversion != nullptr && *import_microversion != QString("")){ isObjectUpdated = true; break;}
        if(node_id != nullptr && *node_id != QString("")){ isObjectUpdated = true; break;}
        if(parameter_id != nullptr && *parameter_id != QString("")){ isObjectUpdated = true; break;}
        if(element_id != nullptr && *element_id != QString("")){ isObjectUpdated = true; break;}
        if(feature_script_type != nullptr && *feature_script_type != QString("")){ isObjectUpdated = true; break;}
        if(_namespace != nullptr && *_namespace != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

