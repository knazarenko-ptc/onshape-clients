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
 * OAIBTFSValueMap-2062.h
 *
 * 
 */

#ifndef OAIBTFSValueMap-2062_H_
#define OAIBTFSValueMap-2062_H_

#include <QJsonObject>


#include "OAIBTFSValue-1888.h"
#include "OAIBTFSValueMapEntry-2077.h"
#include "OAIObject.h"
#include <QList>
#include <QMap>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTFSValueMap-2062: public OAIObject {
public:
    OAIBTFSValueMap-2062();
    OAIBTFSValueMap-2062(QString json);
    ~OAIBTFSValueMap-2062();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTFSValueMap-2062* fromJson(QString jsonString) override;

    QString* getConfigurationValueString();
    void setConfigurationValueString(QString* configuration_value_string);

    QMap<QString, OAIBTFSValue-1888*>* getFsvaluesKeyedByStrings();
    void setFsvaluesKeyedByStrings(QMap<QString, OAIBTFSValue-1888*>* fsvalues_keyed_by_strings);

    QString* getTypeTag();
    void setTypeTag(QString* type_tag);

    QList<OAIBTFSValueMapEntry-2077*>* getValue();
    void setValue(QList<OAIBTFSValueMapEntry-2077*>* value);

    QMap<QString, OAIObject*>* getValueObject();
    void setValueObject(QMap<QString, OAIObject*>* value_object);


    virtual bool isSet() override;

private:
    QString* configuration_value_string;
    bool m_configuration_value_string_isSet;

    QMap<QString, OAIBTFSValue-1888*>* fsvalues_keyed_by_strings;
    bool m_fsvalues_keyed_by_strings_isSet;

    QString* type_tag;
    bool m_type_tag_isSet;

    QList<OAIBTFSValueMapEntry-2077*>* value;
    bool m_value_isSet;

    QMap<QString, OAIObject*>* value_object;
    bool m_value_object_isSet;

};

}

#endif /* OAIBTFSValueMap-2062_H_ */
