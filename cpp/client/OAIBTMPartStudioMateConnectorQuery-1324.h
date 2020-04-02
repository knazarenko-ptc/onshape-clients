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
 * OAIBTMPartStudioMateConnectorQuery-1324.h
 *
 * 
 */

#ifndef OAIBTMPartStudioMateConnectorQuery-1324_H_
#define OAIBTMPartStudioMateConnectorQuery-1324_H_

#include <QJsonObject>


#include "OAIBTMFeatureQueryWithOccurrence-157.h"
#include "OAIBTMIndividualQueryBase-139.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTMPartStudioMateConnectorQuery-1324: public OAIObject {
public:
    OAIBTMPartStudioMateConnectorQuery-1324();
    OAIBTMPartStudioMateConnectorQuery-1324(QString json);
    ~OAIBTMPartStudioMateConnectorQuery-1324();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTMPartStudioMateConnectorQuery-1324* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    OAIBTMIndividualQueryBase-139* getDeterministicIdList();
    void setDeterministicIdList(OAIBTMIndividualQueryBase-139* deterministic_id_list);

    QList<QString*>* getDeterministicIds();
    void setDeterministicIds(QList<QString*>* deterministic_ids);

    QString* getImportMicroversion();
    void setImportMicroversion(QString* import_microversion);

    QString* getNodeId();
    void setNodeId(QString* node_id);

    QList<QString*>* getPath();
    void setPath(QList<QString*>* path);

    OAIBTMIndividualQueryBase-139* getQuery();
    void setQuery(OAIBTMIndividualQueryBase-139* query);

    QString* getQueryString();
    void setQueryString(QString* query_string);

    QString* getFeatureIdWithOccurrence();
    void setFeatureIdWithOccurrence(QString* feature_id_with_occurrence);

    bool isPartStudioMateConnectorQuery();
    void setPartStudioMateConnectorQuery(bool part_studio_mate_connector_query);

    QString* getFeatureId();
    void setFeatureId(QString* feature_id);

    QString* getQueryData();
    void setQueryData(QString* query_data);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    OAIBTMIndividualQueryBase-139* deterministic_id_list;
    bool m_deterministic_id_list_isSet;

    QList<QString*>* deterministic_ids;
    bool m_deterministic_ids_isSet;

    QString* import_microversion;
    bool m_import_microversion_isSet;

    QString* node_id;
    bool m_node_id_isSet;

    QList<QString*>* path;
    bool m_path_isSet;

    OAIBTMIndividualQueryBase-139* query;
    bool m_query_isSet;

    QString* query_string;
    bool m_query_string_isSet;

    QString* feature_id_with_occurrence;
    bool m_feature_id_with_occurrence_isSet;

    bool part_studio_mate_connector_query;
    bool m_part_studio_mate_connector_query_isSet;

    QString* feature_id;
    bool m_feature_id_isSet;

    QString* query_data;
    bool m_query_data_isSet;

};

}

#endif /* OAIBTMPartStudioMateConnectorQuery-1324_H_ */
