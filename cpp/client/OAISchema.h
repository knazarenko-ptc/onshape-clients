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
 * OAISchema.h
 *
 * 
 */

#ifndef OAISchema_H_
#define OAISchema_H_

#include <QJsonObject>


#include "OAIDiscriminator.h"
#include "OAIExternalDocumentation.h"
#include "OAINumber.h"
#include "OAIObject.h"
#include "OAISchema.h"
#include "OAIXML.h"
#include <QList>
#include <QMap>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAISchema: public OAIObject {
public:
    OAISchema();
    OAISchema(QString json);
    ~OAISchema();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAISchema* fromJson(QString jsonString) override;

    OAIObject* getAdditionalProperties();
    void setAdditionalProperties(OAIObject* additional_properties);

    OAIObject* getDefault();
    void setDefault(OAIObject* _default);

    bool isDeprecated();
    void setDeprecated(bool deprecated);

    QString* getDescription();
    void setDescription(QString* description);

    OAIDiscriminator* getDiscriminator();
    void setDiscriminator(OAIDiscriminator* discriminator);

    QList<OAIObject*>* getEnum();
    void setEnum(QList<OAIObject*>* _enum);

    OAIObject* getExample();
    void setExample(OAIObject* example);

    bool isExclusiveMaximum();
    void setExclusiveMaximum(bool exclusive_maximum);

    bool isExclusiveMinimum();
    void setExclusiveMinimum(bool exclusive_minimum);

    QMap<QString, OAIObject*>* getExtensions();
    void setExtensions(QMap<QString, OAIObject*>* extensions);

    OAIExternalDocumentation* getExternalDocs();
    void setExternalDocs(OAIExternalDocumentation* external_docs);

    QString* getFormat();
    void setFormat(QString* format);

    QString* getGetref();
    void setGetref(QString* getref);

    qint32 getMaxItems();
    void setMaxItems(qint32 max_items);

    qint32 getMaxLength();
    void setMaxLength(qint32 max_length);

    qint32 getMaxProperties();
    void setMaxProperties(qint32 max_properties);

    OAINumber* getMaximum();
    void setMaximum(OAINumber* maximum);

    qint32 getMinItems();
    void setMinItems(qint32 min_items);

    qint32 getMinLength();
    void setMinLength(qint32 min_length);

    qint32 getMinProperties();
    void setMinProperties(qint32 min_properties);

    OAINumber* getMinimum();
    void setMinimum(OAINumber* minimum);

    OAINumber* getMultipleOf();
    void setMultipleOf(OAINumber* multiple_of);

    OAISchema* getNot();
    void setNot(OAISchema* _not);

    bool isNullable();
    void setNullable(bool nullable);

    QString* getPattern();
    void setPattern(QString* pattern);

    QMap<QString, OAISchema*>* getProperties();
    void setProperties(QMap<QString, OAISchema*>* properties);

    bool isReadOnly();
    void setReadOnly(bool read_only);

    QList<QString*>* getRequired();
    void setRequired(QList<QString*>* required);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getType();
    void setType(QString* type);

    bool isUniqueItems();
    void setUniqueItems(bool unique_items);

    bool isWriteOnly();
    void setWriteOnly(bool write_only);

    OAIXML* getXml();
    void setXml(OAIXML* xml);


    virtual bool isSet() override;

private:
    OAIObject* additional_properties;
    bool m_additional_properties_isSet;

    OAIObject* _default;
    bool m__default_isSet;

    bool deprecated;
    bool m_deprecated_isSet;

    QString* description;
    bool m_description_isSet;

    OAIDiscriminator* discriminator;
    bool m_discriminator_isSet;

    QList<OAIObject*>* _enum;
    bool m__enum_isSet;

    OAIObject* example;
    bool m_example_isSet;

    bool exclusive_maximum;
    bool m_exclusive_maximum_isSet;

    bool exclusive_minimum;
    bool m_exclusive_minimum_isSet;

    QMap<QString, OAIObject*>* extensions;
    bool m_extensions_isSet;

    OAIExternalDocumentation* external_docs;
    bool m_external_docs_isSet;

    QString* format;
    bool m_format_isSet;

    QString* getref;
    bool m_getref_isSet;

    qint32 max_items;
    bool m_max_items_isSet;

    qint32 max_length;
    bool m_max_length_isSet;

    qint32 max_properties;
    bool m_max_properties_isSet;

    OAINumber* maximum;
    bool m_maximum_isSet;

    qint32 min_items;
    bool m_min_items_isSet;

    qint32 min_length;
    bool m_min_length_isSet;

    qint32 min_properties;
    bool m_min_properties_isSet;

    OAINumber* minimum;
    bool m_minimum_isSet;

    OAINumber* multiple_of;
    bool m_multiple_of_isSet;

    OAISchema* _not;
    bool m__not_isSet;

    bool nullable;
    bool m_nullable_isSet;

    QString* pattern;
    bool m_pattern_isSet;

    QMap<QString, OAISchema*>* properties;
    bool m_properties_isSet;

    bool read_only;
    bool m_read_only_isSet;

    QList<QString*>* required;
    bool m_required_isSet;

    QString* title;
    bool m_title_isSet;

    QString* type;
    bool m_type_isSet;

    bool unique_items;
    bool m_unique_items_isSet;

    bool write_only;
    bool m_write_only_isSet;

    OAIXML* xml;
    bool m_xml_isSet;

};

}

#endif /* OAISchema_H_ */
