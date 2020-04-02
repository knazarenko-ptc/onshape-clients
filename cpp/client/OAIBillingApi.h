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

#ifndef _OAI_OAIBillingApi_H_
#define _OAI_OAIBillingApi_H_

#include "OAIHttpRequest.h"

#include <QString>

#include <QObject>

namespace OpenAPI {

class OAIBillingApi: public QObject {
    Q_OBJECT

public:
    OAIBillingApi();
    OAIBillingApi(QString host, QString basePath);
    ~OAIBillingApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void getClientPlans(QString* cid);
    
private:
    void getClientPlansCallback (OAIHttpRequestWorker * worker);
    
signals:
    void getClientPlansSignal();
    
    void getClientPlansSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    
    void getClientPlansSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
