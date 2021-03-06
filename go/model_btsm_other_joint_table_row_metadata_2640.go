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
// BtsmOtherJointTableRowMetadata2640 struct for BtsmOtherJointTableRowMetadata2640
type BtsmOtherJointTableRowMetadata2640 struct {
	BtType string `json:"btType,omitempty"`
	CrossHighlightDataIfAny BtTableCrossHighlightData1753 `json:"crossHighlightDataIfAny,omitempty"`
	CrossHighlightData BtTableCrossHighlightData1753 `json:"crossHighlightData,omitempty"`
}
