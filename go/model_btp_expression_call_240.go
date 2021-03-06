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
// BtpExpressionCall240 struct for BtpExpressionCall240
type BtpExpressionCall240 struct {
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
	Arguments []BtpExpression9 `json:"arguments,omitempty"`
	FunctionName BtpName261 `json:"functionName,omitempty"`
	FunctionNameString string `json:"functionNameString,omitempty"`
	FunctionExpression BtpExpression9 `json:"functionExpression,omitempty"`
	SpaceInEmptyList BtpSpace10 `json:"spaceInEmptyList,omitempty"`
}
