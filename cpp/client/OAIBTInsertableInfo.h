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
 * OAIBTInsertableInfo.h
 *
 * 
 */

#ifndef OAIBTInsertableInfo_H_
#define OAIBTInsertableInfo_H_

#include <QJsonObject>


#include <QByteArray>
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTInsertableInfo: public OAIObject {
public:
    OAIBTInsertableInfo();
    OAIBTInsertableInfo(QString json);
    ~OAIBTInsertableInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTInsertableInfo* fromJson(QString jsonString) override;

    QString* getBodyType();
    void setBodyType(QString* body_type);

    qint32 getClassType();
    void setClassType(qint32 class_type);

    QString* getConfigurationId();
    void setConfigurationId(QString* configuration_id);

    QList<QByteArray*>* getConfigurationParameterValues();
    void setConfigurationParameterValues(QList<QByteArray*>* configuration_parameter_values);

    QList<QByteArray*>* getConfigurationParameters();
    void setConfigurationParameters(QList<QByteArray*>* configuration_parameters);

    QString* getDataType();
    void setDataType(QString* data_type);

    QString* getDeterministicId();
    void setDeterministicId(QString* deterministic_id);

    QString* getDocumentId();
    void setDocumentId(QString* document_id);

    QString* getElementId();
    void setElementId(QString* element_id);

    QString* getElementName();
    void setElementName(QString* element_name);

    QString* getElementType();
    void setElementType(QString* element_type);

    QString* getFeatureId();
    void setFeatureId(QString* feature_id);

    QString* getFeatureName();
    void setFeatureName(QString* feature_name);

    QList<QByteArray*>* getFeatureSpec();
    void setFeatureSpec(QList<QByteArray*>* feature_spec);

    QString* getFeatureType();
    void setFeatureType(QString* feature_type);

    QList<QByteArray*>* getFsTableSpec();
    void setFsTableSpec(QList<QByteArray*>* fs_table_spec);

    bool isHasFaults();
    void setHasFaults(bool has_faults);

    QString* getHref();
    void setHref(QString* href);

    QString* getId();
    void setId(QString* id);

    QString* getInsertableQuery();
    void setInsertableQuery(QString* insertable_query);

    bool isIsFlattenedBody();
    void setIsFlattenedBody(bool is_flattened_body);

    bool isIsMesh();
    void setIsMesh(bool is_mesh);

    QString* getMicroversionId();
    void setMicroversionId(QString* microversion_id);

    QString* getName();
    void setName(QString* name);

    QString* getParentId();
    void setParentId(QString* parent_id);

    QString* getPartName();
    void setPartName(QString* part_name);

    QString* getPredictableId();
    void setPredictableId(QString* predictable_id);

    QString* getThumbnailUri();
    void setThumbnailUri(QString* thumbnail_uri);

    QString* getUnflattenedPartDeterministicId();
    void setUnflattenedPartDeterministicId(QString* unflattened_part_deterministic_id);

    QString* getVersionId();
    void setVersionId(QString* version_id);

    QString* getVersionName();
    void setVersionName(QString* version_name);

    QString* getViewRef();
    void setViewRef(QString* view_ref);


    virtual bool isSet() override;

private:
    QString* body_type;
    bool m_body_type_isSet;

    qint32 class_type;
    bool m_class_type_isSet;

    QString* configuration_id;
    bool m_configuration_id_isSet;

    QList<QByteArray*>* configuration_parameter_values;
    bool m_configuration_parameter_values_isSet;

    QList<QByteArray*>* configuration_parameters;
    bool m_configuration_parameters_isSet;

    QString* data_type;
    bool m_data_type_isSet;

    QString* deterministic_id;
    bool m_deterministic_id_isSet;

    QString* document_id;
    bool m_document_id_isSet;

    QString* element_id;
    bool m_element_id_isSet;

    QString* element_name;
    bool m_element_name_isSet;

    QString* element_type;
    bool m_element_type_isSet;

    QString* feature_id;
    bool m_feature_id_isSet;

    QString* feature_name;
    bool m_feature_name_isSet;

    QList<QByteArray*>* feature_spec;
    bool m_feature_spec_isSet;

    QString* feature_type;
    bool m_feature_type_isSet;

    QList<QByteArray*>* fs_table_spec;
    bool m_fs_table_spec_isSet;

    bool has_faults;
    bool m_has_faults_isSet;

    QString* href;
    bool m_href_isSet;

    QString* id;
    bool m_id_isSet;

    QString* insertable_query;
    bool m_insertable_query_isSet;

    bool is_flattened_body;
    bool m_is_flattened_body_isSet;

    bool is_mesh;
    bool m_is_mesh_isSet;

    QString* microversion_id;
    bool m_microversion_id_isSet;

    QString* name;
    bool m_name_isSet;

    QString* parent_id;
    bool m_parent_id_isSet;

    QString* part_name;
    bool m_part_name_isSet;

    QString* predictable_id;
    bool m_predictable_id_isSet;

    QString* thumbnail_uri;
    bool m_thumbnail_uri_isSet;

    QString* unflattened_part_deterministic_id;
    bool m_unflattened_part_deterministic_id_isSet;

    QString* version_id;
    bool m_version_id_isSet;

    QString* version_name;
    bool m_version_name_isSet;

    QString* view_ref;
    bool m_view_ref_isSet;

};

}

#endif /* OAIBTInsertableInfo_H_ */
