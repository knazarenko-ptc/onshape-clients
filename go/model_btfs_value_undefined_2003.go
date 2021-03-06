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
// BtfsValueUndefined2003 struct for BtfsValueUndefined2003
type BtfsValueUndefined2003 struct {
	BtType string `json:"btType,omitempty"`
	ConfigurationValueString string `json:"configurationValueString,omitempty"`
	TypeTag string `json:"typeTag,omitempty"`
	ValueObject map[string]interface{} `json:"valueObject,omitempty"`
}
