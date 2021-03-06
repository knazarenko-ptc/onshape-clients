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
// PathItem struct for PathItem
type PathItem struct {
	Delete Operation `json:"delete,omitempty"`
	Description string `json:"description,omitempty"`
	Extensions map[string]map[string]interface{} `json:"extensions,omitempty"`
	Get Operation `json:"get,omitempty"`
	Getref string `json:"get$ref,omitempty"`
	Head Operation `json:"head,omitempty"`
	Options Operation `json:"options,omitempty"`
	Parameters []Parameter `json:"parameters,omitempty"`
	Patch Operation `json:"patch,omitempty"`
	Post Operation `json:"post,omitempty"`
	Put Operation `json:"put,omitempty"`
	Servers []Server `json:"servers,omitempty"`
	Summary string `json:"summary,omitempty"`
	Trace Operation `json:"trace,omitempty"`
}
