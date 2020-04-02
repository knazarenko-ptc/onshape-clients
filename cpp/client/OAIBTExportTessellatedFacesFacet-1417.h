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
 * OAIBTExportTessellatedFacesFacet-1417.h
 *
 * 
 */

#ifndef OAIBTExportTessellatedFacesFacet-1417_H_
#define OAIBTExportTessellatedFacesFacet-1417_H_

#include <QJsonObject>


#include "OAIBTVector2d-1812.h"
#include "OAIBTVector3d-389.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTExportTessellatedFacesFacet-1417: public OAIObject {
public:
    OAIBTExportTessellatedFacesFacet-1417();
    OAIBTExportTessellatedFacesFacet-1417(QString json);
    ~OAIBTExportTessellatedFacesFacet-1417();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTExportTessellatedFacesFacet-1417* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    QList<qint32>* getIndices();
    void setIndices(QList<qint32>* indices);

    OAIBTVector3d-389* getNormal();
    void setNormal(OAIBTVector3d-389* normal);

    QList<OAIBTVector3d-389*>* getNormals();
    void setNormals(QList<OAIBTVector3d-389*>* normals);

    QList<OAIBTVector2d-1812*>* getTextureCoordinates();
    void setTextureCoordinates(QList<OAIBTVector2d-1812*>* texture_coordinates);

    QList<OAIBTVector3d-389*>* getVertices();
    void setVertices(QList<OAIBTVector3d-389*>* vertices);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    QList<qint32>* indices;
    bool m_indices_isSet;

    OAIBTVector3d-389* normal;
    bool m_normal_isSet;

    QList<OAIBTVector3d-389*>* normals;
    bool m_normals_isSet;

    QList<OAIBTVector2d-1812*>* texture_coordinates;
    bool m_texture_coordinates_isSet;

    QList<OAIBTVector3d-389*>* vertices;
    bool m_vertices_isSet;

};

}

#endif /* OAIBTExportTessellatedFacesFacet-1417_H_ */
