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


#include "OAIBTFeatureListResponse-2457.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTFeatureListResponse-2457::OAIBTFeatureListResponse-2457(QString json) {
    init();
    this->fromJson(json);
}

OAIBTFeatureListResponse-2457::OAIBTFeatureListResponse-2457() {
    init();
}

OAIBTFeatureListResponse-2457::~OAIBTFeatureListResponse-2457() {
    this->cleanup();
}

void
OAIBTFeatureListResponse-2457::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    library_version = 0;
    m_library_version_isSet = false;
    microversion_skew = false;
    m_microversion_skew_isSet = false;
    reject_microversion_skew = false;
    m_reject_microversion_skew_isSet = false;
    serialization_version = new QString("");
    m_serialization_version_isSet = false;
    source_microversion = new QString("");
    m_source_microversion_isSet = false;
    features = new QList<OAIBTMFeature-134*>();
    m_features_isSet = false;
    is_complete = false;
    m_is_complete_isSet = false;
    feature_states = new QMap<QString, OAIBTFeatureState-1688*>();
    m_feature_states_isSet = false;
    imports = new QList<OAIBTMImport-136*>();
    m_imports_isSet = false;
    rollback_index = 0;
    m_rollback_index_isSet = false;
    default_features = new QList<OAIBTMFeature-134*>();
    m_default_features_isSet = false;
}

void
OAIBTFeatureListResponse-2457::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }



    if(serialization_version != nullptr) { 
        delete serialization_version;
    }
    if(source_microversion != nullptr) { 
        delete source_microversion;
    }
    if(features != nullptr) { 
        auto arr = features;
        for(auto o: *arr) { 
            delete o;
        }
        delete features;
    }

    if(feature_states != nullptr) { 
        auto arr = feature_states;
        for(auto o: *arr) { 
            delete o;
        }
        delete feature_states;
    }
    if(imports != nullptr) { 
        auto arr = imports;
        for(auto o: *arr) { 
            delete o;
        }
        delete imports;
    }

    if(default_features != nullptr) { 
        auto arr = default_features;
        for(auto o: *arr) { 
            delete o;
        }
        delete default_features;
    }
}

OAIBTFeatureListResponse-2457*
OAIBTFeatureListResponse-2457::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTFeatureListResponse-2457::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&library_version, pJson["libraryVersion"], "qint32", "");
    
    ::OpenAPI::setValue(&microversion_skew, pJson["microversionSkew"], "bool", "");
    
    ::OpenAPI::setValue(&reject_microversion_skew, pJson["rejectMicroversionSkew"], "bool", "");
    
    ::OpenAPI::setValue(&serialization_version, pJson["serializationVersion"], "QString", "QString");
    
    ::OpenAPI::setValue(&source_microversion, pJson["sourceMicroversion"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&features, pJson["features"], "QList", "OAIBTMFeature-134");
    ::OpenAPI::setValue(&is_complete, pJson["isComplete"], "bool", "");
    
    
    ::OpenAPI::setValue(&feature_states, pJson["featureStates"], "QMap", "OAIBTFeatureState-1688");
    
    ::OpenAPI::setValue(&imports, pJson["imports"], "QList", "OAIBTMImport-136");
    ::OpenAPI::setValue(&rollback_index, pJson["rollbackIndex"], "qint32", "");
    
    
    ::OpenAPI::setValue(&default_features, pJson["defaultFeatures"], "QList", "OAIBTMFeature-134");
}

QString
OAIBTFeatureListResponse-2457::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTFeatureListResponse-2457::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(m_library_version_isSet){
        obj.insert("libraryVersion", QJsonValue(library_version));
    }
    if(m_microversion_skew_isSet){
        obj.insert("microversionSkew", QJsonValue(microversion_skew));
    }
    if(m_reject_microversion_skew_isSet){
        obj.insert("rejectMicroversionSkew", QJsonValue(reject_microversion_skew));
    }
    if(serialization_version != nullptr && *serialization_version != QString("")){
        toJsonValue(QString("serializationVersion"), serialization_version, obj, QString("QString"));
    }
    if(source_microversion != nullptr && *source_microversion != QString("")){
        toJsonValue(QString("sourceMicroversion"), source_microversion, obj, QString("QString"));
    }
    if(features->size() > 0){
        toJsonArray((QList<void*>*)features, obj, "features", "OAIBTMFeature-134");
    }
    if(m_is_complete_isSet){
        obj.insert("isComplete", QJsonValue(is_complete));
    }
    if(feature_states->size() > 0){
        toJsonMap((QMap<QString, void*>*) feature_states, obj, "featureStates", "OAIBTFeatureState-1688");
    }
    if(imports->size() > 0){
        toJsonArray((QList<void*>*)imports, obj, "imports", "OAIBTMImport-136");
    }
    if(m_rollback_index_isSet){
        obj.insert("rollbackIndex", QJsonValue(rollback_index));
    }
    if(default_features->size() > 0){
        toJsonArray((QList<void*>*)default_features, obj, "defaultFeatures", "OAIBTMFeature-134");
    }

    return obj;
}

