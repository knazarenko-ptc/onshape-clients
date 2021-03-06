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
// BtConfigurationResponse2019 struct for BtConfigurationResponse2019
type BtConfigurationResponse2019 struct {
	ConfigurationParameters []BtmConfigurationParameter819 `json:"configurationParameters,omitempty"`
	CurrentConfiguration []BtmParameter1 `json:"currentConfiguration,omitempty"`
	LibraryVersion int32 `json:"libraryVersion,omitempty"`
	MicroversionSkew bool `json:"microversionSkew,omitempty"`
	RejectMicroversionSkew bool `json:"rejectMicroversionSkew,omitempty"`
	SerializationVersion string `json:"serializationVersion,omitempty"`
	SourceMicroversion string `json:"sourceMicroversion,omitempty"`
}
