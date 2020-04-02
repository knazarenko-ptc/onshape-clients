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


#include "OAIBTExplosion-2754.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTExplosion-2754::OAIBTExplosion-2754(QString json) {
    init();
    this->fromJson(json);
}

OAIBTExplosion-2754::OAIBTExplosion-2754() {
    init();
}

OAIBTExplosion-2754::~OAIBTExplosion-2754() {
    this->cleanup();
}

void
OAIBTExplosion-2754::init() {
    bt_type = new QString("");
    m_bt_type_isSet = false;
    feature_id = new QString("");
    m_feature_id_isSet = false;
    feature_type = new QString("");
    m_feature_type_isSet = false;
    import_microversion = new QString("");
    m_import_microversion_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    _namespace = new QString("");
    m__namespace_isSet = false;
    node_id = new QString("");
    m_node_id_isSet = false;
    parameters = new QList<OAIBTMParameter-1*>();
    m_parameters_isSet = false;
    return_after_subfeatures = false;
    m_return_after_subfeatures_isSet = false;
    sub_features = new QList<OAIBTMFeature-134*>();
    m_sub_features_isSet = false;
    suppressed = false;
    m_suppressed_isSet = false;
    auxiliary_assembly_feature = false;
    m_auxiliary_assembly_feature_isSet = false;
    feature_list_field_index = 0;
    m_feature_list_field_index_isSet = false;
    occurrence_queries_from_all_configurations = new QList<OAIBTMIndividualQueryWithOccurrenceBase-904*>();
    m_occurrence_queries_from_all_configurations_isSet = false;
    version = 0;
    m_version_isSet = false;
    starting_position_id = new OAIBTMicroversionIdAndConfiguration-2338();
    m_starting_position_id_isSet = false;
    explode_steps = new QList<OAIBTExplosionStepFeature-3008*>();
    m_explode_steps_isSet = false;
}

void
OAIBTExplosion-2754::cleanup() {
    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(feature_id != nullptr) { 
        delete feature_id;
    }
    if(feature_type != nullptr) { 
        delete feature_type;
    }
    if(import_microversion != nullptr) { 
        delete import_microversion;
    }
    if(name != nullptr) { 
        delete name;
    }
    if(_namespace != nullptr) { 
        delete _namespace;
    }
    if(node_id != nullptr) { 
        delete node_id;
    }
    if(parameters != nullptr) { 
        auto arr = parameters;
        for(auto o: *arr) { 
            delete o;
        }
        delete parameters;
    }

    if(sub_features != nullptr) { 
        auto arr = sub_features;
        for(auto o: *arr) { 
            delete o;
        }
        delete sub_features;
    }



    if(occurrence_queries_from_all_configurations != nullptr) { 
        auto arr = occurrence_queries_from_all_configurations;
        for(auto o: *arr) { 
            delete o;
        }
        delete occurrence_queries_from_all_configurations;
    }

    if(starting_position_id != nullptr) { 
        delete starting_position_id;
    }
    if(explode_steps != nullptr) { 
        auto arr = explode_steps;
        for(auto o: *arr) { 
            delete o;
        }
        delete explode_steps;
    }
}

OAIBTExplosion-2754*
OAIBTExplosion-2754::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTExplosion-2754::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&feature_id, pJson["featureId"], "QString", "QString");
    
    ::OpenAPI::setValue(&feature_type, pJson["featureType"], "QString", "QString");
    
    ::OpenAPI::setValue(&import_microversion, pJson["importMicroversion"], "QString", "QString");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&_namespace, pJson["namespace"], "QString", "QString");
    
    ::OpenAPI::setValue(&node_id, pJson["nodeId"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&parameters, pJson["parameters"], "QList", "OAIBTMParameter-1");
    ::OpenAPI::setValue(&return_after_subfeatures, pJson["returnAfterSubfeatures"], "bool", "");
    
    
    ::OpenAPI::setValue(&sub_features, pJson["subFeatures"], "QList", "OAIBTMFeature-134");
    ::OpenAPI::setValue(&suppressed, pJson["suppressed"], "bool", "");
    
    ::OpenAPI::setValue(&auxiliary_assembly_feature, pJson["auxiliaryAssemblyFeature"], "bool", "");
    
    ::OpenAPI::setValue(&feature_list_field_index, pJson["featureListFieldIndex"], "qint32", "");
    
    
    ::OpenAPI::setValue(&occurrence_queries_from_all_configurations, pJson["occurrenceQueriesFromAllConfigurations"], "QList", "OAIBTMIndividualQueryWithOccurrenceBase-904");
    ::OpenAPI::setValue(&version, pJson["version"], "qint32", "");
    
    ::OpenAPI::setValue(&starting_position_id, pJson["startingPositionId"], "OAIBTMicroversionIdAndConfiguration-2338", "OAIBTMicroversionIdAndConfiguration-2338");
    
    
    ::OpenAPI::setValue(&explode_steps, pJson["explodeSteps"], "QList", "OAIBTExplosionStepFeature-3008");
}

