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
// Contact struct for Contact
type Contact struct {
	Email string `json:"email,omitempty"`
	Extensions map[string]map[string]interface{} `json:"extensions,omitempty"`
	Name string `json:"name,omitempty"`
	Url string `json:"url,omitempty"`
}
