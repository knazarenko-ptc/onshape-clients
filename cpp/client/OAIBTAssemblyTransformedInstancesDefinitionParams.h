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
 * OAIBTAssemblyTransformedInstancesDefinitionParams.h
 *
 * 
 */

#ifndef OAIBTAssemblyTransformedInstancesDefinitionParams_H_
#define OAIBTAssemblyTransformedInstancesDefinitionParams_H_

#include <QJsonObject>


#include "OAITransformGroup.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTAssemblyTransformedInstancesDefinitionParams: public OAIObject {
public:
    OAIBTAssemblyTransformedInstancesDefinitionParams();
    OAIBTAssemblyTransformedInstancesDefinitionParams(QString json);
    ~OAIBTAssemblyTransformedInstancesDefinitionParams();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTAssemblyTransformedInstancesDefinitionParams* fromJson(QString jsonString) override;

    QList<OAITransformGroup*>* getTransformGroups();
    void setTransformGroups(QList<OAITransformGroup*>* transform_groups);


    virtual bool isSet() override;

private:
    QList<OAITransformGroup*>* transform_groups;
    bool m_transform_groups_isSet;

};

}

#endif /* OAIBTAssemblyTransformedInstancesDefinitionParams_H_ */
