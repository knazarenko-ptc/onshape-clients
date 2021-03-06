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
// BtReleasePackageItemInfo struct for BtReleasePackageItemInfo
type BtReleasePackageItemInfo struct {
	CanExport bool `json:"canExport,omitempty"`
	CompanyId string `json:"companyId,omitempty"`
	Configuration string `json:"configuration,omitempty"`
	ConfigurationKey string `json:"configurationKey,omitempty"`
	DiffThumbnailConfigurationKey string `json:"diffThumbnailConfigurationKey,omitempty"`
	DocumentId string `json:"documentId,omitempty"`
	ElementId string `json:"elementId,omitempty"`
	ElementType int32 `json:"elementType,omitempty"`
	Errors []BtReleasePackageItemError `json:"errors,omitempty"`
	Href string `json:"href,omitempty"`
	Id string `json:"id,omitempty"`
	IsIncludedEditable bool `json:"isIncludedEditable,omitempty"`
	IsRevisionManaged bool `json:"isRevisionManaged,omitempty"`
	IsTranslatable bool `json:"isTranslatable,omitempty"`
	MimeType string `json:"mimeType,omitempty"`
	Name string `json:"name,omitempty"`
	ObsoletionRevisionId string `json:"obsoletionRevisionId,omitempty"`
	PartId string `json:"partId,omitempty"`
	PartType string `json:"partType,omitempty"`
	Properties []BtMetadataPropertyInfo `json:"properties,omitempty"`
	Rpid string `json:"rpid,omitempty"`
	SmallThumbnailHref string `json:"smallThumbnailHref,omitempty"`
	VersionId string `json:"versionId,omitempty"`
	ViewRef string `json:"viewRef,omitempty"`
	WorkspaceId string `json:"workspaceId,omitempty"`
}
