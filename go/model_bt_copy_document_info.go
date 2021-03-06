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
// BtCopyDocumentInfo struct for BtCopyDocumentInfo
type BtCopyDocumentInfo struct {
	NewDocumentId string `json:"newDocumentId,omitempty"`
	NewDocumentName string `json:"newDocumentName,omitempty"`
	NewOwner BtOwnerInfo `json:"newOwner,omitempty"`
	NewParentId string `json:"newParentId,omitempty"`
	NewProjectId string `json:"newProjectId,omitempty"`
	NewWorkspaceId string `json:"newWorkspaceId,omitempty"`
}
