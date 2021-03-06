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
// BtWorkspacePartParams struct for BtWorkspacePartParams
type BtWorkspacePartParams struct {
	Appearance BtPartAppearanceParams `json:"appearance,omitempty"`
	ApplyUpdateToAllConfigurations bool `json:"applyUpdateToAllConfigurations,omitempty"`
	Configuration string `json:"configuration,omitempty"`
	ConnectionId string `json:"connectionId,omitempty"`
	CustomProperties []BtNameValuePair `json:"customProperties,omitempty"`
	CustomPropertyDefinitions []BtCustomPropertyDefinitionParams `json:"customPropertyDefinitions,omitempty"`
	Description string `json:"description,omitempty"`
	ElementId string `json:"elementId,omitempty"`
	Material BtMaterialParams `json:"material,omitempty"`
	Name string `json:"name,omitempty"`
	PartId string `json:"partId,omitempty"`
	PartNumber string `json:"partNumber,omitempty"`
	ProductLine string `json:"productLine,omitempty"`
	Project string `json:"project,omitempty"`
	Revision string `json:"revision,omitempty"`
	Title1 string `json:"title1,omitempty"`
	Title2 string `json:"title2,omitempty"`
	Title3 string `json:"title3,omitempty"`
	Vendor string `json:"vendor,omitempty"`
}
