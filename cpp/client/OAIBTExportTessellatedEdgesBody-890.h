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
 * OAIBTExportTessellatedEdgesBody-890.h
 *
 * 
 */

#ifndef OAIBTExportTessellatedEdgesBody-890_H_
#define OAIBTExportTessellatedEdgesBody-890_H_

#include <QJsonObject>


#include "OAIBTExportTessellatedBody-3398.h"
#include "OAIBTExportTessellatedEdgesEdge-1364.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTExportTessellatedEdgesBody-890: public OAIObject {
public:
    OAIBTExportTessellatedEdgesBody-890();
    OAIBTExportTessellatedEdgesBody-890(QString json);
    ~OAIBTExportTessellatedEdgesBody-890();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTExportTessellatedEdgesBody-890* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    QList<QString*>* getConstituents();
    void setConstituents(QList<QString*>* constituents);

    QString* getId();
    void setId(QString* id);

    QList<OAIBTExportTessellatedEdgesEdge-1364*>* getEdges();
    void setEdges(QList<OAIBTExportTessellatedEdgesEdge-1364*>* edges);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    QList<QString*>* constituents;
    bool m_constituents_isSet;

    QString* id;
    bool m_id_isSet;

    QList<OAIBTExportTessellatedEdgesEdge-1364*>* edges;
    bool m_edges_isSet;

};

}

#endif /* OAIBTExportTessellatedEdgesBody-890_H_ */
