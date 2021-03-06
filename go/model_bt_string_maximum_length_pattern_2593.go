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
// BtStringMaximumLengthPattern2593 struct for BtStringMaximumLengthPattern2593
type BtStringMaximumLengthPattern2593 struct {
	BtType string `json:"btType,omitempty"`
	ErrorMessage string `json:"errorMessage,omitempty"`
	ShouldResetValueWhenConfirmed bool `json:"shouldResetValueWhenConfirmed,omitempty"`
	MaximumLength int32 `json:"maximumLength,omitempty"`
}
