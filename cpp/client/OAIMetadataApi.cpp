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

#include "OAIMetadataApi.h"
#include "OAIHelpers.h"
#include "OAIModelFactory.h"
#include "OAIQObjectWrapper.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIMetadataApi::OAIMetadataApi() {}

OAIMetadataApi::~OAIMetadataApi() {}

OAIMetadataApi::OAIMetadataApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
OAIMetadataApi::getVEOPStandardContentMetadata(QString* did, QString* vid, QString* eid, QString* otype, QString* oid, QString* pid, QString* configuration, QString* link_document_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/metadata/standardcontent/d/{did}/v/{vid}/e/{eid}/{otype}/{oid}/p/{pid}");

    QString didPathParam("{"); didPathParam.append("did").append("}");
    fullPath.replace(didPathParam, stringValue(did));
    QString vidPathParam("{"); vidPathParam.append("vid").append("}");
    fullPath.replace(vidPathParam, stringValue(vid));
    QString eidPathParam("{"); eidPathParam.append("eid").append("}");
    fullPath.replace(eidPathParam, stringValue(eid));
    QString otypePathParam("{"); otypePathParam.append("otype").append("}");
    fullPath.replace(otypePathParam, stringValue(otype));
    QString oidPathParam("{"); oidPathParam.append("oid").append("}");
    fullPath.replace(oidPathParam, stringValue(oid));
    QString pidPathParam("{"); pidPathParam.append("pid").append("}");
    fullPath.replace(pidPathParam, stringValue(pid));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("configuration"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(configuration)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("linkDocumentId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(link_document_id)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIMetadataApi::getVEOPStandardContentMetadataCallback);

    worker->execute(&input);
}

void
OAIMetadataApi::getVEOPStandardContentMetadataCallback(OAIHttpRequestWorker * worker) {
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
        emit getVEOPStandardContentMetadataSignal();
    } else {
        emit getVEOPStandardContentMetadataSignalE(error_type, error_str);
        emit getVEOPStandardContentMetadataSignalEFull(worker, error_type, error_str);
    }
}

void
OAIMetadataApi::getWMVEMetadata(QString* did, QString* wvm, QString* wvmid, QString* eid, QString* configuration, QString* link_document_id, bool infer_metadata_owner) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid}");

    QString didPathParam("{"); didPathParam.append("did").append("}");
    fullPath.replace(didPathParam, stringValue(did));
    QString wvmPathParam("{"); wvmPathParam.append("wvm").append("}");
    fullPath.replace(wvmPathParam, stringValue(wvm));
    QString wvmidPathParam("{"); wvmidPathParam.append("wvmid").append("}");
    fullPath.replace(wvmidPathParam, stringValue(wvmid));
    QString eidPathParam("{"); eidPathParam.append("eid").append("}");
    fullPath.replace(eidPathParam, stringValue(eid));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("configuration"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(configuration)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("linkDocumentId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(link_document_id)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("inferMetadataOwner"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(infer_metadata_owner)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIMetadataApi::getWMVEMetadataCallback);

    worker->execute(&input);
}

void
OAIMetadataApi::getWMVEMetadataCallback(OAIHttpRequestWorker * worker) {
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
        emit getWMVEMetadataSignal();
    } else {
        emit getWMVEMetadataSignalE(error_type, error_str);
        emit getWMVEMetadataSignalEFull(worker, error_type, error_str);
    }
}

void
OAIMetadataApi::getWMVEPMetadata(QString* did, QString* wvm, QString* wvmid, QString* eid, QString* pid, QString* configuration, QString* link_document_id, bool infer_metadata_owner) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid}/p/{pid}");

    QString didPathParam("{"); didPathParam.append("did").append("}");
    fullPath.replace(didPathParam, stringValue(did));
    QString wvmPathParam("{"); wvmPathParam.append("wvm").append("}");
    fullPath.replace(wvmPathParam, stringValue(wvm));
    QString wvmidPathParam("{"); wvmidPathParam.append("wvmid").append("}");
    fullPath.replace(wvmidPathParam, stringValue(wvmid));
    QString eidPathParam("{"); eidPathParam.append("eid").append("}");
    fullPath.replace(eidPathParam, stringValue(eid));
    QString pidPathParam("{"); pidPathParam.append("pid").append("}");
    fullPath.replace(pidPathParam, stringValue(pid));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("configuration"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(configuration)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("linkDocumentId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(link_document_id)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("inferMetadataOwner"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(infer_metadata_owner)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIMetadataApi::getWMVEPMetadataCallback);

    worker->execute(&input);
}

void
OAIMetadataApi::getWMVEPMetadataCallback(OAIHttpRequestWorker * worker) {
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
        emit getWMVEPMetadataSignal();
    } else {
        emit getWMVEPMetadataSignalE(error_type, error_str);
        emit getWMVEPMetadataSignalEFull(worker, error_type, error_str);
    }
}

