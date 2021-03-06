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
// BtCommonUnitInfo struct for BtCommonUnitInfo
type BtCommonUnitInfo struct {
	Abbreviation string `json:"abbreviation,omitempty"`
	Unit string `json:"unit,omitempty"`
	UnitName string `json:"unitName,omitempty"`
	UnitType string `json:"unitType,omitempty"`
	ValueInBaseUnits float64 `json:"valueInBaseUnits,omitempty"`
}
