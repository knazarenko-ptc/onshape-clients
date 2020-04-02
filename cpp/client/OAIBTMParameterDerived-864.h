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
 * OAIBTMParameterDerived-864.h
 *
 * 
 */

#ifndef OAIBTMParameterDerived-864_H_
#define OAIBTMParameterDerived-864_H_

#include <QJsonObject>


#include "OAIBTMImport-136.h"
#include "OAIBTMParameter-1.h"
#include "OAIBTPModuleId-235.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTMParameterDerived-864: public OAIObject {
public:
    OAIBTMParameterDerived-864();
    OAIBTMParameterDerived-864(QString json);
    ~OAIBTMParameterDerived-864();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTMParameterDerived-864* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    QString* getImportMicroversion();
    void setImportMicroversion(QString* import_microversion);

    QString* getNodeId();
    void setNodeId(QString* node_id);

    QString* getParameterId();
    void setParameterId(QString* parameter_id);

    OAIBTPModuleId-235* getModuleId();
    void setModuleId(OAIBTPModuleId-235* module_id);

    QString* getNamespace();
    void setNamespace(QString* _namespace);

    QList<OAIBTMImport-136*>* getImports();
    void setImports(QList<OAIBTMImport-136*>* imports);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    QString* import_microversion;
    bool m_import_microversion_isSet;

    QString* node_id;
    bool m_node_id_isSet;

    QString* parameter_id;
    bool m_parameter_id_isSet;

    OAIBTPModuleId-235* module_id;
    bool m_module_id_isSet;

    QString* _namespace;
    bool m__namespace_isSet;

    QList<OAIBTMImport-136*>* imports;
    bool m_imports_isSet;

};

}

#endif /* OAIBTMParameterDerived-864_H_ */
