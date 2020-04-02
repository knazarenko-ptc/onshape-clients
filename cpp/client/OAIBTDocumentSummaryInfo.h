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
 * OAIBTDocumentSummaryInfo.h
 *
 * 
 */

#ifndef OAIBTDocumentSummaryInfo_H_
#define OAIBTDocumentSummaryInfo_H_

#include <QJsonObject>


#include "OAIBTBaseInfo.h"
#include "OAIBTDocumentLabelInfo.h"
#include "OAIBTGlobalTreeNodeInfo.h"
#include "OAIBTOwnerInfo.h"
#include "OAIBTPermissionSet.h"
#include "OAIBTThumbnailInfo.h"
#include "OAIBTUserBasicSummaryInfo.h"
#include "OAIBTWorkspaceInfo.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBTDocumentSummaryInfo: public OAIObject {
public:
    OAIBTDocumentSummaryInfo();
    OAIBTDocumentSummaryInfo(QString json);
    ~OAIBTDocumentSummaryInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBTDocumentSummaryInfo* fromJson(QString jsonString) override;

    bool isCanMove();
    void setCanMove(bool can_move);

    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);

    OAIBTUserBasicSummaryInfo* getCreatedBy();
    void setCreatedBy(OAIBTUserBasicSummaryInfo* created_by);

    QString* getDescription();
    void setDescription(QString* description);

    bool isHasPendingOwner();
    void setHasPendingOwner(bool has_pending_owner);

    QString* getHref();
    void setHref(QString* href);

    QString* getId();
    void setId(QString* id);

    bool isIsContainer();
    void setIsContainer(bool is_container);

    bool isIsEnterpriseOwned();
    void setIsEnterpriseOwned(bool is_enterprise_owned);

    bool isIsMutable();
    void setIsMutable(bool is_mutable);

    QString* getJsonType();
    void setJsonType(QString* json_type);

    QDateTime* getModifiedAt();
    void setModifiedAt(QDateTime* modified_at);

    OAIBTUserBasicSummaryInfo* getModifiedBy();
    void setModifiedBy(OAIBTUserBasicSummaryInfo* modified_by);

    QString* getName();
    void setName(QString* name);

    OAIBTOwnerInfo* getOwner();
    void setOwner(OAIBTOwnerInfo* owner);

    QString* getProjectId();
    void setProjectId(QString* project_id);

    QString* getResourceType();
    void setResourceType(QString* resource_type);

    QString* getTreeHref();
    void setTreeHref(QString* tree_href);

    QString* getViewRef();
    void setViewRef(QString* view_ref);

    QString* getParentId();
    void setParentId(QString* parent_id);

    OAIBTPermissionSet* getPermissionSet();
    void setPermissionSet(OAIBTPermissionSet* permission_set);

    bool isTrash();
    void setTrash(bool trash);

    qint32 getTotalWorkspacesUpdating();
    void setTotalWorkspacesUpdating(qint32 total_workspaces_updating);

    qint32 getTotalWorkspacesScheduledForUpdate();
    void setTotalWorkspacesScheduledForUpdate(qint32 total_workspaces_scheduled_for_update);

    bool isCanUnshare();
    void setCanUnshare(bool can_unshare);

    OAIBTThumbnailInfo* getThumbnail();
    void setThumbnail(OAIBTThumbnailInfo* thumbnail);

    bool isSupportTeamUserAndShared();
    void setSupportTeamUserAndShared(bool support_team_user_and_shared);

    bool isLikedByCurrentUser();
    void setLikedByCurrentUser(bool liked_by_current_user);

    QList<OAIBTDocumentLabelInfo*>* getDocumentLabels();
    void setDocumentLabels(QList<OAIBTDocumentLabelInfo*>* document_labels);

    qint64 getNumberOfTimesReferenced();
    void setNumberOfTimesReferenced(qint64 number_of_times_referenced);

    qint64 getNumberOfTimesCopied();
    void setNumberOfTimesCopied(qint64 number_of_times_copied);

    qint64 getLikes();
    void setLikes(qint64 likes);

    OAIBTBaseInfo* getRecentVersion();
    void setRecentVersion(OAIBTBaseInfo* recent_version);

    bool isHasRelevantInsertables();
    void setHasRelevantInsertables(bool has_relevant_insertables);

    bool isCreatedWithEducationPlan();
    void setCreatedWithEducationPlan(bool created_with_education_plan);

    bool isNotRevisionManaged();
    void setNotRevisionManaged(bool not_revision_managed);

    bool isAnonymousAccessAllowed();
    void setAnonymousAccessAllowed(bool anonymous_access_allowed);

    bool isAnonymousAllowsExport();
    void setAnonymousAllowsExport(bool anonymous_allows_export);

    QString* getDefaultElementId();
    void setDefaultElementId(QString* default_element_id);

    OAIBTWorkspaceInfo* getDefaultWorkspace();
    void setDefaultWorkspace(OAIBTWorkspaceInfo* default_workspace);

    QDateTime* getTrashedAt();
    void setTrashedAt(QDateTime* trashed_at);

    bool isIsOrphaned();
    void setIsOrphaned(bool is_orphaned);

    QList<QString*>* getTags();
    void setTags(QList<QString*>* tags);

    bool isHasReleaseRevisionableObjects();
    void setHasReleaseRevisionableObjects(bool has_release_revisionable_objects);

    bool isPublic();
    void setPublic(bool _public);

    bool isUserAccountLimitsBreached();
    void setUserAccountLimitsBreached(bool user_account_limits_breached);

    bool isIsUsingManagedWorkflow();
    void setIsUsingManagedWorkflow(bool is_using_managed_workflow);

    QString* getPermission();
    void setPermission(QString* permission);


    virtual bool isSet() override;

