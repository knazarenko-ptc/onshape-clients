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
 * OAIBTMetadataCategorySummaryInfo.h
 *
 * 
 */

#ifndef OAIBTMetadataCategorySummaryInfo_H_
#define OAIBTMetadataCategorySummaryInfo_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTMetadataCategorySummaryInfo: public OAIObject {
public:
    OAIBTMetadataCategorySummaryInfo();
    OAIBTMetadataCategorySummaryInfo(QString json);
    ~OAIBTMetadataCategorySummaryInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTMetadataCategorySummaryInfo* fromJson(QString jsonString) override;

    QString* getDescription();
    void setDescription(QString* description);

    QString* getHref();
    void setHref(QString* href);

    QString* getId();
    void setId(QString* id);

    QString* getName();
    void setName(QString* name);

    QString* getOwnerId();
    void setOwnerId(QString* owner_id);

    qint32 getOwnerType();
    void setOwnerType(qint32 owner_type);

    qint32 getPublishState();
    void setPublishState(qint32 publish_state);

    QString* getViewRef();
    void setViewRef(QString* view_ref);


    virtual bool isSet() override;

private:
    QString* description;
    bool m_description_isSet;

    QString* href;
    bool m_href_isSet;

    QString* id;
    bool m_id_isSet;

    QString* name;
    bool m_name_isSet;

    QString* owner_id;
    bool m_owner_id_isSet;

    qint32 owner_type;
    bool m_owner_type_isSet;

    qint32 publish_state;
    bool m_publish_state_isSet;

    QString* view_ref;
    bool m_view_ref_isSet;

};

}

#endif /* OAIBTMetadataCategorySummaryInfo_H_ */
