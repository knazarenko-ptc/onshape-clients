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
// Encoding struct for Encoding
type Encoding struct {
	AllowReserved bool `json:"allowReserved,omitempty"`
	ContentType string `json:"contentType,omitempty"`
	Explode bool `json:"explode,omitempty"`
	Extensions map[string]map[string]interface{} `json:"extensions,omitempty"`
	Headers map[string]Header `json:"headers,omitempty"`
	Style string `json:"style,omitempty"`
}
