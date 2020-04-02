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
 * OAIBTAppElementReferencesResolveInfo.h
 *
 * 
 */

#ifndef OAIBTAppElementReferencesResolveInfo_H_
#define OAIBTAppElementReferencesResolveInfo_H_

#include <QJsonObject>


#include "OAIBTAppElementReferenceResolveInfo.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTAppElementReferencesResolveInfo: public OAIObject {
public:
    OAIBTAppElementReferencesResolveInfo();
    OAIBTAppElementReferencesResolveInfo(QString json);
    ~OAIBTAppElementReferencesResolveInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTAppElementReferencesResolveInfo* fromJson(QString jsonString) override;

    QList<OAIBTAppElementReferenceResolveInfo*>* getResolvedReferences();
    void setResolvedReferences(QList<OAIBTAppElementReferenceResolveInfo*>* resolved_references);

    QList<QString*>* getUnresolvedReferenceIds();
    void setUnresolvedReferenceIds(QList<QString*>* unresolved_reference_ids);


    virtual bool isSet() override;

private:
    QList<OAIBTAppElementReferenceResolveInfo*>* resolved_references;
    bool m_resolved_references_isSet;

    QList<QString*>* unresolved_reference_ids;
    bool m_unresolved_reference_ids_isSet;

};

}

#endif /* OAIBTAppElementReferencesResolveInfo_H_ */
