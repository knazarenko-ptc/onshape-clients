/*
 * Onshape REST API
 *
 * The Onshape REST API consumed by all clients.
 *
 * API version: 1.111
 * Contact: api-support@onshape.zendesk.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
import (
	"time"
)
// BtDocumentProcessingInfo struct for BtDocumentProcessingInfo
type BtDocumentProcessingInfo struct {
	AnonymousAccessAllowed bool `json:"anonymousAccessAllowed,omitempty"`
	AnonymousAllowsExport bool `json:"anonymousAllowsExport,omitempty"`
	BetaCapabilityIds []string `json:"betaCapabilityIds,omitempty"`
	CanMove bool `json:"canMove,omitempty"`
	CanUnshare bool `json:"canUnshare,omitempty"`
	CreatedAt time.Time `json:"createdAt,omitempty"`
	CreatedBy BtUserBasicSummaryInfo `json:"createdBy,omitempty"`
	CreatedWithEducationPlan bool `json:"createdWithEducationPlan,omitempty"`
	DefaultElementId string `json:"defaultElementId,omitempty"`
	DefaultWorkspace BtWorkspaceInfo `json:"defaultWorkspace,omitempty"`
	Description string `json:"description,omitempty"`
	DocumentLabels []BtDocumentLabelInfo `json:"documentLabels,omitempty"`
	DocumentThumbnailElementId string `json:"documentThumbnailElementId,omitempty"`
	DuplicateNameViolationError string `json:"duplicateNameViolationError,omitempty"`
	HasPendingOwner bool `json:"hasPendingOwner,omitempty"`
	HasReleaseRevisionableObjects bool `json:"hasReleaseRevisionableObjects,omitempty"`
	HasRelevantInsertables bool `json:"hasRelevantInsertables,omitempty"`
	Href string `json:"href,omitempty"`
	Id string `json:"id,omitempty"`
	IsContainer bool `json:"isContainer,omitempty"`
	IsEnterpriseOwned bool `json:"isEnterpriseOwned,omitempty"`
	IsMutable bool `json:"isMutable,omitempty"`
	IsOrphaned bool `json:"isOrphaned,omitempty"`
	IsUpgradedToLatestVersion bool `json:"isUpgradedToLatestVersion,omitempty"`
	IsUsingManagedWorkflow bool `json:"isUsingManagedWorkflow,omitempty"`
	JsonType string `json:"jsonType,omitempty"`
	LikedByCurrentUser bool `json:"likedByCurrentUser,omitempty"`
	Likes int64 `json:"likes,omitempty"`
	ModifiedAt time.Time `json:"modifiedAt,omitempty"`
	ModifiedBy BtUserBasicSummaryInfo `json:"modifiedBy,omitempty"`
	Name string `json:"name,omitempty"`
	NotRevisionManaged bool `json:"notRevisionManaged,omitempty"`
	NumberOfTimesCopied int64 `json:"numberOfTimesCopied,omitempty"`
	NumberOfTimesReferenced int64 `json:"numberOfTimesReferenced,omitempty"`
	Owner BtOwnerInfo `json:"owner,omitempty"`
	ParentId string `json:"parentId,omitempty"`
	Permission string `json:"permission,omitempty"`
	PermissionSet map[string]interface{} `json:"permissionSet,omitempty"`
	ProjectId string `json:"projectId,omitempty"`
	Public bool `json:"public,omitempty"`
	RecentVersion BtBaseInfo `json:"recentVersion,omitempty"`
	ResourceType string `json:"resourceType,omitempty"`
	SupportTeamUserAndShared bool `json:"supportTeamUserAndShared,omitempty"`
	Tags []string `json:"tags,omitempty"`
	Thumbnail BtThumbnailInfo `json:"thumbnail,omitempty"`
	TotalWorkspacesScheduledForUpdate int32 `json:"totalWorkspacesScheduledForUpdate,omitempty"`
	TotalWorkspacesUpdating int32 `json:"totalWorkspacesUpdating,omitempty"`
	Trash bool `json:"trash,omitempty"`
	TrashedAt time.Time `json:"trashedAt,omitempty"`
	TreeHref string `json:"treeHref,omitempty"`
	UserAccountLimitsBreached bool `json:"userAccountLimitsBreached,omitempty"`
	ViewRef string `json:"viewRef,omitempty"`
	TranslationEventKey string `json:"translationEventKey,omitempty"`
	TranslationId string `json:"translationId,omitempty"`
}
