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
// BtSphereDescription1263 struct for BtSphereDescription1263
type BtSphereDescription1263 struct {
	BtType string `json:"btType,omitempty"`
	Type string `json:"type,omitempty"`
	Radius float64 `json:"radius,omitempty"`
	Origin BtVector3d389 `json:"origin,omitempty"`
}
