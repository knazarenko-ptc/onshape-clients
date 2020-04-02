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
 * OAIBTPName-261.h
 *
 * 
 */

#ifndef OAIBTPName-261_H_
#define OAIBTPName-261_H_

#include <QJsonObject>


#include "OAIBTPIdentifier-8.h"
#include "OAIBTPNode-7.h"
#include "OAIBTPSpace-10.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTPName-261: public OAIObject {
public:
    OAIBTPName-261();
    OAIBTPName-261(QString json);
    ~OAIBTPName-261();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTPName-261* fromJson(QString jsonString) override;

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

    QString* getImportMicroversion();
    void setImportMicroversion(QString* import_microversion);

    bool isForExport();
    void setForExport(bool for_export);

    bool isGlobalNamespace();
    void setGlobalNamespace(bool global_namespace);

    QList<OAIBTPIdentifier-8*>* getNamespace();
    void setNamespace(QList<OAIBTPIdentifier-8*>* _namespace);

    OAIBTPIdentifier-8* getIdentifier();
    void setIdentifier(OAIBTPIdentifier-8* identifier);


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

    QString* import_microversion;
    bool m_import_microversion_isSet;

    bool for_export;
    bool m_for_export_isSet;

    bool global_namespace;
    bool m_global_namespace_isSet;

    QList<OAIBTPIdentifier-8*>* _namespace;
    bool m__namespace_isSet;

    OAIBTPIdentifier-8* identifier;
    bool m_identifier_isSet;

};

}

#endif /* OAIBTPName-261_H_ */
