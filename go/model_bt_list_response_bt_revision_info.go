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
// BtListResponseBtRevisionInfo struct for BtListResponseBtRevisionInfo
type BtListResponseBtRevisionInfo struct {
	Href string `json:"href,omitempty"`
	Items []BtRevisionInfo `json:"items,omitempty"`
	Next string `json:"next,omitempty"`
	Previous string `json:"previous,omitempty"`
}
