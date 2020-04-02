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
 * OAIApiResponse.h
 *
 * 
 */

#ifndef OAIApiResponse_H_
#define OAIApiResponse_H_

#include <QJsonObject>


#include "OAIApiResponse_content.h"
#include "OAIHeader.h"
#include "OAILink.h"
#include "OAIObject.h"
#include <QList>
#include <QMap>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIApiResponse: public OAIObject {
public:
    OAIApiResponse();
    OAIApiResponse(QString json);
    ~OAIApiResponse();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIApiResponse* fromJson(QString jsonString) override;

    OAIApiResponse_content* getContent();
    void setContent(OAIApiResponse_content* content);

    QString* getDescription();
    void setDescription(QString* description);

    QMap<QString, OAIObject*>* getExtensions();
    void setExtensions(QMap<QString, OAIObject*>* extensions);

    QString* getGetref();
    void setGetref(QString* getref);

    QMap<QString, OAIHeader*>* getHeaders();
    void setHeaders(QMap<QString, OAIHeader*>* headers);

    QMap<QString, OAILink*>* getLinks();
    void setLinks(QMap<QString, OAILink*>* links);


    virtual bool isSet() override;

private:
    OAIApiResponse_content* content;
    bool m_content_isSet;

    QString* description;
    bool m_description_isSet;

    QMap<QString, OAIObject*>* extensions;
    bool m_extensions_isSet;

    QString* getref;
    bool m_getref_isSet;

    QMap<QString, OAIHeader*>* headers;
    bool m_headers_isSet;

    QMap<QString, OAILink*>* links;
    bool m_links_isSet;

};

}

#endif /* OAIApiResponse_H_ */
