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


#include "OAIBTPurchaseInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTPurchaseInfo::OAIBTPurchaseInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIBTPurchaseInfo::OAIBTPurchaseInfo() {
    init();
}

OAIBTPurchaseInfo::~OAIBTPurchaseInfo() {
    this->cleanup();
}

void
OAIBTPurchaseInfo::init() {
    account_id = new QString("");
    m_account_id_isSet = false;
    actual_amount_paid_cents = 0L;
    m_actual_amount_paid_cents_isSet = false;
    amount_cents = 0L;
    m_amount_cents_isSet = false;
    application = new OAIBTAPIApplicationSummaryInfo();
    m_application_isSet = false;
    canceled_at = NULL;
    m_canceled_at_isSet = false;
    card = new OAIBTCardInfo();
    m_card_isSet = false;
    client_id = new QString("");
    m_client_id_isSet = false;
    coupon_amount_off = 0L;
    m_coupon_amount_off_isSet = false;
    coupon_percent_off = 0;
    m_coupon_percent_off_isSet = false;
    created_by = new QString("");
    m_created_by_isSet = false;
    currency = new QString("");
    m_currency_isSet = false;
    duration = 0;
    m_duration_isSet = false;
    duration_months = 0;
    m_duration_months_isSet = false;
    group = new QString("");
    m_group_isSet = false;
    href = new QString("");
    m_href_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    last_modified = NULL;
    m_last_modified_isSet = false;
    last_modified_by = new QString("");
    m_last_modified_by_isSet = false;
    light_seats = 0L;
    m_light_seats_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    next_charge = new OAINextCharge();
    m_next_charge_isSet = false;
    payment_type = 0;
    m_payment_type_isSet = false;
    pending_cancelation = false;
    m_pending_cancelation_isSet = false;
    plan = new OAIBTBillingPlanInfo();
    m_plan_isSet = false;
    plan_id = new QString("");
    m_plan_id_isSet = false;
    plan_name = new QString("");
    m_plan_name_isSet = false;
    plan_type = 0;
    m_plan_type_isSet = false;
    prorated_charges = new QList<OAIProratedCharges*>();
    m_prorated_charges_isSet = false;
    prorated_total = 0L;
    m_prorated_total_isSet = false;
    purchase_date = NULL;
    m_purchase_date_isSet = false;
    reseller_name = new QString("");
    m_reseller_name_isSet = false;
    seats = 0L;
    m_seats_isSet = false;
    state = 0;
    m_state_isSet = false;
    subscribers = new QList<OAIBTPlanSubscriberInfo*>();
    m_subscribers_isSet = false;
    subscription_begin_at = NULL;
    m_subscription_begin_at_isSet = false;
    subscription_end_at = NULL;
    m_subscription_end_at_isSet = false;
    subscription_fields = new OAISubscription();
    m_subscription_fields_isSet = false;
    subscription_id = new QString("");
    m_subscription_id_isSet = false;
    subscription_type = 0;
    m_subscription_type_isSet = false;
    trial_end = NULL;
    m_trial_end_isSet = false;
    trial_initiated_by = new QString("");
    m_trial_initiated_by_isSet = false;
    view_ref = new QString("");
    m_view_ref_isSet = false;
}

