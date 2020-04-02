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


#include "OAIBTMassPropertiesBulkInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTMassPropertiesBulkInfo::OAIBTMassPropertiesBulkInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIBTMassPropertiesBulkInfo::OAIBTMassPropertiesBulkInfo() {
    init();
}

OAIBTMassPropertiesBulkInfo::~OAIBTMassPropertiesBulkInfo() {
    this->cleanup();
}

void
OAIBTMassPropertiesBulkInfo::init() {
    bodies = new QMap<QString, OAIBTMassPropertiesInfo-null*>();
    m_bodies_isSet = false;
    microversion_id = new QString("");
    m_microversion_id_isSet = false;
}

void
OAIBTMassPropertiesBulkInfo::cleanup() {
    if(bodies != nullptr) { 
        auto arr = bodies;
        for(auto o: *arr) { 
            delete o;
        }
        delete bodies;
    }
    if(microversion_id != nullptr) { 
        delete microversion_id;
    }
}

OAIBTMassPropertiesBulkInfo*
OAIBTMassPropertiesBulkInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTMassPropertiesBulkInfo::fromJsonObject(QJsonObject pJson) {
    
    ::OpenAPI::setValue(&bodies, pJson["bodies"], "QMap", "OAIBTMassPropertiesInfo-null");
    ::OpenAPI::setValue(&microversion_id, pJson["microversionId"], "QString", "QString");
    
}

QString
OAIBTMassPropertiesBulkInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTMassPropertiesBulkInfo::asJsonObject() {
    QJsonObject obj;
    if(bodies->size() > 0){
        toJsonMap((QMap<QString, void*>*) bodies, obj, "bodies", "OAIBTMassPropertiesInfo-null");
    }
    if(microversion_id != nullptr && *microversion_id != QString("")){
        toJsonValue(QString("microversionId"), microversion_id, obj, QString("QString"));
    }

    return obj;
}

QMap<QString, OAIBTMassPropertiesInfo-null*>*
OAIBTMassPropertiesBulkInfo::getBodies() {
    return bodies;
}
void
OAIBTMassPropertiesBulkInfo::setBodies(QMap<QString, OAIBTMassPropertiesInfo-null*>* bodies) {
    this->bodies = bodies;
    this->m_bodies_isSet = true;
}

QString*
OAIBTMassPropertiesBulkInfo::getMicroversionId() {
    return microversion_id;
}
void
OAIBTMassPropertiesBulkInfo::setMicroversionId(QString* microversion_id) {
    this->microversion_id = microversion_id;
    this->m_microversion_id_isSet = true;
}


bool
OAIBTMassPropertiesBulkInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bodies->size() > 0){ isObjectUpdated = true; break;}
        if(microversion_id != nullptr && *microversion_id != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

