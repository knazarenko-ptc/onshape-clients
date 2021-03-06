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
// BtTableCellParameter2399 struct for BtTableCellParameter2399
type BtTableCellParameter2399 struct {
	BtType string `json:"btType,omitempty"`
	IsEverVisible bool `json:"isEverVisible,omitempty"`
	IsReadOnly bool `json:"isReadOnly,omitempty"`
	Error string `json:"error,omitempty"`
	OverrideSpec BtParameterSpec6 `json:"overrideSpec,omitempty"`
	Parameter BtmParameter1 `json:"parameter,omitempty"`
}