void
OAIMetadataApi::getWMVEPsMetadata(QString* did, QString* wvm, QString* wvmid, QString* eid, QString* configuration, QString* link_document_id, bool infer_metadata_owner) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid}/p");

    QString didPathParam("{"); didPathParam.append("did").append("}");
    fullPath.replace(didPathParam, stringValue(did));
    QString wvmPathParam("{"); wvmPathParam.append("wvm").append("}");
    fullPath.replace(wvmPathParam, stringValue(wvm));
    QString wvmidPathParam("{"); wvmidPathParam.append("wvmid").append("}");
    fullPath.replace(wvmidPathParam, stringValue(wvmid));
    QString eidPathParam("{"); eidPathParam.append("eid").append("}");
    fullPath.replace(eidPathParam, stringValue(eid));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("configuration"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(configuration)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("linkDocumentId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(link_document_id)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("inferMetadataOwner"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(infer_metadata_owner)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIMetadataApi::getWMVEPsMetadataCallback);

    worker->execute(&input);
}

void
OAIMetadataApi::getWMVEPsMetadataCallback(OAIHttpRequestWorker * worker) {
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
        emit getWMVEPsMetadataSignal();
    } else {
        emit getWMVEPsMetadataSignalE(error_type, error_str);
        emit getWMVEPsMetadataSignalEFull(worker, error_type, error_str);
    }
}

void
OAIMetadataApi::getWMVEsMetadata(QString* did, QString* wvm, QString* wvmid, QString* link_document_id, bool infer_metadata_owner) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/metadata/d/{did}/{wvm}/{wvmid}/e");

    QString didPathParam("{"); didPathParam.append("did").append("}");
    fullPath.replace(didPathParam, stringValue(did));
    QString wvmPathParam("{"); wvmPathParam.append("wvm").append("}");
    fullPath.replace(wvmPathParam, stringValue(wvm));
    QString wvmidPathParam("{"); wvmidPathParam.append("wvmid").append("}");
    fullPath.replace(wvmidPathParam, stringValue(wvmid));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("linkDocumentId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(link_document_id)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("inferMetadataOwner"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(infer_metadata_owner)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIMetadataApi::getWMVEsMetadataCallback);

    worker->execute(&input);
}

void
OAIMetadataApi::getWMVEsMetadataCallback(OAIHttpRequestWorker * worker) {
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
        emit getWMVEsMetadataSignal();
    } else {
        emit getWMVEsMetadataSignalE(error_type, error_str);
        emit getWMVEsMetadataSignalEFull(worker, error_type, error_str);
    }
}

void
OAIMetadataApi::getWVMetadata(QString* did, QString* wv, QString* wvid, QString* link_document_id, bool infer_metadata_owner) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/metadata/d/{did}/{wv}/{wvid}");

    QString didPathParam("{"); didPathParam.append("did").append("}");
    fullPath.replace(didPathParam, stringValue(did));
    QString wvPathParam("{"); wvPathParam.append("wv").append("}");
    fullPath.replace(wvPathParam, stringValue(wv));
    QString wvidPathParam("{"); wvidPathParam.append("wvid").append("}");
    fullPath.replace(wvidPathParam, stringValue(wvid));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("linkDocumentId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(link_document_id)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("inferMetadataOwner"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(infer_metadata_owner)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIMetadataApi::getWVMetadataCallback);

    worker->execute(&input);
}

void
OAIMetadataApi::getWVMetadataCallback(OAIHttpRequestWorker * worker) {
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
        emit getWVMetadataSignal();
    } else {
        emit getWVMetadataSignalE(error_type, error_str);
        emit getWVMetadataSignalEFull(worker, error_type, error_str);
    }
}

void
OAIMetadataApi::updateVEOPStandardContentPartMetadata(QString* did, QString* vid, QString* eid, QString* otype, QString* oid, QString* pid, QString*& body, QString* link_document_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/metadata/standardcontent/d/{did}/v/{vid}/e/{eid}/{otype}/{oid}/p/{pid}");

    QString didPathParam("{"); didPathParam.append("did").append("}");
    fullPath.replace(didPathParam, stringValue(did));
    QString vidPathParam("{"); vidPathParam.append("vid").append("}");
    fullPath.replace(vidPathParam, stringValue(vid));
    QString eidPathParam("{"); eidPathParam.append("eid").append("}");
    fullPath.replace(eidPathParam, stringValue(eid));
    QString otypePathParam("{"); otypePathParam.append("otype").append("}");
    fullPath.replace(otypePathParam, stringValue(otype));
    QString oidPathParam("{"); oidPathParam.append("oid").append("}");
    fullPath.replace(oidPathParam, stringValue(oid));
    QString pidPathParam("{"); pidPathParam.append("pid").append("}");
    fullPath.replace(pidPathParam, stringValue(pid));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("linkDocumentId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(link_document_id)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");


    
    QString output(*body);
    input.request_body.append(output);
    


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIMetadataApi::updateVEOPStandardContentPartMetadataCallback);

    worker->execute(&input);
}

