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


#include "OAIBTLinkToLatestDocumentInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTLinkToLatestDocumentInfo::OAIBTLinkToLatestDocumentInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIBTLinkToLatestDocumentInfo::OAIBTLinkToLatestDocumentInfo() {
    init();
}

OAIBTLinkToLatestDocumentInfo::~OAIBTLinkToLatestDocumentInfo() {
    this->cleanup();
}

void
OAIBTLinkToLatestDocumentInfo::init() {
    changed_elements = new QList<QString*>();
    m_changed_elements_isSet = false;
}

void
OAIBTLinkToLatestDocumentInfo::cleanup() {
    if(changed_elements != nullptr) { 
        auto arr = changed_elements;
        for(auto o: *arr) { 
            delete o;
        }
        delete changed_elements;
    }
}

OAIBTLinkToLatestDocumentInfo*
OAIBTLinkToLatestDocumentInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTLinkToLatestDocumentInfo::fromJsonObject(QJsonObject pJson) {
    
    ::OpenAPI::setValue(&changed_elements, pJson["changedElements"], "QList", "QString");
}

QString
OAIBTLinkToLatestDocumentInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTLinkToLatestDocumentInfo::asJsonObject() {
    QJsonObject obj;
    if(changed_elements->size() > 0){
        toJsonArray((QList<void*>*)changed_elements, obj, "changedElements", "QString");
    }

    return obj;
}

QList<QString*>*
OAIBTLinkToLatestDocumentInfo::getChangedElements() {
    return changed_elements;
}
void
OAIBTLinkToLatestDocumentInfo::setChangedElements(QList<QString*>* changed_elements) {
    this->changed_elements = changed_elements;
    this->m_changed_elements_isSet = true;
}


bool
OAIBTLinkToLatestDocumentInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(changed_elements->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

