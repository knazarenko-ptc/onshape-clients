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
 * OAIBTWebhookInfo.h
 *
 * 
 */

#ifndef OAIBTWebhookInfo_H_
#define OAIBTWebhookInfo_H_

#include <QJsonObject>


#include "OAIBTWebhookOptions.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTWebhookInfo: public OAIObject {
public:
    OAIBTWebhookInfo();
    OAIBTWebhookInfo(QString json);
    ~OAIBTWebhookInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTWebhookInfo* fromJson(QString jsonString) override;

    QString* getCompanyId();
    void setCompanyId(QString* company_id);

    QString* getData();
    void setData(QString* data);

    qint32 getDroppedEventCount();
    void setDroppedEventCount(qint32 dropped_event_count);

    QList<QString*>* getEvents();
    void setEvents(QList<QString*>* events);

    QString* getFilter();
    void setFilter(QString* filter);

    QString* getFolderId();
    void setFolderId(QString* folder_id);

    QString* getGetprojectId();
    void setGetprojectId(QString* getproject_id);

    QString* getHref();
    void setHref(QString* href);

    QString* getId();
    void setId(QString* id);

    QString* getName();
    void setName(QString* name);

    OAIBTWebhookOptions* getOptions();
    void setOptions(OAIBTWebhookOptions* options);

    QString* getUrl();
    void setUrl(QString* url);

    QString* getViewRef();
    void setViewRef(QString* view_ref);


    virtual bool isSet() override;

private:
    QString* company_id;
    bool m_company_id_isSet;

    QString* data;
    bool m_data_isSet;

    qint32 dropped_event_count;
    bool m_dropped_event_count_isSet;

    QList<QString*>* events;
    bool m_events_isSet;

    QString* filter;
    bool m_filter_isSet;

    QString* folder_id;
    bool m_folder_id_isSet;

    QString* getproject_id;
    bool m_getproject_id_isSet;

    QString* href;
    bool m_href_isSet;

    QString* id;
    bool m_id_isSet;

    QString* name;
    bool m_name_isSet;

    OAIBTWebhookOptions* options;
    bool m_options_isSet;

    QString* url;
    bool m_url_isSet;

    QString* view_ref;
    bool m_view_ref_isSet;

};

}

#endif /* OAIBTWebhookInfo_H_ */
