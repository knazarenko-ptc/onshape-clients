# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    OpenAPI spec version: 1.96
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class BTMParameter(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'revision_data': 'BTRevisionCustomData',
        'value_object': 'object',
        'configuration_value_string': 'str',
        'direct_imports': 'list[BTMImport]',
        'string_value_for_property': 'str',
        'parameter_id': 'str',
        'changeable_child_field_indices': 'list[int]',
        'for_export': 'bool',
        'import_microversion': 'str',
        'child_nodes': 'dict(str, BTNodeReference)',
        'has_user_code': 'bool',
        'child_locations': 'dict(str, BTInsertionLocation)',
        'source_parse_tree_nodes': 'dict(str, list[BTNodeReference])',
        'node_id': 'str',
        'child_map_indices': 'list[int]',
        'atomic_child_indices': 'list[int]',
        'node_id_raw': 'BTObjectId',
        'first_child_field': 'int',
        'child_list_indices': 'list[int]',
        'type_id': 'int',
        'export_type_name': 'str',
        'unknown_class': 'bool',
        'connection_source': 'BTConnection'
    }

    attribute_map = {
        'revision_data': 'revisionData',
        'value_object': 'valueObject',
        'configuration_value_string': 'configurationValueString',
        'direct_imports': 'directImports',
        'string_value_for_property': 'stringValueForProperty',
        'parameter_id': 'parameterId',
        'changeable_child_field_indices': 'changeableChildFieldIndices',
        'for_export': 'forExport',
        'import_microversion': 'importMicroversion',
        'child_nodes': 'childNodes',
        'has_user_code': 'hasUserCode',
        'child_locations': 'childLocations',
        'source_parse_tree_nodes': 'sourceParseTreeNodes',
        'node_id': 'nodeId',
        'child_map_indices': 'childMapIndices',
        'atomic_child_indices': 'atomicChildIndices',
        'node_id_raw': 'nodeIdRaw',
        'first_child_field': 'firstChildField',
        'child_list_indices': 'childListIndices',
        'type_id': 'typeId',
        'export_type_name': 'exportTypeName',
        'unknown_class': 'unknownClass',
        'connection_source': 'connectionSource'
    }

    def __init__(self, revision_data=None, value_object=None, configuration_value_string=None, direct_imports=None, string_value_for_property=None, parameter_id=None, changeable_child_field_indices=None, for_export=None, import_microversion=None, child_nodes=None, has_user_code=None, child_locations=None, source_parse_tree_nodes=None, node_id=None, child_map_indices=None, atomic_child_indices=None, node_id_raw=None, first_child_field=None, child_list_indices=None, type_id=None, export_type_name=None, unknown_class=None, connection_source=None):  # noqa: E501
        """BTMParameter - a model defined in OpenAPI"""  # noqa: E501

        self._revision_data = None
        self._value_object = None
        self._configuration_value_string = None
        self._direct_imports = None
        self._string_value_for_property = None
        self._parameter_id = None
        self._changeable_child_field_indices = None
        self._for_export = None
        self._import_microversion = None
        self._child_nodes = None
        self._has_user_code = None
        self._child_locations = None
        self._source_parse_tree_nodes = None
        self._node_id = None
        self._child_map_indices = None
        self._atomic_child_indices = None
        self._node_id_raw = None
        self._first_child_field = None
        self._child_list_indices = None
        self._type_id = None
        self._export_type_name = None
        self._unknown_class = None
        self._connection_source = None
        self.discriminator = None

        if revision_data is not None:
            self.revision_data = revision_data
        if value_object is not None:
            self.value_object = value_object
        if configuration_value_string is not None:
            self.configuration_value_string = configuration_value_string
        if direct_imports is not None:
            self.direct_imports = direct_imports
        if string_value_for_property is not None:
            self.string_value_for_property = string_value_for_property
        if parameter_id is not None:
            self.parameter_id = parameter_id
        if changeable_child_field_indices is not None:
            self.changeable_child_field_indices = changeable_child_field_indices
        if for_export is not None:
            self.for_export = for_export
        if import_microversion is not None:
            self.import_microversion = import_microversion
        if child_nodes is not None:
            self.child_nodes = child_nodes
        if has_user_code is not None:
            self.has_user_code = has_user_code
        if child_locations is not None:
            self.child_locations = child_locations
        if source_parse_tree_nodes is not None:
            self.source_parse_tree_nodes = source_parse_tree_nodes
        if node_id is not None:
            self.node_id = node_id
        if child_map_indices is not None:
            self.child_map_indices = child_map_indices
        if atomic_child_indices is not None:
            self.atomic_child_indices = atomic_child_indices
        if node_id_raw is not None:
            self.node_id_raw = node_id_raw
        if first_child_field is not None:
            self.first_child_field = first_child_field
        if child_list_indices is not None:
            self.child_list_indices = child_list_indices
        if type_id is not None:
            self.type_id = type_id
        if export_type_name is not None:
            self.export_type_name = export_type_name
        if unknown_class is not None:
            self.unknown_class = unknown_class
        if connection_source is not None:
            self.connection_source = connection_source

    @property
    def revision_data(self):
        """Gets the revision_data of this BTMParameter.  # noqa: E501


        :return: The revision_data of this BTMParameter.  # noqa: E501
        :rtype: BTRevisionCustomData
        """
        return self._revision_data

    @revision_data.setter
    def revision_data(self, revision_data):
        """Sets the revision_data of this BTMParameter.


        :param revision_data: The revision_data of this BTMParameter.  # noqa: E501
        :type: BTRevisionCustomData
        """

        self._revision_data = revision_data

    @property
    def value_object(self):
        """Gets the value_object of this BTMParameter.  # noqa: E501


        :return: The value_object of this BTMParameter.  # noqa: E501
        :rtype: object
        """
        return self._value_object

    @value_object.setter
    def value_object(self, value_object):
        """Sets the value_object of this BTMParameter.


        :param value_object: The value_object of this BTMParameter.  # noqa: E501
        :type: object
        """

        self._value_object = value_object

    @property
    def configuration_value_string(self):
        """Gets the configuration_value_string of this BTMParameter.  # noqa: E501


        :return: The configuration_value_string of this BTMParameter.  # noqa: E501
        :rtype: str
        """
        return self._configuration_value_string

    @configuration_value_string.setter
    def configuration_value_string(self, configuration_value_string):
        """Sets the configuration_value_string of this BTMParameter.


        :param configuration_value_string: The configuration_value_string of this BTMParameter.  # noqa: E501
        :type: str
        """

        self._configuration_value_string = configuration_value_string

    @property
    def direct_imports(self):
        """Gets the direct_imports of this BTMParameter.  # noqa: E501


        :return: The direct_imports of this BTMParameter.  # noqa: E501
        :rtype: list[BTMImport]
        """
        return self._direct_imports

    @direct_imports.setter
    def direct_imports(self, direct_imports):
        """Sets the direct_imports of this BTMParameter.


        :param direct_imports: The direct_imports of this BTMParameter.  # noqa: E501
        :type: list[BTMImport]
        """

        self._direct_imports = direct_imports

    @property
    def string_value_for_property(self):
        """Gets the string_value_for_property of this BTMParameter.  # noqa: E501


        :return: The string_value_for_property of this BTMParameter.  # noqa: E501
        :rtype: str
        """
        return self._string_value_for_property

    @string_value_for_property.setter
    def string_value_for_property(self, string_value_for_property):
        """Sets the string_value_for_property of this BTMParameter.


        :param string_value_for_property: The string_value_for_property of this BTMParameter.  # noqa: E501
        :type: str
        """

        self._string_value_for_property = string_value_for_property

    @property
    def parameter_id(self):
        """Gets the parameter_id of this BTMParameter.  # noqa: E501


        :return: The parameter_id of this BTMParameter.  # noqa: E501
        :rtype: str
        """
        return self._parameter_id

    @parameter_id.setter
    def parameter_id(self, parameter_id):
        """Sets the parameter_id of this BTMParameter.


        :param parameter_id: The parameter_id of this BTMParameter.  # noqa: E501
        :type: str
        """

        self._parameter_id = parameter_id

    @property
    def changeable_child_field_indices(self):
        """Gets the changeable_child_field_indices of this BTMParameter.  # noqa: E501


        :return: The changeable_child_field_indices of this BTMParameter.  # noqa: E501
        :rtype: list[int]
        """
        return self._changeable_child_field_indices

    @changeable_child_field_indices.setter
    def changeable_child_field_indices(self, changeable_child_field_indices):
        """Sets the changeable_child_field_indices of this BTMParameter.


        :param changeable_child_field_indices: The changeable_child_field_indices of this BTMParameter.  # noqa: E501
        :type: list[int]
        """

        self._changeable_child_field_indices = changeable_child_field_indices

    @property
    def for_export(self):
        """Gets the for_export of this BTMParameter.  # noqa: E501


        :return: The for_export of this BTMParameter.  # noqa: E501
        :rtype: bool
        """
        return self._for_export

    @for_export.setter
    def for_export(self, for_export):
        """Sets the for_export of this BTMParameter.


        :param for_export: The for_export of this BTMParameter.  # noqa: E501
        :type: bool
        """

        self._for_export = for_export

    @property
    def import_microversion(self):
        """Gets the import_microversion of this BTMParameter.  # noqa: E501


        :return: The import_microversion of this BTMParameter.  # noqa: E501
        :rtype: str
        """
        return self._import_microversion

    @import_microversion.setter
    def import_microversion(self, import_microversion):
        """Sets the import_microversion of this BTMParameter.


        :param import_microversion: The import_microversion of this BTMParameter.  # noqa: E501
        :type: str
        """

        self._import_microversion = import_microversion

    @property
    def child_nodes(self):
        """Gets the child_nodes of this BTMParameter.  # noqa: E501


        :return: The child_nodes of this BTMParameter.  # noqa: E501
        :rtype: dict(str, BTNodeReference)
        """
        return self._child_nodes

    @child_nodes.setter
    def child_nodes(self, child_nodes):
        """Sets the child_nodes of this BTMParameter.


        :param child_nodes: The child_nodes of this BTMParameter.  # noqa: E501
        :type: dict(str, BTNodeReference)
        """

        self._child_nodes = child_nodes

    @property
    def has_user_code(self):
        """Gets the has_user_code of this BTMParameter.  # noqa: E501


        :return: The has_user_code of this BTMParameter.  # noqa: E501
        :rtype: bool
        """
        return self._has_user_code

    @has_user_code.setter
    def has_user_code(self, has_user_code):
        """Sets the has_user_code of this BTMParameter.


        :param has_user_code: The has_user_code of this BTMParameter.  # noqa: E501
        :type: bool
        """

        self._has_user_code = has_user_code

    @property
    def child_locations(self):
        """Gets the child_locations of this BTMParameter.  # noqa: E501


        :return: The child_locations of this BTMParameter.  # noqa: E501
        :rtype: dict(str, BTInsertionLocation)
        """
        return self._child_locations

    @child_locations.setter
    def child_locations(self, child_locations):
        """Sets the child_locations of this BTMParameter.


        :param child_locations: The child_locations of this BTMParameter.  # noqa: E501
        :type: dict(str, BTInsertionLocation)
        """

        self._child_locations = child_locations

    @property
    def source_parse_tree_nodes(self):
        """Gets the source_parse_tree_nodes of this BTMParameter.  # noqa: E501


        :return: The source_parse_tree_nodes of this BTMParameter.  # noqa: E501
        :rtype: dict(str, list[BTNodeReference])
        """
        return self._source_parse_tree_nodes

    @source_parse_tree_nodes.setter
    def source_parse_tree_nodes(self, source_parse_tree_nodes):
        """Sets the source_parse_tree_nodes of this BTMParameter.


        :param source_parse_tree_nodes: The source_parse_tree_nodes of this BTMParameter.  # noqa: E501
        :type: dict(str, list[BTNodeReference])
        """

        self._source_parse_tree_nodes = source_parse_tree_nodes

    @property
    def node_id(self):
        """Gets the node_id of this BTMParameter.  # noqa: E501


        :return: The node_id of this BTMParameter.  # noqa: E501
        :rtype: str
        """
        return self._node_id

    @node_id.setter
    def node_id(self, node_id):
        """Sets the node_id of this BTMParameter.


        :param node_id: The node_id of this BTMParameter.  # noqa: E501
        :type: str
        """

        self._node_id = node_id

    @property
    def child_map_indices(self):
        """Gets the child_map_indices of this BTMParameter.  # noqa: E501


        :return: The child_map_indices of this BTMParameter.  # noqa: E501
        :rtype: list[int]
        """
        return self._child_map_indices

    @child_map_indices.setter
    def child_map_indices(self, child_map_indices):
        """Sets the child_map_indices of this BTMParameter.


        :param child_map_indices: The child_map_indices of this BTMParameter.  # noqa: E501
        :type: list[int]
        """

        self._child_map_indices = child_map_indices

    @property
    def atomic_child_indices(self):
        """Gets the atomic_child_indices of this BTMParameter.  # noqa: E501


        :return: The atomic_child_indices of this BTMParameter.  # noqa: E501
        :rtype: list[int]
        """
        return self._atomic_child_indices

    @atomic_child_indices.setter
    def atomic_child_indices(self, atomic_child_indices):
        """Sets the atomic_child_indices of this BTMParameter.


        :param atomic_child_indices: The atomic_child_indices of this BTMParameter.  # noqa: E501
        :type: list[int]
        """

        self._atomic_child_indices = atomic_child_indices

    @property
    def node_id_raw(self):
        """Gets the node_id_raw of this BTMParameter.  # noqa: E501


        :return: The node_id_raw of this BTMParameter.  # noqa: E501
        :rtype: BTObjectId
        """
        return self._node_id_raw

    @node_id_raw.setter
    def node_id_raw(self, node_id_raw):
        """Sets the node_id_raw of this BTMParameter.


        :param node_id_raw: The node_id_raw of this BTMParameter.  # noqa: E501
        :type: BTObjectId
        """

        self._node_id_raw = node_id_raw

    @property
    def first_child_field(self):
        """Gets the first_child_field of this BTMParameter.  # noqa: E501


        :return: The first_child_field of this BTMParameter.  # noqa: E501
        :rtype: int
        """
        return self._first_child_field

    @first_child_field.setter
    def first_child_field(self, first_child_field):
        """Sets the first_child_field of this BTMParameter.


        :param first_child_field: The first_child_field of this BTMParameter.  # noqa: E501
        :type: int
        """

        self._first_child_field = first_child_field

    @property
    def child_list_indices(self):
        """Gets the child_list_indices of this BTMParameter.  # noqa: E501


        :return: The child_list_indices of this BTMParameter.  # noqa: E501
        :rtype: list[int]
        """
        return self._child_list_indices

    @child_list_indices.setter
    def child_list_indices(self, child_list_indices):
        """Sets the child_list_indices of this BTMParameter.


        :param child_list_indices: The child_list_indices of this BTMParameter.  # noqa: E501
        :type: list[int]
        """

        self._child_list_indices = child_list_indices

    @property
    def type_id(self):
        """Gets the type_id of this BTMParameter.  # noqa: E501


        :return: The type_id of this BTMParameter.  # noqa: E501
        :rtype: int
        """
        return self._type_id

    @type_id.setter
    def type_id(self, type_id):
        """Sets the type_id of this BTMParameter.


        :param type_id: The type_id of this BTMParameter.  # noqa: E501
        :type: int
        """

        self._type_id = type_id

    @property
    def export_type_name(self):
        """Gets the export_type_name of this BTMParameter.  # noqa: E501


        :return: The export_type_name of this BTMParameter.  # noqa: E501
        :rtype: str
        """
        return self._export_type_name

    @export_type_name.setter
    def export_type_name(self, export_type_name):
        """Sets the export_type_name of this BTMParameter.


        :param export_type_name: The export_type_name of this BTMParameter.  # noqa: E501
        :type: str
        """

        self._export_type_name = export_type_name

    @property
    def unknown_class(self):
        """Gets the unknown_class of this BTMParameter.  # noqa: E501


        :return: The unknown_class of this BTMParameter.  # noqa: E501
        :rtype: bool
        """
        return self._unknown_class

    @unknown_class.setter
    def unknown_class(self, unknown_class):
        """Sets the unknown_class of this BTMParameter.


        :param unknown_class: The unknown_class of this BTMParameter.  # noqa: E501
        :type: bool
        """

        self._unknown_class = unknown_class

    @property
    def connection_source(self):
        """Gets the connection_source of this BTMParameter.  # noqa: E501


        :return: The connection_source of this BTMParameter.  # noqa: E501
        :rtype: BTConnection
        """
        return self._connection_source

    @connection_source.setter
    def connection_source(self, connection_source):
        """Sets the connection_source of this BTMParameter.


        :param connection_source: The connection_source of this BTMParameter.  # noqa: E501
        :type: BTConnection
        """

        self._connection_source = connection_source

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, BTMParameter):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
