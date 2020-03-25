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
// BtAssemblyFeatureInfo struct for BtAssemblyFeatureInfo
type BtAssemblyFeatureInfo struct {
	FeatureData BtAssemblyFeatureDataInfo `json:"featureData,omitempty"`
	FeatureType string `json:"featureType,omitempty"`
	Id string `json:"id,omitempty"`
	Suppressed bool `json:"suppressed,omitempty"`
}