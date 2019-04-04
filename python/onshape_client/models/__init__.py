# coding: utf-8

# flake8: noqa
"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    OpenAPI spec version: 1.96
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

# import models into model package
from onshape_client.models.address import Address
from onshape_client.models.api_response import ApiResponse
from onshape_client.models.api_responses import ApiResponses
from onshape_client.models.btapi_application_deprecate_params import BTAPIApplicationDeprecateParams
from onshape_client.models.btapi_application_params import BTAPIApplicationParams
from onshape_client.models.btapi_application_summary_info import BTAPIApplicationSummaryInfo
from onshape_client.models.btapi_developer_params import BTAPIDeveloperParams
from onshape_client.models.btapi_key_params import BTAPIKeyParams
from onshape_client.models.btapi_partner_params import BTAPIPartnerParams
from onshape_client.models.bt_acl_params import BTAclParams
from onshape_client.models.bt_add_friend_params import BTAddFriendParams
from onshape_client.models.bt_address_info import BTAddressInfo
from onshape_client.models.bt_admin_group_params import BTAdminGroupParams
from onshape_client.models.bt_admin_role_params import BTAdminRoleParams
from onshape_client.models.bt_admin_role_permission_params import BTAdminRolePermissionParams
from onshape_client.models.bt_admin_task_params import BTAdminTaskParams
from onshape_client.models.bt_admin_user_role_params import BTAdminUserRoleParams
from onshape_client.models.bt_agreement_params import BTAgreementParams
from onshape_client.models.bt_api_key_update_params import BTApiKeyUpdateParams
from onshape_client.models.bt_app_associative_data_params_array import BTAppAssociativeDataParamsArray
from onshape_client.models.bt_app_element_change_params import BTAppElementChangeParams
from onshape_client.models.bt_app_element_commit_transaction_params import BTAppElementCommitTransactionParams
from onshape_client.models.bt_app_element_content_delta_info import BTAppElementContentDeltaInfo
from onshape_client.models.bt_app_element_content_entry_info import BTAppElementContentEntryInfo
from onshape_client.models.bt_app_element_content_info import BTAppElementContentInfo
from onshape_client.models.bt_app_element_history_entry_info import BTAppElementHistoryEntryInfo
from onshape_client.models.bt_app_element_history_info import BTAppElementHistoryInfo
from onshape_client.models.bt_app_element_modify_info import BTAppElementModifyInfo
from onshape_client.models.bt_app_element_params import BTAppElementParams
from onshape_client.models.bt_app_element_reference_info import BTAppElementReferenceInfo
from onshape_client.models.bt_app_element_reference_params import BTAppElementReferenceParams
from onshape_client.models.bt_app_element_reference_resolve_info import BTAppElementReferenceResolveInfo
from onshape_client.models.bt_app_element_start_transaction_params import BTAppElementStartTransactionParams
from onshape_client.models.bt_app_element_update_params import BTAppElementUpdateParams
from onshape_client.models.bt_app_view_params import BTAppViewParams
from onshape_client.models.bt_application_element_thumbnail_params import BTApplicationElementThumbnailParams
from onshape_client.models.bt_application_element_thumbnail_params_array import BTApplicationElementThumbnailParamsArray
from onshape_client.models.bt_approve_translation_debug_params import BTApproveTranslationDebugParams
from onshape_client.models.bt_assembly_instance_definition_params import BTAssemblyInstanceDefinitionParams
from onshape_client.models.bt_assembly_transform_definition_params import BTAssemblyTransformDefinitionParams
from onshape_client.models.bt_assembly_transformed_instances_definition_params import BTAssemblyTransformedInstancesDefinitionParams
from onshape_client.models.bt_associative_data_params import BTAssociativeDataParams
from onshape_client.models.bt_associative_field_params import BTAssociativeFieldParams
from onshape_client.models.bt_auto_part_numbering_scheme_params import BTAutoPartNumberingSchemeParams
from onshape_client.models.bt_base_info import BTBaseInfo
from onshape_client.models.bt_bel_script_library_version import BTBelScriptLibraryVersion
from onshape_client.models.bt_beta_capability_admin_info import BTBetaCapabilityAdminInfo
from onshape_client.models.bt_beta_capability_import_info import BTBetaCapabilityImportInfo
from onshape_client.models.bt_beta_capability_info import BTBetaCapabilityInfo
from onshape_client.models.bt_beta_capability_metrics_info import BTBetaCapabilityMetricsInfo
from onshape_client.models.bt_beta_capability_params import BTBetaCapabilityParams
from onshape_client.models.bt_beta_capability_summary_info import BTBetaCapabilitySummaryInfo
from onshape_client.models.bt_beta_capability_user_info import BTBetaCapabilityUserInfo
from onshape_client.models.bt_billing_account_params import BTBillingAccountParams
from onshape_client.models.bt_billing_allowed_plans_info import BTBillingAllowedPlansInfo
from onshape_client.models.bt_billing_plan_batch_params import BTBillingPlanBatchParams
from onshape_client.models.bt_billing_plan_info import BTBillingPlanInfo
from onshape_client.models.bt_billing_plan_params import BTBillingPlanParams
from onshape_client.models.bt_billing_plan_summary_info import BTBillingPlanSummaryInfo
from onshape_client.models.bt_bounding_box import BTBoundingBox
from onshape_client.models.bt_bounding_box_params import BTBoundingBoxParams
from onshape_client.models.bt_broken_out_end_condition import BTBrokenOutEndCondition
from onshape_client.models.bt_bulk_document_update_params import BTBulkDocumentUpdateParams
from onshape_client.models.bt_cache_info import BTCacheInfo
from onshape_client.models.bt_campaign_params import BTCampaignParams
from onshape_client.models.bt_capability_check_params import BTCapabilityCheckParams
from onshape_client.models.bt_capability_params import BTCapabilityParams
from onshape_client.models.bt_capability_rule_params import BTCapabilityRuleParams
from onshape_client.models.bt_capable_info import BTCapableInfo
from onshape_client.models.bt_card_info import BTCardInfo
from onshape_client.models.bt_card_params import BTCardParams
from onshape_client.models.bt_change_context_params import BTChangeContextParams
from onshape_client.models.bt_cloud_storage_account_info import BTCloudStorageAccountInfo
from onshape_client.models.bt_cloud_storage_account_list_info import BTCloudStorageAccountListInfo
from onshape_client.models.bt_cloud_storage_account_params import BTCloudStorageAccountParams
from onshape_client.models.bt_cloud_storage_object_info import BTCloudStorageObjectInfo
from onshape_client.models.bt_cloud_storage_object_list_info import BTCloudStorageObjectListInfo
from onshape_client.models.bt_cloud_storage_provider_object_info import BTCloudStorageProviderObjectInfo
from onshape_client.models.bt_color_info import BTColorInfo
from onshape_client.models.bt_color_params import BTColorParams
from onshape_client.models.bt_comment_attachment_info import BTCommentAttachmentInfo
from onshape_client.models.bt_comment_info import BTCommentInfo
from onshape_client.models.bt_comment_notification_params import BTCommentNotificationParams
from onshape_client.models.bt_comment_params import BTCommentParams
from onshape_client.models.bt_comment_subscription_params import BTCommentSubscriptionParams
from onshape_client.models.bt_company_activate_params import BTCompanyActivateParams
from onshape_client.models.bt_company_no_public_document_params import BTCompanyNoPublicDocumentParams
from onshape_client.models.bt_company_params import BTCompanyParams
from onshape_client.models.bt_company_policies_params import BTCompanyPoliciesParams
from onshape_client.models.bt_company_summary_info import BTCompanySummaryInfo
from onshape_client.models.bt_company_transfer_params import BTCompanyTransferParams
from onshape_client.models.bt_company_user_params import BTCompanyUserParams
from onshape_client.models.bt_component_usages_summary import BTComponentUsagesSummary
from onshape_client.models.bt_configuration_id_info import BTConfigurationIdInfo
from onshape_client.models.bt_configuration_info import BTConfigurationInfo
from onshape_client.models.bt_configuration_params import BTConfigurationParams
from onshape_client.models.bt_connection import BTConnection
from onshape_client.models.bt_copy_document_params import BTCopyDocumentParams
from onshape_client.models.bt_copy_element_params import BTCopyElementParams
from onshape_client.models.bt_curve_description import BTCurveDescription
from onshape_client.models.bt_custom_property_definition_info import BTCustomPropertyDefinitionInfo
from onshape_client.models.bt_custom_property_definition_params import BTCustomPropertyDefinitionParams
from onshape_client.models.btdb_viewer_collection_config import BTDBViewerCollectionConfig
from onshape_client.models.btdb_viewer_config import BTDBViewerConfig
from onshape_client.models.btdb_viewer_query_params import BTDBViewerQueryParams
from onshape_client.models.bt_device_info import BTDeviceInfo
from onshape_client.models.bt_device_token_params import BTDeviceTokenParams
from onshape_client.models.bt_diff_info import BTDiffInfo
from onshape_client.models.bt_discount_info import BTDiscountInfo
from onshape_client.models.bt_discount_params import BTDiscountParams
from onshape_client.models.bt_document_check_access_params import BTDocumentCheckAccessParams
from onshape_client.models.bt_document_element_info import BTDocumentElementInfo
from onshape_client.models.bt_document_info import BTDocumentInfo
from onshape_client.models.bt_document_label_info import BTDocumentLabelInfo
from onshape_client.models.bt_document_label_params import BTDocumentLabelParams
from onshape_client.models.bt_document_merge_info import BTDocumentMergeInfo
from onshape_client.models.bt_document_microversion_info import BTDocumentMicroversionInfo
from onshape_client.models.bt_document_migrate_params import BTDocumentMigrateParams
from onshape_client.models.bt_document_options_params import BTDocumentOptionsParams
from onshape_client.models.bt_document_params import BTDocumentParams
from onshape_client.models.bt_document_processing_info import BTDocumentProcessingInfo
from onshape_client.models.bt_document_scope import BTDocumentScope
from onshape_client.models.bt_document_search_hit_info import BTDocumentSearchHitInfo
from onshape_client.models.bt_document_search_params import BTDocumentSearchParams
from onshape_client.models.bt_document_summary_info import BTDocumentSummaryInfo
from onshape_client.models.bt_document_summary_search_info import BTDocumentSummarySearchInfo
from onshape_client.models.bt_document_version_element_ids import BTDocumentVersionElementIds
from onshape_client.models.bt_document_with_version_and_element_id import BTDocumentWithVersionAndElementId
from onshape_client.models.bt_document_with_version_id import BTDocumentWithVersionId
from onshape_client.models.bt_drawing_params import BTDrawingParams
from onshape_client.models.btes_document_hit import BTESDocumentHit
from onshape_client.models.bt_element_location_params import BTElementLocationParams
from onshape_client.models.bt_element_params import BTElementParams
from onshape_client.models.bt_element_properties_params import BTElementPropertiesParams
from onshape_client.models.bt_element_rename_params import BTElementRenameParams
from onshape_client.models.bt_element_thumbnail_data_params import BTElementThumbnailDataParams
from onshape_client.models.bt_enterprise_report_params import BTEnterpriseReportParams
from onshape_client.models.bt_export_model_bodies_response import BTExportModelBodiesResponse
from onshape_client.models.bt_export_model_body import BTExportModelBody
from onshape_client.models.bt_export_model_coedge import BTExportModelCoedge
from onshape_client.models.bt_export_model_edge import BTExportModelEdge
from onshape_client.models.bt_export_model_edge_geometry import BTExportModelEdgeGeometry
from onshape_client.models.bt_export_model_face import BTExportModelFace
from onshape_client.models.bt_export_model_loop import BTExportModelLoop
from onshape_client.models.bt_export_model_params import BTExportModelParams
from onshape_client.models.bt_export_model_vertex import BTExportModelVertex
from onshape_client.models.bt_export_tessellated_edges_body import BTExportTessellatedEdgesBody
from onshape_client.models.bt_export_tessellated_edges_edge import BTExportTessellatedEdgesEdge
from onshape_client.models.bt_export_tessellated_edges_response import BTExportTessellatedEdgesResponse
from onshape_client.models.bt_export_tessellated_faces_body import BTExportTessellatedFacesBody
from onshape_client.models.bt_export_tessellated_faces_face import BTExportTessellatedFacesFace
from onshape_client.models.bt_export_tessellated_faces_facet import BTExportTessellatedFacesFacet
from onshape_client.models.bt_export_tessellated_faces_response import BTExportTessellatedFacesResponse
from onshape_client.models.bt_extend_trial_params import BTExtendTrialParams
from onshape_client.models.bt_external_element_reference_info import BTExternalElementReferenceInfo
from onshape_client.models.btfs_value import BTFSValue
from onshape_client.models.bt_feature_definition_response import BTFeatureDefinitionResponse
from onshape_client.models.bt_feature_list_response import BTFeatureListResponse
from onshape_client.models.bt_feature_script_eval_call import BTFeatureScriptEvalCall
from onshape_client.models.bt_feature_script_eval_response import BTFeatureScriptEvalResponse
from onshape_client.models.bt_feature_state import BTFeatureState
from onshape_client.models.bt_folder_info import BTFolderInfo
from onshape_client.models.bt_folder_params import BTFolderParams
from onshape_client.models.bt_friend_info import BTFriendInfo
from onshape_client.models.bt_friends_from_ids_params import BTFriendsFromIdsParams
from onshape_client.models.bt_global_permission_definitions_info import BTGlobalPermissionDefinitionsInfo
from onshape_client.models.bt_global_permission_info import BTGlobalPermissionInfo
from onshape_client.models.bt_global_permission_params import BTGlobalPermissionParams
from onshape_client.models.bt_global_tree_magic_node_info import BTGlobalTreeMagicNodeInfo
from onshape_client.models.bt_global_tree_node_info import BTGlobalTreeNodeInfo
from onshape_client.models.bt_global_tree_node_info_list_bt_global_tree_node_info import BTGlobalTreeNodeInfoListBTGlobalTreeNodeInfo
from onshape_client.models.bt_global_tree_node_list_response import BTGlobalTreeNodeListResponse
from onshape_client.models.bt_global_tree_node_move_params import BTGlobalTreeNodeMoveParams
from onshape_client.models.bt_global_tree_node_owner_params import BTGlobalTreeNodeOwnerParams
from onshape_client.models.bt_global_tree_node_with_children_info import BTGlobalTreeNodeWithChildrenInfo
from onshape_client.models.bt_graphics_appearance import BTGraphicsAppearance
from onshape_client.models.bt_id_and_configuration import BTIdAndConfiguration
from onshape_client.models.bt_id_translation_info import BTIdTranslationInfo
from onshape_client.models.bt_id_translation_params import BTIdTranslationParams
from onshape_client.models.bt_id_translation_result_info import BTIdTranslationResultInfo
from onshape_client.models.bt_identity import BTIdentity
from onshape_client.models.bt_identity_info import BTIdentityInfo
from onshape_client.models.bt_identity_management_params import BTIdentityManagementParams
from onshape_client.models.bt_identity_params import BTIdentityParams
from onshape_client.models.bt_import_cloud_object_params import BTImportCloudObjectParams
from onshape_client.models.bt_import_foreign_data_params import BTImportForeignDataParams
from onshape_client.models.bt_in_app_message_content import BTInAppMessageContent
from onshape_client.models.bt_in_app_message_content_item import BTInAppMessageContentItem
from onshape_client.models.bt_in_app_message_info import BTInAppMessageInfo
from onshape_client.models.bt_in_app_message_params import BTInAppMessageParams
from onshape_client.models.bt_insertion_location import BTInsertionLocation
from onshape_client.models.bt_invitation_params import BTInvitationParams
from onshape_client.models.bt_item_params import BTItemParams
from onshape_client.models.bt_link_to_latest_document_params import BTLinkToLatestDocumentParams
from onshape_client.models.bt_list_response_bt_beta_capability_summary_info import BTListResponseBTBetaCapabilitySummaryInfo
from onshape_client.models.bt_list_response_bt_beta_capability_user_info import BTListResponseBTBetaCapabilityUserInfo
from onshape_client.models.bt_list_response_bt_cloud_storage_provider_object_info import BTListResponseBTCloudStorageProviderObjectInfo
from onshape_client.models.bt_list_response_bt_friend_info import BTListResponseBTFriendInfo
from onshape_client.models.bt_list_response_bt_in_app_message_info import BTListResponseBTInAppMessageInfo
from onshape_client.models.bt_list_response_bt_purchase_info import BTListResponseBTPurchaseInfo
from onshape_client.models.bt_list_response_bt_standard_content_hierarchy_info import BTListResponseBTStandardContentHierarchyInfo
from onshape_client.models.bt_list_response_bt_system_config_info import BTListResponseBTSystemConfigInfo
from onshape_client.models.bt_location_info import BTLocationInfo
from onshape_client.models.bt_login_params import BTLoginParams
from onshape_client.models.bt_login_totp_params import BTLoginTotpParams
from onshape_client.models.btm_feature import BTMFeature
from onshape_client.models.btm_import import BTMImport
from onshape_client.models.btm_parameter import BTMParameter
from onshape_client.models.btm_suppression_state import BTMSuppressionState
from onshape_client.models.bt_mass_prop_response import BTMassPropResponse
from onshape_client.models.bt_mass_properties import BTMassProperties
from onshape_client.models.bt_matching_standard_content_hierarchy_info import BTMatchingStandardContentHierarchyInfo
from onshape_client.models.bt_material_params import BTMaterialParams
from onshape_client.models.bt_material_property_params import BTMaterialPropertyParams
from onshape_client.models.bt_metadata_enum_value_info import BTMetadataEnumValueInfo
from onshape_client.models.bt_metadata_property_config_params import BTMetadataPropertyConfigParams
from onshape_client.models.bt_metadata_property_info import BTMetadataPropertyInfo
from onshape_client.models.bt_metadata_property_params import BTMetadataPropertyParams
from onshape_client.models.bt_metadata_property_ui_hints_info import BTMetadataPropertyUiHintsInfo
from onshape_client.models.bt_metadata_property_validator_info import BTMetadataPropertyValidatorInfo
from onshape_client.models.bt_metadata_schema_params import BTMetadataSchemaParams
from onshape_client.models.bt_metric_params import BTMetricParams
from onshape_client.models.bt_metrics_list_params import BTMetricsListParams
from onshape_client.models.bt_microversion_id import BTMicroversionId
from onshape_client.models.bt_mobile_notification_params import BTMobileNotificationParams
from onshape_client.models.bt_model_body_params import BTModelBodyParams
from onshape_client.models.bt_model_element_params import BTModelElementParams
from onshape_client.models.bt_model_format_info import BTModelFormatInfo
from onshape_client.models.bt_model_tessellation_params import BTModelTessellationParams
from onshape_client.models.bt_move_element_info import BTMoveElementInfo
from onshape_client.models.bt_move_element_params import BTMoveElementParams
from onshape_client.models.bt_name_value_pair import BTNameValuePair
from onshape_client.models.bt_named_view_info import BTNamedViewInfo
from onshape_client.models.bt_named_views_info import BTNamedViewsInfo
from onshape_client.models.bt_next_part_number_param import BTNextPartNumberParam
from onshape_client.models.bt_next_part_numbers_param import BTNextPartNumbersParam
from onshape_client.models.bt_next_revision_params import BTNextRevisionParams
from onshape_client.models.bt_node_reference import BTNodeReference
from onshape_client.models.bt_node_status import BTNodeStatus
from onshape_client.models.bt_notice import BTNotice
from onshape_client.models.bt_notification_debug_params import BTNotificationDebugParams
from onshape_client.models.bt_notification_params import BTNotificationParams
from onshape_client.models.bt_object_id import BTObjectId
from onshape_client.models.bt_occurrence import BTOccurrence
from onshape_client.models.bt_owner_info import BTOwnerInfo
from onshape_client.models.btpdm_metadata_params import BTPDMMetadataParams
from onshape_client.models.btp_literal_string import BTPLiteralString
from onshape_client.models.btp_module_id import BTPModuleId
from onshape_client.models.btp_node import BTPNode
from onshape_client.models.btp_space import BTPSpace
from onshape_client.models.bt_part_appearance_info import BTPartAppearanceInfo
from onshape_client.models.bt_part_appearance_params import BTPartAppearanceParams
from onshape_client.models.bt_part_id_params import BTPartIdParams
from onshape_client.models.bt_part_material_info import BTPartMaterialInfo
from onshape_client.models.bt_part_material_property_info import BTPartMaterialPropertyInfo
from onshape_client.models.bt_part_metadata_info import BTPartMetadataInfo
from onshape_client.models.bt_part_query_params import BTPartQueryParams
from onshape_client.models.bt_password_reset_params import BTPasswordResetParams
from onshape_client.models.bt_payment_type_params import BTPaymentTypeParams
from onshape_client.models.bt_permission_set import BTPermissionSet
from onshape_client.models.bt_plan_subscriber_info import BTPlanSubscriberInfo
from onshape_client.models.bt_project_info import BTProjectInfo
from onshape_client.models.bt_project_params import BTProjectParams
from onshape_client.models.bt_property_value_param import BTPropertyValueParam
from onshape_client.models.bt_publish_workflow_params import BTPublishWorkflowParams
from onshape_client.models.bt_purchase_info import BTPurchaseInfo
from onshape_client.models.bt_purchase_params import BTPurchaseParams
from onshape_client.models.bt_purchase_user_info import BTPurchaseUserInfo
from onshape_client.models.bt_purchase_user_params import BTPurchaseUserParams
from onshape_client.models.bt_query_revision_params import BTQueryRevisionParams
from onshape_client.models.bt_rbac_permission_scheme_entry_params import BTRbacPermissionSchemeEntryParams
from onshape_client.models.bt_rbac_permission_scheme_info import BTRbacPermissionSchemeInfo
from onshape_client.models.bt_rbac_permission_scheme_list_info import BTRbacPermissionSchemeListInfo
from onshape_client.models.bt_rbac_permission_scheme_params import BTRbacPermissionSchemeParams
from onshape_client.models.bt_rbac_role_info import BTRbacRoleInfo
from onshape_client.models.bt_rbac_role_params import BTRbacRoleParams
from onshape_client.models.bt_release_package_info import BTReleasePackageInfo
from onshape_client.models.bt_release_package_item import BTReleasePackageItem
from onshape_client.models.bt_release_package_item_error import BTReleasePackageItemError
from onshape_client.models.bt_release_package_item_info import BTReleasePackageItemInfo
from onshape_client.models.bt_release_package_item_params import BTReleasePackageItemParams
from onshape_client.models.bt_release_package_params import BTReleasePackageParams
from onshape_client.models.bt_release_package_workflow_change_params import BTReleasePackageWorkflowChangeParams
from onshape_client.models.bt_repair_context_params import BTRepairContextParams
from onshape_client.models.bt_revision_custom_data import BTRevisionCustomData
from onshape_client.models.bt_revision_params import BTRevisionParams
from onshape_client.models.bt_revision_rule_info import BTRevisionRuleInfo
from onshape_client.models.bt_revision_rule_params import BTRevisionRuleParams
from onshape_client.models.bt_root_diff_info import BTRootDiffInfo
from onshape_client.models.bt_seats_params import BTSeatsParams
from onshape_client.models.bt_section_plane_info import BTSectionPlaneInfo
from onshape_client.models.bt_send_grid_delivery_event_params import BTSendGridDeliveryEventParams
from onshape_client.models.bt_setting_info import BTSettingInfo
from onshape_client.models.bt_setting_param import BTSettingParam
from onshape_client.models.bt_shaded_render_document_response import BTShadedRenderDocumentResponse
from onshape_client.models.bt_share_entry_params import BTShareEntryParams
from onshape_client.models.bt_share_params import BTShareParams
from onshape_client.models.bt_simple_info import BTSimpleInfo
from onshape_client.models.bt_standard_content_custom_parameter_definition import BTStandardContentCustomParameterDefinition
from onshape_client.models.bt_standard_content_custom_parameter_definition_id import BTStandardContentCustomParameterDefinitionId
from onshape_client.models.bt_standard_content_custom_parameter_params import BTStandardContentCustomParameterParams
from onshape_client.models.bt_standard_content_find_usage_params import BTStandardContentFindUsageParams
from onshape_client.models.bt_standard_content_hierarchy import BTStandardContentHierarchy
from onshape_client.models.bt_standard_content_hierarchy_info import BTStandardContentHierarchyInfo
from onshape_client.models.bt_standard_content_hierarchy_params import BTStandardContentHierarchyParams
from onshape_client.models.bt_standard_content_hierarchy_rename_params import BTStandardContentHierarchyRenameParams
from onshape_client.models.bt_standard_content_parameter_definition import BTStandardContentParameterDefinition
from onshape_client.models.bt_standard_content_params import BTStandardContentParams
from onshape_client.models.bt_standard_content_set_run_versions_params import BTStandardContentSetRunVersionsParams
from onshape_client.models.bt_standard_content_usage_summary import BTStandardContentUsageSummary
from onshape_client.models.bt_start_edit_in_context_params import BTStartEditInContextParams
from onshape_client.models.bt_substitute_approver_params import BTSubstituteApproverParams
from onshape_client.models.bt_surface_description import BTSurfaceDescription
from onshape_client.models.bt_survey_response_params import BTSurveyResponseParams
from onshape_client.models.bt_system_config_info import BTSystemConfigInfo
from onshape_client.models.bt_tag_params import BTTagParams
from onshape_client.models.bt_team_info import BTTeamInfo
from onshape_client.models.bt_team_member_params import BTTeamMemberParams
from onshape_client.models.bt_team_params import BTTeamParams
from onshape_client.models.bt_team_summary_info import BTTeamSummaryInfo
from onshape_client.models.bt_thumbnail_info import BTThumbnailInfo
from onshape_client.models.bt_thumbnail_size_info import BTThumbnailSizeInfo
from onshape_client.models.bt_tool_tree_params import BTToolTreeParams
from onshape_client.models.bt_tool_tree_update_params import BTToolTreeUpdateParams
from onshape_client.models.bt_trace_params import BTTraceParams
from onshape_client.models.bt_translate_format_params import BTTranslateFormatParams
from onshape_client.models.bt_translate_internal_params import BTTranslateInternalParams
from onshape_client.models.bt_translation_request_info import BTTranslationRequestInfo
from onshape_client.models.bt_unique_document_item_params import BTUniqueDocumentItemParams
from onshape_client.models.bt_update_document_thumbnail_params import BTUpdateDocumentThumbnailParams
from onshape_client.models.bt_update_element_thumbnail_params import BTUpdateElementThumbnailParams
from onshape_client.models.bt_update_external_reference_params import BTUpdateExternalReferenceParams
from onshape_client.models.bt_update_in_context_params import BTUpdateInContextParams
from onshape_client.models.bt_update_rbac_role_params import BTUpdateRbacRoleParams
from onshape_client.models.bt_update_reference_params import BTUpdateReferenceParams
from onshape_client.models.bt_update_release_package_params import BTUpdateReleasePackageParams
from onshape_client.models.bt_update_version_thumbnail_params import BTUpdateVersionThumbnailParams
from onshape_client.models.bt_update_workflowable_test_object_params import BTUpdateWorkflowableTestObjectParams
from onshape_client.models.bt_upgrade_on_demand_params import BTUpgradeOnDemandParams
from onshape_client.models.bt_upload_params import BTUploadParams
from onshape_client.models.bt_upload_state_params import BTUploadStateParams
from onshape_client.models.bt_user_activation_params import BTUserActivationParams
from onshape_client.models.bt_user_agent_version import BTUserAgentVersion
from onshape_client.models.bt_user_app_settings_info import BTUserAppSettingsInfo
from onshape_client.models.bt_user_app_settings_params import BTUserAppSettingsParams
from onshape_client.models.bt_user_basic_summary_info import BTUserBasicSummaryInfo
from onshape_client.models.bt_user_email_params import BTUserEmailParams
from onshape_client.models.bt_user_email_verify_params import BTUserEmailVerifyParams
from onshape_client.models.bt_user_notification_pref_levels_info import BTUserNotificationPrefLevelsInfo
from onshape_client.models.bt_user_notification_pref_params import BTUserNotificationPrefParams
from onshape_client.models.bt_user_params import BTUserParams
from onshape_client.models.bt_user_settings_params import BTUserSettingsParams
from onshape_client.models.bt_user_summary_info import BTUserSummaryInfo
from onshape_client.models.bt_user_totp_params import BTUserTotpParams
from onshape_client.models.bt_user_update_params import BTUserUpdateParams
from onshape_client.models.bt_user_update_specs_params import BTUserUpdateSpecsParams
from onshape_client.models.bt_user_usages_summary import BTUserUsagesSummary
from onshape_client.models.bt_user_web_preferences_params import BTUserWebPreferencesParams
from onshape_client.models.bt_validate_workflow_params import BTValidateWorkflowParams
from onshape_client.models.bt_vector2d import BTVector2d
from onshape_client.models.bt_vector3d import BTVector3d
from onshape_client.models.bt_version_info import BTVersionInfo
from onshape_client.models.bt_version_or_workspace_info import BTVersionOrWorkspaceInfo
from onshape_client.models.bt_version_or_workspace_params import BTVersionOrWorkspaceParams
from onshape_client.models.bt_view_data_info import BTViewDataInfo
from onshape_client.models.bt_view_data_params import BTViewDataParams
from onshape_client.models.bt_web_client_capabilities_params import BTWebClientCapabilitiesParams
from onshape_client.models.bt_web_renderer_performance_measurement_params import BTWebRendererPerformanceMeasurementParams
from onshape_client.models.bt_webhook_options import BTWebhookOptions
from onshape_client.models.bt_webhook_params import BTWebhookParams
from onshape_client.models.bt_workflow_action_info import BTWorkflowActionInfo
from onshape_client.models.bt_workflow_property_info import BTWorkflowPropertyInfo
from onshape_client.models.bt_workflow_snapshot_info import BTWorkflowSnapshotInfo
from onshape_client.models.bt_workflow_state_info import BTWorkflowStateInfo
from onshape_client.models.bt_workflowable_test_object_info import BTWorkflowableTestObjectInfo
from onshape_client.models.bt_workspace_info import BTWorkspaceInfo
from onshape_client.models.bt_workspace_part_params import BTWorkspacePartParams
from onshape_client.models.body_part import BodyPart
from onshape_client.models.body_part_headers import BodyPartHeaders
from onshape_client.models.body_part_media_type import BodyPartMediaType
from onshape_client.models.callback import Callback
from onshape_client.models.card import Card
from onshape_client.models.client_log_entry import ClientLogEntry
from onshape_client.models.cloud_object_path_segment import CloudObjectPathSegment
from onshape_client.models.components import Components
from onshape_client.models.configuration_entry import ConfigurationEntry
from onshape_client.models.configuration_info_entry import ConfigurationInfoEntry
from onshape_client.models.contact import Contact
from onshape_client.models.content import Content
from onshape_client.models.content_disposition import ContentDisposition
from onshape_client.models.content_item import ContentItem
from onshape_client.models.coupon import Coupon
from onshape_client.models.customer import Customer
from onshape_client.models.customer_card_collection import CustomerCardCollection
from onshape_client.models.customer_subscription_collection import CustomerSubscriptionCollection
from onshape_client.models.definition import Definition
from onshape_client.models.discount import Discount
from onshape_client.models.discriminator import Discriminator
from onshape_client.models.encoding import Encoding
from onshape_client.models.entry import Entry
from onshape_client.models.example import Example
from onshape_client.models.external_account import ExternalAccount
from onshape_client.models.external_account_collection import ExternalAccountCollection
from onshape_client.models.external_documentation import ExternalDocumentation
from onshape_client.models.form_data_body_part import FormDataBodyPart
from onshape_client.models.form_data_content_disposition import FormDataContentDisposition
from onshape_client.models.form_data_multi_part import FormDataMultiPart
from onshape_client.models.global_permission_info import GlobalPermissionInfo
from onshape_client.models.header import Header
from onshape_client.models.info import Info
from onshape_client.models.item import Item
from onshape_client.models.json_node import JsonNode
from onshape_client.models.level_info import LevelInfo
from onshape_client.models.license import License
from onshape_client.models.link import Link
from onshape_client.models.media_type import MediaType
from onshape_client.models.message import Message
from onshape_client.models.message_body_workers import MessageBodyWorkers
from onshape_client.models.multi_part import MultiPart
from onshape_client.models.next_charge import NextCharge
from onshape_client.models.next_recurring_charge import NextRecurringCharge
from onshape_client.models.o_auth_flow import OAuthFlow
from onshape_client.models.o_auth_flow_scopes import OAuthFlowScopes
from onshape_client.models.o_auth_flows import OAuthFlows
from onshape_client.models.open_api import OpenAPI
from onshape_client.models.operation import Operation
from onshape_client.models.operation_responses import OperationResponses
from onshape_client.models.parameter import Parameter
from onshape_client.models.parameterized_header import ParameterizedHeader
from onshape_client.models.path_item import PathItem
from onshape_client.models.path_segment import PathSegment
from onshape_client.models.paths import Paths
from onshape_client.models.plan import Plan
from onshape_client.models.prorated_charges import ProratedCharges
from onshape_client.models.request_body import RequestBody
from onshape_client.models.request_options import RequestOptions
from onshape_client.models.role_map_entry import RoleMapEntry
from onshape_client.models.schema import Schema
from onshape_client.models.scopes import Scopes
from onshape_client.models.security_requirement import SecurityRequirement
from onshape_client.models.security_scheme import SecurityScheme
from onshape_client.models.server import Server
from onshape_client.models.server_variable import ServerVariable
from onshape_client.models.server_variables import ServerVariables
from onshape_client.models.shipping_details import ShippingDetails
from onshape_client.models.subscription import Subscription
from onshape_client.models.subscription_item import SubscriptionItem
from onshape_client.models.subscription_item_collection import SubscriptionItemCollection
from onshape_client.models.tag import Tag
from onshape_client.models.three_d_secure import ThreeDSecure
from onshape_client.models.transform_group import TransformGroup
from onshape_client.models.update_params import UpdateParams
from onshape_client.models.version_specs import VersionSpecs
from onshape_client.models.xml import XML
