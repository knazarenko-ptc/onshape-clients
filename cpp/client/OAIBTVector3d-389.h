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
 * OAIBTVector3d-389.h
 *
 * 
 */

#ifndef OAIBTVector3d-389_H_
#define OAIBTVector3d-389_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTVector3d-389: public OAIObject {
public:
    OAIBTVector3d-389();
    OAIBTVector3d-389(QString json);
    ~OAIBTVector3d-389();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTVector3d-389* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    double getX();
    void setX(double x);

    double getY();
    void setY(double y);

    double getZ();
    void setZ(double z);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    double x;
    bool m_x_isSet;

    double y;
    bool m_y_isSet;

    double z;
    bool m_z_isSet;

};

}

#endif /* OAIBTVector3d-389_H_ */
