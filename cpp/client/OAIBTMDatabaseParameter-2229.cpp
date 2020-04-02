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


#include "OAIBTMDatabaseParameter-2229.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTMDatabaseParameter-2229::OAIBTMDatabaseParameter-2229(QString json) {
    init();
    this->fromJson(json);
}

OAIBTMDatabaseParameter-2229::OAIBTMDatabaseParameter-2229() {
    init();
}

OAIBTMDatabaseParameter-2229::~OAIBTMDatabaseParameter-2229() {
    this->cleanup();
}

void
OAIBTMDatabaseParameter-2229::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    import_microversion = new QString("");
    m_import_microversion_isSet = false;
    node_id = new QString("");
    m_node_id_isSet = false;
    parameter_id = new QString("");
    m_parameter_id_isSet = false;
    database_id = new QString("");
    m_database_id_isSet = false;
}

void
OAIBTMDatabaseParameter-2229::cleanup() {
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
    if(database_id != nullptr) { 
        delete database_id;
    }
}

OAIBTMDatabaseParameter-2229*
OAIBTMDatabaseParameter-2229::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTMDatabaseParameter-2229::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&import_microversion, pJson["importMicroversion"], "QString", "QString");
    
    ::OpenAPI::setValue(&node_id, pJson["nodeId"], "QString", "QString");
    
    ::OpenAPI::setValue(&parameter_id, pJson["parameterId"], "QString", "QString");
    
    ::OpenAPI::setValue(&database_id, pJson["databaseId"], "QString", "QString");
    
}

QString
OAIBTMDatabaseParameter-2229::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTMDatabaseParameter-2229::asJsonObject() {
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
    if(database_id != nullptr && *database_id != QString("")){
        toJsonValue(QString("databaseId"), database_id, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTMDatabaseParameter-2229::getBtType() {
    return bt_type;
}
void
OAIBTMDatabaseParameter-2229::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTMDatabaseParameter-2229::getImportMicroversion() {
    return import_microversion;
}
void
OAIBTMDatabaseParameter-2229::setImportMicroversion(QString* import_microversion) {
    this->import_microversion = import_microversion;
    this->m_import_microversion_isSet = true;
}

QString*
OAIBTMDatabaseParameter-2229::getNodeId() {
    return node_id;
}
void
OAIBTMDatabaseParameter-2229::setNodeId(QString* node_id) {
    this->node_id = node_id;
    this->m_node_id_isSet = true;
}

QString*
OAIBTMDatabaseParameter-2229::getParameterId() {
    return parameter_id;
}
void
OAIBTMDatabaseParameter-2229::setParameterId(QString* parameter_id) {
    this->parameter_id = parameter_id;
    this->m_parameter_id_isSet = true;
}

QString*
OAIBTMDatabaseParameter-2229::getDatabaseId() {
    return database_id;
}
void
OAIBTMDatabaseParameter-2229::setDatabaseId(QString* database_id) {
    this->database_id = database_id;
    this->m_database_id_isSet = true;
}


bool
OAIBTMDatabaseParameter-2229::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(import_microversion != nullptr && *import_microversion != QString("")){ isObjectUpdated = true; break;}
        if(node_id != nullptr && *node_id != QString("")){ isObjectUpdated = true; break;}
        if(parameter_id != nullptr && *parameter_id != QString("")){ isObjectUpdated = true; break;}
        if(database_id != nullptr && *database_id != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

