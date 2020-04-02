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
 * OAICard.h
 *
 * 
 */

#ifndef OAICard_H_
#define OAICard_H_

#include <QJsonObject>


#include "OAIThreeDSecure.h"
#include <QList>
#include <QMap>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAICard: public OAIObject {
public:
    OAICard();
    OAICard(QString json);
    ~OAICard();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAICard* fromJson(QString jsonString) override;

    QString* getAccount();
    void setAccount(QString* account);

    QString* getAddressCity();
    void setAddressCity(QString* address_city);

    QString* getAddressCountry();
    void setAddressCountry(QString* address_country);

    QString* getAddressLine1();
    void setAddressLine1(QString* address_line1);

    QString* getAddressLine1Check();
    void setAddressLine1Check(QString* address_line1_check);

    QString* getAddressLine2();
    void setAddressLine2(QString* address_line2);

    QString* getAddressState();
    void setAddressState(QString* address_state);

    QString* getAddressZip();
    void setAddressZip(QString* address_zip);

    QString* getAddressZipCheck();
    void setAddressZipCheck(QString* address_zip_check);

    QList<QString*>* getAvailablePayoutMethods();
    void setAvailablePayoutMethods(QList<QString*>* available_payout_methods);

    QString* getBrand();
    void setBrand(QString* brand);

    QString* getCountry();
    void setCountry(QString* country);

    QString* getCurrency();
    void setCurrency(QString* currency);

    QString* getCustomer();
    void setCustomer(QString* customer);

    QString* getCvcCheck();
    void setCvcCheck(QString* cvc_check);

    bool isDefaultForCurrency();
    void setDefaultForCurrency(bool default_for_currency);

    QString* getDescription();
    void setDescription(QString* description);

    QString* getDynamicLast4();
    void setDynamicLast4(QString* dynamic_last4);

    qint32 getExpMonth();
    void setExpMonth(qint32 exp_month);

    qint32 getExpYear();
    void setExpYear(qint32 exp_year);

    QString* getFingerprint();
    void setFingerprint(QString* fingerprint);

    QString* getFunding();
    void setFunding(QString* funding);

    QString* getId();
    void setId(QString* id);

    QString* getIin();
    void setIin(QString* iin);

    QString* getInstanceUrl();
    void setInstanceUrl(QString* instance_url);

    QString* getIssuer();
    void setIssuer(QString* issuer);

    QString* getLast4();
    void setLast4(QString* last4);

    QMap<QString, QString*>* getMetadata();
    void setMetadata(QMap<QString, QString*>* metadata);

    QString* getName();
    void setName(QString* name);

    QString* getObject();
    void setObject(QString* object);

    QString* getRecipient();
    void setRecipient(QString* recipient);

    QString* getStatus();
    void setStatus(QString* status);

    OAIThreeDSecure* getThreeDSecure();
    void setThreeDSecure(OAIThreeDSecure* three_d_secure);

    QString* getTokenizationMethod();
    void setTokenizationMethod(QString* tokenization_method);

    QString* getType();
    void setType(QString* type);


    virtual bool isSet() override;

private:
    QString* account;
    bool m_account_isSet;

    QString* address_city;
    bool m_address_city_isSet;

    QString* address_country;
    bool m_address_country_isSet;

    QString* address_line1;
    bool m_address_line1_isSet;

    QString* address_line1_check;
    bool m_address_line1_check_isSet;

    QString* address_line2;
    bool m_address_line2_isSet;

    QString* address_state;
    bool m_address_state_isSet;

    QString* address_zip;
    bool m_address_zip_isSet;

    QString* address_zip_check;
    bool m_address_zip_check_isSet;

    QList<QString*>* available_payout_methods;
    bool m_available_payout_methods_isSet;

    QString* brand;
    bool m_brand_isSet;

    QString* country;
    bool m_country_isSet;

    QString* currency;
    bool m_currency_isSet;

    QString* customer;
    bool m_customer_isSet;

    QString* cvc_check;
    bool m_cvc_check_isSet;

    bool default_for_currency;
    bool m_default_for_currency_isSet;

    QString* description;
    bool m_description_isSet;

    QString* dynamic_last4;
    bool m_dynamic_last4_isSet;

    qint32 exp_month;
    bool m_exp_month_isSet;

    qint32 exp_year;
    bool m_exp_year_isSet;

    QString* fingerprint;
    bool m_fingerprint_isSet;

    QString* funding;
    bool m_funding_isSet;

    QString* id;
    bool m_id_isSet;

    QString* iin;
    bool m_iin_isSet;

    QString* instance_url;
    bool m_instance_url_isSet;

    QString* issuer;
    bool m_issuer_isSet;

    QString* last4;
    bool m_last4_isSet;

    QMap<QString, QString*>* metadata;
    bool m_metadata_isSet;

    QString* name;
    bool m_name_isSet;

    QString* object;
    bool m_object_isSet;

    QString* recipient;
    bool m_recipient_isSet;

    QString* status;
    bool m_status_isSet;

    OAIThreeDSecure* three_d_secure;
    bool m_three_d_secure_isSet;

    QString* tokenization_method;
    bool m_tokenization_method_isSet;

    QString* type;
    bool m_type_isSet;

};

}

#endif /* OAICard_H_ */
