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
 * OAIBTPStatementThrow-1080.h
 *
 * 
 */

#ifndef OAIBTPStatementThrow-1080_H_
#define OAIBTPStatementThrow-1080_H_

#include <QJsonObject>


#include "OAIBTPAnnotation-231.h"
#include "OAIBTPExpression-9.h"
#include "OAIBTPSpace-10.h"
#include "OAIBTPStatement-269.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTPStatementThrow-1080: public OAIObject {
public:
    OAIBTPStatementThrow-1080();
    OAIBTPStatementThrow-1080(QString json);
    ~OAIBTPStatementThrow-1080();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTPStatementThrow-1080* fromJson(QString jsonString) override;

    bool isAtomic();
    void setAtomic(bool atomic);

    QString* getBtType();
    void setBtType(QString* bt_type);

    QString* getDocumentationType();
    void setDocumentationType(QString* documentation_type);

    qint32 getEndSourceLocation();
    void setEndSourceLocation(qint32 end_source_location);

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

    qint32 getStartSourceLocation();
    void setStartSourceLocation(qint32 start_source_location);

    OAIBTPAnnotation-231* getAnnotation();
    void setAnnotation(OAIBTPAnnotation-231* annotation);

    OAIBTPExpression-9* getValue();
    void setValue(OAIBTPExpression-9* value);


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

    qint32 start_source_location;
    bool m_start_source_location_isSet;

    OAIBTPAnnotation-231* annotation;
    bool m_annotation_isSet;

    OAIBTPExpression-9* value;
    bool m_value_isSet;

};

}

#endif /* OAIBTPStatementThrow-1080_H_ */
