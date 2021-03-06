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
// Subscription struct for Subscription
type Subscription struct {
	ApplicationFeePercent float64 `json:"applicationFeePercent,omitempty"`
	Billing string `json:"billing,omitempty"`
	CancelAtPeriodEnd bool `json:"cancelAtPeriodEnd,omitempty"`
	CanceledAt int64 `json:"canceledAt,omitempty"`
	Created int64 `json:"created,omitempty"`
	CurrentPeriodEnd int64 `json:"currentPeriodEnd,omitempty"`
	CurrentPeriodStart int64 `json:"currentPeriodStart,omitempty"`
	Customer string `json:"customer,omitempty"`
	CustomerObject Customer `json:"customerObject,omitempty"`
	DaysUntilDue int32 `json:"daysUntilDue,omitempty"`
	Discount Discount `json:"discount,omitempty"`
	EndedAt int64 `json:"endedAt,omitempty"`
	Id string `json:"id,omitempty"`
	Metadata map[string]string `json:"metadata,omitempty"`
	Object string `json:"object,omitempty"`
	Plan Plan `json:"plan,omitempty"`
	Quantity int32 `json:"quantity,omitempty"`
	Start int64 `json:"start,omitempty"`
	Status string `json:"status,omitempty"`
	SubscriptionItems SubscriptionItemCollection `json:"subscriptionItems,omitempty"`
	TaxPercent float64 `json:"taxPercent,omitempty"`
	TrialEnd int64 `json:"trialEnd,omitempty"`
	TrialStart int64 `json:"trialStart,omitempty"`
}
