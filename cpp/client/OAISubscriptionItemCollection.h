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
 * OAISubscriptionItemCollection.h
 *
 * 
 */

#ifndef OAISubscriptionItemCollection_H_
#define OAISubscriptionItemCollection_H_

#include <QJsonObject>


#include "OAIObject.h"
#include "OAIRequestOptions.h"
#include "OAISubscriptionItem.h"
#include <QList>
#include <QMap>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAISubscriptionItemCollection: public OAIObject {
public:
    OAISubscriptionItemCollection();
    OAISubscriptionItemCollection(QString json);
    ~OAISubscriptionItemCollection();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAISubscriptionItemCollection* fromJson(QString jsonString) override;

    qint32 getCount();
    void setCount(qint32 count);

    QList<OAISubscriptionItem*>* getData();
    void setData(QList<OAISubscriptionItem*>* data);

    bool isHasMore();
    void setHasMore(bool has_more);

    OAIRequestOptions* getRequestOptions();
    void setRequestOptions(OAIRequestOptions* request_options);

    QMap<QString, OAIObject*>* getRequestParams();
    void setRequestParams(QMap<QString, OAIObject*>* request_params);

    qint32 getTotalCount();
    void setTotalCount(qint32 total_count);

    QString* getUrl();
    void setUrl(QString* url);


    virtual bool isSet() override;

private:
    qint32 count;
    bool m_count_isSet;

    QList<OAISubscriptionItem*>* data;
    bool m_data_isSet;

    bool has_more;
    bool m_has_more_isSet;

    OAIRequestOptions* request_options;
    bool m_request_options_isSet;

    QMap<QString, OAIObject*>* request_params;
    bool m_request_params_isSet;

    qint32 total_count;
    bool m_total_count_isSet;

    QString* url;
    bool m_url_isSet;

};

}

#endif /* OAISubscriptionItemCollection_H_ */
