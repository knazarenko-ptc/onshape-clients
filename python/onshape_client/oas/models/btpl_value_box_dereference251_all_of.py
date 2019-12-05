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


class BTPLValueBoxDereference251AllOf(object):
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
        'space_inside': 'BTPSpace10',
        'box': 'BTPExpression9',
        'bt_type': 'str'
    }

    attribute_map = {
        'space_inside': 'spaceInside',
        'box': 'box',
        'bt_type': 'btType'
    }

    def __init__(self, space_inside=None, box=None, bt_type=None, local_vars_configuration=None):  # noqa: E501
        """BTPLValueBoxDereference251AllOf - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._space_inside = None
        self._box = None
        self._bt_type = None
        self.discriminator = None

        if space_inside is not None:
            self.space_inside = space_inside
        if box is not None:
            self.box = box
        if bt_type is not None:
            self.bt_type = bt_type

    @property
    def space_inside(self):
        """Gets the space_inside of this BTPLValueBoxDereference251AllOf.  # noqa: E501


        :return: The space_inside of this BTPLValueBoxDereference251AllOf.  # noqa: E501
        :rtype: BTPSpace10
        """
        return self._space_inside

    @space_inside.setter
    def space_inside(self, space_inside):
        """Sets the space_inside of this BTPLValueBoxDereference251AllOf.


        :param space_inside: The space_inside of this BTPLValueBoxDereference251AllOf.  # noqa: E501
        :type: BTPSpace10
        """

        self._space_inside = space_inside

    @property
    def box(self):
        """Gets the box of this BTPLValueBoxDereference251AllOf.  # noqa: E501


        :return: The box of this BTPLValueBoxDereference251AllOf.  # noqa: E501
        :rtype: BTPExpression9
        """
        return self._box

    @box.setter
    def box(self, box):
        """Sets the box of this BTPLValueBoxDereference251AllOf.


        :param box: The box of this BTPLValueBoxDereference251AllOf.  # noqa: E501
        :type: BTPExpression9
        """

        self._box = box

    @property
    def bt_type(self):
        """Gets the bt_type of this BTPLValueBoxDereference251AllOf.  # noqa: E501


        :return: The bt_type of this BTPLValueBoxDereference251AllOf.  # noqa: E501
        :rtype: str
        """
        return self._bt_type

    @bt_type.setter
    def bt_type(self, bt_type):
        """Sets the bt_type of this BTPLValueBoxDereference251AllOf.


        :param bt_type: The bt_type of this BTPLValueBoxDereference251AllOf.  # noqa: E501
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
        if not isinstance(other, BTPLValueBoxDereference251AllOf):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, BTPLValueBoxDereference251AllOf):
            return True

        return self.to_dict() != other.to_dict()
