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
// Callback struct for Callback
type Callback struct {
	Empty bool `json:"empty,omitempty"`
	Extensions map[string]map[string]interface{} `json:"extensions,omitempty"`
	Getref string `json:"get$ref,omitempty"`
}
