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
 * OAIBTAppElementHistoryEntryInfo.h
 *
 * 
 */

#ifndef OAIBTAppElementHistoryEntryInfo_H_
#define OAIBTAppElementHistoryEntryInfo_H_

#include <QJsonObject>


#include <QDateTime>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTAppElementHistoryEntryInfo: public OAIObject {
public:
    OAIBTAppElementHistoryEntryInfo();
    OAIBTAppElementHistoryEntryInfo(QString json);
    ~OAIBTAppElementHistoryEntryInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTAppElementHistoryEntryInfo* fromJson(QString jsonString) override;

    QString* getChangeId();
    void setChangeId(QString* change_id);

    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);

    QString* getDescription();
    void setDescription(QString* description);


    virtual bool isSet() override;

private:
    QString* change_id;
    bool m_change_id_isSet;

    QDateTime* created_at;
    bool m_created_at_isSet;

    QString* description;
    bool m_description_isSet;

};

}

#endif /* OAIBTAppElementHistoryEntryInfo_H_ */
