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


#include "OAIBTParameterSpecReferenceCADImport-1792.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTParameterSpecReferenceCADImport-1792::OAIBTParameterSpecReferenceCADImport-1792(QString json) {
    init();
    this->fromJson(json);
}

OAIBTParameterSpecReferenceCADImport-1792::OAIBTParameterSpecReferenceCADImport-1792() {
    init();
}

OAIBTParameterSpecReferenceCADImport-1792::~OAIBTParameterSpecReferenceCADImport-1792() {
    this->cleanup();
}

void
OAIBTParameterSpecReferenceCADImport-1792::init() {
    additional_localized_strings = 0;
    m_additional_localized_strings_isSet = false;
    bt_type = new QString("");
    m_bt_type_isSet = false;
    column_name = new QString("");
    m_column_name_isSet = false;
    default_value = new OAIBTMParameter-1();
    m_default_value_isSet = false;
    icon_uri = new QString("");
    m_icon_uri_isSet = false;
    localizable_name = new QString("");
    m_localizable_name_isSet = false;
    localized_name = new QString("");
    m_localized_name_isSet = false;
    parameter_id = new QString("");
    m_parameter_id_isSet = false;
    parameter_name = new QString("");
    m_parameter_name_isSet = false;
    strings_to_localize = new QList<QString*>();
    m_strings_to_localize_isSet = false;
    ui_hint = new QString("");
    m_ui_hint_isSet = false;
    ui_hints = new QList<Ui_hintsEnum*>();
    m_ui_hints_isSet = false;
    visibility_condition = new OAIBTParameterVisibilityCondition-177();
    m_visibility_condition_isSet = false;
}

void
OAIBTParameterSpecReferenceCADImport-1792::cleanup() {

    if(bt_type != nullptr) { 
        delete bt_type;
    }
    if(column_name != nullptr) { 
        delete column_name;
    }
    if(default_value != nullptr) { 
        delete default_value;
    }
    if(icon_uri != nullptr) { 
        delete icon_uri;
    }
    if(localizable_name != nullptr) { 
        delete localizable_name;
    }
    if(localized_name != nullptr) { 
        delete localized_name;
    }
    if(parameter_id != nullptr) { 
        delete parameter_id;
    }
    if(parameter_name != nullptr) { 
        delete parameter_name;
    }
    if(strings_to_localize != nullptr) { 
        auto arr = strings_to_localize;
        for(auto o: *arr) { 
            delete o;
        }
        delete strings_to_localize;
    }
    if(ui_hint != nullptr) { 
        delete ui_hint;
    }
    if(ui_hints != nullptr) { 
        auto arr = ui_hints;
        for(auto o: *arr) { 
            delete o;
        }
        delete ui_hints;
    }
    if(visibility_condition != nullptr) { 
        delete visibility_condition;
    }
}