private:
    bool can_move;
    bool m_can_move_isSet;

    QDateTime* created_at;
    bool m_created_at_isSet;

    OAIBTUserBasicSummaryInfo* created_by;
    bool m_created_by_isSet;

    QString* description;
    bool m_description_isSet;

    bool has_pending_owner;
    bool m_has_pending_owner_isSet;

    QString* href;
    bool m_href_isSet;

    QString* id;
    bool m_id_isSet;

    bool is_container;
    bool m_is_container_isSet;

    bool is_enterprise_owned;
    bool m_is_enterprise_owned_isSet;

    bool is_mutable;
    bool m_is_mutable_isSet;

    QString* json_type;
    bool m_json_type_isSet;

    QDateTime* modified_at;
    bool m_modified_at_isSet;

    OAIBTUserBasicSummaryInfo* modified_by;
    bool m_modified_by_isSet;

    QString* name;
    bool m_name_isSet;

    OAIBTOwnerInfo* owner;
    bool m_owner_isSet;

    QString* project_id;
    bool m_project_id_isSet;

    QString* resource_type;
    bool m_resource_type_isSet;

    QString* tree_href;
    bool m_tree_href_isSet;

    QString* view_ref;
    bool m_view_ref_isSet;

    QString* parent_id;
    bool m_parent_id_isSet;

    OAIBTPermissionSet* permission_set;
    bool m_permission_set_isSet;

    bool trash;
    bool m_trash_isSet;

    qint32 total_workspaces_updating;
    bool m_total_workspaces_updating_isSet;

    qint32 total_workspaces_scheduled_for_update;
    bool m_total_workspaces_scheduled_for_update_isSet;

    bool can_unshare;
    bool m_can_unshare_isSet;

    OAIBTThumbnailInfo* thumbnail;
    bool m_thumbnail_isSet;

    bool support_team_user_and_shared;
    bool m_support_team_user_and_shared_isSet;

    bool liked_by_current_user;
    bool m_liked_by_current_user_isSet;

    QList<OAIBTDocumentLabelInfo*>* document_labels;
    bool m_document_labels_isSet;

    qint64 number_of_times_referenced;
    bool m_number_of_times_referenced_isSet;

    qint64 number_of_times_copied;
    bool m_number_of_times_copied_isSet;

    qint64 likes;
    bool m_likes_isSet;

    OAIBTBaseInfo* recent_version;
    bool m_recent_version_isSet;

    bool has_relevant_insertables;
    bool m_has_relevant_insertables_isSet;

    bool created_with_education_plan;
    bool m_created_with_education_plan_isSet;

    bool not_revision_managed;
    bool m_not_revision_managed_isSet;

    bool anonymous_access_allowed;
    bool m_anonymous_access_allowed_isSet;

    bool anonymous_allows_export;
    bool m_anonymous_allows_export_isSet;

    QString* default_element_id;
    bool m_default_element_id_isSet;

    OAIBTWorkspaceInfo* default_workspace;
    bool m_default_workspace_isSet;

    QDateTime* trashed_at;
    bool m_trashed_at_isSet;

    bool is_orphaned;
    bool m_is_orphaned_isSet;

    QList<QString*>* tags;
    bool m_tags_isSet;

    bool has_release_revisionable_objects;
    bool m_has_release_revisionable_objects_isSet;

    bool _public;
    bool m__public_isSet;

    bool user_account_limits_breached;
    bool m_user_account_limits_breached_isSet;

    bool is_using_managed_workflow;
    bool m_is_using_managed_workflow_isSet;

    QString* permission;
    bool m_permission_isSet;

};

}

#endif /* OAIBTDocumentSummaryInfo_H_ */
