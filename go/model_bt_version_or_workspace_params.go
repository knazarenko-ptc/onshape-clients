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
// BtVersionOrWorkspaceParams struct for BtVersionOrWorkspaceParams
type BtVersionOrWorkspaceParams struct {
	ClientInteractionMode string `json:"clientInteractionMode,omitempty"`
	Description string `json:"description,omitempty"`
	DocumentId string `json:"documentId,omitempty"`
	FromHistory bool `json:"fromHistory,omitempty"`
	IsRelease bool `json:"isRelease,omitempty"`
	MicroversionId string `json:"microversionId,omitempty"`
	Name string `json:"name,omitempty"`
	Purpose int32 `json:"purpose,omitempty"`
	ReadOnly bool `json:"readOnly,omitempty"`
	VersionId string `json:"versionId,omitempty"`
	WorkspaceId string `json:"workspaceId,omitempty"`
}
