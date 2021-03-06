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
// BtmAssemblyFeature887AllOf struct for BtmAssemblyFeature887AllOf
type BtmAssemblyFeature887AllOf struct {
	AuxiliaryAssemblyFeature bool `json:"auxiliaryAssemblyFeature,omitempty"`
	FeatureListFieldIndex int32 `json:"featureListFieldIndex,omitempty"`
	OccurrenceQueriesFromAllConfigurations []BtmIndividualQueryWithOccurrenceBase904 `json:"occurrenceQueriesFromAllConfigurations,omitempty"`
	Version int32 `json:"version,omitempty"`
	BtType string `json:"btType,omitempty"`
}
