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


#include "OAIBTAPIApplicationSummaryInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTAPIApplicationSummaryInfo::OAIBTAPIApplicationSummaryInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIBTAPIApplicationSummaryInfo::OAIBTAPIApplicationSummaryInfo() {
    init();
}

OAIBTAPIApplicationSummaryInfo::~OAIBTAPIApplicationSummaryInfo() {
    this->cleanup();
}

void
OAIBTAPIApplicationSummaryInfo::init() {
    client_id = new QString("");
    m_client_id_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    href = new QString("");
    m_href_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    state = 0;
    m_state_isSet = false;
    view_ref = new QString("");
    m_view_ref_isSet = false;
}

void
OAIBTAPIApplicationSummaryInfo::cleanup() {
    if(client_id != nullptr) { 
        delete client_id;
    }
    if(description != nullptr) { 
        delete description;
    }
    if(href != nullptr) { 
        delete href;
    }
    if(id != nullptr) { 
        delete id;
    }
    if(name != nullptr) { 
        delete name;
    }

    if(view_ref != nullptr) { 
        delete view_ref;
    }
}

OAIBTAPIApplicationSummaryInfo*
OAIBTAPIApplicationSummaryInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTAPIApplicationSummaryInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&client_id, pJson["clientId"], "QString", "QString");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    ::OpenAPI::setValue(&href, pJson["href"], "QString", "QString");
    
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&state, pJson["state"], "qint32", "");
    
    ::OpenAPI::setValue(&view_ref, pJson["viewRef"], "QString", "QString");
    
}

QString
OAIBTAPIApplicationSummaryInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTAPIApplicationSummaryInfo::asJsonObject() {
    QJsonObject obj;
    if(client_id != nullptr && *client_id != QString("")){
        toJsonValue(QString("clientId"), client_id, obj, QString("QString"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if(href != nullptr && *href != QString("")){
        toJsonValue(QString("href"), href, obj, QString("QString"));
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(m_state_isSet){
        obj.insert("state", QJsonValue(state));
    }
    if(view_ref != nullptr && *view_ref != QString("")){
        toJsonValue(QString("viewRef"), view_ref, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTAPIApplicationSummaryInfo::getClientId() {
    return client_id;
}
void
OAIBTAPIApplicationSummaryInfo::setClientId(QString* client_id) {
    this->client_id = client_id;
    this->m_client_id_isSet = true;
}

QString*
OAIBTAPIApplicationSummaryInfo::getDescription() {
    return description;
}
void
OAIBTAPIApplicationSummaryInfo::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

QString*
OAIBTAPIApplicationSummaryInfo::getHref() {
    return href;
}
void
OAIBTAPIApplicationSummaryInfo::setHref(QString* href) {
    this->href = href;
    this->m_href_isSet = true;
}

QString*
OAIBTAPIApplicationSummaryInfo::getId() {
    return id;
}
void
OAIBTAPIApplicationSummaryInfo::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString*
OAIBTAPIApplicationSummaryInfo::getName() {
    return name;
}
void
OAIBTAPIApplicationSummaryInfo::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

qint32
OAIBTAPIApplicationSummaryInfo::getState() {
    return state;
}
void
OAIBTAPIApplicationSummaryInfo::setState(qint32 state) {
    this->state = state;
    this->m_state_isSet = true;
}

QString*
OAIBTAPIApplicationSummaryInfo::getViewRef() {
    return view_ref;
}
void
OAIBTAPIApplicationSummaryInfo::setViewRef(QString* view_ref) {
    this->view_ref = view_ref;
    this->m_view_ref_isSet = true;
}


bool
OAIBTAPIApplicationSummaryInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(client_id != nullptr && *client_id != QString("")){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(href != nullptr && *href != QString("")){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(m_state_isSet){ isObjectUpdated = true; break;}
        if(view_ref != nullptr && *view_ref != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

