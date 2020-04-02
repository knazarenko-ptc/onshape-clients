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
 * OAIRoleMapEntry.h
 *
 * 
 */

#ifndef OAIRoleMapEntry_H_
#define OAIRoleMapEntry_H_

#include <QJsonObject>


#include "OAIBTIdentityInfo.h"
#include "OAIBTRbacRoleInfo.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIRoleMapEntry: public OAIObject {
public:
    OAIRoleMapEntry();
    OAIRoleMapEntry(QString json);
    ~OAIRoleMapEntry();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIRoleMapEntry* fromJson(QString jsonString) override;

    QList<OAIBTIdentityInfo*>* getIdentities();
    void setIdentities(QList<OAIBTIdentityInfo*>* identities);

    OAIBTRbacRoleInfo* getRole();
    void setRole(OAIBTRbacRoleInfo* role);


    virtual bool isSet() override;

private:
    QList<OAIBTIdentityInfo*>* identities;
    bool m_identities_isSet;

    OAIBTRbacRoleInfo* role;
    bool m_role_isSet;

};

}

#endif /* OAIRoleMapEntry_H_ */