void
OAIMetadataApi::updateVEOPStandardContentPartMetadataCallback(OAIHttpRequestWorker * worker) {
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
        emit updateVEOPStandardContentPartMetadataSignal();
    } else {
        emit updateVEOPStandardContentPartMetadataSignalE(error_type, error_str);
        emit updateVEOPStandardContentPartMetadataSignalEFull(worker, error_type, error_str);
    }
}

void
OAIMetadataApi::updateWVEMetadata(QString* did, QString* wvm, QString* wvmid, QString* eid, QString*& body, QString* configuration) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid}");

    QString didPathParam("{"); didPathParam.append("did").append("}");
    fullPath.replace(didPathParam, stringValue(did));
    QString wvmPathParam("{"); wvmPathParam.append("wvm").append("}");
    fullPath.replace(wvmPathParam, stringValue(wvm));
    QString wvmidPathParam("{"); wvmidPathParam.append("wvmid").append("}");
    fullPath.replace(wvmidPathParam, stringValue(wvmid));
    QString eidPathParam("{"); eidPathParam.append("eid").append("}");
    fullPath.replace(eidPathParam, stringValue(eid));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("configuration"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(configuration)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");


    
    QString output(*body);
    input.request_body.append(output);
    


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIMetadataApi::updateWVEMetadataCallback);

    worker->execute(&input);
}

void
OAIMetadataApi::updateWVEMetadataCallback(OAIHttpRequestWorker * worker) {
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
        emit updateWVEMetadataSignal();
    } else {
        emit updateWVEMetadataSignalE(error_type, error_str);
        emit updateWVEMetadataSignalEFull(worker, error_type, error_str);
    }
}

void
OAIMetadataApi::updateWVEPMetadata(QString* did, QString* wvm, QString* wvmid, QString* eid, QString* pid, QString* sub_resource, QString*& body, QString* configuration) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/metadata/d/{did}/{wvm}/{wvmid}/e/{eid}/p/{pid}");

    QString didPathParam("{"); didPathParam.append("did").append("}");
    fullPath.replace(didPathParam, stringValue(did));
    QString wvmPathParam("{"); wvmPathParam.append("wvm").append("}");
    fullPath.replace(wvmPathParam, stringValue(wvm));
    QString wvmidPathParam("{"); wvmidPathParam.append("wvmid").append("}");
    fullPath.replace(wvmidPathParam, stringValue(wvmid));
    QString eidPathParam("{"); eidPathParam.append("eid").append("}");
    fullPath.replace(eidPathParam, stringValue(eid));
    QString pidPathParam("{"); pidPathParam.append("pid").append("}");
    fullPath.replace(pidPathParam, stringValue(pid));
    QString sub_resourcePathParam("{"); sub_resourcePathParam.append("subResource").append("}");
    fullPath.replace(sub_resourcePathParam, stringValue(sub_resource));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("configuration"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(configuration)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");


    
    QString output(*body);
    input.request_body.append(output);
    


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIMetadataApi::updateWVEPMetadataCallback);

    worker->execute(&input);
}

void
OAIMetadataApi::updateWVEPMetadataCallback(OAIHttpRequestWorker * worker) {
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
        emit updateWVEPMetadataSignal();
    } else {
        emit updateWVEPMetadataSignalE(error_type, error_str);
        emit updateWVEPMetadataSignalEFull(worker, error_type, error_str);
    }
}

void
OAIMetadataApi::updateWVMetadata(QString* did, QString* wv, QString* wvid, QString*& body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/metadata/d/{did}/{wv}/{wvid}");

    QString didPathParam("{"); didPathParam.append("did").append("}");
    fullPath.replace(didPathParam, stringValue(did));
    QString wvPathParam("{"); wvPathParam.append("wv").append("}");
    fullPath.replace(wvPathParam, stringValue(wv));
    QString wvidPathParam("{"); wvidPathParam.append("wvid").append("}");
    fullPath.replace(wvidPathParam, stringValue(wvid));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");


    
    QString output(*body);
    input.request_body.append(output);
    


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIMetadataApi::updateWVMetadataCallback);

    worker->execute(&input);
}

void
OAIMetadataApi::updateWVMetadataCallback(OAIHttpRequestWorker * worker) {
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
        emit updateWVMetadataSignal();
    } else {
        emit updateWVMetadataSignalE(error_type, error_str);
        emit updateWVMetadataSignalEFull(worker, error_type, error_str);
    }
}


}
