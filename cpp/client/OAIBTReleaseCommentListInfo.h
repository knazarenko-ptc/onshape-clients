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
 * OAIBTReleaseCommentListInfo.h
 *
 * 
 */

#ifndef OAIBTReleaseCommentListInfo_H_
#define OAIBTReleaseCommentListInfo_H_

#include <QJsonObject>


#include "OAIBTCommentInfo.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTReleaseCommentListInfo: public OAIObject {
public:
    OAIBTReleaseCommentListInfo();
    OAIBTReleaseCommentListInfo(QString json);
    ~OAIBTReleaseCommentListInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTReleaseCommentListInfo* fromJson(QString jsonString) override;

    QList<OAIBTCommentInfo*>* getComments();
    void setComments(QList<OAIBTCommentInfo*>* comments);

    QString* getRpId();
    void setRpId(QString* rp_id);

    QString* getRpName();
    void setRpName(QString* rp_name);


    virtual bool isSet() override;

private:
    QList<OAIBTCommentInfo*>* comments;
    bool m_comments_isSet;

    QString* rp_id;
    bool m_rp_id_isSet;

    QString* rp_name;
    bool m_rp_name_isSet;

};

}

#endif /* OAIBTReleaseCommentListInfo_H_ */
