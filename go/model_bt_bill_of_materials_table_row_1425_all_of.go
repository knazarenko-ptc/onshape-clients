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
// BtBillOfMaterialsTableRow1425AllOf struct for BtBillOfMaterialsTableRow1425AllOf
type BtBillOfMaterialsTableRow1425AllOf struct {
	UniqueItemId BtBillOfMaterialsUniqueItemId2029 `json:"uniqueItemId,omitempty"`
	IndentLevel int32 `json:"indentLevel,omitempty"`
	ExpansionStatus string `json:"expansionStatus,omitempty"`
	ExclusionStatus string `json:"exclusionStatus,omitempty"`
	ExcludeIsEditable bool `json:"excludeIsEditable,omitempty"`
	MetadataUpdateHref string `json:"metadataUpdateHref,omitempty"`
	BtType string `json:"btType,omitempty"`
}
