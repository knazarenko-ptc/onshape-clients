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
 * OAIBTCurveGeometrySpline-118.h
 *
 * 
 */

#ifndef OAIBTCurveGeometrySpline-118_H_
#define OAIBTCurveGeometrySpline-118_H_

#include <QJsonObject>


#include "OAIBTCurveGeometry-114.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTCurveGeometrySpline-118: public OAIObject {
public:
    OAIBTCurveGeometrySpline-118();
    OAIBTCurveGeometrySpline-118(QString json);
    ~OAIBTCurveGeometrySpline-118();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTCurveGeometrySpline-118* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    qint32 getDegree();
    void setDegree(qint32 degree);

    bool isIsPeriodic();
    void setIsPeriodic(bool is_periodic);

    bool isIsRational();
    void setIsRational(bool is_rational);

    qint32 getControlPointCount();
    void setControlPointCount(qint32 control_point_count);

    QList<double>* getControlPoints();
    void setControlPoints(QList<double>* control_points);

    QList<double>* getKnots();
    void setKnots(QList<double>* knots);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    qint32 degree;
    bool m_degree_isSet;

    bool is_periodic;
    bool m_is_periodic_isSet;

    bool is_rational;
    bool m_is_rational_isSet;

    qint32 control_point_count;
    bool m_control_point_count_isSet;

    QList<double>* control_points;
    bool m_control_points_isSet;

    QList<double>* knots;
    bool m_knots_isSet;

};

}

#endif /* OAIBTCurveGeometrySpline-118_H_ */
