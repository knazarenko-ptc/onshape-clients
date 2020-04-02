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


#include "OAIBTBillOfMaterialsTableRow-1425.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTBillOfMaterialsTableRow-1425::OAIBTBillOfMaterialsTableRow-1425(QString json) {
    init();
    this->fromJson(json);
}

OAIBTBillOfMaterialsTableRow-1425::OAIBTBillOfMaterialsTableRow-1425() {
    init();
}

OAIBTBillOfMaterialsTableRow-1425::~OAIBTBillOfMaterialsTableRow-1425() {
    this->cleanup();
}

void
OAIBTBillOfMaterialsTableRow-1425::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    column_id_to_cell = new QMap<QString, OAIBTTableCell-1114*>();
    m_column_id_to_cell_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    meta_data = new OAIBTTreeNode-20();
    m_meta_data_isSet = false;
    node_id = new QString("");
    m_node_id_isSet = false;
    row_metadata = new OAIBTTableBaseRowMetadata-3181();
    m_row_metadata_isSet = false;
    unique_item_id = new OAIBTBillOfMaterialsUniqueItemId-2029();
    m_unique_item_id_isSet = false;
    indent_level = 0;
    m_indent_level_isSet = false;
    expansion_status = new QString("");
    m_expansion_status_isSet = false;
    exclusion_status = new QString("");
    m_exclusion_status_isSet = false;
    exclude_is_editable = false;
    m_exclude_is_editable_isSet = false;
    metadata_update_href = new QString("");
    m_metadata_update_href_isSet = false;
}

void
OAIBTBillOfMaterialsTableRow-1425::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(column_id_to_cell != nullptr) { 
        auto arr = column_id_to_cell;
        for(auto o: *arr) { 
            delete o;
        }
        delete column_id_to_cell;
    }
    if(id != nullptr) { 
        delete id;
    }
    if(meta_data != nullptr) { 
        delete meta_data;
    }
    if(node_id != nullptr) { 
        delete node_id;
    }
    if(row_metadata != nullptr) { 
        delete row_metadata;
    }
    if(unique_item_id != nullptr) { 
        delete unique_item_id;
    }

    if(expansion_status != nullptr) { 
        delete expansion_status;
    }
    if(exclusion_status != nullptr) { 
        delete exclusion_status;
    }

    if(metadata_update_href != nullptr) { 
        delete metadata_update_href;
    }
}

OAIBTBillOfMaterialsTableRow-1425*
OAIBTBillOfMaterialsTableRow-1425::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTBillOfMaterialsTableRow-1425::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&column_id_to_cell, pJson["columnIdToCell"], "QMap", "OAIBTTableCell-1114");
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&meta_data, pJson["metaData"], "OAIBTTreeNode-20", "OAIBTTreeNode-20");
    
    ::OpenAPI::setValue(&node_id, pJson["nodeId"], "QString", "QString");
    
    ::OpenAPI::setValue(&row_metadata, pJson["rowMetadata"], "OAIBTTableBaseRowMetadata-3181", "OAIBTTableBaseRowMetadata-3181");
    
    ::OpenAPI::setValue(&unique_item_id, pJson["uniqueItemId"], "OAIBTBillOfMaterialsUniqueItemId-2029", "OAIBTBillOfMaterialsUniqueItemId-2029");
    
    ::OpenAPI::setValue(&indent_level, pJson["indentLevel"], "qint32", "");
    
    ::OpenAPI::setValue(&expansion_status, pJson["expansionStatus"], "QString", "QString");
    
    ::OpenAPI::setValue(&exclusion_status, pJson["exclusionStatus"], "QString", "QString");
    
    ::OpenAPI::setValue(&exclude_is_editable, pJson["excludeIsEditable"], "bool", "");
    
    ::OpenAPI::setValue(&metadata_update_href, pJson["metadataUpdateHref"], "QString", "QString");
    
}

