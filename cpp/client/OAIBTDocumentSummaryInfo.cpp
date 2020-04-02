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


#include "OAIBTDocumentSummaryInfo.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBTDocumentSummaryInfo::OAIBTDocumentSummaryInfo(QString json) {
    init();
    this->fromJson(json);
}

OAIBTDocumentSummaryInfo::OAIBTDocumentSummaryInfo() {
    init();
}

OAIBTDocumentSummaryInfo::~OAIBTDocumentSummaryInfo() {
    this->cleanup();
}

void
OAIBTDocumentSummaryInfo::init() {
    can_move = false;
    m_can_move_isSet = false;
    created_at = NULL;
    m_created_at_isSet = false;
    created_by = new OAIBTUserBasicSummaryInfo();
    m_created_by_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    has_pending_owner = false;
    m_has_pending_owner_isSet = false;
    href = new QString("");
    m_href_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    is_container = false;
    m_is_container_isSet = false;
    is_enterprise_owned = false;
    m_is_enterprise_owned_isSet = false;
    is_mutable = false;
    m_is_mutable_isSet = false;
    json_type = new QString("");
    m_json_type_isSet = false;
    modified_at = NULL;
    m_modified_at_isSet = false;
    modified_by = new OAIBTUserBasicSummaryInfo();
    m_modified_by_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    owner = new OAIBTOwnerInfo();
    m_owner_isSet = false;
    project_id = new QString("");
    m_project_id_isSet = false;
    resource_type = new QString("");
    m_resource_type_isSet = false;
    tree_href = new QString("");
    m_tree_href_isSet = false;
    view_ref = new QString("");
    m_view_ref_isSet = false;
    parent_id = new QString("");
    m_parent_id_isSet = false;
    permission_set = new OAIBTPermissionSet();
    m_permission_set_isSet = false;
    trash = false;
    m_trash_isSet = false;
    total_workspaces_updating = 0;
    m_total_workspaces_updating_isSet = false;
    total_workspaces_scheduled_for_update = 0;
    m_total_workspaces_scheduled_for_update_isSet = false;
    can_unshare = false;
    m_can_unshare_isSet = false;
    thumbnail = new OAIBTThumbnailInfo();
    m_thumbnail_isSet = false;
    support_team_user_and_shared = false;
    m_support_team_user_and_shared_isSet = false;
    liked_by_current_user = false;
    m_liked_by_current_user_isSet = false;
    document_labels = new QList<OAIBTDocumentLabelInfo*>();
    m_document_labels_isSet = false;
    number_of_times_referenced = 0L;
    m_number_of_times_referenced_isSet = false;
    number_of_times_copied = 0L;
    m_number_of_times_copied_isSet = false;
    likes = 0L;
    m_likes_isSet = false;
    recent_version = new OAIBTBaseInfo();
    m_recent_version_isSet = false;
    has_relevant_insertables = false;
    m_has_relevant_insertables_isSet = false;
    created_with_education_plan = false;
    m_created_with_education_plan_isSet = false;
    not_revision_managed = false;
    m_not_revision_managed_isSet = false;
    anonymous_access_allowed = false;
    m_anonymous_access_allowed_isSet = false;
    anonymous_allows_export = false;
    m_anonymous_allows_export_isSet = false;
    default_element_id = new QString("");
    m_default_element_id_isSet = false;
    default_workspace = new OAIBTWorkspaceInfo();
    m_default_workspace_isSet = false;
    trashed_at = NULL;
    m_trashed_at_isSet = false;
    is_orphaned = false;
    m_is_orphaned_isSet = false;
    tags = new QList<QString*>();
    m_tags_isSet = false;
    has_release_revisionable_objects = false;
    m_has_release_revisionable_objects_isSet = false;
    _public = false;
    m__public_isSet = false;
    user_account_limits_breached = false;
    m_user_account_limits_breached_isSet = false;
    is_using_managed_workflow = false;
    m_is_using_managed_workflow_isSet = false;
    permission = new QString("");
    m_permission_isSet = false;
}

