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
// BtStringFormatMatchPattern2446 struct for BtStringFormatMatchPattern2446
type BtStringFormatMatchPattern2446 struct {
	BtType string `json:"btType,omitempty"`
	ErrorMessage string `json:"errorMessage,omitempty"`
	ShouldResetValueWhenConfirmed bool `json:"shouldResetValueWhenConfirmed,omitempty"`
	RegExpToMatch string `json:"regExpToMatch,omitempty"`
}
