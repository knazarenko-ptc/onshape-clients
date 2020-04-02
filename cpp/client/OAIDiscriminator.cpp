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


#include "OAIDiscriminator.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIDiscriminator::OAIDiscriminator(QString json) {
    init();
    this->fromJson(json);
}

OAIDiscriminator::OAIDiscriminator() {
    init();
}

OAIDiscriminator::~OAIDiscriminator() {
    this->cleanup();
}

void
OAIDiscriminator::init() {
    mapping = new QMap<QString, QString*>();
    m_mapping_isSet = false;
    property_name = new QString("");
    m_property_name_isSet = false;
}

void
OAIDiscriminator::cleanup() {
    if(mapping != nullptr) { 
        auto arr = mapping;
        for(auto o: *arr) { 
            delete o;
        }
        delete mapping;
    }
    if(property_name != nullptr) { 
        delete property_name;
    }
}

OAIDiscriminator*
OAIDiscriminator::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIDiscriminator::fromJsonObject(QJsonObject pJson) {
    
    ::OpenAPI::setValue(&mapping, pJson["mapping"], "QMap", "QString");
    ::OpenAPI::setValue(&property_name, pJson["propertyName"], "QString", "QString");
    
}

QString
OAIDiscriminator::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIDiscriminator::asJsonObject() {
    QJsonObject obj;
    if(mapping->size() > 0){
        toJsonMap((QMap<QString, void*>*) mapping, obj, "mapping", "QString");
    }
    if(property_name != nullptr && *property_name != QString("")){
        toJsonValue(QString("propertyName"), property_name, obj, QString("QString"));
    }

    return obj;
}

QMap<QString, QString*>*
OAIDiscriminator::getMapping() {
    return mapping;
}
void
OAIDiscriminator::setMapping(QMap<QString, QString*>* mapping) {
    this->mapping = mapping;
    this->m_mapping_isSet = true;
}

QString*
OAIDiscriminator::getPropertyName() {
    return property_name;
}
void
OAIDiscriminator::setPropertyName(QString* property_name) {
    this->property_name = property_name;
    this->m_property_name_isSet = true;
}


bool
OAIDiscriminator::isSet(){
    bool isObjectUpdated = false;
    do{
        if(mapping->size() > 0){ isObjectUpdated = true; break;}
        if(property_name != nullptr && *property_name != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