QString*
OAIBTFeatureListResponse-2457::getBtType() {
    return bt_type;
}
void
OAIBTFeatureListResponse-2457::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

qint32
OAIBTFeatureListResponse-2457::getLibraryVersion() {
    return library_version;
}
void
OAIBTFeatureListResponse-2457::setLibraryVersion(qint32 library_version) {
    this->library_version = library_version;
    this->m_library_version_isSet = true;
}

bool
OAIBTFeatureListResponse-2457::isMicroversionSkew() {
    return microversion_skew;
}
void
OAIBTFeatureListResponse-2457::setMicroversionSkew(bool microversion_skew) {
    this->microversion_skew = microversion_skew;
    this->m_microversion_skew_isSet = true;
}

bool
OAIBTFeatureListResponse-2457::isRejectMicroversionSkew() {
    return reject_microversion_skew;
}
void
OAIBTFeatureListResponse-2457::setRejectMicroversionSkew(bool reject_microversion_skew) {
    this->reject_microversion_skew = reject_microversion_skew;
    this->m_reject_microversion_skew_isSet = true;
}

QString*
OAIBTFeatureListResponse-2457::getSerializationVersion() {
    return serialization_version;
}
void
OAIBTFeatureListResponse-2457::setSerializationVersion(QString* serialization_version) {
    this->serialization_version = serialization_version;
    this->m_serialization_version_isSet = true;
}

QString*
OAIBTFeatureListResponse-2457::getSourceMicroversion() {
    return source_microversion;
}
void
OAIBTFeatureListResponse-2457::setSourceMicroversion(QString* source_microversion) {
    this->source_microversion = source_microversion;
    this->m_source_microversion_isSet = true;
}

QList<OAIBTMFeature-134*>*
OAIBTFeatureListResponse-2457::getFeatures() {
    return features;
}
void
OAIBTFeatureListResponse-2457::setFeatures(QList<OAIBTMFeature-134*>* features) {
    this->features = features;
    this->m_features_isSet = true;
}

bool
OAIBTFeatureListResponse-2457::isIsComplete() {
    return is_complete;
}
void
OAIBTFeatureListResponse-2457::setIsComplete(bool is_complete) {
    this->is_complete = is_complete;
    this->m_is_complete_isSet = true;
}

QMap<QString, OAIBTFeatureState-1688*>*
OAIBTFeatureListResponse-2457::getFeatureStates() {
    return feature_states;
}
void
OAIBTFeatureListResponse-2457::setFeatureStates(QMap<QString, OAIBTFeatureState-1688*>* feature_states) {
    this->feature_states = feature_states;
    this->m_feature_states_isSet = true;
}

QList<OAIBTMImport-136*>*
OAIBTFeatureListResponse-2457::getImports() {
    return imports;
}
void
OAIBTFeatureListResponse-2457::setImports(QList<OAIBTMImport-136*>* imports) {
    this->imports = imports;
    this->m_imports_isSet = true;
}

qint32
OAIBTFeatureListResponse-2457::getRollbackIndex() {
    return rollback_index;
}
void
OAIBTFeatureListResponse-2457::setRollbackIndex(qint32 rollback_index) {
    this->rollback_index = rollback_index;
    this->m_rollback_index_isSet = true;
}

QList<OAIBTMFeature-134*>*
OAIBTFeatureListResponse-2457::getDefaultFeatures() {
    return default_features;
}
void
OAIBTFeatureListResponse-2457::setDefaultFeatures(QList<OAIBTMFeature-134*>* default_features) {
    this->default_features = default_features;
    this->m_default_features_isSet = true;
}


bool
OAIBTFeatureListResponse-2457::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(m_library_version_isSet){ isObjectUpdated = true; break;}
        if(m_microversion_skew_isSet){ isObjectUpdated = true; break;}
        if(m_reject_microversion_skew_isSet){ isObjectUpdated = true; break;}
        if(serialization_version != nullptr && *serialization_version != QString("")){ isObjectUpdated = true; break;}
        if(source_microversion != nullptr && *source_microversion != QString("")){ isObjectUpdated = true; break;}
        if(features->size() > 0){ isObjectUpdated = true; break;}
        if(m_is_complete_isSet){ isObjectUpdated = true; break;}
        if(feature_states->size() > 0){ isObjectUpdated = true; break;}
        if(imports->size() > 0){ isObjectUpdated = true; break;}
        if(m_rollback_index_isSet){ isObjectUpdated = true; break;}
        if(default_features->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

