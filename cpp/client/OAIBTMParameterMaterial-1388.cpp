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


#include "OAIBTMParameterMaterial-1388.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTMParameterMaterial-1388::OAIBTMParameterMaterial-1388(QString json) {
    init();
    this->fromJson(json);
}

OAIBTMParameterMaterial-1388::OAIBTMParameterMaterial-1388() {
    init();
}

OAIBTMParameterMaterial-1388::~OAIBTMParameterMaterial-1388() {
    this->cleanup();
}

void
OAIBTMParameterMaterial-1388::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    import_microversion = new QString("");
    m_import_microversion_isSet = false;
    node_id = new QString("");
    m_node_id_isSet = false;
    parameter_id = new QString("");
    m_parameter_id_isSet = false;
    material = new OAIBTPartMaterial-1445();
    m_material_isSet = false;
}

void
OAIBTMParameterMaterial-1388::cleanup() {
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
    if(material != nullptr) { 
        delete material;
    }
}

OAIBTMParameterMaterial-1388*
OAIBTMParameterMaterial-1388::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTMParameterMaterial-1388::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&import_microversion, pJson["importMicroversion"], "QString", "QString");
    
    ::OpenAPI::setValue(&node_id, pJson["nodeId"], "QString", "QString");
    
    ::OpenAPI::setValue(&parameter_id, pJson["parameterId"], "QString", "QString");
    
    ::OpenAPI::setValue(&material, pJson["material"], "OAIBTPartMaterial-1445", "OAIBTPartMaterial-1445");
    
}

QString
OAIBTMParameterMaterial-1388::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTMParameterMaterial-1388::asJsonObject() {
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
    if((material != nullptr) && (material->isSet())){
        toJsonValue(QString("material"), material, obj, QString("OAIBTPartMaterial-1445"));
    }

    return obj;
}

QString*
OAIBTMParameterMaterial-1388::getBtType() {
    return bt_type;
}
void
OAIBTMParameterMaterial-1388::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTMParameterMaterial-1388::getImportMicroversion() {
    return import_microversion;
}
void
OAIBTMParameterMaterial-1388::setImportMicroversion(QString* import_microversion) {
    this->import_microversion = import_microversion;
    this->m_import_microversion_isSet = true;
}

QString*
OAIBTMParameterMaterial-1388::getNodeId() {
    return node_id;
}
void
OAIBTMParameterMaterial-1388::setNodeId(QString* node_id) {
    this->node_id = node_id;
    this->m_node_id_isSet = true;
}

QString*
OAIBTMParameterMaterial-1388::getParameterId() {
    return parameter_id;
}
void
OAIBTMParameterMaterial-1388::setParameterId(QString* parameter_id) {
    this->parameter_id = parameter_id;
    this->m_parameter_id_isSet = true;
}

OAIBTPartMaterial-1445*
OAIBTMParameterMaterial-1388::getMaterial() {
    return material;
}
void
OAIBTMParameterMaterial-1388::setMaterial(OAIBTPartMaterial-1445* material) {
    this->material = material;
    this->m_material_isSet = true;
}


bool
OAIBTMParameterMaterial-1388::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(import_microversion != nullptr && *import_microversion != QString("")){ isObjectUpdated = true; break;}
        if(node_id != nullptr && *node_id != QString("")){ isObjectUpdated = true; break;}
        if(parameter_id != nullptr && *parameter_id != QString("")){ isObjectUpdated = true; break;}
        if(material != nullptr && material->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

