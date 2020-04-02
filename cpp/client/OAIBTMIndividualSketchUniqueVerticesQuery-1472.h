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
 * OAIBTMIndividualSketchUniqueVerticesQuery-1472.h
 *
 * 
 */

#ifndef OAIBTMIndividualSketchUniqueVerticesQuery-1472_H_
#define OAIBTMIndividualSketchUniqueVerticesQuery-1472_H_

#include <QJsonObject>


#include "OAIBTMIndividualQuery-138.h"
#include "OAIBTMIndividualQueryBase-139.h"
#include "OAIBTPStatement-269.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTMIndividualSketchUniqueVerticesQuery-1472: public OAIObject {
public:
    OAIBTMIndividualSketchUniqueVerticesQuery-1472();
    OAIBTMIndividualSketchUniqueVerticesQuery-1472(QString json);
    ~OAIBTMIndividualSketchUniqueVerticesQuery-1472();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTMIndividualSketchUniqueVerticesQuery-1472* fromJson(QString jsonString) override;

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

    OAIBTMIndividualQueryBase-139* getQuery();
    void setQuery(OAIBTMIndividualQueryBase-139* query);

    QString* getQueryString();
    void setQueryString(QString* query_string);

    OAIBTPStatement-269* getPersistentQuery();
    void setPersistentQuery(OAIBTPStatement-269* persistent_query);

    OAIBTMIndividualQuery-138* getVariableName();
    void setVariableName(OAIBTMIndividualQuery-138* variable_name);

    OAIBTPStatement-269* getQueryStatement();
    void setQueryStatement(OAIBTPStatement-269* query_statement);

    QString* getFeatureId();
    void setFeatureId(QString* feature_id);


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

    OAIBTMIndividualQueryBase-139* query;
    bool m_query_isSet;

    QString* query_string;
    bool m_query_string_isSet;

    OAIBTPStatement-269* persistent_query;
    bool m_persistent_query_isSet;

    OAIBTMIndividualQuery-138* variable_name;
    bool m_variable_name_isSet;

    OAIBTPStatement-269* query_statement;
    bool m_query_statement_isSet;

    QString* feature_id;
    bool m_feature_id_isSet;

};

}

#endif /* OAIBTMIndividualSketchUniqueVerticesQuery-1472_H_ */
