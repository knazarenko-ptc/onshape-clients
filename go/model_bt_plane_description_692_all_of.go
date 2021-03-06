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
// BtPlaneDescription692AllOf struct for BtPlaneDescription692AllOf
type BtPlaneDescription692AllOf struct {
	Normal BtVector3d389 `json:"normal,omitempty"`
	IsOrientedWithFace bool `json:"isOrientedWithFace,omitempty"`
	Origin BtVector3d389 `json:"origin,omitempty"`
	BtType string `json:"btType,omitempty"`
}
