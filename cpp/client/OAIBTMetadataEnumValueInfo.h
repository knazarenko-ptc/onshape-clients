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
 * OAIBTMetadataEnumValueInfo.h
 *
 * 
 */

#ifndef OAIBTMetadataEnumValueInfo_H_
#define OAIBTMetadataEnumValueInfo_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTMetadataEnumValueInfo: public OAIObject {
public:
    OAIBTMetadataEnumValueInfo();
    OAIBTMetadataEnumValueInfo(QString json);
    ~OAIBTMetadataEnumValueInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTMetadataEnumValueInfo* fromJson(QString jsonString) override;

    QString* getLabel();
    void setLabel(QString* label);

    QString* getValue();
    void setValue(QString* value);


    virtual bool isSet() override;

private:
    QString* label;
    bool m_label_isSet;

    QString* value;
    bool m_value_isSet;

};

}

#endif /* OAIBTMetadataEnumValueInfo_H_ */
