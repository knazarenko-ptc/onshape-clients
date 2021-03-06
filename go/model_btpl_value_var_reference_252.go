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
// BtplValueVarReference252 struct for BtplValueVarReference252
type BtplValueVarReference252 struct {
	Atomic bool `json:"atomic,omitempty"`
	BtType string `json:"btType,omitempty"`
	DocumentationType string `json:"documentationType,omitempty"`
	EndSourceLocation int32 `json:"endSourceLocation,omitempty"`
	NodeId string `json:"nodeId,omitempty"`
	ShortDescriptor string `json:"shortDescriptor,omitempty"`
	SpaceAfter BtpSpace10 `json:"spaceAfter,omitempty"`
	SpaceBefore BtpSpace10 `json:"spaceBefore,omitempty"`
	SpaceDefault bool `json:"spaceDefault,omitempty"`
	StartSourceLocation int32 `json:"startSourceLocation,omitempty"`
	Name BtpIdentifier8 `json:"name,omitempty"`
}
