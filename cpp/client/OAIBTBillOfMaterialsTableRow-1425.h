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

/*
 * OAIBTBillOfMaterialsTableRow-1425.h
 *
 * 
 */

#ifndef OAIBTBillOfMaterialsTableRow-1425_H_
#define OAIBTBillOfMaterialsTableRow-1425_H_

#include <QJsonObject>


#include "OAIBTBillOfMaterialsUniqueItemId-2029.h"
#include "OAIBTTableBaseRowMetadata-3181.h"
#include "OAIBTTableCell-1114.h"
#include "OAIBTTableRow-1054.h"
#include "OAIBTTreeNode-20.h"
#include <QList>
#include <QMap>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTBillOfMaterialsTableRow-1425: public OAIObject {
public:
    OAIBTBillOfMaterialsTableRow-1425();
    OAIBTBillOfMaterialsTableRow-1425(QString json);
    ~OAIBTBillOfMaterialsTableRow-1425();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTBillOfMaterialsTableRow-1425* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    QMap<QString, OAIBTTableCell-1114*>* getColumnIdToCell();
    void setColumnIdToCell(QMap<QString, OAIBTTableCell-1114*>* column_id_to_cell);

    QString* getId();
    void setId(QString* id);

    OAIBTTreeNode-20* getMetaData();
    void setMetaData(OAIBTTreeNode-20* meta_data);

    QString* getNodeId();
    void setNodeId(QString* node_id);

    OAIBTTableBaseRowMetadata-3181* getRowMetadata();
    void setRowMetadata(OAIBTTableBaseRowMetadata-3181* row_metadata);

    OAIBTBillOfMaterialsUniqueItemId-2029* getUniqueItemId();
    void setUniqueItemId(OAIBTBillOfMaterialsUniqueItemId-2029* unique_item_id);

    qint32 getIndentLevel();
    void setIndentLevel(qint32 indent_level);

    QString* getExpansionStatus();
    void setExpansionStatus(QString* expansion_status);

    QString* getExclusionStatus();
    void setExclusionStatus(QString* exclusion_status);

    bool isExcludeIsEditable();
    void setExcludeIsEditable(bool exclude_is_editable);

    QString* getMetadataUpdateHref();
    void setMetadataUpdateHref(QString* metadata_update_href);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    QMap<QString, OAIBTTableCell-1114*>* column_id_to_cell;
    bool m_column_id_to_cell_isSet;

    QString* id;
    bool m_id_isSet;

    OAIBTTreeNode-20* meta_data;
    bool m_meta_data_isSet;

    QString* node_id;
    bool m_node_id_isSet;

    OAIBTTableBaseRowMetadata-3181* row_metadata;
    bool m_row_metadata_isSet;

    OAIBTBillOfMaterialsUniqueItemId-2029* unique_item_id;
    bool m_unique_item_id_isSet;

    qint32 indent_level;
    bool m_indent_level_isSet;

    QString* expansion_status;
    bool m_expansion_status_isSet;

    QString* exclusion_status;
    bool m_exclusion_status_isSet;

    bool exclude_is_editable;
    bool m_exclude_is_editable_isSet;

    QString* metadata_update_href;
    bool m_metadata_update_href_isSet;

};

}

#endif /* OAIBTBillOfMaterialsTableRow-1425_H_ */
