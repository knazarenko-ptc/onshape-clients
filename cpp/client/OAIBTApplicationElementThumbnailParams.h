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
 * OAIBTApplicationElementThumbnailParams.h
 *
 * 
 */

#ifndef OAIBTApplicationElementThumbnailParams_H_
#define OAIBTApplicationElementThumbnailParams_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTApplicationElementThumbnailParams: public OAIObject {
public:
    OAIBTApplicationElementThumbnailParams();
    OAIBTApplicationElementThumbnailParams(QString json);
    ~OAIBTApplicationElementThumbnailParams();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTApplicationElementThumbnailParams* fromJson(QString jsonString) override;

    QString* getBase64EncodedImage();
    void setBase64EncodedImage(QString* base64_encoded_image);

    QString* getDescription();
    void setDescription(QString* description);

    qint32 getImageHeight();
    void setImageHeight(qint32 image_height);

    qint32 getImageWidth();
    void setImageWidth(qint32 image_width);

    bool isIsPrimary();
    void setIsPrimary(bool is_primary);

    QString* getUniqueId();
    void setUniqueId(QString* unique_id);


    virtual bool isSet() override;

private:
    QString* base64_encoded_image;
    bool m_base64_encoded_image_isSet;

    QString* description;
    bool m_description_isSet;

    qint32 image_height;
    bool m_image_height_isSet;

    qint32 image_width;
    bool m_image_width_isSet;

    bool is_primary;
    bool m_is_primary_isSet;

    QString* unique_id;
    bool m_unique_id_isSet;

};

}

#endif /* OAIBTApplicationElementThumbnailParams_H_ */
