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


#include "OAIBTDocumentWithVersionId.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTDocumentWithVersionId::OAIBTDocumentWithVersionId(QString json) {
    init();
    this->fromJson(json);
}

OAIBTDocumentWithVersionId::OAIBTDocumentWithVersionId() {
    init();
}

OAIBTDocumentWithVersionId::~OAIBTDocumentWithVersionId() {
    this->cleanup();
}

void
OAIBTDocumentWithVersionId::init() {
    document_id = new QString("");
    m_document_id_isSet = false;
    document_version_id = new QString("");
    m_document_version_id_isSet = false;
}

void
OAIBTDocumentWithVersionId::cleanup() {
    if(document_id != nullptr) { 
        delete document_id;
    }
    if(document_version_id != nullptr) { 
        delete document_version_id;
    }
}

OAIBTDocumentWithVersionId*
OAIBTDocumentWithVersionId::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTDocumentWithVersionId::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&document_id, pJson["documentId"], "QString", "QString");
    
    ::OpenAPI::setValue(&document_version_id, pJson["documentVersionId"], "QString", "QString");
    
}

QString
OAIBTDocumentWithVersionId::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTDocumentWithVersionId::asJsonObject() {
    QJsonObject obj;
    if(document_id != nullptr && *document_id != QString("")){
        toJsonValue(QString("documentId"), document_id, obj, QString("QString"));
    }
    if(document_version_id != nullptr && *document_version_id != QString("")){
        toJsonValue(QString("documentVersionId"), document_version_id, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTDocumentWithVersionId::getDocumentId() {
    return document_id;
}
void
OAIBTDocumentWithVersionId::setDocumentId(QString* document_id) {
    this->document_id = document_id;
    this->m_document_id_isSet = true;
}

QString*
OAIBTDocumentWithVersionId::getDocumentVersionId() {
    return document_version_id;
}
void
OAIBTDocumentWithVersionId::setDocumentVersionId(QString* document_version_id) {
    this->document_version_id = document_version_id;
    this->m_document_version_id_isSet = true;
}


bool
OAIBTDocumentWithVersionId::isSet(){
    bool isObjectUpdated = false;
    do{
        if(document_id != nullptr && *document_id != QString("")){ isObjectUpdated = true; break;}
        if(document_version_id != nullptr && *document_version_id != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

