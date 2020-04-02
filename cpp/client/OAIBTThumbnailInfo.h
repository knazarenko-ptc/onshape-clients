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
 * OAIBTThumbnailInfo.h
 *
 * 
 */

#ifndef OAIBTThumbnailInfo_H_
#define OAIBTThumbnailInfo_H_

#include <QJsonObject>


#include "OAIBTThumbnailSizeInfo.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTThumbnailInfo: public OAIObject {
public:
    OAIBTThumbnailInfo();
    OAIBTThumbnailInfo(QString json);
    ~OAIBTThumbnailInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTThumbnailInfo* fromJson(QString jsonString) override;

    QString* getHref();
    void setHref(QString* href);

    QString* getId();
    void setId(QString* id);

    QList<QList<OAIBTThumbnailSizeInfo*>*>* getSecondarySizes();
    void setSecondarySizes(QList<QList<OAIBTThumbnailSizeInfo*>*>* secondary_sizes);

    QList<OAIBTThumbnailSizeInfo*>* getSizes();
    void setSizes(QList<OAIBTThumbnailSizeInfo*>* sizes);


    virtual bool isSet() override;

private:
    QString* href;
    bool m_href_isSet;

    QString* id;
    bool m_id_isSet;

    QList<QList<OAIBTThumbnailSizeInfo*>*>* secondary_sizes;
    bool m_secondary_sizes_isSet;

    QList<OAIBTThumbnailSizeInfo*>* sizes;
    bool m_sizes_isSet;

};

}

#endif /* OAIBTThumbnailInfo_H_ */
