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
 * OAIBTAppElementModifyInfo.h
 *
 * 
 */

#ifndef OAIBTAppElementModifyInfo_H_
#define OAIBTAppElementModifyInfo_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTAppElementModifyInfo: public OAIObject {
public:
    OAIBTAppElementModifyInfo();
    OAIBTAppElementModifyInfo(QString json);
    ~OAIBTAppElementModifyInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTAppElementModifyInfo* fromJson(QString jsonString) override;

    QString* getChangeId();
    void setChangeId(QString* change_id);

    QString* getElementId();
    void setElementId(QString* element_id);

    qint32 getErrorCode();
    void setErrorCode(qint32 error_code);

    QString* getErrorDescription();
    void setErrorDescription(QString* error_description);

    QString* getErrorValue();
    void setErrorValue(QString* error_value);

    QString* getParentChangeId();
    void setParentChangeId(QString* parent_change_id);

    bool isPropertyEditsMerged();
    void setPropertyEditsMerged(bool property_edits_merged);

    QString* getTransactionId();
    void setTransactionId(QString* transaction_id);


    virtual bool isSet() override;

private:
    QString* change_id;
    bool m_change_id_isSet;

    QString* element_id;
    bool m_element_id_isSet;

    qint32 error_code;
    bool m_error_code_isSet;

    QString* error_description;
    bool m_error_description_isSet;

    QString* error_value;
    bool m_error_value_isSet;

    QString* parent_change_id;
    bool m_parent_change_id_isSet;

    bool property_edits_merged;
    bool m_property_edits_merged_isSet;

    QString* transaction_id;
    bool m_transaction_id_isSet;

};

}

#endif /* OAIBTAppElementModifyInfo_H_ */
