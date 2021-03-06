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
// BtmConfiguredValueByBoolean1501 struct for BtmConfiguredValueByBoolean1501
type BtmConfiguredValueByBoolean1501 struct {
	BtType string `json:"btType,omitempty"`
	ConfigurationValueString string `json:"configurationValueString,omitempty"`
	ImportMicroversion string `json:"importMicroversion,omitempty"`
	NodeId string `json:"nodeId,omitempty"`
	Value BtmParameter1 `json:"value,omitempty"`
	BooleanValue bool `json:"booleanValue,omitempty"`
}
