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
// BtShareParams struct for BtShareParams
type BtShareParams struct {
	DocumentId string `json:"documentId,omitempty"`
	ElementId string `json:"elementId,omitempty"`
	EncodedConfiguration string `json:"encodedConfiguration,omitempty"`
	Entries []BtShareEntryParams `json:"entries,omitempty"`
	FolderId string `json:"folderId,omitempty"`
	Message string `json:"message,omitempty"`
	Permission int64 `json:"permission,omitempty"`
	PermissionSet map[string]interface{} `json:"permissionSet,omitempty"`
	Update bool `json:"update,omitempty"`
	WorkspaceId string `json:"workspaceId,omitempty"`
}
