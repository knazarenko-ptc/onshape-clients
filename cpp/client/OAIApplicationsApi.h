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

#ifndef _OAI_OAIApplicationsApi_H_
#define _OAI_OAIApplicationsApi_H_

#include "OAIHttpRequest.h"

#include "OAIBTUserAppSettingsInfo.h"
#include "OAIBTUserAppSettingsParams.h"
#include <QString>

#include <QObject>

namespace OpenAPI {

class OAIApplicationsApi: public QObject {
    Q_OBJECT

public:
    OAIApplicationsApi();
    OAIApplicationsApi(QString host, QString basePath);
    ~OAIApplicationsApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void deleteAppSettings(QString* uid, QString* cid, QList<QString*>* key);
    void getUserAppSettings(QString* uid, QString* cid, QList<QString*>* key);
    void updateAppSettings(QString* uid, QString* cid, OAIBTUserAppSettingsParams& oaibt_user_app_settings_params);
    
private:
    void deleteAppSettingsCallback (OAIHttpRequestWorker * worker);
    void getUserAppSettingsCallback (OAIHttpRequestWorker * worker);
    void updateAppSettingsCallback (OAIHttpRequestWorker * worker);
    
signals:
    void deleteAppSettingsSignal();
    void getUserAppSettingsSignal(OAIBTUserAppSettingsInfo* summary);
    void updateAppSettingsSignal();
    
    void deleteAppSettingsSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    void getUserAppSettingsSignalE(OAIBTUserAppSettingsInfo* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void updateAppSettingsSignalE(QNetworkReply::NetworkError error_type, QString& error_str);
    
    void deleteAppSettingsSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getUserAppSettingsSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void updateAppSettingsSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
