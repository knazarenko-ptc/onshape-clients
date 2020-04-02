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
 * OAIBTTranslateFormatParams.h
 *
 * 
 */

#ifndef OAIBTTranslateFormatParams_H_
#define OAIBTTranslateFormatParams_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTTranslateFormatParams: public OAIObject {
public:
    OAIBTTranslateFormatParams();
    OAIBTTranslateFormatParams(QString json);
    ~OAIBTTranslateFormatParams();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTTranslateFormatParams* fromJson(QString jsonString) override;

    bool isAllowFaultyParts();
    void setAllowFaultyParts(bool allow_faulty_parts);

    double getAngularTolerance();
    void setAngularTolerance(double angular_tolerance);

    QString* getBlobElementId();
    void setBlobElementId(QString* blob_element_id);

    QString* getBlobMicroversionId();
    void setBlobMicroversionId(QString* blob_microversion_id);

    QString* getCloudObjectId();
    void setCloudObjectId(QString* cloud_object_id);

    QString* getCloudStorageAccountId();
    void setCloudStorageAccountId(QString* cloud_storage_account_id);

    QString* getColorMethod();
    void setColorMethod(QString* color_method);

    QString* getConfiguration();
    void setConfiguration(QString* configuration);

    QString* getConnectionId();
    void setConnectionId(QString* connection_id);

    bool isCreateComposite();
    void setCreateComposite(bool create_composite);

    bool isCurrentSheetOnly();
    void setCurrentSheetOnly(bool current_sheet_only);

    QString* getDestinationName();
    void setDestinationName(QString* destination_name);

    double getDistanceTolerance();
    void setDistanceTolerance(double distance_tolerance);

    QString* getElementId();
    void setElementId(QString* element_id);

    bool isEmailLink();
    void setEmailLink(bool email_link);

    QString* getEmailMessage();
    void setEmailMessage(QString* email_message);

    QString* getEmailSubject();
    void setEmailSubject(QString* email_subject);

    QList<QString*>* getEmailTo();
    void setEmailTo(QList<QString*>* email_to);

    bool isExtractAssemblyHierarchy();
    void setExtractAssemblyHierarchy(bool extract_assembly_hierarchy);

    bool isFlatten();
    void setFlatten(bool flatten);

    bool isFlattenAssemblies();
    void setFlattenAssemblies(bool flatten_assemblies);

    QString* getForeignId();
    void setForeignId(QString* foreign_id);

    QString* getFormatName();
    void setFormatName(QString* format_name);

    QString* getFromUserId();
    void setFromUserId(QString* from_user_id);

    bool isGetyAxisIsUp();
    void setGetyAxisIsUp(bool gety_axis_is_up);

    bool isGrouping();
    void setGrouping(bool grouping);

    qint32 getImageHeight();
    void setImageHeight(qint32 image_height);

    qint32 getImageWidth();
    void setImageWidth(qint32 image_width);

    bool isImportInBackground();
    void setImportInBackground(bool import_in_background);

    bool isImportWithinDocument();
    void setImportWithinDocument(bool import_within_document);

    bool isIncludeExportIds();
    void setIncludeExportIds(bool include_export_ids);

    bool isJoinAdjacentSurfaces();
    void setJoinAdjacentSurfaces(bool join_adjacent_surfaces);

    QString* getLinkDocumentId();
    void setLinkDocumentId(QString* link_document_id);

    QString* getLinkDocumentWorkspaceId();
    void setLinkDocumentWorkspaceId(QString* link_document_workspace_id);

    double getMaximumChordLength();
    void setMaximumChordLength(double maximum_chord_length);

    bool isNotifyUser();
    void setNotifyUser(bool notify_user);

    QString* getOriginalForeignId();
    void setOriginalForeignId(QString* original_foreign_id);

    QString* getParentId();
    void setParentId(QString* parent_id);

    QString* getPartIds();
    void setPartIds(QString* part_ids);

    QString* getPassword();
    void setPassword(QString* password);

    bool isPasswordRequired();
    void setPasswordRequired(bool password_required);

    QString* getProcessedForeignId();
    void setProcessedForeignId(QString* processed_foreign_id);

    QString* getProjectId();
    void setProjectId(QString* project_id);

    bool isSelectablePdfText();
    void setSelectablePdfText(bool selectable_pdf_text);

    bool isSendCopyToMe();
    void setSendCopyToMe(bool send_copy_to_me);

    bool isShowOverriddenDimensions();
    void setShowOverriddenDimensions(bool show_overridden_dimensions);

    QString* getSourceName();
    void setSourceName(QString* source_name);

    bool isSpecifyUnits();
    void setSpecifyUnits(bool specify_units);

    bool isSplinesAsPolylines();
    void setSplinesAsPolylines(bool splines_as_polylines);

    bool isSplitAssembliesIntoMultipleDocuments();
    void setSplitAssembliesIntoMultipleDocuments(bool split_assemblies_into_multiple_documents);

    bool isStoreInDocument();
    void setStoreInDocument(bool store_in_document);

    bool isTextAsGeometry();
    void setTextAsGeometry(bool text_as_geometry);

    bool isTriggerAutoDownload();
    void setTriggerAutoDownload(bool trigger_auto_download);

    QString* getUnit();
    void setUnit(QString* unit);

    QString* getUploadId();
    void setUploadId(QString* upload_id);

    qint32 getValidForDays();
    void setValidForDays(qint32 valid_for_days);

    QString* getVersionString();
    void setVersionString(QString* version_string);


    virtual bool isSet() override;