QString
OAIBTExplosion-2754::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTExplosion-2754::asJsonObject() {
    QJsonObject obj;
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(feature_id != nullptr && *feature_id != QString("")){
        toJsonValue(QString("featureId"), feature_id, obj, QString("QString"));
    }
    if(feature_type != nullptr && *feature_type != QString("")){
        toJsonValue(QString("featureType"), feature_type, obj, QString("QString"));
    }
    if(import_microversion != nullptr && *import_microversion != QString("")){
        toJsonValue(QString("importMicroversion"), import_microversion, obj, QString("QString"));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(_namespace != nullptr && *_namespace != QString("")){
        toJsonValue(QString("namespace"), _namespace, obj, QString("QString"));
    }
    if(node_id != nullptr && *node_id != QString("")){
        toJsonValue(QString("nodeId"), node_id, obj, QString("QString"));
    }
    if(parameters->size() > 0){
        toJsonArray((QList<void*>*)parameters, obj, "parameters", "OAIBTMParameter-1");
    }
    if(m_return_after_subfeatures_isSet){
        obj.insert("returnAfterSubfeatures", QJsonValue(return_after_subfeatures));
    }
    if(sub_features->size() > 0){
        toJsonArray((QList<void*>*)sub_features, obj, "subFeatures", "OAIBTMFeature-134");
    }
    if(m_suppressed_isSet){
        obj.insert("suppressed", QJsonValue(suppressed));
    }
    if(m_auxiliary_assembly_feature_isSet){
        obj.insert("auxiliaryAssemblyFeature", QJsonValue(auxiliary_assembly_feature));
    }
    if(m_feature_list_field_index_isSet){
        obj.insert("featureListFieldIndex", QJsonValue(feature_list_field_index));
    }
    if(occurrence_queries_from_all_configurations->size() > 0){
        toJsonArray((QList<void*>*)occurrence_queries_from_all_configurations, obj, "occurrenceQueriesFromAllConfigurations", "OAIBTMIndividualQueryWithOccurrenceBase-904");
    }
    if(m_version_isSet){
        obj.insert("version", QJsonValue(version));
    }
    if((starting_position_id != nullptr) && (starting_position_id->isSet())){
        toJsonValue(QString("startingPositionId"), starting_position_id, obj, QString("OAIBTMicroversionIdAndConfiguration-2338"));
    }
    if(explode_steps->size() > 0){
        toJsonArray((QList<void*>*)explode_steps, obj, "explodeSteps", "OAIBTExplosionStepFeature-3008");
    }

    return obj;
}

QString*
OAIBTExplosion-2754::getBtType() {
    return bt_type;
}
void
OAIBTExplosion-2754::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTExplosion-2754::getFeatureId() {
    return feature_id;
}
void
OAIBTExplosion-2754::setFeatureId(QString* feature_id) {
    this->feature_id = feature_id;
    this->m_feature_id_isSet = true;
}

QString*
OAIBTExplosion-2754::getFeatureType() {
    return feature_type;
}
void
OAIBTExplosion-2754::setFeatureType(QString* feature_type) {
    this->feature_type = feature_type;
    this->m_feature_type_isSet = true;
}

QString*
OAIBTExplosion-2754::getImportMicroversion() {
    return import_microversion;
}
void
OAIBTExplosion-2754::setImportMicroversion(QString* import_microversion) {
    this->import_microversion = import_microversion;
    this->m_import_microversion_isSet = true;
}

QString*
OAIBTExplosion-2754::getName() {
    return name;
}
void
OAIBTExplosion-2754::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

QString*
OAIBTExplosion-2754::getNamespace() {
    return _namespace;
}
void
OAIBTExplosion-2754::setNamespace(QString* _namespace) {
    this->_namespace = _namespace;
    this->m__namespace_isSet = true;
}

QString*
OAIBTExplosion-2754::getNodeId() {
    return node_id;
}
void
OAIBTExplosion-2754::setNodeId(QString* node_id) {
    this->node_id = node_id;
    this->m_node_id_isSet = true;
}

QList<OAIBTMParameter-1*>*
OAIBTExplosion-2754::getParameters() {
    return parameters;
}
void
OAIBTExplosion-2754::setParameters(QList<OAIBTMParameter-1*>* parameters) {
    this->parameters = parameters;
    this->m_parameters_isSet = true;
}

bool
OAIBTExplosion-2754::isReturnAfterSubfeatures() {
    return return_after_subfeatures;
}
void
OAIBTExplosion-2754::setReturnAfterSubfeatures(bool return_after_subfeatures) {
    this->return_after_subfeatures = return_after_subfeatures;
    this->m_return_after_subfeatures_isSet = true;
}

QList<OAIBTMFeature-134*>*
OAIBTExplosion-2754::getSubFeatures() {
    return sub_features;
}
void
OAIBTExplosion-2754::setSubFeatures(QList<OAIBTMFeature-134*>* sub_features) {
    this->sub_features = sub_features;
    this->m_sub_features_isSet = true;
}

bool
OAIBTExplosion-2754::isSuppressed() {
    return suppressed;
}
void
OAIBTExplosion-2754::setSuppressed(bool suppressed) {
    this->suppressed = suppressed;
    this->m_suppressed_isSet = true;
}

bool
OAIBTExplosion-2754::isAuxiliaryAssemblyFeature() {
    return auxiliary_assembly_feature;
}
void
OAIBTExplosion-2754::setAuxiliaryAssemblyFeature(bool auxiliary_assembly_feature) {
    this->auxiliary_assembly_feature = auxiliary_assembly_feature;
    this->m_auxiliary_assembly_feature_isSet = true;
}

qint32
OAIBTExplosion-2754::getFeatureListFieldIndex() {
    return feature_list_field_index;
}
void
OAIBTExplosion-2754::setFeatureListFieldIndex(qint32 feature_list_field_index) {
    this->feature_list_field_index = feature_list_field_index;
    this->m_feature_list_field_index_isSet = true;
}

QList<OAIBTMIndividualQueryWithOccurrenceBase-904*>*
OAIBTExplosion-2754::getOccurrenceQueriesFromAllConfigurations() {
    return occurrence_queries_from_all_configurations;
}
void
OAIBTExplosion-2754::setOccurrenceQueriesFromAllConfigurations(QList<OAIBTMIndividualQueryWithOccurrenceBase-904*>* occurrence_queries_from_all_configurations) {
    this->occurrence_queries_from_all_configurations = occurrence_queries_from_all_configurations;
    this->m_occurrence_queries_from_all_configurations_isSet = true;
}

qint32
OAIBTExplosion-2754::getVersion() {
    return version;
}
void
OAIBTExplosion-2754::setVersion(qint32 version) {
    this->version = version;
    this->m_version_isSet = true;
}

OAIBTMicroversionIdAndConfiguration-2338*
OAIBTExplosion-2754::getStartingPositionId() {
    return starting_position_id;
}
void
OAIBTExplosion-2754::setStartingPositionId(OAIBTMicroversionIdAndConfiguration-2338* starting_position_id) {
    this->starting_position_id = starting_position_id;
    this->m_starting_position_id_isSet = true;
}

QList<OAIBTExplosionStepFeature-3008*>*
OAIBTExplosion-2754::getExplodeSteps() {
    return explode_steps;
}
void
OAIBTExplosion-2754::setExplodeSteps(QList<OAIBTExplosionStepFeature-3008*>* explode_steps) {
    this->explode_steps = explode_steps;
    this->m_explode_steps_isSet = true;
}


bool
OAIBTExplosion-2754::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(feature_id != nullptr && *feature_id != QString("")){ isObjectUpdated = true; break;}
        if(feature_type != nullptr && *feature_type != QString("")){ isObjectUpdated = true; break;}
        if(import_microversion != nullptr && *import_microversion != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(_namespace != nullptr && *_namespace != QString("")){ isObjectUpdated = true; break;}
        if(node_id != nullptr && *node_id != QString("")){ isObjectUpdated = true; break;}
        if(parameters->size() > 0){ isObjectUpdated = true; break;}
        if(m_return_after_subfeatures_isSet){ isObjectUpdated = true; break;}
        if(sub_features->size() > 0){ isObjectUpdated = true; break;}
        if(m_suppressed_isSet){ isObjectUpdated = true; break;}
        if(m_auxiliary_assembly_feature_isSet){ isObjectUpdated = true; break;}
        if(m_feature_list_field_index_isSet){ isObjectUpdated = true; break;}
        if(occurrence_queries_from_all_configurations->size() > 0){ isObjectUpdated = true; break;}
        if(m_version_isSet){ isObjectUpdated = true; break;}
        if(starting_position_id != nullptr && starting_position_id->isSet()){ isObjectUpdated = true; break;}
        if(explode_steps->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

