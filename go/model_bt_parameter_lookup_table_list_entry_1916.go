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
// BtParameterLookupTableListEntry1916 struct for BtParameterLookupTableListEntry1916
type BtParameterLookupTableListEntry1916 struct {
	AdditionalLocalizedStrings int32 `json:"additionalLocalizedStrings,omitempty"`
	BtType string `json:"btType,omitempty"`
	DefaultIndex int32 `json:"defaultIndex,omitempty"`
	DisplayName string `json:"displayName,omitempty"`
	Entries []BtParameterLookupTableEntry1667 `json:"entries,omitempty"`
	Label string `json:"label,omitempty"`
	LocalizableName string `json:"localizableName,omitempty"`
	LocalizedLabel string `json:"localizedLabel,omitempty"`
	LocalizedName string `json:"localizedName,omitempty"`
	Name string `json:"name,omitempty"`
	StringsToLocalize []string `json:"stringsToLocalize,omitempty"`
}
