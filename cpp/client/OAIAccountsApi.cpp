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

#include "OAIAccountsApi.h"
#include "OAIHelpers.h"
#include "OAIModelFactory.h"
#include "OAIQObjectWrapper.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIAccountsApi::OAIAccountsApi() {}

OAIAccountsApi::~OAIAccountsApi() {}

OAIAccountsApi::OAIAccountsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
OAIAccountsApi::cancelPurchaseNew(QString* aid, QString* pid, bool cancel_immediately) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/accounts/{aid}/purchases/{pid}");

    QString aidPathParam("{"); aidPathParam.append("aid").append("}");
    fullPath.replace(aidPathParam, stringValue(aid));
    QString pidPathParam("{"); pidPathParam.append("pid").append("}");
    fullPath.replace(pidPathParam, stringValue(pid));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cancelImmediately"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cancel_immediately)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "DELETE");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIAccountsApi::cancelPurchaseNewCallback);

    worker->execute(&input);
}

void
OAIAccountsApi::cancelPurchaseNewCallback(OAIHttpRequestWorker * worker) {
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
        emit cancelPurchaseNewSignal();
    } else {
        emit cancelPurchaseNewSignalE(error_type, error_str);
        emit cancelPurchaseNewSignalEFull(worker, error_type, error_str);
    }
}

void
OAIAccountsApi::consumePurchase(QString* pid, OAIBTPurchaseUserParams& oaibt_purchase_user_params) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/accounts/purchases/{pid}/consume");

    QString pidPathParam("{"); pidPathParam.append("pid").append("}");
    fullPath.replace(pidPathParam, stringValue(pid));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");


    
    QString output = oaibt_purchase_user_params.asJson();
    input.request_body.append(output);
    


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIAccountsApi::consumePurchaseCallback);

    worker->execute(&input);
}

void
OAIAccountsApi::consumePurchaseCallback(OAIHttpRequestWorker * worker) {
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
    OAIBTPurchaseInfo* output = static_cast<OAIBTPurchaseInfo*>(create(json, QString("OAIBTPurchaseInfo")));
    auto wrapper = new OAIQObjectWrapper<OAIBTPurchaseInfo*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit consumePurchaseSignal(output);
    } else {
        emit consumePurchaseSignalE(output, error_type, error_str);
        emit consumePurchaseSignalEFull(worker, error_type, error_str);
    }
}

void
OAIAccountsApi::getPlanPurchases(QString* plan_id, qint32 offset, qint32 limit) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/accounts/plans/{planId}/purchases");

    QString plan_idPathParam("{"); plan_idPathParam.append("planId").append("}");
    fullPath.replace(plan_idPathParam, stringValue(plan_id));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("offset"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(offset)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(limit)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIAccountsApi::getPlanPurchasesCallback);

    worker->execute(&input);
}

void
OAIAccountsApi::getPlanPurchasesCallback(OAIHttpRequestWorker * worker) {
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
    OAIBTListResponseBTPurchaseInfo* output = static_cast<OAIBTListResponseBTPurchaseInfo*>(create(json, QString("OAIBTListResponseBTPurchaseInfo")));
    auto wrapper = new OAIQObjectWrapper<OAIBTListResponseBTPurchaseInfo*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getPlanPurchasesSignal(output);
    } else {
        emit getPlanPurchasesSignalE(output, error_type, error_str);
        emit getPlanPurchasesSignalEFull(worker, error_type, error_str);
    }
}

void
OAIAccountsApi::getPurchases(bool all, bool own_purchase_only) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/accounts/purchases");


    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("all"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(all)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("ownPurchaseOnly"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(own_purchase_only)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIAccountsApi::getPurchasesCallback);

    worker->execute(&input);
}

void
OAIAccountsApi::getPurchasesCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QList<OAIBTPurchaseInfo*>* output = new QList<OAIBTPurchaseInfo*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();
    auto wrapper = new OAIQObjectWrapper<QList<OAIBTPurchaseInfo*>*> (output);
    wrapper->deleteLater();
    foreach(QJsonValue obj, jsonArray) {
        OAIBTPurchaseInfo* o = new OAIBTPurchaseInfo();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        auto objwrapper = new OAIQObjectWrapper<OAIBTPurchaseInfo*> (o);
        objwrapper->deleteLater();
        output->append(o);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getPurchasesSignal(output);
    } else {
        emit getPurchasesSignalE(output, error_type, error_str);
        emit getPurchasesSignalEFull(worker, error_type, error_str);
    }
}


}
