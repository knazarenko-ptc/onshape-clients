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
 * OAIBTReleasePackageItemParams_notEditableInVersionProperties.h
 *
 * 
 */

#ifndef OAIBTReleasePackageItemParams_notEditableInVersionProperties_H_
#define OAIBTReleasePackageItemParams_notEditableInVersionProperties_H_

#include <QJsonObject>



#include "OAIObject.h"

namespace OpenAPI {

class OAIBTReleasePackageItemParams_notEditableInVersionProperties: public OAIObject {
public:
    OAIBTReleasePackageItemParams_notEditableInVersionProperties();
    OAIBTReleasePackageItemParams_notEditableInVersionProperties(QString json);
    ~OAIBTReleasePackageItemParams_notEditableInVersionProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTReleasePackageItemParams_notEditableInVersionProperties* fromJson(QString jsonString) override;

    bool isParallel();
    void setParallel(bool parallel);


    virtual bool isSet() override;

private:
    bool parallel;
    bool m_parallel_isSet;

};

}

#endif /* OAIBTReleasePackageItemParams_notEditableInVersionProperties_H_ */
