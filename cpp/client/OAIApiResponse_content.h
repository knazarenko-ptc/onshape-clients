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
 * OAIApiResponse_content.h
 *
 * 
 */

#ifndef OAIApiResponse_content_H_
#define OAIApiResponse_content_H_

#include <QJsonObject>



#include "OAIObject.h"

namespace OpenAPI {

class OAIApiResponse_content: public OAIObject {
public:
    OAIApiResponse_content();
    OAIApiResponse_content(QString json);
    ~OAIApiResponse_content();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIApiResponse_content* fromJson(QString jsonString) override;

    bool isEmpty();
    void setEmpty(bool empty);


    virtual bool isSet() override;

private:
    bool empty;
    bool m_empty_isSet;

};

}

#endif /* OAIApiResponse_content_H_ */
