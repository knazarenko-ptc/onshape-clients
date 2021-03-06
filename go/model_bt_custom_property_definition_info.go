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
// BtCustomPropertyDefinitionInfo struct for BtCustomPropertyDefinitionInfo
type BtCustomPropertyDefinitionInfo struct {
	Description string `json:"description,omitempty"`
	EnumDefinition []string `json:"enumDefinition,omitempty"`
	Name string `json:"name,omitempty"`
	Template string `json:"template,omitempty"`
	Type string `json:"type,omitempty"`
}
