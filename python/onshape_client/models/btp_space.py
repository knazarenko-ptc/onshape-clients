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


class BTPSpace(object):
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
        'lines': 'list[str]',
        'text': 'str',
        'changeable_child_field_indices': 'list[int]',
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
        'lines': 'lines',
        'text': 'text',
        'changeable_child_field_indices': 'changeableChildFieldIndices',
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

    def __init__(self, lines=None, text=None, changeable_child_field_indices=None, node_id=None, child_map_indices=None, atomic_child_indices=None, node_id_raw=None, first_child_field=None, child_list_indices=None, type_id=None, export_type_name=None, unknown_class=None, connection_source=None):  # noqa: E501
        """BTPSpace - a model defined in OpenAPI"""  # noqa: E501

        self._lines = None
        self._text = None
        self._changeable_child_field_indices = None
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

        if lines is not None:
            self.lines = lines
        if text is not None:
            self.text = text
        if changeable_child_field_indices is not None:
            self.changeable_child_field_indices = changeable_child_field_indices
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
    def lines(self):
        """Gets the lines of this BTPSpace.  # noqa: E501


        :return: The lines of this BTPSpace.  # noqa: E501
        :rtype: list[str]
        """
        return self._lines

    @lines.setter
    def lines(self, lines):
        """Sets the lines of this BTPSpace.


        :param lines: The lines of this BTPSpace.  # noqa: E501
        :type: list[str]
        """

        self._lines = lines

    @property
    def text(self):
        """Gets the text of this BTPSpace.  # noqa: E501


        :return: The text of this BTPSpace.  # noqa: E501
        :rtype: str
        """
        return self._text

    @text.setter
    def text(self, text):
        """Sets the text of this BTPSpace.


        :param text: The text of this BTPSpace.  # noqa: E501
        :type: str
        """

        self._text = text

    @property
    def changeable_child_field_indices(self):
        """Gets the changeable_child_field_indices of this BTPSpace.  # noqa: E501


        :return: The changeable_child_field_indices of this BTPSpace.  # noqa: E501
        :rtype: list[int]
        """
        return self._changeable_child_field_indices

    @changeable_child_field_indices.setter
    def changeable_child_field_indices(self, changeable_child_field_indices):
        """Sets the changeable_child_field_indices of this BTPSpace.


        :param changeable_child_field_indices: The changeable_child_field_indices of this BTPSpace.  # noqa: E501
        :type: list[int]
        """

        self._changeable_child_field_indices = changeable_child_field_indices

    @property
    def node_id(self):
        """Gets the node_id of this BTPSpace.  # noqa: E501


        :return: The node_id of this BTPSpace.  # noqa: E501
        :rtype: str
        """
        return self._node_id

    @node_id.setter
    def node_id(self, node_id):
        """Sets the node_id of this BTPSpace.


        :param node_id: The node_id of this BTPSpace.  # noqa: E501
        :type: str
        """

        self._node_id = node_id

    @property
    def child_map_indices(self):
        """Gets the child_map_indices of this BTPSpace.  # noqa: E501


        :return: The child_map_indices of this BTPSpace.  # noqa: E501
        :rtype: list[int]
        """
        return self._child_map_indices

    @child_map_indices.setter
    def child_map_indices(self, child_map_indices):
        """Sets the child_map_indices of this BTPSpace.


        :param child_map_indices: The child_map_indices of this BTPSpace.  # noqa: E501
        :type: list[int]
        """

        self._child_map_indices = child_map_indices

    @property
    def atomic_child_indices(self):
        """Gets the atomic_child_indices of this BTPSpace.  # noqa: E501


        :return: The atomic_child_indices of this BTPSpace.  # noqa: E501
        :rtype: list[int]
        """
        return self._atomic_child_indices

    @atomic_child_indices.setter
    def atomic_child_indices(self, atomic_child_indices):
        """Sets the atomic_child_indices of this BTPSpace.


        :param atomic_child_indices: The atomic_child_indices of this BTPSpace.  # noqa: E501
        :type: list[int]
        """

        self._atomic_child_indices = atomic_child_indices

    @property
    def node_id_raw(self):
        """Gets the node_id_raw of this BTPSpace.  # noqa: E501


        :return: The node_id_raw of this BTPSpace.  # noqa: E501
        :rtype: BTObjectId
        """
        return self._node_id_raw

    @node_id_raw.setter
    def node_id_raw(self, node_id_raw):
        """Sets the node_id_raw of this BTPSpace.


        :param node_id_raw: The node_id_raw of this BTPSpace.  # noqa: E501
        :type: BTObjectId
        """

        self._node_id_raw = node_id_raw

    @property
    def first_child_field(self):
        """Gets the first_child_field of this BTPSpace.  # noqa: E501


        :return: The first_child_field of this BTPSpace.  # noqa: E501
        :rtype: int
        """
        return self._first_child_field

    @first_child_field.setter
    def first_child_field(self, first_child_field):
        """Sets the first_child_field of this BTPSpace.


        :param first_child_field: The first_child_field of this BTPSpace.  # noqa: E501
        :type: int
        """

        self._first_child_field = first_child_field

    @property
    def child_list_indices(self):
        """Gets the child_list_indices of this BTPSpace.  # noqa: E501


        :return: The child_list_indices of this BTPSpace.  # noqa: E501
        :rtype: list[int]
        """
        return self._child_list_indices

    @child_list_indices.setter
    def child_list_indices(self, child_list_indices):
        """Sets the child_list_indices of this BTPSpace.


        :param child_list_indices: The child_list_indices of this BTPSpace.  # noqa: E501
        :type: list[int]
        """

        self._child_list_indices = child_list_indices

    @property
    def type_id(self):
        """Gets the type_id of this BTPSpace.  # noqa: E501


        :return: The type_id of this BTPSpace.  # noqa: E501
        :rtype: int
        """
        return self._type_id

    @type_id.setter
    def type_id(self, type_id):
        """Sets the type_id of this BTPSpace.


        :param type_id: The type_id of this BTPSpace.  # noqa: E501
        :type: int
        """

        self._type_id = type_id

    @property
    def export_type_name(self):
        """Gets the export_type_name of this BTPSpace.  # noqa: E501


        :return: The export_type_name of this BTPSpace.  # noqa: E501
        :rtype: str
        """
        return self._export_type_name

    @export_type_name.setter
    def export_type_name(self, export_type_name):
        """Sets the export_type_name of this BTPSpace.


        :param export_type_name: The export_type_name of this BTPSpace.  # noqa: E501
        :type: str
        """

        self._export_type_name = export_type_name

    @property
    def unknown_class(self):
        """Gets the unknown_class of this BTPSpace.  # noqa: E501


        :return: The unknown_class of this BTPSpace.  # noqa: E501
        :rtype: bool
        """
        return self._unknown_class

    @unknown_class.setter
    def unknown_class(self, unknown_class):
        """Sets the unknown_class of this BTPSpace.


        :param unknown_class: The unknown_class of this BTPSpace.  # noqa: E501
        :type: bool
        """

        self._unknown_class = unknown_class

    @property
    def connection_source(self):
        """Gets the connection_source of this BTPSpace.  # noqa: E501


        :return: The connection_source of this BTPSpace.  # noqa: E501
        :rtype: BTConnection
        """
        return self._connection_source

    @connection_source.setter
    def connection_source(self, connection_source):
        """Sets the connection_source of this BTPSpace.


        :param connection_source: The connection_source of this BTPSpace.  # noqa: E501
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
        if not isinstance(other, BTPSpace):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
