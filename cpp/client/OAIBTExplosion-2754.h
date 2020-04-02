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

/*
 * OAIBTExplosion-2754.h
 *
 * 
 */

#ifndef OAIBTExplosion-2754_H_
#define OAIBTExplosion-2754_H_

#include <QJsonObject>


#include "OAIBTExplosionStepFeature-3008.h"
#include "OAIBTMAssemblyFeature-887.h"
#include "OAIBTMFeature-134.h"
#include "OAIBTMIndividualQueryWithOccurrenceBase-904.h"
#include "OAIBTMParameter-1.h"
#include "OAIBTMicroversionIdAndConfiguration-2338.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTExplosion-2754: public OAIObject {
public:
    OAIBTExplosion-2754();
    OAIBTExplosion-2754(QString json);
    ~OAIBTExplosion-2754();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTExplosion-2754* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    QString* getFeatureId();
    void setFeatureId(QString* feature_id);

    QString* getFeatureType();
    void setFeatureType(QString* feature_type);

    QString* getImportMicroversion();
    void setImportMicroversion(QString* import_microversion);

    QString* getName();
    void setName(QString* name);

    QString* getNamespace();
    void setNamespace(QString* _namespace);

    QString* getNodeId();
    void setNodeId(QString* node_id);

    QList<OAIBTMParameter-1*>* getParameters();
    void setParameters(QList<OAIBTMParameter-1*>* parameters);

    bool isReturnAfterSubfeatures();
    void setReturnAfterSubfeatures(bool return_after_subfeatures);

    QList<OAIBTMFeature-134*>* getSubFeatures();
    void setSubFeatures(QList<OAIBTMFeature-134*>* sub_features);

    bool isSuppressed();
    void setSuppressed(bool suppressed);

    bool isAuxiliaryAssemblyFeature();
    void setAuxiliaryAssemblyFeature(bool auxiliary_assembly_feature);

    qint32 getFeatureListFieldIndex();
    void setFeatureListFieldIndex(qint32 feature_list_field_index);

    QList<OAIBTMIndividualQueryWithOccurrenceBase-904*>* getOccurrenceQueriesFromAllConfigurations();
    void setOccurrenceQueriesFromAllConfigurations(QList<OAIBTMIndividualQueryWithOccurrenceBase-904*>* occurrence_queries_from_all_configurations);

    qint32 getVersion();
    void setVersion(qint32 version);

    OAIBTMicroversionIdAndConfiguration-2338* getStartingPositionId();
    void setStartingPositionId(OAIBTMicroversionIdAndConfiguration-2338* starting_position_id);

    QList<OAIBTExplosionStepFeature-3008*>* getExplodeSteps();
    void setExplodeSteps(QList<OAIBTExplosionStepFeature-3008*>* explode_steps);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    QString* feature_id;
    bool m_feature_id_isSet;

    QString* feature_type;
    bool m_feature_type_isSet;

    QString* import_microversion;
    bool m_import_microversion_isSet;

    QString* name;
    bool m_name_isSet;

    QString* _namespace;
    bool m__namespace_isSet;

    QString* node_id;
    bool m_node_id_isSet;

    QList<OAIBTMParameter-1*>* parameters;
    bool m_parameters_isSet;

    bool return_after_subfeatures;
    bool m_return_after_subfeatures_isSet;

    QList<OAIBTMFeature-134*>* sub_features;
    bool m_sub_features_isSet;

    bool suppressed;
    bool m_suppressed_isSet;

    bool auxiliary_assembly_feature;
    bool m_auxiliary_assembly_feature_isSet;

    qint32 feature_list_field_index;
    bool m_feature_list_field_index_isSet;

    QList<OAIBTMIndividualQueryWithOccurrenceBase-904*>* occurrence_queries_from_all_configurations;
    bool m_occurrence_queries_from_all_configurations_isSet;

    qint32 version;
    bool m_version_isSet;

    OAIBTMicroversionIdAndConfiguration-2338* starting_position_id;
    bool m_starting_position_id_isSet;

    QList<OAIBTExplosionStepFeature-3008*>* explode_steps;
    bool m_explode_steps_isSet;

};

}

#endif /* OAIBTExplosion-2754_H_ */
