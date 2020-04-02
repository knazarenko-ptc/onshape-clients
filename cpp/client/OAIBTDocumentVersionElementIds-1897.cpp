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


#include "OAIBTDocumentVersionElementIds-1897.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTDocumentVersionElementIds-1897::OAIBTDocumentVersionElementIds-1897(QString json) {
    init();
    this->fromJson(json);
}

OAIBTDocumentVersionElementIds-1897::OAIBTDocumentVersionElementIds-1897() {
    init();
}

OAIBTDocumentVersionElementIds-1897::~OAIBTDocumentVersionElementIds-1897() {
    this->cleanup();
}

void
OAIBTDocumentVersionElementIds-1897::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    document_id = new QString("");
    m_document_id_isSet = false;
    element_id = new QString("");
    m_element_id_isSet = false;
    version_id = new QString("");
    m_version_id_isSet = false;
}

void
OAIBTDocumentVersionElementIds-1897::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(document_id != nullptr) { 
        delete document_id;
    }
    if(element_id != nullptr) { 
        delete element_id;
    }
    if(version_id != nullptr) { 
        delete version_id;
    }
}

OAIBTDocumentVersionElementIds-1897*
OAIBTDocumentVersionElementIds-1897::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTDocumentVersionElementIds-1897::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&document_id, pJson["documentId"], "QString", "QString");
    
    ::OpenAPI::setValue(&element_id, pJson["elementId"], "QString", "QString");
    
    ::OpenAPI::setValue(&version_id, pJson["versionId"], "QString", "QString");
    
}

QString
OAIBTDocumentVersionElementIds-1897::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTDocumentVersionElementIds-1897::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(document_id != nullptr && *document_id != QString("")){
        toJsonValue(QString("documentId"), document_id, obj, QString("QString"));
    }
    if(element_id != nullptr && *element_id != QString("")){
        toJsonValue(QString("elementId"), element_id, obj, QString("QString"));
    }
    if(version_id != nullptr && *version_id != QString("")){
        toJsonValue(QString("versionId"), version_id, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTDocumentVersionElementIds-1897::getBtType() {
    return bt_type;
}
void
OAIBTDocumentVersionElementIds-1897::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTDocumentVersionElementIds-1897::getDocumentId() {
    return document_id;
}
void
OAIBTDocumentVersionElementIds-1897::setDocumentId(QString* document_id) {
    this->document_id = document_id;
    this->m_document_id_isSet = true;
}

QString*
OAIBTDocumentVersionElementIds-1897::getElementId() {
    return element_id;
}
void
OAIBTDocumentVersionElementIds-1897::setElementId(QString* element_id) {
    this->element_id = element_id;
    this->m_element_id_isSet = true;
}

QString*
OAIBTDocumentVersionElementIds-1897::getVersionId() {
    return version_id;
}
void
OAIBTDocumentVersionElementIds-1897::setVersionId(QString* version_id) {
    this->version_id = version_id;
    this->m_version_id_isSet = true;
}


bool
OAIBTDocumentVersionElementIds-1897::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(document_id != nullptr && *document_id != QString("")){ isObjectUpdated = true; break;}
        if(element_id != nullptr && *element_id != QString("")){ isObjectUpdated = true; break;}
        if(version_id != nullptr && *version_id != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

