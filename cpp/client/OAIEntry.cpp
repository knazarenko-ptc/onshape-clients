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


#include "OAIEntry.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIEntry::OAIEntry(QString json) {
    init();
    this->fromJson(json);
}

OAIEntry::OAIEntry() {
    init();
}

OAIEntry::~OAIEntry() {
    this->cleanup();
}

void
OAIEntry::init() {
    permission_set = new OAIBTPermissionSet();
    m_permission_set_isSet = false;
    role = new OAIBTRbacRoleInfo();
    m_role_isSet = false;
}

void
OAIEntry::cleanup() {
    if(permission_set != nullptr) { 
        delete permission_set;
    }
    if(role != nullptr) { 
        delete role;
    }
}

OAIEntry*
OAIEntry::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIEntry::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&permission_set, pJson["permissionSet"], "OAIBTPermissionSet", "OAIBTPermissionSet");
    
    ::OpenAPI::setValue(&role, pJson["role"], "OAIBTRbacRoleInfo", "OAIBTRbacRoleInfo");
    
}

QString
OAIEntry::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIEntry::asJsonObject() {
    QJsonObject obj;
    if((permission_set != nullptr) && (permission_set->isSet())){
        toJsonValue(QString("permissionSet"), permission_set, obj, QString("OAIBTPermissionSet"));
    }
    if((role != nullptr) && (role->isSet())){
        toJsonValue(QString("role"), role, obj, QString("OAIBTRbacRoleInfo"));
    }

    return obj;
}

OAIBTPermissionSet*
OAIEntry::getPermissionSet() {
    return permission_set;
}
void
OAIEntry::setPermissionSet(OAIBTPermissionSet* permission_set) {
    this->permission_set = permission_set;
    this->m_permission_set_isSet = true;
}

OAIBTRbacRoleInfo*
OAIEntry::getRole() {
    return role;
}
void
OAIEntry::setRole(OAIBTRbacRoleInfo* role) {
    this->role = role;
    this->m_role_isSet = true;
}


bool
OAIEntry::isSet(){
    bool isObjectUpdated = false;
    do{
        if(permission_set != nullptr && permission_set->isSet()){ isObjectUpdated = true; break;}
        if(role != nullptr && role->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