private:
    bool allow_faulty_parts;
    bool m_allow_faulty_parts_isSet;

    double angular_tolerance;
    bool m_angular_tolerance_isSet;

    QString* blob_element_id;
    bool m_blob_element_id_isSet;

    QString* blob_microversion_id;
    bool m_blob_microversion_id_isSet;

    QString* cloud_object_id;
    bool m_cloud_object_id_isSet;

    QString* cloud_storage_account_id;
    bool m_cloud_storage_account_id_isSet;

    QString* color_method;
    bool m_color_method_isSet;

    QString* configuration;
    bool m_configuration_isSet;

    QString* connection_id;
    bool m_connection_id_isSet;

    bool create_composite;
    bool m_create_composite_isSet;

    bool current_sheet_only;
    bool m_current_sheet_only_isSet;

    QString* destination_name;
    bool m_destination_name_isSet;

    double distance_tolerance;
    bool m_distance_tolerance_isSet;

    QString* element_id;
    bool m_element_id_isSet;

    bool email_link;
    bool m_email_link_isSet;

    QString* email_message;
    bool m_email_message_isSet;

    QString* email_subject;
    bool m_email_subject_isSet;

    QList<QString*>* email_to;
    bool m_email_to_isSet;

    bool extract_assembly_hierarchy;
    bool m_extract_assembly_hierarchy_isSet;

    bool flatten;
    bool m_flatten_isSet;

    bool flatten_assemblies;
    bool m_flatten_assemblies_isSet;

    QString* foreign_id;
    bool m_foreign_id_isSet;

    QString* format_name;
    bool m_format_name_isSet;

    QString* from_user_id;
    bool m_from_user_id_isSet;

    bool gety_axis_is_up;
    bool m_gety_axis_is_up_isSet;

    bool grouping;
    bool m_grouping_isSet;

    qint32 image_height;
    bool m_image_height_isSet;

    qint32 image_width;
    bool m_image_width_isSet;

    bool import_in_background;
    bool m_import_in_background_isSet;

    bool import_within_document;
    bool m_import_within_document_isSet;

    bool include_export_ids;
    bool m_include_export_ids_isSet;

    bool join_adjacent_surfaces;
    bool m_join_adjacent_surfaces_isSet;

    QString* link_document_id;
    bool m_link_document_id_isSet;

    QString* link_document_workspace_id;
    bool m_link_document_workspace_id_isSet;

    double maximum_chord_length;
    bool m_maximum_chord_length_isSet;

    bool notify_user;
    bool m_notify_user_isSet;

    QString* original_foreign_id;
    bool m_original_foreign_id_isSet;

    QString* parent_id;
    bool m_parent_id_isSet;

    QString* part_ids;
    bool m_part_ids_isSet;

    QString* password;
    bool m_password_isSet;

    bool password_required;
    bool m_password_required_isSet;

    QString* processed_foreign_id;
    bool m_processed_foreign_id_isSet;

    QString* project_id;
    bool m_project_id_isSet;

    bool selectable_pdf_text;
    bool m_selectable_pdf_text_isSet;

    bool send_copy_to_me;
    bool m_send_copy_to_me_isSet;

    bool show_overridden_dimensions;
    bool m_show_overridden_dimensions_isSet;

    QString* source_name;
    bool m_source_name_isSet;

    bool specify_units;
    bool m_specify_units_isSet;

    bool splines_as_polylines;
    bool m_splines_as_polylines_isSet;

    bool split_assemblies_into_multiple_documents;
    bool m_split_assemblies_into_multiple_documents_isSet;

    bool store_in_document;
    bool m_store_in_document_isSet;

    bool text_as_geometry;
    bool m_text_as_geometry_isSet;

    bool trigger_auto_download;
    bool m_trigger_auto_download_isSet;

    QString* unit;
    bool m_unit_isSet;

    QString* upload_id;
    bool m_upload_id_isSet;

    qint32 valid_for_days;
    bool m_valid_for_days_isSet;

    QString* version_string;
    bool m_version_string_isSet;

};

}

#endif /* OAIBTTranslateFormatParams_H_ */
