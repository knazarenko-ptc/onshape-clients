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
// BtPartMaterial1445 struct for BtPartMaterial1445
type BtPartMaterial1445 struct {
	BtType string `json:"btType,omitempty"`
	Id string `json:"id,omitempty"`
	LibraryName string `json:"libraryName,omitempty"`
	LibraryReference BtElementReference725 `json:"libraryReference,omitempty"`
	Name string `json:"name,omitempty"`
	Properties map[string]BtPartMaterialProperty1453 `json:"properties,omitempty"`
	Version int32 `json:"version,omitempty"`
}
