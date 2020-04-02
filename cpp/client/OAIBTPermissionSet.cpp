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


#include "OAIBTPermissionSet.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTPermissionSet::OAIBTPermissionSet(QString json) {
    init();
    this->fromJson(json);
}

OAIBTPermissionSet::OAIBTPermissionSet() {
    init();
}

OAIBTPermissionSet::~OAIBTPermissionSet() {
    this->cleanup();
}

void
OAIBTPermissionSet::init() {
}

void
OAIBTPermissionSet::cleanup() {
}

OAIBTPermissionSet*
OAIBTPermissionSet::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTPermissionSet::fromJsonObject(QJsonObject pJson) {
}

QString
OAIBTPermissionSet::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTPermissionSet::asJsonObject() {
    QJsonObject obj;

    return obj;
}


bool
OAIBTPermissionSet::isSet(){
    bool isObjectUpdated = false;
    do{
    }while(false);
    return isObjectUpdated;
}
}

