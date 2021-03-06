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
// Parameter struct for Parameter
type Parameter struct {
	AllowEmptyValue bool `json:"allowEmptyValue,omitempty"`
	AllowReserved bool `json:"allowReserved,omitempty"`
	Content map[string]MediaType `json:"content,omitempty"`
	Deprecated bool `json:"deprecated,omitempty"`
	Description string `json:"description,omitempty"`
	Example map[string]interface{} `json:"example,omitempty"`
	Examples map[string]Example `json:"examples,omitempty"`
	Explode bool `json:"explode,omitempty"`
	Extensions map[string]map[string]interface{} `json:"extensions,omitempty"`
	Getref string `json:"get$ref,omitempty"`
	In string `json:"in,omitempty"`
	Name string `json:"name,omitempty"`
	Required bool `json:"required,omitempty"`
	Schema Schema `json:"schema,omitempty"`
	Style string `json:"style,omitempty"`
}