void
OAIBTPurchaseInfo::cleanup() {
    if(account_id != nullptr) { 
        delete account_id;
    }


    if(application != nullptr) { 
        delete application;
    }
    if(canceled_at != nullptr) { 
        delete canceled_at;
    }
    if(card != nullptr) { 
        delete card;
    }
    if(client_id != nullptr) { 
        delete client_id;
    }


    if(created_by != nullptr) { 
        delete created_by;
    }
    if(currency != nullptr) { 
        delete currency;
    }


    if(group != nullptr) { 
        delete group;
    }
    if(href != nullptr) { 
        delete href;
    }
    if(id != nullptr) { 
        delete id;
    }
    if(last_modified != nullptr) { 
        delete last_modified;
    }
    if(last_modified_by != nullptr) { 
        delete last_modified_by;
    }

    if(name != nullptr) { 
        delete name;
    }
    if(next_charge != nullptr) { 
        delete next_charge;
    }


    if(plan != nullptr) { 
        delete plan;
    }
    if(plan_id != nullptr) { 
        delete plan_id;
    }
    if(plan_name != nullptr) { 
        delete plan_name;
    }

    if(prorated_charges != nullptr) { 
        auto arr = prorated_charges;
        for(auto o: *arr) { 
            delete o;
        }
        delete prorated_charges;
    }

    if(purchase_date != nullptr) { 
        delete purchase_date;
    }
    if(reseller_name != nullptr) { 
        delete reseller_name;
    }


    if(subscribers != nullptr) { 
        auto arr = subscribers;
        for(auto o: *arr) { 
            delete o;
        }
        delete subscribers;
    }
    if(subscription_begin_at != nullptr) { 
        delete subscription_begin_at;
    }
    if(subscription_end_at != nullptr) { 
        delete subscription_end_at;
    }
    if(subscription_fields != nullptr) { 
        delete subscription_fields;
    }
    if(subscription_id != nullptr) { 
        delete subscription_id;
    }

    if(trial_end != nullptr) { 
        delete trial_end;
    }
    if(trial_initiated_by != nullptr) { 
        delete trial_initiated_by;
    }
    if(view_ref != nullptr) { 
        delete view_ref;
    }
}

