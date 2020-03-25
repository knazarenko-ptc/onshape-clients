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
// BtmParameterBlobReference1679 struct for BtmParameterBlobReference1679
type BtmParameterBlobReference1679 struct {
	BtType string `json:"btType,omitempty"`
	ImportMicroversion string `json:"importMicroversion,omitempty"`
	NodeId string `json:"nodeId,omitempty"`
	ParameterId string `json:"parameterId,omitempty"`
	Namespace string `json:"namespace,omitempty"`
	BlobImport BtmImport136 `json:"blobImport,omitempty"`
}