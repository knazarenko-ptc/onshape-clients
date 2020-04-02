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
 * OAIBTSettingInfo.h
 *
 * 
 */

#ifndef OAIBTSettingInfo_H_
#define OAIBTSettingInfo_H_

#include <QJsonObject>


#include "OAIObject.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTSettingInfo: public OAIObject {
public:
    OAIBTSettingInfo();
    OAIBTSettingInfo(QString json);
    ~OAIBTSettingInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTSettingInfo* fromJson(QString jsonString) override;

    QString* getKey();
    void setKey(QString* key);

    OAIObject* getValue();
    void setValue(OAIObject* value);


    virtual bool isSet() override;

private:
    QString* key;
    bool m_key_isSet;

    OAIObject* value;
    bool m_value_isSet;

};

}

#endif /* OAIBTSettingInfo_H_ */