OAIBTPurchaseInfo*
OAIBTPurchaseInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTPurchaseInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&account_id, pJson["accountId"], "QString", "QString");
    
    ::OpenAPI::setValue(&actual_amount_paid_cents, pJson["actualAmountPaidCents"], "qint64", "");
    
    ::OpenAPI::setValue(&amount_cents, pJson["amountCents"], "qint64", "");
    
    ::OpenAPI::setValue(&application, pJson["application"], "OAIBTAPIApplicationSummaryInfo", "OAIBTAPIApplicationSummaryInfo");
    
    ::OpenAPI::setValue(&canceled_at, pJson["canceledAt"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&card, pJson["card"], "OAIBTCardInfo", "OAIBTCardInfo");
    
    ::OpenAPI::setValue(&client_id, pJson["clientId"], "QString", "QString");
    
    ::OpenAPI::setValue(&coupon_amount_off, pJson["couponAmountOff"], "qint64", "");
    
    ::OpenAPI::setValue(&coupon_percent_off, pJson["couponPercentOff"], "qint32", "");
    
    ::OpenAPI::setValue(&created_by, pJson["createdBy"], "QString", "QString");
    
    ::OpenAPI::setValue(&currency, pJson["currency"], "QString", "QString");
    
    ::OpenAPI::setValue(&duration, pJson["duration"], "qint32", "");
    
    ::OpenAPI::setValue(&duration_months, pJson["durationMonths"], "qint32", "");
    
    ::OpenAPI::setValue(&group, pJson["group"], "QString", "QString");
    
    ::OpenAPI::setValue(&href, pJson["href"], "QString", "QString");
    
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&last_modified, pJson["lastModified"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&last_modified_by, pJson["lastModifiedBy"], "QString", "QString");
    
    ::OpenAPI::setValue(&light_seats, pJson["lightSeats"], "qint64", "");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&next_charge, pJson["nextCharge"], "OAINextCharge", "OAINextCharge");
    
    ::OpenAPI::setValue(&payment_type, pJson["paymentType"], "qint32", "");
    
    ::OpenAPI::setValue(&pending_cancelation, pJson["pendingCancelation"], "bool", "");
    
    ::OpenAPI::setValue(&plan, pJson["plan"], "OAIBTBillingPlanInfo", "OAIBTBillingPlanInfo");
    
    ::OpenAPI::setValue(&plan_id, pJson["planId"], "QString", "QString");
    
    ::OpenAPI::setValue(&plan_name, pJson["planName"], "QString", "QString");
    
    ::OpenAPI::setValue(&plan_type, pJson["planType"], "qint32", "");
    
    
    ::OpenAPI::setValue(&prorated_charges, pJson["proratedCharges"], "QList", "OAIProratedCharges");
    ::OpenAPI::setValue(&prorated_total, pJson["proratedTotal"], "qint64", "");
    
    ::OpenAPI::setValue(&purchase_date, pJson["purchaseDate"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&reseller_name, pJson["resellerName"], "QString", "QString");
    
    ::OpenAPI::setValue(&seats, pJson["seats"], "qint64", "");
    
    ::OpenAPI::setValue(&state, pJson["state"], "qint32", "");
    
    
    ::OpenAPI::setValue(&subscribers, pJson["subscribers"], "QList", "OAIBTPlanSubscriberInfo");
    ::OpenAPI::setValue(&subscription_begin_at, pJson["subscriptionBeginAt"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&subscription_end_at, pJson["subscriptionEndAt"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&subscription_fields, pJson["subscriptionFields"], "OAISubscription", "OAISubscription");
    
    ::OpenAPI::setValue(&subscription_id, pJson["subscriptionId"], "QString", "QString");
    
    ::OpenAPI::setValue(&subscription_type, pJson["subscriptionType"], "qint32", "");
    
    ::OpenAPI::setValue(&trial_end, pJson["trialEnd"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&trial_initiated_by, pJson["trialInitiatedBy"], "QString", "QString");
    
    ::OpenAPI::setValue(&view_ref, pJson["viewRef"], "QString", "QString");
    
}

QString
OAIBTPurchaseInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTPurchaseInfo::asJsonObject() {
    QJsonObject obj;
    if(account_id != nullptr && *account_id != QString("")){
        toJsonValue(QString("accountId"), account_id, obj, QString("QString"));
    }
    if(m_actual_amount_paid_cents_isSet){
        obj.insert("actualAmountPaidCents", QJsonValue(actual_amount_paid_cents));
    }
    if(m_amount_cents_isSet){
        obj.insert("amountCents", QJsonValue(amount_cents));
    }
    if((application != nullptr) && (application->isSet())){
        toJsonValue(QString("application"), application, obj, QString("OAIBTAPIApplicationSummaryInfo"));
    }
    if(canceled_at != nullptr) { 
        toJsonValue(QString("canceledAt"), canceled_at, obj, QString("QDateTime"));
    }
    if((card != nullptr) && (card->isSet())){
        toJsonValue(QString("card"), card, obj, QString("OAIBTCardInfo"));
    }
    if(client_id != nullptr && *client_id != QString("")){
        toJsonValue(QString("clientId"), client_id, obj, QString("QString"));
    }
    if(m_coupon_amount_off_isSet){
        obj.insert("couponAmountOff", QJsonValue(coupon_amount_off));
    }
    if(m_coupon_percent_off_isSet){
        obj.insert("couponPercentOff", QJsonValue(coupon_percent_off));
    }
    if(created_by != nullptr && *created_by != QString("")){
        toJsonValue(QString("createdBy"), created_by, obj, QString("QString"));
    }
    if(currency != nullptr && *currency != QString("")){
        toJsonValue(QString("currency"), currency, obj, QString("QString"));
    }
    if(m_duration_isSet){
        obj.insert("duration", QJsonValue(duration));
    }
    if(m_duration_months_isSet){
        obj.insert("durationMonths", QJsonValue(duration_months));
    }
    if(group != nullptr && *group != QString("")){
        toJsonValue(QString("group"), group, obj, QString("QString"));
    }
    if(href != nullptr && *href != QString("")){
        toJsonValue(QString("href"), href, obj, QString("QString"));
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(last_modified != nullptr) { 
        toJsonValue(QString("lastModified"), last_modified, obj, QString("QDateTime"));
    }
    if(last_modified_by != nullptr && *last_modified_by != QString("")){
        toJsonValue(QString("lastModifiedBy"), last_modified_by, obj, QString("QString"));
    }
    if(m_light_seats_isSet){
        obj.insert("lightSeats", QJsonValue(light_seats));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if((next_charge != nullptr) && (next_charge->isSet())){
        toJsonValue(QString("nextCharge"), next_charge, obj, QString("OAINextCharge"));
    }
    if(m_payment_type_isSet){
        obj.insert("paymentType", QJsonValue(payment_type));
    }
    if(m_pending_cancelation_isSet){
        obj.insert("pendingCancelation", QJsonValue(pending_cancelation));
    }
    if((plan != nullptr) && (plan->isSet())){
        toJsonValue(QString("plan"), plan, obj, QString("OAIBTBillingPlanInfo"));
    }
    if(plan_id != nullptr && *plan_id != QString("")){
        toJsonValue(QString("planId"), plan_id, obj, QString("QString"));
    }
    if(plan_name != nullptr && *plan_name != QString("")){
        toJsonValue(QString("planName"), plan_name, obj, QString("QString"));
    }
    if(m_plan_type_isSet){
        obj.insert("planType", QJsonValue(plan_type));
    }
    if(prorated_charges->size() > 0){
        toJsonArray((QList<void*>*)prorated_charges, obj, "proratedCharges", "OAIProratedCharges");
    }
    if(m_prorated_total_isSet){
        obj.insert("proratedTotal", QJsonValue(prorated_total));
    }
    if(purchase_date != nullptr) { 
        toJsonValue(QString("purchaseDate"), purchase_date, obj, QString("QDateTime"));
    }
    if(reseller_name != nullptr && *reseller_name != QString("")){
        toJsonValue(QString("resellerName"), reseller_name, obj, QString("QString"));
    }
    if(m_seats_isSet){
        obj.insert("seats", QJsonValue(seats));
    }
    if(m_state_isSet){
        obj.insert("state", QJsonValue(state));
    }
    if(subscribers->size() > 0){
        toJsonArray((QList<void*>*)subscribers, obj, "subscribers", "OAIBTPlanSubscriberInfo");
    }
    if(subscription_begin_at != nullptr) { 
        toJsonValue(QString("subscriptionBeginAt"), subscription_begin_at, obj, QString("QDateTime"));
    }
    if(subscription_end_at != nullptr) { 
        toJsonValue(QString("subscriptionEndAt"), subscription_end_at, obj, QString("QDateTime"));
    }
    if((subscription_fields != nullptr) && (subscription_fields->isSet())){
        toJsonValue(QString("subscriptionFields"), subscription_fields, obj, QString("OAISubscription"));
    }
    if(subscription_id != nullptr && *subscription_id != QString("")){
        toJsonValue(QString("subscriptionId"), subscription_id, obj, QString("QString"));
    }
    if(m_subscription_type_isSet){
        obj.insert("subscriptionType", QJsonValue(subscription_type));
    }
    if(trial_end != nullptr) { 
        toJsonValue(QString("trialEnd"), trial_end, obj, QString("QDateTime"));
    }
    if(trial_initiated_by != nullptr && *trial_initiated_by != QString("")){
        toJsonValue(QString("trialInitiatedBy"), trial_initiated_by, obj, QString("QString"));
    }
    if(view_ref != nullptr && *view_ref != QString("")){
        toJsonValue(QString("viewRef"), view_ref, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIBTPurchaseInfo::getAccountId() {
    return account_id;
}
void
OAIBTPurchaseInfo::setAccountId(QString* account_id) {
    this->account_id = account_id;
    this->m_account_id_isSet = true;
}

qint64
OAIBTPurchaseInfo::getActualAmountPaidCents() {
    return actual_amount_paid_cents;
}
void
OAIBTPurchaseInfo::setActualAmountPaidCents(qint64 actual_amount_paid_cents) {
    this->actual_amount_paid_cents = actual_amount_paid_cents;
    this->m_actual_amount_paid_cents_isSet = true;
}

qint64
OAIBTPurchaseInfo::getAmountCents() {
    return amount_cents;
}
void
OAIBTPurchaseInfo::setAmountCents(qint64 amount_cents) {
    this->amount_cents = amount_cents;
    this->m_amount_cents_isSet = true;
}

OAIBTAPIApplicationSummaryInfo*
OAIBTPurchaseInfo::getApplication() {
    return application;
}
void
OAIBTPurchaseInfo::setApplication(OAIBTAPIApplicationSummaryInfo* application) {
    this->application = application;
    this->m_application_isSet = true;
}

QDateTime*
OAIBTPurchaseInfo::getCanceledAt() {
    return canceled_at;
}
void
OAIBTPurchaseInfo::setCanceledAt(QDateTime* canceled_at) {
    this->canceled_at = canceled_at;
    this->m_canceled_at_isSet = true;
}

OAIBTCardInfo*
OAIBTPurchaseInfo::getCard() {
    return card;
}
void
OAIBTPurchaseInfo::setCard(OAIBTCardInfo* card) {
    this->card = card;
    this->m_card_isSet = true;
}

QString*
OAIBTPurchaseInfo::getClientId() {
    return client_id;
}
void
OAIBTPurchaseInfo::setClientId(QString* client_id) {
    this->client_id = client_id;
    this->m_client_id_isSet = true;
}

qint64
OAIBTPurchaseInfo::getCouponAmountOff() {
    return coupon_amount_off;
}
void
OAIBTPurchaseInfo::setCouponAmountOff(qint64 coupon_amount_off) {
    this->coupon_amount_off = coupon_amount_off;
    this->m_coupon_amount_off_isSet = true;
}

qint32
OAIBTPurchaseInfo::getCouponPercentOff() {
    return coupon_percent_off;
}
void
OAIBTPurchaseInfo::setCouponPercentOff(qint32 coupon_percent_off) {
    this->coupon_percent_off = coupon_percent_off;
    this->m_coupon_percent_off_isSet = true;
}

QString*
OAIBTPurchaseInfo::getCreatedBy() {
    return created_by;
}
void
OAIBTPurchaseInfo::setCreatedBy(QString* created_by) {
    this->created_by = created_by;
    this->m_created_by_isSet = true;
}

QString*
OAIBTPurchaseInfo::getCurrency() {
    return currency;
}
void
OAIBTPurchaseInfo::setCurrency(QString* currency) {
    this->currency = currency;
    this->m_currency_isSet = true;
}

qint32
OAIBTPurchaseInfo::getDuration() {
    return duration;
}
void
OAIBTPurchaseInfo::setDuration(qint32 duration) {
    this->duration = duration;
    this->m_duration_isSet = true;
}

qint32
OAIBTPurchaseInfo::getDurationMonths() {
    return duration_months;
}
void
OAIBTPurchaseInfo::setDurationMonths(qint32 duration_months) {
    this->duration_months = duration_months;
    this->m_duration_months_isSet = true;
}

QString*
OAIBTPurchaseInfo::getGroup() {
    return group;
}
void
OAIBTPurchaseInfo::setGroup(QString* group) {
    this->group = group;
    this->m_group_isSet = true;
}

QString*
OAIBTPurchaseInfo::getHref() {
    return href;
}
void
OAIBTPurchaseInfo::setHref(QString* href) {
    this->href = href;
    this->m_href_isSet = true;
}

QString*
OAIBTPurchaseInfo::getId() {
    return id;
}
void
OAIBTPurchaseInfo::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

QDateTime*
OAIBTPurchaseInfo::getLastModified() {
    return last_modified;
}
void
OAIBTPurchaseInfo::setLastModified(QDateTime* last_modified) {
    this->last_modified = last_modified;
    this->m_last_modified_isSet = true;
}

QString*
OAIBTPurchaseInfo::getLastModifiedBy() {
    return last_modified_by;
}
void
OAIBTPurchaseInfo::setLastModifiedBy(QString* last_modified_by) {
    this->last_modified_by = last_modified_by;
    this->m_last_modified_by_isSet = true;
}

qint64
OAIBTPurchaseInfo::getLightSeats() {
    return light_seats;
}
void
OAIBTPurchaseInfo::setLightSeats(qint64 light_seats) {
    this->light_seats = light_seats;
    this->m_light_seats_isSet = true;
}

QString*
OAIBTPurchaseInfo::getName() {
    return name;
}
void
OAIBTPurchaseInfo::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAINextCharge*
OAIBTPurchaseInfo::getNextCharge() {
    return next_charge;
}
void
OAIBTPurchaseInfo::setNextCharge(OAINextCharge* next_charge) {
    this->next_charge = next_charge;
    this->m_next_charge_isSet = true;
}

qint32
OAIBTPurchaseInfo::getPaymentType() {
    return payment_type;
}
void
OAIBTPurchaseInfo::setPaymentType(qint32 payment_type) {
    this->payment_type = payment_type;
    this->m_payment_type_isSet = true;
}

bool
OAIBTPurchaseInfo::isPendingCancelation() {
    return pending_cancelation;
}
void
OAIBTPurchaseInfo::setPendingCancelation(bool pending_cancelation) {
    this->pending_cancelation = pending_cancelation;
    this->m_pending_cancelation_isSet = true;
}

OAIBTBillingPlanInfo*
OAIBTPurchaseInfo::getPlan() {
    return plan;
}
void
OAIBTPurchaseInfo::setPlan(OAIBTBillingPlanInfo* plan) {
    this->plan = plan;
    this->m_plan_isSet = true;
}

QString*
OAIBTPurchaseInfo::getPlanId() {
    return plan_id;
}
void
OAIBTPurchaseInfo::setPlanId(QString* plan_id) {
    this->plan_id = plan_id;
    this->m_plan_id_isSet = true;
}

QString*
OAIBTPurchaseInfo::getPlanName() {
    return plan_name;
}
void
OAIBTPurchaseInfo::setPlanName(QString* plan_name) {
    this->plan_name = plan_name;
    this->m_plan_name_isSet = true;
}

qint32
OAIBTPurchaseInfo::getPlanType() {
    return plan_type;
}
void
OAIBTPurchaseInfo::setPlanType(qint32 plan_type) {
    this->plan_type = plan_type;
    this->m_plan_type_isSet = true;
}

QList<OAIProratedCharges*>*
OAIBTPurchaseInfo::getProratedCharges() {
    return prorated_charges;
}
void
OAIBTPurchaseInfo::setProratedCharges(QList<OAIProratedCharges*>* prorated_charges) {
    this->prorated_charges = prorated_charges;
    this->m_prorated_charges_isSet = true;
}

qint64
OAIBTPurchaseInfo::getProratedTotal() {
    return prorated_total;
}
void
OAIBTPurchaseInfo::setProratedTotal(qint64 prorated_total) {
    this->prorated_total = prorated_total;
    this->m_prorated_total_isSet = true;
}

QDateTime*
OAIBTPurchaseInfo::getPurchaseDate() {
    return purchase_date;
}
void
OAIBTPurchaseInfo::setPurchaseDate(QDateTime* purchase_date) {
    this->purchase_date = purchase_date;
    this->m_purchase_date_isSet = true;
}

QString*
OAIBTPurchaseInfo::getResellerName() {
    return reseller_name;
}
void
OAIBTPurchaseInfo::setResellerName(QString* reseller_name) {
    this->reseller_name = reseller_name;
    this->m_reseller_name_isSet = true;
}

qint64
OAIBTPurchaseInfo::getSeats() {
    return seats;
}
void
OAIBTPurchaseInfo::setSeats(qint64 seats) {
    this->seats = seats;
    this->m_seats_isSet = true;
}

qint32
OAIBTPurchaseInfo::getState() {
    return state;
}
void
OAIBTPurchaseInfo::setState(qint32 state) {
    this->state = state;
    this->m_state_isSet = true;
}

QList<OAIBTPlanSubscriberInfo*>*
OAIBTPurchaseInfo::getSubscribers() {
    return subscribers;
}
void
OAIBTPurchaseInfo::setSubscribers(QList<OAIBTPlanSubscriberInfo*>* subscribers) {
    this->subscribers = subscribers;
    this->m_subscribers_isSet = true;
}

QDateTime*
OAIBTPurchaseInfo::getSubscriptionBeginAt() {
    return subscription_begin_at;
}
void
OAIBTPurchaseInfo::setSubscriptionBeginAt(QDateTime* subscription_begin_at) {
    this->subscription_begin_at = subscription_begin_at;
    this->m_subscription_begin_at_isSet = true;
}

QDateTime*
OAIBTPurchaseInfo::getSubscriptionEndAt() {
    return subscription_end_at;
}
void
OAIBTPurchaseInfo::setSubscriptionEndAt(QDateTime* subscription_end_at) {
    this->subscription_end_at = subscription_end_at;
    this->m_subscription_end_at_isSet = true;
}

OAISubscription*
OAIBTPurchaseInfo::getSubscriptionFields() {
    return subscription_fields;
}
void
OAIBTPurchaseInfo::setSubscriptionFields(OAISubscription* subscription_fields) {
    this->subscription_fields = subscription_fields;
    this->m_subscription_fields_isSet = true;
}

QString*
OAIBTPurchaseInfo::getSubscriptionId() {
    return subscription_id;
}
void
OAIBTPurchaseInfo::setSubscriptionId(QString* subscription_id) {
    this->subscription_id = subscription_id;
    this->m_subscription_id_isSet = true;
}

qint32
OAIBTPurchaseInfo::getSubscriptionType() {
    return subscription_type;
}
void
OAIBTPurchaseInfo::setSubscriptionType(qint32 subscription_type) {
    this->subscription_type = subscription_type;
    this->m_subscription_type_isSet = true;
}

QDateTime*
OAIBTPurchaseInfo::getTrialEnd() {
    return trial_end;
}
void
OAIBTPurchaseInfo::setTrialEnd(QDateTime* trial_end) {
    this->trial_end = trial_end;
    this->m_trial_end_isSet = true;
}

QString*
OAIBTPurchaseInfo::getTrialInitiatedBy() {
    return trial_initiated_by;
}
void
OAIBTPurchaseInfo::setTrialInitiatedBy(QString* trial_initiated_by) {
    this->trial_initiated_by = trial_initiated_by;
    this->m_trial_initiated_by_isSet = true;
}

QString*
OAIBTPurchaseInfo::getViewRef() {
    return view_ref;
}
void
OAIBTPurchaseInfo::setViewRef(QString* view_ref) {
    this->view_ref = view_ref;
    this->m_view_ref_isSet = true;
}


bool
OAIBTPurchaseInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(account_id != nullptr && *account_id != QString("")){ isObjectUpdated = true; break;}
        if(m_actual_amount_paid_cents_isSet){ isObjectUpdated = true; break;}
        if(m_amount_cents_isSet){ isObjectUpdated = true; break;}
        if(application != nullptr && application->isSet()){ isObjectUpdated = true; break;}
        if(card != nullptr && card->isSet()){ isObjectUpdated = true; break;}
        if(client_id != nullptr && *client_id != QString("")){ isObjectUpdated = true; break;}
        if(m_coupon_amount_off_isSet){ isObjectUpdated = true; break;}
        if(m_coupon_percent_off_isSet){ isObjectUpdated = true; break;}
        if(created_by != nullptr && *created_by != QString("")){ isObjectUpdated = true; break;}
        if(currency != nullptr && *currency != QString("")){ isObjectUpdated = true; break;}
        if(m_duration_isSet){ isObjectUpdated = true; break;}
        if(m_duration_months_isSet){ isObjectUpdated = true; break;}
        if(group != nullptr && *group != QString("")){ isObjectUpdated = true; break;}
        if(href != nullptr && *href != QString("")){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(last_modified_by != nullptr && *last_modified_by != QString("")){ isObjectUpdated = true; break;}
        if(m_light_seats_isSet){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(next_charge != nullptr && next_charge->isSet()){ isObjectUpdated = true; break;}
        if(m_payment_type_isSet){ isObjectUpdated = true; break;}
        if(m_pending_cancelation_isSet){ isObjectUpdated = true; break;}
        if(plan != nullptr && plan->isSet()){ isObjectUpdated = true; break;}
        if(plan_id != nullptr && *plan_id != QString("")){ isObjectUpdated = true; break;}
        if(plan_name != nullptr && *plan_name != QString("")){ isObjectUpdated = true; break;}
        if(m_plan_type_isSet){ isObjectUpdated = true; break;}
        if(prorated_charges->size() > 0){ isObjectUpdated = true; break;}
        if(m_prorated_total_isSet){ isObjectUpdated = true; break;}
        if(reseller_name != nullptr && *reseller_name != QString("")){ isObjectUpdated = true; break;}
        if(m_seats_isSet){ isObjectUpdated = true; break;}
        if(m_state_isSet){ isObjectUpdated = true; break;}
        if(subscribers->size() > 0){ isObjectUpdated = true; break;}
        if(subscription_fields != nullptr && subscription_fields->isSet()){ isObjectUpdated = true; break;}
        if(subscription_id != nullptr && *subscription_id != QString("")){ isObjectUpdated = true; break;}
        if(m_subscription_type_isSet){ isObjectUpdated = true; break;}
        if(trial_initiated_by != nullptr && *trial_initiated_by != QString("")){ isObjectUpdated = true; break;}
        if(view_ref != nullptr && *view_ref != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

