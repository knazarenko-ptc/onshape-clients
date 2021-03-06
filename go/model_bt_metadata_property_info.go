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
// BtMetadataPropertyInfo struct for BtMetadataPropertyInfo
type BtMetadataPropertyInfo struct {
	DefaultValue map[string]interface{} `json:"defaultValue,omitempty"`
	Dirty bool `json:"dirty,omitempty"`
	Editable bool `json:"editable,omitempty"`
	EditableInUi bool `json:"editableInUi,omitempty"`
	EnumValues []BtMetadataEnumValueInfo `json:"enumValues,omitempty"`
	InitialValue map[string]interface{} `json:"initialValue,omitempty"`
	Name string `json:"name,omitempty"`
	PropertyId string `json:"propertyId,omitempty"`
	PropertySource int32 `json:"propertySource,omitempty"`
	Required bool `json:"required,omitempty"`
	SchemaId string `json:"schemaId,omitempty"`
	UiHints BtMetadataPropertyUiHintsInfo `json:"uiHints,omitempty"`
	Validator BtMetadataPropertyValidatorInfo `json:"validator,omitempty"`
	Value map[string]interface{} `json:"value,omitempty"`
	ValueType string `json:"valueType,omitempty"`
}
