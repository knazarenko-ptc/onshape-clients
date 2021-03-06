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
// BtfsValueArray1499AllOf struct for BtfsValueArray1499AllOf
type BtfsValueArray1499AllOf struct {
	ValueObject []map[string]interface{} `json:"valueObject,omitempty"`
	Value []BtfsValue1888 `json:"value,omitempty"`
	BtType string `json:"btType,omitempty"`
}