QString
OAIBTBillOfMaterialsTableRow-1425::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTBillOfMaterialsTableRow-1425::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(column_id_to_cell->size() > 0){
        toJsonMap((QMap<QString, void*>*) column_id_to_cell, obj, "columnIdToCell", "OAIBTTableCell-1114");
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if((meta_data != nullptr) && (meta_data->isSet())){
        toJsonValue(QString("metaData"), meta_data, obj, QString("OAIBTTreeNode-20"));
    }
    if(node_id != nullptr && *node_id != QString("")){
        toJsonValue(QString("nodeId"), node_id, obj, QString("QString"));
    }
    if((row_metadata != nullptr) && (row_metadata->isSet())){
        toJsonValue(QString("rowMetadata"), row_metadata, obj, QString("OAIBTTableBaseRowMetadata-3181"));
    }
    if((unique_item_id != nullptr) && (unique_item_id->isSet())){
        toJsonValue(QString("uniqueItemId"), unique_item_id, obj, QString("OAIBTBillOfMaterialsUniqueItemId-2029"));
    }
    if(m_indent_level_isSet){
        obj.insert("indentLevel", QJsonValue(indent_level));
    }
    if(expansion_status != nullptr && *expansion_status != QString("")){
        toJsonValue(QString("expansionStatus"), expansion_status, obj, QString("QString"));
    }
    if(exclusion_status != nullptr && *exclusion_status != QString("")){
        toJsonValue(QString("exclusionStatus"), exclusion_status, obj, QString("QString"));
    }
    if(m_exclude_is_editable_isSet){
        obj.insert("excludeIsEditable", QJsonValue(exclude_is_editable));
    }
    if(metadata_update_href != nullptr && *metadata_update_href != QString("")){
        toJsonValue(QString("metadataUpdateHref"), metadata_update_href, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTBillOfMaterialsTableRow-1425::getBtType() {
    return bt_type;
}
void
OAIBTBillOfMaterialsTableRow-1425::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QMap<QString, OAIBTTableCell-1114*>*
OAIBTBillOfMaterialsTableRow-1425::getColumnIdToCell() {
    return column_id_to_cell;
}
void
OAIBTBillOfMaterialsTableRow-1425::setColumnIdToCell(QMap<QString, OAIBTTableCell-1114*>* column_id_to_cell) {
    this->column_id_to_cell = column_id_to_cell;
    this->m_column_id_to_cell_isSet = true;
}

QString*
OAIBTBillOfMaterialsTableRow-1425::getId() {
    return id;
}
void
OAIBTBillOfMaterialsTableRow-1425::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

OAIBTTreeNode-20*
OAIBTBillOfMaterialsTableRow-1425::getMetaData() {
    return meta_data;
}
void
OAIBTBillOfMaterialsTableRow-1425::setMetaData(OAIBTTreeNode-20* meta_data) {
    this->meta_data = meta_data;
    this->m_meta_data_isSet = true;
}

QString*
OAIBTBillOfMaterialsTableRow-1425::getNodeId() {
    return node_id;
}
void
OAIBTBillOfMaterialsTableRow-1425::setNodeId(QString* node_id) {
    this->node_id = node_id;
    this->m_node_id_isSet = true;
}

OAIBTTableBaseRowMetadata-3181*
OAIBTBillOfMaterialsTableRow-1425::getRowMetadata() {
    return row_metadata;
}
void
OAIBTBillOfMaterialsTableRow-1425::setRowMetadata(OAIBTTableBaseRowMetadata-3181* row_metadata) {
    this->row_metadata = row_metadata;
    this->m_row_metadata_isSet = true;
}

OAIBTBillOfMaterialsUniqueItemId-2029*
OAIBTBillOfMaterialsTableRow-1425::getUniqueItemId() {
    return unique_item_id;
}
void
OAIBTBillOfMaterialsTableRow-1425::setUniqueItemId(OAIBTBillOfMaterialsUniqueItemId-2029* unique_item_id) {
    this->unique_item_id = unique_item_id;
    this->m_unique_item_id_isSet = true;
}

qint32
OAIBTBillOfMaterialsTableRow-1425::getIndentLevel() {
    return indent_level;
}
void
OAIBTBillOfMaterialsTableRow-1425::setIndentLevel(qint32 indent_level) {
    this->indent_level = indent_level;
    this->m_indent_level_isSet = true;
}

QString*
OAIBTBillOfMaterialsTableRow-1425::getExpansionStatus() {
    return expansion_status;
}
void
OAIBTBillOfMaterialsTableRow-1425::setExpansionStatus(QString* expansion_status) {
    this->expansion_status = expansion_status;
    this->m_expansion_status_isSet = true;
}

QString*
OAIBTBillOfMaterialsTableRow-1425::getExclusionStatus() {
    return exclusion_status;
}
void
OAIBTBillOfMaterialsTableRow-1425::setExclusionStatus(QString* exclusion_status) {
    this->exclusion_status = exclusion_status;
    this->m_exclusion_status_isSet = true;
}

bool
OAIBTBillOfMaterialsTableRow-1425::isExcludeIsEditable() {
    return exclude_is_editable;
}
void
OAIBTBillOfMaterialsTableRow-1425::setExcludeIsEditable(bool exclude_is_editable) {
    this->exclude_is_editable = exclude_is_editable;
    this->m_exclude_is_editable_isSet = true;
}

QString*
OAIBTBillOfMaterialsTableRow-1425::getMetadataUpdateHref() {
    return metadata_update_href;
}
void
OAIBTBillOfMaterialsTableRow-1425::setMetadataUpdateHref(QString* metadata_update_href) {
    this->metadata_update_href = metadata_update_href;
    this->m_metadata_update_href_isSet = true;
}


bool
OAIBTBillOfMaterialsTableRow-1425::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(column_id_to_cell->size() > 0){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(meta_data != nullptr && meta_data->isSet()){ isObjectUpdated = true; break;}
        if(node_id != nullptr && *node_id != QString("")){ isObjectUpdated = true; break;}
        if(row_metadata != nullptr && row_metadata->isSet()){ isObjectUpdated = true; break;}
        if(unique_item_id != nullptr && unique_item_id->isSet()){ isObjectUpdated = true; break;}
        if(m_indent_level_isSet){ isObjectUpdated = true; break;}
        if(expansion_status != nullptr && *expansion_status != QString("")){ isObjectUpdated = true; break;}
        if(exclusion_status != nullptr && *exclusion_status != QString("")){ isObjectUpdated = true; break;}
        if(m_exclude_is_editable_isSet){ isObjectUpdated = true; break;}
        if(metadata_update_href != nullptr && *metadata_update_href != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

