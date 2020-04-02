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
 * OAILink.h
 *
 * 
 */

#ifndef OAILink_H_
#define OAILink_H_

#include <QJsonObject>


#include "OAIHeader.h"
#include "OAIObject.h"
#include "OAIServer.h"
#include <QList>
#include <QMap>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAILink: public OAIObject {
public:
    OAILink();
    OAILink(QString json);
    ~OAILink();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAILink* fromJson(QString jsonString) override;

    QString* getDescription();
    void setDescription(QString* description);

    QMap<QString, OAIObject*>* getExtensions();
    void setExtensions(QMap<QString, OAIObject*>* extensions);

    QString* getGetref();
    void setGetref(QString* getref);

    QMap<QString, OAIHeader*>* getHeaders();
    void setHeaders(QMap<QString, OAIHeader*>* headers);

    QString* getOperationId();
    void setOperationId(QString* operation_id);

    QString* getOperationRef();
    void setOperationRef(QString* operation_ref);

    QMap<QString, QString*>* getParameters();
    void setParameters(QMap<QString, QString*>* parameters);

    OAIObject* getRequestBody();
    void setRequestBody(OAIObject* request_body);

    OAIServer* getServer();
    void setServer(OAIServer* server);


    virtual bool isSet() override;

private:
    QString* description;
    bool m_description_isSet;

    QMap<QString, OAIObject*>* extensions;
    bool m_extensions_isSet;

    QString* getref;
    bool m_getref_isSet;

    QMap<QString, OAIHeader*>* headers;
    bool m_headers_isSet;

    QString* operation_id;
    bool m_operation_id_isSet;

    QString* operation_ref;
    bool m_operation_ref_isSet;

    QMap<QString, QString*>* parameters;
    bool m_parameters_isSet;

    OAIObject* request_body;
    bool m_request_body_isSet;

    OAIServer* server;
    bool m_server_isSet;

};

}

#endif /* OAILink_H_ */
