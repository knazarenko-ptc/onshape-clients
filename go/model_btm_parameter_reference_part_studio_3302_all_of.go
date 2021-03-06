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
// BtmParameterReferencePartStudio3302AllOf struct for BtmParameterReferencePartStudio3302AllOf
type BtmParameterReferencePartStudio3302AllOf struct {
	PartQuery BtmParameterQueryList148 `json:"partQuery,omitempty"`
	BlockBuildFunctionAccess bool `json:"blockBuildFunctionAccess,omitempty"`
	StandardContentParametersId string `json:"standardContentParametersId,omitempty"`
	BtType string `json:"btType,omitempty"`
}
