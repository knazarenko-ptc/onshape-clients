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
 * OAIBTBillingPlanInfo.h
 *
 * 
 */

#ifndef OAIBTBillingPlanInfo_H_
#define OAIBTBillingPlanInfo_H_

#include <QJsonObject>


#include "OAIBTDiscountInfo.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTBillingPlanInfo: public OAIObject {
public:
    OAIBTBillingPlanInfo();
    OAIBTBillingPlanInfo(QString json);
    ~OAIBTBillingPlanInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTBillingPlanInfo* fromJson(QString jsonString) override;

    qint32 getAmountCents();
    void setAmountCents(qint32 amount_cents);

    QString* getApplicationId();
    void setApplicationId(QString* application_id);

    QString* getClientId();
    void setClientId(QString* client_id);

    bool isCompanyPlan();
    void setCompanyPlan(bool company_plan);

    qint32 getConsumableQuantity();
    void setConsumableQuantity(qint32 consumable_quantity);

    bool isDeprecated();
    void setDeprecated(bool deprecated);

    QString* getDescription();
    void setDescription(QString* description);

    OAIBTDiscountInfo* getDiscountInfo();
    void setDiscountInfo(OAIBTDiscountInfo* discount_info);

    QString* getGroup();
    void setGroup(QString* group);

    bool isHidden();
    void setHidden(bool hidden);

    QString* getHref();
    void setHref(QString* href);

    QString* getId();
    void setId(QString* id);

    QString* getInterval();
    void setInterval(QString* interval);

    QString* getName();
    void setName(QString* name);

    bool isOnshapePlan();
    void setOnshapePlan(bool onshape_plan);

    qint32 getPlanType();
    void setPlanType(qint32 plan_type);

    qint32 getTrialPeriodDays();
    void setTrialPeriodDays(qint32 trial_period_days);

    QString* getViewRef();
    void setViewRef(QString* view_ref);


    virtual bool isSet() override;

private:
    qint32 amount_cents;
    bool m_amount_cents_isSet;

    QString* application_id;
    bool m_application_id_isSet;

    QString* client_id;
    bool m_client_id_isSet;

    bool company_plan;
    bool m_company_plan_isSet;

    qint32 consumable_quantity;
    bool m_consumable_quantity_isSet;

    bool deprecated;
    bool m_deprecated_isSet;

    QString* description;
    bool m_description_isSet;

    OAIBTDiscountInfo* discount_info;
    bool m_discount_info_isSet;

    QString* group;
    bool m_group_isSet;

    bool hidden;
    bool m_hidden_isSet;

    QString* href;
    bool m_href_isSet;

    QString* id;
    bool m_id_isSet;

    QString* interval;
    bool m_interval_isSet;

    QString* name;
    bool m_name_isSet;

    bool onshape_plan;
    bool m_onshape_plan_isSet;

    qint32 plan_type;
    bool m_plan_type_isSet;

    qint32 trial_period_days;
    bool m_trial_period_days_isSet;

    QString* view_ref;
    bool m_view_ref_isSet;

};

}

#endif /* OAIBTBillingPlanInfo_H_ */