void
OAIBTDocumentSummaryInfo::cleanup() {

    if(created_at != nullptr) { 
        delete created_at;
    }
    if(created_by != nullptr) { 
        delete created_by;
    }
    if(description != nullptr) { 
        delete description;
    }

    if(href != nullptr) { 
        delete href;
    }
    if(id != nullptr) { 
        delete id;
    }



    if(json_type != nullptr) { 
        delete json_type;
    }
    if(modified_at != nullptr) { 
        delete modified_at;
    }
    if(modified_by != nullptr) { 
        delete modified_by;
    }
    if(name != nullptr) { 
        delete name;
    }
    if(owner != nullptr) { 
        delete owner;
    }
    if(project_id != nullptr) { 
        delete project_id;
    }
    if(resource_type != nullptr) { 
        delete resource_type;
    }
    if(tree_href != nullptr) { 
        delete tree_href;
    }
    if(view_ref != nullptr) { 
        delete view_ref;
    }
    if(parent_id != nullptr) { 
        delete parent_id;
    }
    if(permission_set != nullptr) { 
        delete permission_set;
    }




    if(thumbnail != nullptr) { 
        delete thumbnail;
    }


    if(document_labels != nullptr) { 
        auto arr = document_labels;
        for(auto o: *arr) { 
            delete o;
        }
        delete document_labels;
    }



    if(recent_version != nullptr) { 
        delete recent_version;
    }





    if(default_element_id != nullptr) { 
        delete default_element_id;
    }
    if(default_workspace != nullptr) { 
        delete default_workspace;
    }
    if(trashed_at != nullptr) { 
        delete trashed_at;
    }

    if(tags != nullptr) { 
        auto arr = tags;
        for(auto o: *arr) { 
            delete o;
        }
        delete tags;
    }




    if(permission != nullptr) { 
        delete permission;
    }
}

OAIBTDocumentSummaryInfo*
OAIBTDocumentSummaryInfo::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBTDocumentSummaryInfo::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&can_move, pJson["canMove"], "bool", "");
    
    ::OpenAPI::setValue(&created_at, pJson["createdAt"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&created_by, pJson["createdBy"], "OAIBTUserBasicSummaryInfo", "OAIBTUserBasicSummaryInfo");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    ::OpenAPI::setValue(&has_pending_owner, pJson["hasPendingOwner"], "bool", "");
    
    ::OpenAPI::setValue(&href, pJson["href"], "QString", "QString");
    
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&is_container, pJson["isContainer"], "bool", "");
    
    ::OpenAPI::setValue(&is_enterprise_owned, pJson["isEnterpriseOwned"], "bool", "");
    
    ::OpenAPI::setValue(&is_mutable, pJson["isMutable"], "bool", "");
    
    ::OpenAPI::setValue(&json_type, pJson["jsonType"], "QString", "QString");
    
    ::OpenAPI::setValue(&modified_at, pJson["modifiedAt"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&modified_by, pJson["modifiedBy"], "OAIBTUserBasicSummaryInfo", "OAIBTUserBasicSummaryInfo");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&owner, pJson["owner"], "OAIBTOwnerInfo", "OAIBTOwnerInfo");
    
    ::OpenAPI::setValue(&project_id, pJson["projectId"], "QString", "QString");
    
    ::OpenAPI::setValue(&resource_type, pJson["resourceType"], "QString", "QString");
    
    ::OpenAPI::setValue(&tree_href, pJson["treeHref"], "QString", "QString");
    
    ::OpenAPI::setValue(&view_ref, pJson["viewRef"], "QString", "QString");
    
    ::OpenAPI::setValue(&parent_id, pJson["parentId"], "QString", "QString");
    
    ::OpenAPI::setValue(&permission_set, pJson["permissionSet"], "OAIBTPermissionSet", "OAIBTPermissionSet");
    
    ::OpenAPI::setValue(&trash, pJson["trash"], "bool", "");
    
    ::OpenAPI::setValue(&total_workspaces_updating, pJson["totalWorkspacesUpdating"], "qint32", "");
    
    ::OpenAPI::setValue(&total_workspaces_scheduled_for_update, pJson["totalWorkspacesScheduledForUpdate"], "qint32", "");
    
    ::OpenAPI::setValue(&can_unshare, pJson["canUnshare"], "bool", "");
    
    ::OpenAPI::setValue(&thumbnail, pJson["thumbnail"], "OAIBTThumbnailInfo", "OAIBTThumbnailInfo");
    
    ::OpenAPI::setValue(&support_team_user_and_shared, pJson["supportTeamUserAndShared"], "bool", "");
    
    ::OpenAPI::setValue(&liked_by_current_user, pJson["likedByCurrentUser"], "bool", "");
    
    
    ::OpenAPI::setValue(&document_labels, pJson["documentLabels"], "QList", "OAIBTDocumentLabelInfo");
    ::OpenAPI::setValue(&number_of_times_referenced, pJson["numberOfTimesReferenced"], "qint64", "");
    
    ::OpenAPI::setValue(&number_of_times_copied, pJson["numberOfTimesCopied"], "qint64", "");
    
    ::OpenAPI::setValue(&likes, pJson["likes"], "qint64", "");
    
    ::OpenAPI::setValue(&recent_version, pJson["recentVersion"], "OAIBTBaseInfo", "OAIBTBaseInfo");
    
    ::OpenAPI::setValue(&has_relevant_insertables, pJson["hasRelevantInsertables"], "bool", "");
    
    ::OpenAPI::setValue(&created_with_education_plan, pJson["createdWithEducationPlan"], "bool", "");
    
    ::OpenAPI::setValue(&not_revision_managed, pJson["notRevisionManaged"], "bool", "");
    
    ::OpenAPI::setValue(&anonymous_access_allowed, pJson["anonymousAccessAllowed"], "bool", "");
    
    ::OpenAPI::setValue(&anonymous_allows_export, pJson["anonymousAllowsExport"], "bool", "");
    
    ::OpenAPI::setValue(&default_element_id, pJson["defaultElementId"], "QString", "QString");
    
    ::OpenAPI::setValue(&default_workspace, pJson["defaultWorkspace"], "OAIBTWorkspaceInfo", "OAIBTWorkspaceInfo");
    
    ::OpenAPI::setValue(&trashed_at, pJson["trashedAt"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&is_orphaned, pJson["isOrphaned"], "bool", "");
    
    
    ::OpenAPI::setValue(&tags, pJson["tags"], "QList", "QString");
    ::OpenAPI::setValue(&has_release_revisionable_objects, pJson["hasReleaseRevisionableObjects"], "bool", "");
    
    ::OpenAPI::setValue(&_public, pJson["public"], "bool", "");
    
    ::OpenAPI::setValue(&user_account_limits_breached, pJson["userAccountLimitsBreached"], "bool", "");
    
    ::OpenAPI::setValue(&is_using_managed_workflow, pJson["isUsingManagedWorkflow"], "bool", "");
    
    ::OpenAPI::setValue(&permission, pJson["permission"], "QString", "QString");
    
}

