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
 * OAIBTNamedViewInfo.h
 *
 * 
 */

#ifndef OAIBTNamedViewInfo_H_
#define OAIBTNamedViewInfo_H_

#include <QJsonObject>


#include "OAIBTSectionPlaneInfo.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTNamedViewInfo: public OAIObject {
public:
    OAIBTNamedViewInfo();
    OAIBTNamedViewInfo(QString json);
    ~OAIBTNamedViewInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTNamedViewInfo* fromJson(QString jsonString) override;

    double getAngle();
    void setAngle(double angle);

    QList<double>* getCameraViewport();
    void setCameraViewport(QList<double>* camera_viewport);

    bool isPerspective();
    void setPerspective(bool perspective);

    QList<OAIBTSectionPlaneInfo*>* getSectionPlanes();
    void setSectionPlanes(QList<OAIBTSectionPlaneInfo*>* section_planes);

    QList<double>* getViewMatrix();
    void setViewMatrix(QList<double>* view_matrix);


    virtual bool isSet() override;

private:
    double angle;
    bool m_angle_isSet;

    QList<double>* camera_viewport;
    bool m_camera_viewport_isSet;

    bool perspective;
    bool m_perspective_isSet;

    QList<OAIBTSectionPlaneInfo*>* section_planes;
    bool m_section_planes_isSet;

    QList<double>* view_matrix;
    bool m_view_matrix_isSet;

};

}

#endif /* OAIBTNamedViewInfo_H_ */
