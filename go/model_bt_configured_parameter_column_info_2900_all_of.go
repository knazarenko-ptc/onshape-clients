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
// BtConfiguredParameterColumnInfo2900AllOf struct for BtConfiguredParameterColumnInfo2900AllOf
type BtConfiguredParameterColumnInfo2900AllOf struct {
	ParameterId string `json:"parameterId,omitempty"`
	InnerParameterLocation BtInnerParameterLocation1715 `json:"innerParameterLocation,omitempty"`
	BtType string `json:"btType,omitempty"`
}
