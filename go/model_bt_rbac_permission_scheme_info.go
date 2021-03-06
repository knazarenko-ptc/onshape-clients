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
// BtRbacPermissionSchemeInfo struct for BtRbacPermissionSchemeInfo
type BtRbacPermissionSchemeInfo struct {
	Active bool `json:"active,omitempty"`
	Description string `json:"description,omitempty"`
	Entries []Entry `json:"entries,omitempty"`
	Href string `json:"href,omitempty"`
	Id string `json:"id,omitempty"`
	Name string `json:"name,omitempty"`
	PredefinedPermissionScheme int32 `json:"predefinedPermissionScheme,omitempty"`
	ViewRef string `json:"viewRef,omitempty"`
}
