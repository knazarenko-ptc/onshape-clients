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
 * OAIBTMArrayParameterItem-1843.h
 *
 * 
 */

#ifndef OAIBTMArrayParameterItem-1843_H_
#define OAIBTMArrayParameterItem-1843_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTMArrayParameterItem-1843: public OAIObject {
public:
    OAIBTMArrayParameterItem-1843();
    OAIBTMArrayParameterItem-1843(QString json);
    ~OAIBTMArrayParameterItem-1843();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTMArrayParameterItem-1843* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    QString* getImportMicroversion();
    void setImportMicroversion(QString* import_microversion);

    QString* getNodeId();
    void setNodeId(QString* node_id);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    QString* import_microversion;
    bool m_import_microversion_isSet;

    QString* node_id;
    bool m_node_id_isSet;

};

}

#endif /* OAIBTMArrayParameterItem-1843_H_ */
