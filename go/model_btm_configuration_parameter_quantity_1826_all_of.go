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
// BtmConfigurationParameterQuantity1826AllOf struct for BtmConfigurationParameterQuantity1826AllOf
type BtmConfigurationParameterQuantity1826AllOf struct {
	QuantityType string `json:"quantityType,omitempty"`
	RangeAndDefault BtQuantityRange181 `json:"rangeAndDefault,omitempty"`
	BtType string `json:"btType,omitempty"`
}