OAIBTParameterSpecReferenceCADImport-1792*
OAIBTParameterSpecReferenceCADImport-1792::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTParameterSpecReferenceCADImport-1792::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&additional_localized_strings, pJson["additionalLocalizedStrings"], "qint32", "");
    
    ::OpenAPI::setValue(&bt_type, pJson["btType"], "QString", "QString");
    
    ::OpenAPI::setValue(&column_name, pJson["columnName"], "QString", "QString");
    
    ::OpenAPI::setValue(&default_value, pJson["defaultValue"], "OAIBTMParameter-1", "OAIBTMParameter-1");
    
    ::OpenAPI::setValue(&icon_uri, pJson["iconUri"], "QString", "QString");
    
    ::OpenAPI::setValue(&localizable_name, pJson["localizableName"], "QString", "QString");
    
    ::OpenAPI::setValue(&localized_name, pJson["localizedName"], "QString", "QString");
    
    ::OpenAPI::setValue(&parameter_id, pJson["parameterId"], "QString", "QString");
    
    ::OpenAPI::setValue(&parameter_name, pJson["parameterName"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&strings_to_localize, pJson["stringsToLocalize"], "QList", "QString");
    ::OpenAPI::setValue(&ui_hint, pJson["uiHint"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&ui_hints, pJson["uiHints"], "QList", "QString");
    ::OpenAPI::setValue(&visibility_condition, pJson["visibilityCondition"], "OAIBTParameterVisibilityCondition-177", "OAIBTParameterVisibilityCondition-177");
    
}

QString
OAIBTParameterSpecReferenceCADImport-1792::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTParameterSpecReferenceCADImport-1792::asJsonObject() {
    QJsonObject obj;
    if(m_additional_localized_strings_isSet){
        obj.insert("additionalLocalizedStrings", QJsonValue(additional_localized_strings));
    }
    if(bt_type != nullptr && *bt_type != QString("")){
        toJsonValue(QString("btType"), bt_type, obj, QString("QString"));
    }
    if(column_name != nullptr && *column_name != QString("")){
        toJsonValue(QString("columnName"), column_name, obj, QString("QString"));
    }
    if((default_value != nullptr) && (default_value->isSet())){
        toJsonValue(QString("defaultValue"), default_value, obj, QString("OAIBTMParameter-1"));
    }
    if(icon_uri != nullptr && *icon_uri != QString("")){
        toJsonValue(QString("iconUri"), icon_uri, obj, QString("QString"));
    }
    if(localizable_name != nullptr && *localizable_name != QString("")){
        toJsonValue(QString("localizableName"), localizable_name, obj, QString("QString"));
    }
    if(localized_name != nullptr && *localized_name != QString("")){
        toJsonValue(QString("localizedName"), localized_name, obj, QString("QString"));
    }
    if(parameter_id != nullptr && *parameter_id != QString("")){
        toJsonValue(QString("parameterId"), parameter_id, obj, QString("QString"));
    }
    if(parameter_name != nullptr && *parameter_name != QString("")){
        toJsonValue(QString("parameterName"), parameter_name, obj, QString("QString"));
    }
    if(strings_to_localize->size() > 0){
        toJsonArray((QList<void*>*)strings_to_localize, obj, "stringsToLocalize", "QString");
    }
    if(ui_hint != nullptr && *ui_hint != QString("")){
        toJsonValue(QString("uiHint"), ui_hint, obj, QString("QString"));
    }
    if(ui_hints->size() > 0){
        toJsonArray((QList<void*>*)ui_hints, obj, "uiHints", "QString");
    }
    if((visibility_condition != nullptr) && (visibility_condition->isSet())){
        toJsonValue(QString("visibilityCondition"), visibility_condition, obj, QString("OAIBTParameterVisibilityCondition-177"));
    }

    return obj;
}

qint32
OAIBTParameterSpecReferenceCADImport-1792::getAdditionalLocalizedStrings() {
    return additional_localized_strings;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setAdditionalLocalizedStrings(qint32 additional_localized_strings) {
    this->additional_localized_strings = additional_localized_strings;
    this->m_additional_localized_strings_isSet = true;
}

QString*
OAIBTParameterSpecReferenceCADImport-1792::getBtType() {
    return bt_type;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setBtType(QString* bt_type) {
    this->bt_type = bt_type;
    this->m_bt_type_isSet = true;
}

QString*
OAIBTParameterSpecReferenceCADImport-1792::getColumnName() {
    return column_name;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setColumnName(QString* column_name) {
    this->column_name = column_name;
    this->m_column_name_isSet = true;
}

OAIBTMParameter-1*
OAIBTParameterSpecReferenceCADImport-1792::getDefaultValue() {
    return default_value;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setDefaultValue(OAIBTMParameter-1* default_value) {
    this->default_value = default_value;
    this->m_default_value_isSet = true;
}

QString*
OAIBTParameterSpecReferenceCADImport-1792::getIconUri() {
    return icon_uri;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setIconUri(QString* icon_uri) {
    this->icon_uri = icon_uri;
    this->m_icon_uri_isSet = true;
}

QString*
OAIBTParameterSpecReferenceCADImport-1792::getLocalizableName() {
    return localizable_name;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setLocalizableName(QString* localizable_name) {
    this->localizable_name = localizable_name;
    this->m_localizable_name_isSet = true;
}

QString*
OAIBTParameterSpecReferenceCADImport-1792::getLocalizedName() {
    return localized_name;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setLocalizedName(QString* localized_name) {
    this->localized_name = localized_name;
    this->m_localized_name_isSet = true;
}

QString*
OAIBTParameterSpecReferenceCADImport-1792::getParameterId() {
    return parameter_id;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setParameterId(QString* parameter_id) {
    this->parameter_id = parameter_id;
    this->m_parameter_id_isSet = true;
}

QString*
OAIBTParameterSpecReferenceCADImport-1792::getParameterName() {
    return parameter_name;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setParameterName(QString* parameter_name) {
    this->parameter_name = parameter_name;
    this->m_parameter_name_isSet = true;
}

QList<QString*>*
OAIBTParameterSpecReferenceCADImport-1792::getStringsToLocalize() {
    return strings_to_localize;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setStringsToLocalize(QList<QString*>* strings_to_localize) {
    this->strings_to_localize = strings_to_localize;
    this->m_strings_to_localize_isSet = true;
}

QString*
OAIBTParameterSpecReferenceCADImport-1792::getUiHint() {
    return ui_hint;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setUiHint(QString* ui_hint) {
    this->ui_hint = ui_hint;
    this->m_ui_hint_isSet = true;
}

QList<QString*>*
OAIBTParameterSpecReferenceCADImport-1792::getUiHints() {
    return ui_hints;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setUiHints(QList<QString*>* ui_hints) {
    this->ui_hints = ui_hints;
    this->m_ui_hints_isSet = true;
}

OAIBTParameterVisibilityCondition-177*
OAIBTParameterSpecReferenceCADImport-1792::getVisibilityCondition() {
    return visibility_condition;
}
void
OAIBTParameterSpecReferenceCADImport-1792::setVisibilityCondition(OAIBTParameterVisibilityCondition-177* visibility_condition) {
    this->visibility_condition = visibility_condition;
    this->m_visibility_condition_isSet = true;
}


bool
OAIBTParameterSpecReferenceCADImport-1792::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_additional_localized_strings_isSet){ isObjectUpdated = true; break;}
        if(bt_type != nullptr && *bt_type != QString("")){ isObjectUpdated = true; break;}
        if(column_name != nullptr && *column_name != QString("")){ isObjectUpdated = true; break;}
        if(default_value != nullptr && default_value->isSet()){ isObjectUpdated = true; break;}
        if(icon_uri != nullptr && *icon_uri != QString("")){ isObjectUpdated = true; break;}
        if(localizable_name != nullptr && *localizable_name != QString("")){ isObjectUpdated = true; break;}
        if(localized_name != nullptr && *localized_name != QString("")){ isObjectUpdated = true; break;}
        if(parameter_id != nullptr && *parameter_id != QString("")){ isObjectUpdated = true; break;}
        if(parameter_name != nullptr && *parameter_name != QString("")){ isObjectUpdated = true; break;}
        if(strings_to_localize->size() > 0){ isObjectUpdated = true; break;}
        if(ui_hint != nullptr && *ui_hint != QString("")){ isObjectUpdated = true; break;}
        if(ui_hints->size() > 0){ isObjectUpdated = true; break;}
        if(visibility_condition != nullptr && visibility_condition->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

