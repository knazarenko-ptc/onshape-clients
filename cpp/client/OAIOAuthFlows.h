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
 * OAIOAuthFlows.h
 *
 * 
 */

#ifndef OAIOAuthFlows_H_
#define OAIOAuthFlows_H_

#include <QJsonObject>


#include "OAIOAuthFlow.h"
#include "OAIObject.h"
#include <QList>
#include <QMap>

#include "OAIObject.h"

namespace OpenAPI {

class OAIOAuthFlows: public OAIObject {
public:
    OAIOAuthFlows();
    OAIOAuthFlows(QString json);
    ~OAIOAuthFlows();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOAuthFlows* fromJson(QString jsonString) override;

    OAIOAuthFlow* getAuthorizationCode();
    void setAuthorizationCode(OAIOAuthFlow* authorization_code);

    OAIOAuthFlow* getClientCredentials();
    void setClientCredentials(OAIOAuthFlow* client_credentials);

    QMap<QString, OAIObject*>* getExtensions();
    void setExtensions(QMap<QString, OAIObject*>* extensions);

    OAIOAuthFlow* getImplicit();
    void setImplicit(OAIOAuthFlow* implicit);

    OAIOAuthFlow* getPassword();
    void setPassword(OAIOAuthFlow* password);


    virtual bool isSet() override;

private:
    OAIOAuthFlow* authorization_code;
    bool m_authorization_code_isSet;

    OAIOAuthFlow* client_credentials;
    bool m_client_credentials_isSet;

    QMap<QString, OAIObject*>* extensions;
    bool m_extensions_isSet;

    OAIOAuthFlow* implicit;
    bool m_implicit_isSet;

    OAIOAuthFlow* password;
    bool m_password_isSet;

};

}

#endif /* OAIOAuthFlows_H_ */
