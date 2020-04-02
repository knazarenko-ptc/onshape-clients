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

#include "OAIApplicationsApi.h"
#include "OAIHelpers.h"
#include "OAIModelFactory.h"
#include "OAIQObjectWrapper.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIApplicationsApi::OAIApplicationsApi() {}

OAIApplicationsApi::~OAIApplicationsApi() {}

OAIApplicationsApi::OAIApplicationsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
OAIApplicationsApi::deleteAppSettings(QString* uid, QString* cid, QList<QString*>* key) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/applications/clients/{cid}/settings/users/{uid}");

    QString uidPathParam("{"); uidPathParam.append("uid").append("}");
    fullPath.replace(uidPathParam, stringValue(uid));
    QString cidPathParam("{"); cidPathParam.append("cid").append("}");
    fullPath.replace(cidPathParam, stringValue(cid));



    if (key->size() > 0) {
      if (QString("multi").indexOf("multi") == 0) {
        foreach(QString* t, *key) {
          if (fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else
            fullPath.append("?");
          fullPath.append("key=").append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("ssv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else
          fullPath.append("?");
        fullPath.append("key=");
        qint32 count = 0;
        foreach(QString* t, *key) {
          if (count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("tsv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else
          fullPath.append("?");
        fullPath.append("key=");
        qint32 count = 0;
        foreach(QString* t, *key) {
          if (count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "DELETE");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIApplicationsApi::deleteAppSettingsCallback);

    worker->execute(&input);
}

void
OAIApplicationsApi::deleteAppSettingsCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit deleteAppSettingsSignal();
    } else {
        emit deleteAppSettingsSignalE(error_type, error_str);
        emit deleteAppSettingsSignalEFull(worker, error_type, error_str);
    }
}

void
OAIApplicationsApi::getUserAppSettings(QString* uid, QString* cid, QList<QString*>* key) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/applications/clients/{cid}/settings/users/{uid}");

    QString uidPathParam("{"); uidPathParam.append("uid").append("}");
    fullPath.replace(uidPathParam, stringValue(uid));
    QString cidPathParam("{"); cidPathParam.append("cid").append("}");
    fullPath.replace(cidPathParam, stringValue(cid));



    if (key->size() > 0) {
      if (QString("multi").indexOf("multi") == 0) {
        foreach(QString* t, *key) {
          if (fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else
            fullPath.append("?");
          fullPath.append("key=").append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("ssv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else
          fullPath.append("?");
        fullPath.append("key=");
        qint32 count = 0;
        foreach(QString* t, *key) {
          if (count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("tsv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else
          fullPath.append("?");
        fullPath.append("key=");
        qint32 count = 0;
        foreach(QString* t, *key) {
          if (count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIApplicationsApi::getUserAppSettingsCallback);

    worker->execute(&input);
}

void
OAIApplicationsApi::getUserAppSettingsCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    OAIBTUserAppSettingsInfo* output = static_cast<OAIBTUserAppSettingsInfo*>(create(json, QString("OAIBTUserAppSettingsInfo")));
    auto wrapper = new OAIQObjectWrapper<OAIBTUserAppSettingsInfo*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getUserAppSettingsSignal(output);
    } else {
        emit getUserAppSettingsSignalE(output, error_type, error_str);
        emit getUserAppSettingsSignalEFull(worker, error_type, error_str);
    }
}

void
OAIApplicationsApi::updateAppSettings(QString* uid, QString* cid, OAIBTUserAppSettingsParams& oaibt_user_app_settings_params) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/applications/clients/{cid}/settings/users/{uid}");

    QString uidPathParam("{"); uidPathParam.append("uid").append("}");
    fullPath.replace(uidPathParam, stringValue(uid));
    QString cidPathParam("{"); cidPathParam.append("cid").append("}");
    fullPath.replace(cidPathParam, stringValue(cid));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");


    
    QString output = oaibt_user_app_settings_params.asJson();
    input.request_body.append(output);
    


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIApplicationsApi::updateAppSettingsCallback);

    worker->execute(&input);
}

void
OAIApplicationsApi::updateAppSettingsCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit updateAppSettingsSignal();
    } else {
        emit updateAppSettingsSignalE(error_type, error_str);
        emit updateAppSettingsSignalEFull(worker, error_type, error_str);
    }
}


}
