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
// BtFeatureStudioContents2239 struct for BtFeatureStudioContents2239
type BtFeatureStudioContents2239 struct {
	BtType string `json:"btType,omitempty"`
	LibraryVersion int32 `json:"libraryVersion,omitempty"`
	MicroversionSkew bool `json:"microversionSkew,omitempty"`
	RejectMicroversionSkew bool `json:"rejectMicroversionSkew,omitempty"`
	SerializationVersion string `json:"serializationVersion,omitempty"`
	SourceMicroversion string `json:"sourceMicroversion,omitempty"`
	Contents string `json:"contents,omitempty"`
}
