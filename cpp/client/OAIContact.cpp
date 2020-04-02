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


#include "OAIContact.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIContact::OAIContact(QString json) {
    init();
    this->fromJson(json);
}

OAIContact::OAIContact() {
    init();
}

OAIContact::~OAIContact() {
    this->cleanup();
}

void
OAIContact::init() {
    email = new QString("");
    m_email_isSet = false;
    extensions = new QMap<QString, OAIObject*>();
    m_extensions_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    url = new QString("");
    m_url_isSet = false;
}

void
OAIContact::cleanup() {
    if(email != nullptr) { 
        delete email;
    }
    if(extensions != nullptr) { 
        auto arr = extensions;
        for(auto o: *arr) { 
            delete o;
        }
        delete extensions;
    }
    if(name != nullptr) { 
        delete name;
    }
    if(url != nullptr) { 
        delete url;
    }
}

OAIContact*
OAIContact::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIContact::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&email, pJson["email"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&extensions, pJson["extensions"], "QMap", "OAIObject");
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&url, pJson["url"], "QString", "QString");
    
}

QString
OAIContact::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIContact::asJsonObject() {
    QJsonObject obj;
    if(email != nullptr && *email != QString("")){
        toJsonValue(QString("email"), email, obj, QString("QString"));
    }
    if(extensions->size() > 0){
        toJsonMap((QMap<QString, void*>*) extensions, obj, "extensions", "OAIObject");
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(url != nullptr && *url != QString("")){
        toJsonValue(QString("url"), url, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIContact::getEmail() {
    return email;
}
void
OAIContact::setEmail(QString* email) {
    this->email = email;
    this->m_email_isSet = true;
}

QMap<QString, OAIObject*>*
OAIContact::getExtensions() {
    return extensions;
}
void
OAIContact::setExtensions(QMap<QString, OAIObject*>* extensions) {
    this->extensions = extensions;
    this->m_extensions_isSet = true;
}

QString*
OAIContact::getName() {
    return name;
}
void
OAIContact::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

QString*
OAIContact::getUrl() {
    return url;
}
void
OAIContact::setUrl(QString* url) {
    this->url = url;
    this->m_url_isSet = true;
}


bool
OAIContact::isSet(){
    bool isObjectUpdated = false;
    do{
        if(email != nullptr && *email != QString("")){ isObjectUpdated = true; break;}
        if(extensions->size() > 0){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(url != nullptr && *url != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

