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


#include "OAIBTUserBasicSummaryInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTUserBasicSummaryInfo::OAIBTUserBasicSummaryInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIBTUserBasicSummaryInfo::OAIBTUserBasicSummaryInfo() {
    init();
}

OAIBTUserBasicSummaryInfo::~OAIBTUserBasicSummaryInfo() {
    this->cleanup();
}

void
OAIBTUserBasicSummaryInfo::init() {
    href = new QString("");
    m_href_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    image = new QString("");
    m_image_isSet = false;
    json_type = new QString("");
    m_json_type_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    state = 0;
    m_state_isSet = false;
    view_ref = new QString("");
    m_view_ref_isSet = false;
}

void
OAIBTUserBasicSummaryInfo::cleanup() {
    if(href != nullptr) { 
        delete href;
    }
    if(id != nullptr) { 
        delete id;
    }
    if(image != nullptr) { 
        delete image;
    }
    if(json_type != nullptr) { 
        delete json_type;
    }
    if(name != nullptr) { 
        delete name;
    }

    if(view_ref != nullptr) { 
        delete view_ref;
    }
}

OAIBTUserBasicSummaryInfo*
OAIBTUserBasicSummaryInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTUserBasicSummaryInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&href, pJson["href"], "QString", "QString");
    
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&image, pJson["image"], "QString", "QString");
    
    ::OpenAPI::setValue(&json_type, pJson["jsonType"], "QString", "QString");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&state, pJson["state"], "qint32", "");
    
    ::OpenAPI::setValue(&view_ref, pJson["viewRef"], "QString", "QString");
    
}

QString
OAIBTUserBasicSummaryInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTUserBasicSummaryInfo::asJsonObject() {
    QJsonObject obj;
    if(href != nullptr && *href != QString("")){
        toJsonValue(QString("href"), href, obj, QString("QString"));
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(image != nullptr && *image != QString("")){
        toJsonValue(QString("image"), image, obj, QString("QString"));
    }
    if(json_type != nullptr && *json_type != QString("")){
        toJsonValue(QString("jsonType"), json_type, obj, QString("QString"));
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
OAIBTUserBasicSummaryInfo::getHref() {
    return href;
}
void
OAIBTUserBasicSummaryInfo::setHref(QString* href) {
    this->href = href;
    this->m_href_isSet = true;
}

QString*
OAIBTUserBasicSummaryInfo::getId() {
    return id;
}
void
OAIBTUserBasicSummaryInfo::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString*
OAIBTUserBasicSummaryInfo::getImage() {
    return image;
}
void
OAIBTUserBasicSummaryInfo::setImage(QString* image) {
    this->image = image;
    this->m_image_isSet = true;
}

QString*
OAIBTUserBasicSummaryInfo::getJsonType() {
    return json_type;
}
void
OAIBTUserBasicSummaryInfo::setJsonType(QString* json_type) {
    this->json_type = json_type;
    this->m_json_type_isSet = true;
}

QString*
OAIBTUserBasicSummaryInfo::getName() {
    return name;
}
void
OAIBTUserBasicSummaryInfo::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

qint32
OAIBTUserBasicSummaryInfo::getState() {
    return state;
}
void
OAIBTUserBasicSummaryInfo::setState(qint32 state) {
    this->state = state;
    this->m_state_isSet = true;
}

QString*
OAIBTUserBasicSummaryInfo::getViewRef() {
    return view_ref;
}
void
OAIBTUserBasicSummaryInfo::setViewRef(QString* view_ref) {
    this->view_ref = view_ref;
    this->m_view_ref_isSet = true;
}


bool
OAIBTUserBasicSummaryInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(href != nullptr && *href != QString("")){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(image != nullptr && *image != QString("")){ isObjectUpdated = true; break;}
        if(json_type != nullptr && *json_type != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(m_state_isSet){ isObjectUpdated = true; break;}
        if(view_ref != nullptr && *view_ref != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

