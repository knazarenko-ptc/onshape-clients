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
 * OAIBTUpdateReleasePackageParams.h
 *
 * 
 */

#ifndef OAIBTUpdateReleasePackageParams_H_
#define OAIBTUpdateReleasePackageParams_H_

#include <QJsonObject>


#include "OAIBTPropertyValueParam.h"
#include "OAIBTReleasePackageItemParams.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTUpdateReleasePackageParams: public OAIObject {
public:
    OAIBTUpdateReleasePackageParams();
    OAIBTUpdateReleasePackageParams(QString json);
    ~OAIBTUpdateReleasePackageParams();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTUpdateReleasePackageParams* fromJson(QString jsonString) override;

    bool isEmpty();
    void setEmpty(bool empty);

    QList<QString*>* getItemIds();
    void setItemIds(QList<QString*>* item_ids);

    QList<OAIBTReleasePackageItemParams*>* getItems();
    void setItems(QList<OAIBTReleasePackageItemParams*>* items);

    QList<OAIBTPropertyValueParam*>* getProperties();
    void setProperties(QList<OAIBTPropertyValueParam*>* properties);


    virtual bool isSet() override;

private:
    bool empty;
    bool m_empty_isSet;

    QList<QString*>* item_ids;
    bool m_item_ids_isSet;

    QList<OAIBTReleasePackageItemParams*>* items;
    bool m_items_isSet;

    QList<OAIBTPropertyValueParam*>* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIBTUpdateReleasePackageParams_H_ */
