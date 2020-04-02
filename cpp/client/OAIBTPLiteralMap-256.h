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
 * OAIBTPLiteralMap-256.h
 *
 * 
 */

#ifndef OAIBTPLiteralMap-256_H_
#define OAIBTPLiteralMap-256_H_

#include <QJsonObject>


#include "OAIBTPLiteralMapEntry-257.h"
#include "OAIBTPSpace-10.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTPLiteralMap-256: public OAIObject {
public:
    OAIBTPLiteralMap-256();
    OAIBTPLiteralMap-256(QString json);
    ~OAIBTPLiteralMap-256();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTPLiteralMap-256* fromJson(QString jsonString) override;

    bool isAtomic();
    void setAtomic(bool atomic);

    QString* getBtType();
    void setBtType(QString* bt_type);

    QString* getDocumentationType();
    void setDocumentationType(QString* documentation_type);

    qint32 getEndSourceLocation();
    void setEndSourceLocation(qint32 end_source_location);

    QList<OAIBTPLiteralMapEntry-257*>* getEntries();
    void setEntries(QList<OAIBTPLiteralMapEntry-257*>* entries);

    QString* getNodeId();
    void setNodeId(QString* node_id);

    QString* getShortDescriptor();
    void setShortDescriptor(QString* short_descriptor);

    OAIBTPSpace-10* getSpaceAfter();
    void setSpaceAfter(OAIBTPSpace-10* space_after);

    OAIBTPSpace-10* getSpaceBefore();
    void setSpaceBefore(OAIBTPSpace-10* space_before);

    bool isSpaceDefault();
    void setSpaceDefault(bool space_default);

    OAIBTPSpace-10* getSpaceInEmptyList();
    void setSpaceInEmptyList(OAIBTPSpace-10* space_in_empty_list);

    qint32 getStartSourceLocation();
    void setStartSourceLocation(qint32 start_source_location);

    bool isTrailingComma();
    void setTrailingComma(bool trailing_comma);


    virtual bool isSet() override;

private:
    bool atomic;
    bool m_atomic_isSet;

    QString* bt_type;
    bool m_bt_type_isSet;

    QString* documentation_type;
    bool m_documentation_type_isSet;

    qint32 end_source_location;
    bool m_end_source_location_isSet;

    QList<OAIBTPLiteralMapEntry-257*>* entries;
    bool m_entries_isSet;

    QString* node_id;
    bool m_node_id_isSet;

    QString* short_descriptor;
    bool m_short_descriptor_isSet;

    OAIBTPSpace-10* space_after;
    bool m_space_after_isSet;

    OAIBTPSpace-10* space_before;
    bool m_space_before_isSet;

    bool space_default;
    bool m_space_default_isSet;

    OAIBTPSpace-10* space_in_empty_list;
    bool m_space_in_empty_list_isSet;

    qint32 start_source_location;
    bool m_start_source_location_isSet;

    bool trailing_comma;
    bool m_trailing_comma_isSet;

};

}

#endif /* OAIBTPLiteralMap-256_H_ */
