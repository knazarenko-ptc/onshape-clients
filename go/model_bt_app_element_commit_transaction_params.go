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
// BtAppElementCommitTransactionParams struct for BtAppElementCommitTransactionParams
type BtAppElementCommitTransactionParams struct {
	Description string `json:"description,omitempty"`
	ReturnError bool `json:"returnError,omitempty"`
	TransactionId string `json:"transactionId,omitempty"`
}
