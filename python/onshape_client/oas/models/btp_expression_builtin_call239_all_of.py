# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.107
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six

from onshape_client.oas.configuration import Configuration


class BTPExpressionBuiltinCall239AllOf(object):
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
        'arguments': 'list[BTPExpression9]',
        'space_in_empty_list': 'BTPSpace10',
        'name': 'BTPBuiltinIdentifier233',
        'bt_type': 'str'
    }

    attribute_map = {
        'arguments': 'arguments',
        'space_in_empty_list': 'spaceInEmptyList',
        'name': 'name',
        'bt_type': 'btType'
    }

    def __init__(self, arguments=None, space_in_empty_list=None, name=None, bt_type=None, local_vars_configuration=None):  # noqa: E501
        """BTPExpressionBuiltinCall239AllOf - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._arguments = None
        self._space_in_empty_list = None
        self._name = None
        self._bt_type = None
        self.discriminator = None

        if arguments is not None:
            self.arguments = arguments
        if space_in_empty_list is not None:
            self.space_in_empty_list = space_in_empty_list
        if name is not None:
            self.name = name
        if bt_type is not None:
            self.bt_type = bt_type

    @property
    def arguments(self):
        """Gets the arguments of this BTPExpressionBuiltinCall239AllOf.  # noqa: E501


        :return: The arguments of this BTPExpressionBuiltinCall239AllOf.  # noqa: E501
        :rtype: list[BTPExpression9]
        """
        return self._arguments

    @arguments.setter
    def arguments(self, arguments):
        """Sets the arguments of this BTPExpressionBuiltinCall239AllOf.


        :param arguments: The arguments of this BTPExpressionBuiltinCall239AllOf.  # noqa: E501
        :type: list[BTPExpression9]
        """

        self._arguments = arguments

    @property
    def space_in_empty_list(self):
        """Gets the space_in_empty_list of this BTPExpressionBuiltinCall239AllOf.  # noqa: E501


        :return: The space_in_empty_list of this BTPExpressionBuiltinCall239AllOf.  # noqa: E501
        :rtype: BTPSpace10
        """
        return self._space_in_empty_list

    @space_in_empty_list.setter
    def space_in_empty_list(self, space_in_empty_list):
        """Sets the space_in_empty_list of this BTPExpressionBuiltinCall239AllOf.


        :param space_in_empty_list: The space_in_empty_list of this BTPExpressionBuiltinCall239AllOf.  # noqa: E501
        :type: BTPSpace10
        """

        self._space_in_empty_list = space_in_empty_list

    @property
    def name(self):
        """Gets the name of this BTPExpressionBuiltinCall239AllOf.  # noqa: E501


        :return: The name of this BTPExpressionBuiltinCall239AllOf.  # noqa: E501
        :rtype: BTPBuiltinIdentifier233
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTPExpressionBuiltinCall239AllOf.


        :param name: The name of this BTPExpressionBuiltinCall239AllOf.  # noqa: E501
        :type: BTPBuiltinIdentifier233
        """

        self._name = name

    @property
    def bt_type(self):
        """Gets the bt_type of this BTPExpressionBuiltinCall239AllOf.  # noqa: E501


        :return: The bt_type of this BTPExpressionBuiltinCall239AllOf.  # noqa: E501
        :rtype: str
        """
        return self._bt_type

    @bt_type.setter
    def bt_type(self, bt_type):
        """Sets the bt_type of this BTPExpressionBuiltinCall239AllOf.


        :param bt_type: The bt_type of this BTPExpressionBuiltinCall239AllOf.  # noqa: E501
        :type: str
        """

        self._bt_type = bt_type

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
        if not isinstance(other, BTPExpressionBuiltinCall239AllOf):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, BTPExpressionBuiltinCall239AllOf):
            return True

        return self.to_dict() != other.to_dict()
