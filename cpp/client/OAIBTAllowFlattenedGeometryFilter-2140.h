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
 * OAIBTAllowFlattenedGeometryFilter-2140.h
 *
 * 
 */

#ifndef OAIBTAllowFlattenedGeometryFilter-2140_H_
#define OAIBTAllowFlattenedGeometryFilter-2140_H_

#include <QJsonObject>


#include "OAIBTQueryFilter-183.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTAllowFlattenedGeometryFilter-2140: public OAIObject {
public:
    OAIBTAllowFlattenedGeometryFilter-2140();
    OAIBTAllowFlattenedGeometryFilter-2140(QString json);
    ~OAIBTAllowFlattenedGeometryFilter-2140();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTAllowFlattenedGeometryFilter-2140* fromJson(QString jsonString) override;

    QString* getBtType();
    void setBtType(QString* bt_type);

    bool isAllowsFlattenedGeometry();
    void setAllowsFlattenedGeometry(bool allows_flattened_geometry);


    virtual bool isSet() override;

private:
    QString* bt_type;
    bool m_bt_type_isSet;

    bool allows_flattened_geometry;
    bool m_allows_flattened_geometry_isSet;

};

}

#endif /* OAIBTAllowFlattenedGeometryFilter-2140_H_ */
