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
 * OAIBTFSTableRowMetadata-2262.h
 *
 * 
 */

#ifndef OAIBTFSTableRowMetadata-2262_H_
#define OAIBTFSTableRowMetadata-2262_H_

#include <QJsonObject>


#include "OAIBTTableBaseCrossHighlightData-2609.h"
#include "OAIBTTableBaseRowMetadata-3181.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTFSTableRowMetadata-2262: public OAIObject {
public:
    OAIBTFSTableRowMetadata-2262();
    OAIBTFSTableRowMetadata-2262(QString json);
    ~OAIBTFSTableRowMetadata-2262();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTFSTableRowMetadata-2262* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    OAIBTTableBaseCrossHighlightData-2609* getCrossHighlightDataIfAny();
    void setCrossHighlightDataIfAny(OAIBTTableBaseCrossHighlightData-2609* cross_highlight_data_if_any);

    QString* getCallout();
    void setCallout(QString* callout);

    OAIBTTableBaseCrossHighlightData-2609* getCrossHighlightData();
    void setCrossHighlightData(OAIBTTableBaseCrossHighlightData-2609* cross_highlight_data);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    OAIBTTableBaseCrossHighlightData-2609* cross_highlight_data_if_any;
    bool m_cross_highlight_data_if_any_isSet;

    QString* callout;
    bool m_callout_isSet;

    OAIBTTableBaseCrossHighlightData-2609* cross_highlight_data;
    bool m_cross_highlight_data_isSet;

};

}

#endif /* OAIBTFSTableRowMetadata-2262_H_ */
