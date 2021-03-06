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
// BtmConfigurationParameterEnum105AllOf struct for BtmConfigurationParameterEnum105AllOf
type BtmConfigurationParameterEnum105AllOf struct {
	OptionIds []string `json:"optionIds,omitempty"`
	EnumName string `json:"enumName,omitempty"`
	Namespace string `json:"namespace,omitempty"`
	DefaultValue string `json:"defaultValue,omitempty"`
	Options []BtmEnumOption592 `json:"options,omitempty"`
	BtType string `json:"btType,omitempty"`
}
