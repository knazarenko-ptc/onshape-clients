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
 * OAIBTFSValueOther-1124.h
 *
 * 
 */

#ifndef OAIBTFSValueOther-1124_H_
#define OAIBTFSValueOther-1124_H_

#include <QJsonObject>


#include "OAIBTFSValue-1888.h"
#include "OAIObject.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTFSValueOther-1124: public OAIObject {
public:
    OAIBTFSValueOther-1124();
    OAIBTFSValueOther-1124(QString json);
    ~OAIBTFSValueOther-1124();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTFSValueOther-1124* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    QString* getConfigurationValueString();
    void setConfigurationValueString(QString* configuration_value_string);

    QString* getTypeTag();
    void setTypeTag(QString* type_tag);

    OAIObject* getValueObject();
    void setValueObject(OAIObject* value_object);

    QString* getType();
    void setType(QString* type);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    QString* configuration_value_string;
    bool m_configuration_value_string_isSet;

    QString* type_tag;
    bool m_type_tag_isSet;

    OAIObject* value_object;
    bool m_value_object_isSet;

    QString* type;
    bool m_type_isSet;

};

}

#endif /* OAIBTFSValueOther-1124_H_ */
