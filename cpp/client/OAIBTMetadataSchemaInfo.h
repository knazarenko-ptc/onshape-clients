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
 * OAIBTMetadataSchemaInfo.h
 *
 * 
 */

#ifndef OAIBTMetadataSchemaInfo_H_
#define OAIBTMetadataSchemaInfo_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTMetadataSchemaInfo: public OAIObject {
public:
    OAIBTMetadataSchemaInfo();
    OAIBTMetadataSchemaInfo(QString json);
    ~OAIBTMetadataSchemaInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTMetadataSchemaInfo* fromJson(QString jsonString) override;

    QString* getHref();
    void setHref(QString* href);

    QString* getId();
    void setId(QString* id);

    QString* getName();
    void setName(QString* name);

    qint32 getObjectType();
    void setObjectType(qint32 object_type);

    QString* getOwnerId();
    void setOwnerId(QString* owner_id);

    qint32 getOwnerType();
    void setOwnerType(qint32 owner_type);

    QString* getViewRef();
    void setViewRef(QString* view_ref);


    virtual bool isSet() override;

private:
    QString* href;
    bool m_href_isSet;

    QString* id;
    bool m_id_isSet;

    QString* name;
    bool m_name_isSet;

    qint32 object_type;
    bool m_object_type_isSet;

    QString* owner_id;
    bool m_owner_id_isSet;

    qint32 owner_type;
    bool m_owner_type_isSet;

    QString* view_ref;
    bool m_view_ref_isSet;

};

}

#endif /* OAIBTMetadataSchemaInfo_H_ */
