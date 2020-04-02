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


#include "OAIRequestBody.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestBody::OAIRequestBody(QString json) {
    init();
    this->fromJson(json);
}

OAIRequestBody::OAIRequestBody() {
    init();
}

OAIRequestBody::~OAIRequestBody() {
    this->cleanup();
}

void
OAIRequestBody::init() {
    content = new OAIApiResponse_content();
    m_content_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    extensions = new QMap<QString, OAIObject*>();
    m_extensions_isSet = false;
    getref = new QString("");
    m_getref_isSet = false;
    required = false;
    m_required_isSet = false;
}

void
OAIRequestBody::cleanup() {
    if(content != nullptr) { 
        delete content;
    }
    if(description != nullptr) { 
        delete description;
    }
    if(extensions != nullptr) { 
        auto arr = extensions;
        for(auto o: *arr) { 
            delete o;
        }
        delete extensions;
    }
    if(getref != nullptr) { 
        delete getref;
    }

}

OAIRequestBody*
OAIRequestBody::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIRequestBody::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&content, pJson["content"], "OAIApiResponse_content", "OAIApiResponse_content");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&extensions, pJson["extensions"], "QMap", "OAIObject");
    ::OpenAPI::setValue(&getref, pJson["get$ref"], "QString", "QString");
    
    ::OpenAPI::setValue(&required, pJson["required"], "bool", "");
    
}

QString
OAIRequestBody::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestBody::asJsonObject() {
    QJsonObject obj;
    if((content != nullptr) && (content->isSet())){
        toJsonValue(QString("content"), content, obj, QString("OAIApiResponse_content"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if(extensions->size() > 0){
        toJsonMap((QMap<QString, void*>*) extensions, obj, "extensions", "OAIObject");
    }
    if(getref != nullptr && *getref != QString("")){
        toJsonValue(QString("get$ref"), getref, obj, QString("QString"));
    }
    if(m_required_isSet){
        obj.insert("required", QJsonValue(required));
    }

    return obj;
}

OAIApiResponse_content*
OAIRequestBody::getContent() {
    return content;
}
void
OAIRequestBody::setContent(OAIApiResponse_content* content) {
    this->content = content;
    this->m_content_isSet = true;
}

QString*
OAIRequestBody::getDescription() {
    return description;
}
void
OAIRequestBody::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

QMap<QString, OAIObject*>*
OAIRequestBody::getExtensions() {
    return extensions;
}
void
OAIRequestBody::setExtensions(QMap<QString, OAIObject*>* extensions) {
    this->extensions = extensions;
    this->m_extensions_isSet = true;
}

QString*
OAIRequestBody::getGetref() {
    return getref;
}
void
OAIRequestBody::setGetref(QString* getref) {
    this->getref = getref;
    this->m_getref_isSet = true;
}

bool
OAIRequestBody::isRequired() {
    return required;
}
void
OAIRequestBody::setRequired(bool required) {
    this->required = required;
    this->m_required_isSet = true;
}


bool
OAIRequestBody::isSet(){
    bool isObjectUpdated = false;
    do{
        if(content != nullptr && content->isSet()){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(extensions->size() > 0){ isObjectUpdated = true; break;}
        if(getref != nullptr && *getref != QString("")){ isObjectUpdated = true; break;}
        if(m_required_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

