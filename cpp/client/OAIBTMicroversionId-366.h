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
 * OAIBTMicroversionId-366.h
 *
 * 
 */

#ifndef OAIBTMicroversionId-366_H_
#define OAIBTMicroversionId-366_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTMicroversionId-366: public OAIObject {
public:
    OAIBTMicroversionId-366();
    OAIBTMicroversionId-366(QString json);
    ~OAIBTMicroversionId-366();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTMicroversionId-366* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    bool isDeleted();
    void setDeleted(bool deleted);

    QString* getTheId();
    void setTheId(QString* the_id);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    bool deleted;
    bool m_deleted_isSet;

    QString* the_id;
    bool m_the_id_isSet;

};

}

#endif /* OAIBTMicroversionId-366_H_ */
