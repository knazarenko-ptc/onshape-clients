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


#include "OAIServerVariable.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIServerVariable::OAIServerVariable(QString json) {
    init();
    this->fromJson(json);
}

OAIServerVariable::OAIServerVariable() {
    init();
}

OAIServerVariable::~OAIServerVariable() {
    this->cleanup();
}

void
OAIServerVariable::init() {
    _default = new QString("");
    m__default_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    _enum = new QList<QString*>();
    m__enum_isSet = false;
    extensions = new QMap<QString, OAIObject*>();
    m_extensions_isSet = false;
}

void
OAIServerVariable::cleanup() {
    if(_default != nullptr) { 
        delete _default;
    }
    if(description != nullptr) { 
        delete description;
    }
    if(_enum != nullptr) { 
        auto arr = _enum;
        for(auto o: *arr) { 
            delete o;
        }
        delete _enum;
    }
    if(extensions != nullptr) { 
        auto arr = extensions;
        for(auto o: *arr) { 
            delete o;
        }
        delete extensions;
    }
}

OAIServerVariable*
OAIServerVariable::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIServerVariable::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_default, pJson["default"], "QString", "QString");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&_enum, pJson["enum"], "QList", "QString");
    
    ::OpenAPI::setValue(&extensions, pJson["extensions"], "QMap", "OAIObject");
}

QString
OAIServerVariable::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIServerVariable::asJsonObject() {
    QJsonObject obj;
    if(_default != nullptr && *_default != QString("")){
        toJsonValue(QString("default"), _default, obj, QString("QString"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if(_enum->size() > 0){
        toJsonArray((QList<void*>*)_enum, obj, "enum", "QString");
    }
    if(extensions->size() > 0){
        toJsonMap((QMap<QString, void*>*) extensions, obj, "extensions", "OAIObject");
    }

    return obj;
}

QString*
OAIServerVariable::getDefault() {
    return _default;
}
void
OAIServerVariable::setDefault(QString* _default) {
    this->_default = _default;
    this->m__default_isSet = true;
}

QString*
OAIServerVariable::getDescription() {
    return description;
}
void
OAIServerVariable::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

QList<QString*>*
OAIServerVariable::getEnum() {
    return _enum;
}
void
OAIServerVariable::setEnum(QList<QString*>* _enum) {
    this->_enum = _enum;
    this->m__enum_isSet = true;
}

QMap<QString, OAIObject*>*
OAIServerVariable::getExtensions() {
    return extensions;
}
void
OAIServerVariable::setExtensions(QMap<QString, OAIObject*>* extensions) {
    this->extensions = extensions;
    this->m_extensions_isSet = true;
}


bool
OAIServerVariable::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_default != nullptr && *_default != QString("")){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(_enum->size() > 0){ isObjectUpdated = true; break;}
        if(extensions->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

