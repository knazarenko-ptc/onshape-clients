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
 * OAIBTParameterVisibilityLogical-178.h
 *
 * 
 */

#ifndef OAIBTParameterVisibilityLogical-178_H_
#define OAIBTParameterVisibilityLogical-178_H_

#include <QJsonObject>


#include "OAIBTParameterVisibilityCondition-177.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTParameterVisibilityLogical-178: public OAIObject {
public:
    OAIBTParameterVisibilityLogical-178();
    OAIBTParameterVisibilityLogical-178(QString json);
    ~OAIBTParameterVisibilityLogical-178();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTParameterVisibilityLogical-178* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    QString* getOperation();
    void setOperation(QString* operation);

    QList<OAIBTParameterVisibilityCondition-177*>* getChildren();
    void setChildren(QList<OAIBTParameterVisibilityCondition-177*>* children);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    QString* operation;
    bool m_operation_isSet;

    QList<OAIBTParameterVisibilityCondition-177*>* children;
    bool m_children_isSet;

};

}

#endif /* OAIBTParameterVisibilityLogical-178_H_ */
