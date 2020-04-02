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
 * OAIBTStringFormatCondition-683.h
 *
 * 
 */

#ifndef OAIBTStringFormatCondition-683_H_
#define OAIBTStringFormatCondition-683_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTStringFormatCondition-683: public OAIObject {
public:
    OAIBTStringFormatCondition-683();
    OAIBTStringFormatCondition-683(QString json);
    ~OAIBTStringFormatCondition-683();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTStringFormatCondition-683* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    QString* getErrorMessage();
    void setErrorMessage(QString* error_message);

    bool isShouldResetValueWhenConfirmed();
    void setShouldResetValueWhenConfirmed(bool should_reset_value_when_confirmed);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    QString* error_message;
    bool m_error_message_isSet;

    bool should_reset_value_when_confirmed;
    bool m_should_reset_value_when_confirmed_isSet;

};

}

#endif /* OAIBTStringFormatCondition-683_H_ */