QString
OAIBTDocumentSummaryInfo::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBTDocumentSummaryInfo::asJsonObject() {
    QJsonObject obj;
    if(m_can_move_isSet){
        obj.insert("canMove", QJsonValue(can_move));
    }
    if(created_at != nullptr) { 
        toJsonValue(QString("createdAt"), created_at, obj, QString("QDateTime"));
    }
    if((created_by != nullptr) && (created_by->isSet())){
        toJsonValue(QString("createdBy"), created_by, obj, QString("OAIBTUserBasicSummaryInfo"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if(m_has_pending_owner_isSet){
        obj.insert("hasPendingOwner", QJsonValue(has_pending_owner));
    }
    if(href != nullptr && *href != QString("")){
        toJsonValue(QString("href"), href, obj, QString("QString"));
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(m_is_container_isSet){
        obj.insert("isContainer", QJsonValue(is_container));
    }
    if(m_is_enterprise_owned_isSet){
        obj.insert("isEnterpriseOwned", QJsonValue(is_enterprise_owned));
    }
    if(m_is_mutable_isSet){
        obj.insert("isMutable", QJsonValue(is_mutable));
    }
    if(json_type != nullptr && *json_type != QString("")){
        toJsonValue(QString("jsonType"), json_type, obj, QString("QString"));
    }
    if(modified_at != nullptr) { 
        toJsonValue(QString("modifiedAt"), modified_at, obj, QString("QDateTime"));
    }
    if((modified_by != nullptr) && (modified_by->isSet())){
        toJsonValue(QString("modifiedBy"), modified_by, obj, QString("OAIBTUserBasicSummaryInfo"));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if((owner != nullptr) && (owner->isSet())){
        toJsonValue(QString("owner"), owner, obj, QString("OAIBTOwnerInfo"));
    }
    if(project_id != nullptr && *project_id != QString("")){
        toJsonValue(QString("projectId"), project_id, obj, QString("QString"));
    }
    if(resource_type != nullptr && *resource_type != QString("")){
        toJsonValue(QString("resourceType"), resource_type, obj, QString("QString"));
    }
    if(tree_href != nullptr && *tree_href != QString("")){
        toJsonValue(QString("treeHref"), tree_href, obj, QString("QString"));
    }
    if(view_ref != nullptr && *view_ref != QString("")){
        toJsonValue(QString("viewRef"), view_ref, obj, QString("QString"));
    }
    if(parent_id != nullptr && *parent_id != QString("")){
        toJsonValue(QString("parentId"), parent_id, obj, QString("QString"));
    }
    if((permission_set != nullptr) && (permission_set->isSet())){
        toJsonValue(QString("permissionSet"), permission_set, obj, QString("OAIBTPermissionSet"));
    }
    if(m_trash_isSet){
        obj.insert("trash", QJsonValue(trash));
    }
    if(m_total_workspaces_updating_isSet){
        obj.insert("totalWorkspacesUpdating", QJsonValue(total_workspaces_updating));
    }
    if(m_total_workspaces_scheduled_for_update_isSet){
        obj.insert("totalWorkspacesScheduledForUpdate", QJsonValue(total_workspaces_scheduled_for_update));
    }
    if(m_can_unshare_isSet){
        obj.insert("canUnshare", QJsonValue(can_unshare));
    }
    if((thumbnail != nullptr) && (thumbnail->isSet())){
        toJsonValue(QString("thumbnail"), thumbnail, obj, QString("OAIBTThumbnailInfo"));
    }
    if(m_support_team_user_and_shared_isSet){
        obj.insert("supportTeamUserAndShared", QJsonValue(support_team_user_and_shared));
    }
    if(m_liked_by_current_user_isSet){
        obj.insert("likedByCurrentUser", QJsonValue(liked_by_current_user));
    }
    if(document_labels->size() > 0){
        toJsonArray((QList<void*>*)document_labels, obj, "documentLabels", "OAIBTDocumentLabelInfo");
    }
    if(m_number_of_times_referenced_isSet){
        obj.insert("numberOfTimesReferenced", QJsonValue(number_of_times_referenced));
    }
    if(m_number_of_times_copied_isSet){
        obj.insert("numberOfTimesCopied", QJsonValue(number_of_times_copied));
    }
    if(m_likes_isSet){
        obj.insert("likes", QJsonValue(likes));
    }
    if((recent_version != nullptr) && (recent_version->isSet())){
        toJsonValue(QString("recentVersion"), recent_version, obj, QString("OAIBTBaseInfo"));
    }
    if(m_has_relevant_insertables_isSet){
        obj.insert("hasRelevantInsertables", QJsonValue(has_relevant_insertables));
    }
    if(m_created_with_education_plan_isSet){
        obj.insert("createdWithEducationPlan", QJsonValue(created_with_education_plan));
    }
    if(m_not_revision_managed_isSet){
        obj.insert("notRevisionManaged", QJsonValue(not_revision_managed));
    }
    if(m_anonymous_access_allowed_isSet){
        obj.insert("anonymousAccessAllowed", QJsonValue(anonymous_access_allowed));
    }
    if(m_anonymous_allows_export_isSet){
        obj.insert("anonymousAllowsExport", QJsonValue(anonymous_allows_export));
    }
    if(default_element_id != nullptr && *default_element_id != QString("")){
        toJsonValue(QString("defaultElementId"), default_element_id, obj, QString("QString"));
    }
    if((default_workspace != nullptr) && (default_workspace->isSet())){
        toJsonValue(QString("defaultWorkspace"), default_workspace, obj, QString("OAIBTWorkspaceInfo"));
    }
    if(trashed_at != nullptr) { 
        toJsonValue(QString("trashedAt"), trashed_at, obj, QString("QDateTime"));
    }
    if(m_is_orphaned_isSet){
        obj.insert("isOrphaned", QJsonValue(is_orphaned));
    }
    if(tags->size() > 0){
        toJsonArray((QList<void*>*)tags, obj, "tags", "QString");
    }
    if(m_has_release_revisionable_objects_isSet){
        obj.insert("hasReleaseRevisionableObjects", QJsonValue(has_release_revisionable_objects));
    }
    if(m__public_isSet){
        obj.insert("public", QJsonValue(_public));
    }
    if(m_user_account_limits_breached_isSet){
        obj.insert("userAccountLimitsBreached", QJsonValue(user_account_limits_breached));
    }
    if(m_is_using_managed_workflow_isSet){
        obj.insert("isUsingManagedWorkflow", QJsonValue(is_using_managed_workflow));
    }
    if(permission != nullptr && *permission != QString("")){
        toJsonValue(QString("permission"), permission, obj, QString("QString"));
    }

    return obj;
}

bool
OAIBTDocumentSummaryInfo::isCanMove() {
    return can_move;
}
void
OAIBTDocumentSummaryInfo::setCanMove(bool can_move) {
    this->can_move = can_move;
    this->m_can_move_isSet = true;
}

QDateTime*
OAIBTDocumentSummaryInfo::getCreatedAt() {
    return created_at;
}
void
OAIBTDocumentSummaryInfo::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
    this->m_created_at_isSet = true;
}

OAIBTUserBasicSummaryInfo*
OAIBTDocumentSummaryInfo::getCreatedBy() {
    return created_by;
}
void
OAIBTDocumentSummaryInfo::setCreatedBy(OAIBTUserBasicSummaryInfo* created_by) {
    this->created_by = created_by;
    this->m_created_by_isSet = true;
}

QString*
OAIBTDocumentSummaryInfo::getDescription() {
    return description;
}
void
OAIBTDocumentSummaryInfo::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isHasPendingOwner() {
    return has_pending_owner;
}
void
OAIBTDocumentSummaryInfo::setHasPendingOwner(bool has_pending_owner) {
    this->has_pending_owner = has_pending_owner;
    this->m_has_pending_owner_isSet = true;
}

QString*
OAIBTDocumentSummaryInfo::getHref() {
    return href;
}
void
OAIBTDocumentSummaryInfo::setHref(QString* href) {
    this->href = href;
    this->m_href_isSet = true;
}

QString*
OAIBTDocumentSummaryInfo::getId() {
    return id;
}
void
OAIBTDocumentSummaryInfo::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isIsContainer() {
    return is_container;
}
void
OAIBTDocumentSummaryInfo::setIsContainer(bool is_container) {
    this->is_container = is_container;
    this->m_is_container_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isIsEnterpriseOwned() {
    return is_enterprise_owned;
}
void
OAIBTDocumentSummaryInfo::setIsEnterpriseOwned(bool is_enterprise_owned) {
    this->is_enterprise_owned = is_enterprise_owned;
    this->m_is_enterprise_owned_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isIsMutable() {
    return is_mutable;
}
void
OAIBTDocumentSummaryInfo::setIsMutable(bool is_mutable) {
    this->is_mutable = is_mutable;
    this->m_is_mutable_isSet = true;
}

QString*
OAIBTDocumentSummaryInfo::getJsonType() {
    return json_type;
}
void
OAIBTDocumentSummaryInfo::setJsonType(QString* json_type) {
    this->json_type = json_type;
    this->m_json_type_isSet = true;
}

QDateTime*
OAIBTDocumentSummaryInfo::getModifiedAt() {
    return modified_at;
}
void
OAIBTDocumentSummaryInfo::setModifiedAt(QDateTime* modified_at) {
    this->modified_at = modified_at;
    this->m_modified_at_isSet = true;
}

OAIBTUserBasicSummaryInfo*
OAIBTDocumentSummaryInfo::getModifiedBy() {
    return modified_by;
}
void
OAIBTDocumentSummaryInfo::setModifiedBy(OAIBTUserBasicSummaryInfo* modified_by) {
    this->modified_by = modified_by;
    this->m_modified_by_isSet = true;
}

QString*
OAIBTDocumentSummaryInfo::getName() {
    return name;
}
void
OAIBTDocumentSummaryInfo::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIBTOwnerInfo*
OAIBTDocumentSummaryInfo::getOwner() {
    return owner;
}
void
OAIBTDocumentSummaryInfo::setOwner(OAIBTOwnerInfo* owner) {
    this->owner = owner;
    this->m_owner_isSet = true;
}

QString*
OAIBTDocumentSummaryInfo::getProjectId() {
    return project_id;
}
void
OAIBTDocumentSummaryInfo::setProjectId(QString* project_id) {
    this->project_id = project_id;
    this->m_project_id_isSet = true;
}

QString*
OAIBTDocumentSummaryInfo::getResourceType() {
    return resource_type;
}
void
OAIBTDocumentSummaryInfo::setResourceType(QString* resource_type) {
    this->resource_type = resource_type;
    this->m_resource_type_isSet = true;
}

QString*
OAIBTDocumentSummaryInfo::getTreeHref() {
    return tree_href;
}
void
OAIBTDocumentSummaryInfo::setTreeHref(QString* tree_href) {
    this->tree_href = tree_href;
    this->m_tree_href_isSet = true;
}

QString*
OAIBTDocumentSummaryInfo::getViewRef() {
    return view_ref;
}
void
OAIBTDocumentSummaryInfo::setViewRef(QString* view_ref) {
    this->view_ref = view_ref;
    this->m_view_ref_isSet = true;
}

QString*
OAIBTDocumentSummaryInfo::getParentId() {
    return parent_id;
}
void
OAIBTDocumentSummaryInfo::setParentId(QString* parent_id) {
    this->parent_id = parent_id;
    this->m_parent_id_isSet = true;
}

OAIBTPermissionSet*
OAIBTDocumentSummaryInfo::getPermissionSet() {
    return permission_set;
}
void
OAIBTDocumentSummaryInfo::setPermissionSet(OAIBTPermissionSet* permission_set) {
    this->permission_set = permission_set;
    this->m_permission_set_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isTrash() {
    return trash;
}
void
OAIBTDocumentSummaryInfo::setTrash(bool trash) {
    this->trash = trash;
    this->m_trash_isSet = true;
}

qint32
OAIBTDocumentSummaryInfo::getTotalWorkspacesUpdating() {
    return total_workspaces_updating;
}
void
OAIBTDocumentSummaryInfo::setTotalWorkspacesUpdating(qint32 total_workspaces_updating) {
    this->total_workspaces_updating = total_workspaces_updating;
    this->m_total_workspaces_updating_isSet = true;
}

qint32
OAIBTDocumentSummaryInfo::getTotalWorkspacesScheduledForUpdate() {
    return total_workspaces_scheduled_for_update;
}
void
OAIBTDocumentSummaryInfo::setTotalWorkspacesScheduledForUpdate(qint32 total_workspaces_scheduled_for_update) {
    this->total_workspaces_scheduled_for_update = total_workspaces_scheduled_for_update;
    this->m_total_workspaces_scheduled_for_update_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isCanUnshare() {
    return can_unshare;
}
void
OAIBTDocumentSummaryInfo::setCanUnshare(bool can_unshare) {
    this->can_unshare = can_unshare;
    this->m_can_unshare_isSet = true;
}

OAIBTThumbnailInfo*
OAIBTDocumentSummaryInfo::getThumbnail() {
    return thumbnail;
}
void
OAIBTDocumentSummaryInfo::setThumbnail(OAIBTThumbnailInfo* thumbnail) {
    this->thumbnail = thumbnail;
    this->m_thumbnail_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isSupportTeamUserAndShared() {
    return support_team_user_and_shared;
}
void
OAIBTDocumentSummaryInfo::setSupportTeamUserAndShared(bool support_team_user_and_shared) {
    this->support_team_user_and_shared = support_team_user_and_shared;
    this->m_support_team_user_and_shared_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isLikedByCurrentUser() {
    return liked_by_current_user;
}
void
OAIBTDocumentSummaryInfo::setLikedByCurrentUser(bool liked_by_current_user) {
    this->liked_by_current_user = liked_by_current_user;
    this->m_liked_by_current_user_isSet = true;
}

QList<OAIBTDocumentLabelInfo*>*
OAIBTDocumentSummaryInfo::getDocumentLabels() {
    return document_labels;
}
void
OAIBTDocumentSummaryInfo::setDocumentLabels(QList<OAIBTDocumentLabelInfo*>* document_labels) {
    this->document_labels = document_labels;
    this->m_document_labels_isSet = true;
}

qint64
OAIBTDocumentSummaryInfo::getNumberOfTimesReferenced() {
    return number_of_times_referenced;
}
void
OAIBTDocumentSummaryInfo::setNumberOfTimesReferenced(qint64 number_of_times_referenced) {
    this->number_of_times_referenced = number_of_times_referenced;
    this->m_number_of_times_referenced_isSet = true;
}

qint64
OAIBTDocumentSummaryInfo::getNumberOfTimesCopied() {
    return number_of_times_copied;
}
void
OAIBTDocumentSummaryInfo::setNumberOfTimesCopied(qint64 number_of_times_copied) {
    this->number_of_times_copied = number_of_times_copied;
    this->m_number_of_times_copied_isSet = true;
}

qint64
OAIBTDocumentSummaryInfo::getLikes() {
    return likes;
}
void
OAIBTDocumentSummaryInfo::setLikes(qint64 likes) {
    this->likes = likes;
    this->m_likes_isSet = true;
}

OAIBTBaseInfo*
OAIBTDocumentSummaryInfo::getRecentVersion() {
    return recent_version;
}
void
OAIBTDocumentSummaryInfo::setRecentVersion(OAIBTBaseInfo* recent_version) {
    this->recent_version = recent_version;
    this->m_recent_version_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isHasRelevantInsertables() {
    return has_relevant_insertables;
}
void
OAIBTDocumentSummaryInfo::setHasRelevantInsertables(bool has_relevant_insertables) {
    this->has_relevant_insertables = has_relevant_insertables;
    this->m_has_relevant_insertables_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isCreatedWithEducationPlan() {
    return created_with_education_plan;
}
void
OAIBTDocumentSummaryInfo::setCreatedWithEducationPlan(bool created_with_education_plan) {
    this->created_with_education_plan = created_with_education_plan;
    this->m_created_with_education_plan_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isNotRevisionManaged() {
    return not_revision_managed;
}
void
OAIBTDocumentSummaryInfo::setNotRevisionManaged(bool not_revision_managed) {
    this->not_revision_managed = not_revision_managed;
    this->m_not_revision_managed_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isAnonymousAccessAllowed() {
    return anonymous_access_allowed;
}
void
OAIBTDocumentSummaryInfo::setAnonymousAccessAllowed(bool anonymous_access_allowed) {
    this->anonymous_access_allowed = anonymous_access_allowed;
    this->m_anonymous_access_allowed_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isAnonymousAllowsExport() {
    return anonymous_allows_export;
}
void
OAIBTDocumentSummaryInfo::setAnonymousAllowsExport(bool anonymous_allows_export) {
    this->anonymous_allows_export = anonymous_allows_export;
    this->m_anonymous_allows_export_isSet = true;
}

QString*
OAIBTDocumentSummaryInfo::getDefaultElementId() {
    return default_element_id;
}
void
OAIBTDocumentSummaryInfo::setDefaultElementId(QString* default_element_id) {
    this->default_element_id = default_element_id;
    this->m_default_element_id_isSet = true;
}

OAIBTWorkspaceInfo*
OAIBTDocumentSummaryInfo::getDefaultWorkspace() {
    return default_workspace;
}
void
OAIBTDocumentSummaryInfo::setDefaultWorkspace(OAIBTWorkspaceInfo* default_workspace) {
    this->default_workspace = default_workspace;
    this->m_default_workspace_isSet = true;
}

QDateTime*
OAIBTDocumentSummaryInfo::getTrashedAt() {
    return trashed_at;
}
void
OAIBTDocumentSummaryInfo::setTrashedAt(QDateTime* trashed_at) {
    this->trashed_at = trashed_at;
    this->m_trashed_at_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isIsOrphaned() {
    return is_orphaned;
}
void
OAIBTDocumentSummaryInfo::setIsOrphaned(bool is_orphaned) {
    this->is_orphaned = is_orphaned;
    this->m_is_orphaned_isSet = true;
}

QList<QString*>*
OAIBTDocumentSummaryInfo::getTags() {
    return tags;
}
void
OAIBTDocumentSummaryInfo::setTags(QList<QString*>* tags) {
    this->tags = tags;
    this->m_tags_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isHasReleaseRevisionableObjects() {
    return has_release_revisionable_objects;
}
void
OAIBTDocumentSummaryInfo::setHasReleaseRevisionableObjects(bool has_release_revisionable_objects) {
    this->has_release_revisionable_objects = has_release_revisionable_objects;
    this->m_has_release_revisionable_objects_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isPublic() {
    return _public;
}
void
OAIBTDocumentSummaryInfo::setPublic(bool _public) {
    this->_public = _public;
    this->m__public_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isUserAccountLimitsBreached() {
    return user_account_limits_breached;
}
void
OAIBTDocumentSummaryInfo::setUserAccountLimitsBreached(bool user_account_limits_breached) {
    this->user_account_limits_breached = user_account_limits_breached;
    this->m_user_account_limits_breached_isSet = true;
}

bool
OAIBTDocumentSummaryInfo::isIsUsingManagedWorkflow() {
    return is_using_managed_workflow;
}
void
OAIBTDocumentSummaryInfo::setIsUsingManagedWorkflow(bool is_using_managed_workflow) {
    this->is_using_managed_workflow = is_using_managed_workflow;
    this->m_is_using_managed_workflow_isSet = true;
}

QString*
OAIBTDocumentSummaryInfo::getPermission() {
    return permission;
}
void
OAIBTDocumentSummaryInfo::setPermission(QString* permission) {
    this->permission = permission;
    this->m_permission_isSet = true;
}


bool
OAIBTDocumentSummaryInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_can_move_isSet){ isObjectUpdated = true; break;}
        if(created_by != nullptr && created_by->isSet()){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(m_has_pending_owner_isSet){ isObjectUpdated = true; break;}
        if(href != nullptr && *href != QString("")){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(m_is_container_isSet){ isObjectUpdated = true; break;}
        if(m_is_enterprise_owned_isSet){ isObjectUpdated = true; break;}
        if(m_is_mutable_isSet){ isObjectUpdated = true; break;}
        if(json_type != nullptr && *json_type != QString("")){ isObjectUpdated = true; break;}
        if(modified_by != nullptr && modified_by->isSet()){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(owner != nullptr && owner->isSet()){ isObjectUpdated = true; break;}
        if(project_id != nullptr && *project_id != QString("")){ isObjectUpdated = true; break;}
        if(resource_type != nullptr && *resource_type != QString("")){ isObjectUpdated = true; break;}
        if(tree_href != nullptr && *tree_href != QString("")){ isObjectUpdated = true; break;}
        if(view_ref != nullptr && *view_ref != QString("")){ isObjectUpdated = true; break;}
        if(parent_id != nullptr && *parent_id != QString("")){ isObjectUpdated = true; break;}
        if(permission_set != nullptr && permission_set->isSet()){ isObjectUpdated = true; break;}
        if(m_trash_isSet){ isObjectUpdated = true; break;}
        if(m_total_workspaces_updating_isSet){ isObjectUpdated = true; break;}
        if(m_total_workspaces_scheduled_for_update_isSet){ isObjectUpdated = true; break;}
        if(m_can_unshare_isSet){ isObjectUpdated = true; break;}
        if(thumbnail != nullptr && thumbnail->isSet()){ isObjectUpdated = true; break;}
        if(m_support_team_user_and_shared_isSet){ isObjectUpdated = true; break;}
        if(m_liked_by_current_user_isSet){ isObjectUpdated = true; break;}
        if(document_labels->size() > 0){ isObjectUpdated = true; break;}
        if(m_number_of_times_referenced_isSet){ isObjectUpdated = true; break;}
        if(m_number_of_times_copied_isSet){ isObjectUpdated = true; break;}
        if(m_likes_isSet){ isObjectUpdated = true; break;}
        if(recent_version != nullptr && recent_version->isSet()){ isObjectUpdated = true; break;}
        if(m_has_relevant_insertables_isSet){ isObjectUpdated = true; break;}
        if(m_created_with_education_plan_isSet){ isObjectUpdated = true; break;}
        if(m_not_revision_managed_isSet){ isObjectUpdated = true; break;}
        if(m_anonymous_access_allowed_isSet){ isObjectUpdated = true; break;}
        if(m_anonymous_allows_export_isSet){ isObjectUpdated = true; break;}
        if(default_element_id != nullptr && *default_element_id != QString("")){ isObjectUpdated = true; break;}
        if(default_workspace != nullptr && default_workspace->isSet()){ isObjectUpdated = true; break;}
        if(m_is_orphaned_isSet){ isObjectUpdated = true; break;}
        if(tags->size() > 0){ isObjectUpdated = true; break;}
        if(m_has_release_revisionable_objects_isSet){ isObjectUpdated = true; break;}
        if(m__public_isSet){ isObjectUpdated = true; break;}
        if(m_user_account_limits_breached_isSet){ isObjectUpdated = true; break;}
        if(m_is_using_managed_workflow_isSet){ isObjectUpdated = true; break;}
        if(permission != nullptr && *permission != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

