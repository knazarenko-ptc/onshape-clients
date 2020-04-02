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
 * OAIBTUserSettingsInfo.h
 *
 * 
 */

#ifndef OAIBTUserSettingsInfo_H_
#define OAIBTUserSettingsInfo_H_

#include <QJsonObject>


#include "OAIBTCommonUnitsInfo.h"
#include "OAIBTDefaultUnitsInfo.h"
#include "OAIBTMaterialLibrarySettingsInfo.h"
#include "OAIBTSubstituteApproverInfo.h"
#include "OAIBTUnitsDisplayPrecision.h"
#include "OAIBTUnitsMaximumDisplayPrecisionInfo.h"
#include "OAIBTViewManipulationMouseKeyMappingInfo.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTUserSettingsInfo: public OAIObject {
public:
    OAIBTUserSettingsInfo();
    OAIBTUserSettingsInfo(QString json);
    ~OAIBTUserSettingsInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTUserSettingsInfo* fromJson(QString jsonString) override;

    OAIBTCommonUnitsInfo* getCommonUnits();
    void setCommonUnits(OAIBTCommonUnitsInfo* common_units);

    QList<QString*>* getCustomColors();
    void setCustomColors(QList<QString*>* custom_colors);

    OAIBTDefaultUnitsInfo* getDefaultUnits();
    void setDefaultUnits(OAIBTDefaultUnitsInfo* default_units);

    qint32 getDrawingBackgroundId();
    void setDrawingBackgroundId(qint32 drawing_background_id);

    bool isEnforceApplicationAcl();
    void setEnforceApplicationAcl(bool enforce_application_acl);

    QString* getExportDrawingOptions();
    void setExportDrawingOptions(QString* export_drawing_options);

    QString* getExportSolidOptions();
    void setExportSolidOptions(QString* export_solid_options);

    QString* getId();
    void setId(QString* id);

    QString* getImportOptions();
    void setImportOptions(QString* import_options);

    QString* getLocale();
    void setLocale(QString* locale);

    OAIBTMaterialLibrarySettingsInfo* getMaterialLibrarySettings();
    void setMaterialLibrarySettings(OAIBTMaterialLibrarySettingsInfo* material_library_settings);

    QString* getMiniToolbarSettings();
    void setMiniToolbarSettings(QString* mini_toolbar_settings);

    QString* getMouseActions();
    void setMouseActions(QString* mouse_actions);

    bool isReverseScrollWheelZoomDirection();
    void setReverseScrollWheelZoomDirection(bool reverse_scroll_wheel_zoom_direction);

    qint32 getStartupPage();
    void setStartupPage(qint32 startup_page);

    QList<OAIBTSubstituteApproverInfo*>* getSubstituteApprovers();
    void setSubstituteApprovers(QList<OAIBTSubstituteApproverInfo*>* substitute_approvers);

    OAIBTUnitsDisplayPrecision* getUnitsDisplayPrecision();
    void setUnitsDisplayPrecision(OAIBTUnitsDisplayPrecision* units_display_precision);

    OAIBTUnitsMaximumDisplayPrecisionInfo* getUnitsMaximumDisplayPrecision();
    void setUnitsMaximumDisplayPrecision(OAIBTUnitsMaximumDisplayPrecisionInfo* units_maximum_display_precision);

    bool isUse24HourTime();
    void setUse24HourTime(bool use24_hour_time);

    OAIBTViewManipulationMouseKeyMappingInfo* getViewManipulationMouseKeyMapping();
    void setViewManipulationMouseKeyMapping(OAIBTViewManipulationMouseKeyMappingInfo* view_manipulation_mouse_key_mapping);

    qint32 getViewMappingId();
    void setViewMappingId(qint32 view_mapping_id);


    virtual bool isSet() override;

private:
    OAIBTCommonUnitsInfo* common_units;
    bool m_common_units_isSet;

    QList<QString*>* custom_colors;
    bool m_custom_colors_isSet;

    OAIBTDefaultUnitsInfo* default_units;
    bool m_default_units_isSet;

    qint32 drawing_background_id;
    bool m_drawing_background_id_isSet;

    bool enforce_application_acl;
    bool m_enforce_application_acl_isSet;

    QString* export_drawing_options;
    bool m_export_drawing_options_isSet;

    QString* export_solid_options;
    bool m_export_solid_options_isSet;

    QString* id;
    bool m_id_isSet;

    QString* import_options;
    bool m_import_options_isSet;

    QString* locale;
    bool m_locale_isSet;

    OAIBTMaterialLibrarySettingsInfo* material_library_settings;
    bool m_material_library_settings_isSet;

    QString* mini_toolbar_settings;
    bool m_mini_toolbar_settings_isSet;

    QString* mouse_actions;
    bool m_mouse_actions_isSet;

    bool reverse_scroll_wheel_zoom_direction;
    bool m_reverse_scroll_wheel_zoom_direction_isSet;

    qint32 startup_page;
    bool m_startup_page_isSet;

    QList<OAIBTSubstituteApproverInfo*>* substitute_approvers;
    bool m_substitute_approvers_isSet;

    OAIBTUnitsDisplayPrecision* units_display_precision;
    bool m_units_display_precision_isSet;

    OAIBTUnitsMaximumDisplayPrecisionInfo* units_maximum_display_precision;
    bool m_units_maximum_display_precision_isSet;

    bool use24_hour_time;
    bool m_use24_hour_time_isSet;

    OAIBTViewManipulationMouseKeyMappingInfo* view_manipulation_mouse_key_mapping;
    bool m_view_manipulation_mouse_key_mapping_isSet;

    qint32 view_mapping_id;
    bool m_view_mapping_id_isSet;

};

}

#endif /* OAIBTUserSettingsInfo_H_ */
