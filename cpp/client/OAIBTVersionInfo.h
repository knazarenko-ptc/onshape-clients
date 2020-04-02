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
 * OAIBTVersionInfo.h
 *
 * 
 */

#ifndef OAIBTVersionInfo_H_
#define OAIBTVersionInfo_H_

#include <QJsonObject>


#include "OAIBTThumbnailInfo.h"
#include "OAIBTUserBasicSummaryInfo.h"
#include "OAIBTVersionInfo.h"
#include "OAIBTVersionInfoBase.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTVersionInfo: public OAIObject {
public:
    OAIBTVersionInfo();
    OAIBTVersionInfo(QString json);
    ~OAIBTVersionInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTVersionInfo* fromJson(QString jsonString) override;

    QString* getHref();
    void setHref(QString* href);

    QString* getId();
    void setId(QString* id);

    QString* getJsonType();
    void setJsonType(QString* json_type);

    QString* getName();
    void setName(QString* name);

    QString* getViewRef();
    void setViewRef(QString* view_ref);

    OAIBTUserBasicSummaryInfo* getCreator();
    void setCreator(OAIBTUserBasicSummaryInfo* creator);

    QString* getDocumentId();
    void setDocumentId(QString* document_id);

    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);

    OAIBTThumbnailInfo* getThumbnail();
    void setThumbnail(OAIBTThumbnailInfo* thumbnail);

    QList<OAIBTVersionInfo*>* getParents();
    void setParents(QList<OAIBTVersionInfo*>* parents);

    QString* getMicroversion();
    void setMicroversion(QString* microversion);

    OAIBTUserBasicSummaryInfo* getLastModifier();
    void setLastModifier(OAIBTUserBasicSummaryInfo* last_modifier);

    QDateTime* getModifiedAt();
    void setModifiedAt(QDateTime* modified_at);

    QDateTime* getOverrideDate();
    void setOverrideDate(QDateTime* override_date);

    QString* getType();
    void setType(QString* type);

    QString* getParent();
    void setParent(QString* parent);

    QString* getDescription();
    void setDescription(QString* description);

    qint32 getPurpose();
    void setPurpose(qint32 purpose);


    virtual bool isSet() override;

private:
    QString* href;
    bool m_href_isSet;

    QString* id;
    bool m_id_isSet;

    QString* json_type;
    bool m_json_type_isSet;

    QString* name;
    bool m_name_isSet;

    QString* view_ref;
    bool m_view_ref_isSet;

    OAIBTUserBasicSummaryInfo* creator;
    bool m_creator_isSet;

    QString* document_id;
    bool m_document_id_isSet;

    QDateTime* created_at;
    bool m_created_at_isSet;

    OAIBTThumbnailInfo* thumbnail;
    bool m_thumbnail_isSet;

    QList<OAIBTVersionInfo*>* parents;
    bool m_parents_isSet;

    QString* microversion;
    bool m_microversion_isSet;

    OAIBTUserBasicSummaryInfo* last_modifier;
    bool m_last_modifier_isSet;

    QDateTime* modified_at;
    bool m_modified_at_isSet;

    QDateTime* override_date;
    bool m_override_date_isSet;

    QString* type;
    bool m_type_isSet;

    QString* parent;
    bool m_parent_isSet;

    QString* description;
    bool m_description_isSet;

    qint32 purpose;
    bool m_purpose_isSet;

};

}

#endif /* OAIBTVersionInfo_H_ */
