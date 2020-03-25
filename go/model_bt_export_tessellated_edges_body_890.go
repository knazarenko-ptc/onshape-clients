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
// BtExportTessellatedEdgesBody890 struct for BtExportTessellatedEdgesBody890
type BtExportTessellatedEdgesBody890 struct {
	BtType string `json:"btType,omitempty"`
	Constituents []string `json:"constituents,omitempty"`
	Id string `json:"id,omitempty"`
	Edges []BtExportTessellatedEdgesEdge1364 `json:"edges,omitempty"`
}