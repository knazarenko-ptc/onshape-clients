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
 * OAIBTCurveDescription-1583.h
 *
 * 
 */

#ifndef OAIBTCurveDescription-1583_H_
#define OAIBTCurveDescription-1583_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTCurveDescription-1583: public OAIObject {
public:
    OAIBTCurveDescription-1583();
    OAIBTCurveDescription-1583(QString json);
    ~OAIBTCurveDescription-1583();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTCurveDescription-1583* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    QString* getType();
    void setType(QString* type);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    QString* type;
    bool m_type_isSet;

};

}

#endif /* OAIBTCurveDescription-1583_H_ */
