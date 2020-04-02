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
 * OAIBTEllipseDescription-866.h
 *
 * 
 */

#ifndef OAIBTEllipseDescription-866_H_
#define OAIBTEllipseDescription-866_H_

#include <QJsonObject>


#include "OAIBTCurveDescription-1583.h"
#include "OAIBTVector3d-389.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTEllipseDescription-866: public OAIObject {
public:
    OAIBTEllipseDescription-866();
    OAIBTEllipseDescription-866(QString json);
    ~OAIBTEllipseDescription-866();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTEllipseDescription-866* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    QString* getType();
    void setType(QString* type);

    OAIBTVector3d-389* getNormal();
    void setNormal(OAIBTVector3d-389* normal);

    double getMinorRadius();
    void setMinorRadius(double minor_radius);

    OAIBTVector3d-389* getMajorAxis();
    void setMajorAxis(OAIBTVector3d-389* major_axis);

    double getMajorRadius();
    void setMajorRadius(double major_radius);

    OAIBTVector3d-389* getOrigin();
    void setOrigin(OAIBTVector3d-389* origin);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    QString* type;
    bool m_type_isSet;

    OAIBTVector3d-389* normal;
    bool m_normal_isSet;

    double minor_radius;
    bool m_minor_radius_isSet;

    OAIBTVector3d-389* major_axis;
    bool m_major_axis_isSet;

    double major_radius;
    bool m_major_radius_isSet;

    OAIBTVector3d-389* origin;
    bool m_origin_isSet;

};

}

#endif /* OAIBTEllipseDescription-866_H_ */
