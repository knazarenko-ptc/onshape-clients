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
// BtDocumentSearchParams struct for BtDocumentSearchParams
type BtDocumentSearchParams struct {
	DocumentFilter int32 `json:"documentFilter,omitempty"`
	FoundIn string `json:"foundIn,omitempty"`
	Limit int32 `json:"limit,omitempty"`
	Offset int32 `json:"offset,omitempty"`
	OwnerId string `json:"ownerId,omitempty"`
	ParentId string `json:"parentId,omitempty"`
	RawQuery string `json:"rawQuery,omitempty"`
	SortColumn string `json:"sortColumn,omitempty"`
	SortOrder string `json:"sortOrder,omitempty"`
	Type string `json:"type,omitempty"`
	When string `json:"when,omitempty"`
}
