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
 * OAIBTExportModelBodiesResponse-734.h
 *
 * 
 */

#ifndef OAIBTExportModelBodiesResponse-734_H_
#define OAIBTExportModelBodiesResponse-734_H_

#include <QJsonObject>


#include "OAIBTExportModelBody-1272.h"
#include "OAIBTMicroversionId-366.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTExportModelBodiesResponse-734: public OAIObject {
public:
    OAIBTExportModelBodiesResponse-734();
    OAIBTExportModelBodiesResponse-734(QString json);
    ~OAIBTExportModelBodiesResponse-734();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTExportModelBodiesResponse-734* fromJson(QString jsonString) override;

    QList<OAIBTExportModelBody-1272*>* getBodies();
    void setBodies(QList<OAIBTExportModelBody-1272*>* bodies);

    QString* getErrorEnum();
    void setErrorEnum(QString* error_enum);

    OAIBTMicroversionId-366* getMicroversionId();
    void setMicroversionId(OAIBTMicroversionId-366* microversion_id);


    virtual bool isSet() override;

private:
    QList<OAIBTExportModelBody-1272*>* bodies;
    bool m_bodies_isSet;

    QString* error_enum;
    bool m_error_enum_isSet;

    OAIBTMicroversionId-366* microversion_id;
    bool m_microversion_id_isSet;

};

}

#endif /* OAIBTExportModelBodiesResponse-734_H_ */
