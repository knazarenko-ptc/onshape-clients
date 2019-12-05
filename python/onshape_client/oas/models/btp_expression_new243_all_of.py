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


class BTPExpressionNew243AllOf(object):
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
        'space_between_new_box': 'BTPSpace10',
        'space_after_box': 'BTPSpace10',
        'value': 'BTPExpression9',
        'bt_type': 'str'
    }

    attribute_map = {
        'space_between_new_box': 'spaceBetweenNewBox',
        'space_after_box': 'spaceAfterBox',
        'value': 'value',
        'bt_type': 'btType'
    }

    def __init__(self, space_between_new_box=None, space_after_box=None, value=None, bt_type=None, local_vars_configuration=None):  # noqa: E501
        """BTPExpressionNew243AllOf - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._space_between_new_box = None
        self._space_after_box = None
        self._value = None
        self._bt_type = None
        self.discriminator = None

        if space_between_new_box is not None:
            self.space_between_new_box = space_between_new_box
        if space_after_box is not None:
            self.space_after_box = space_after_box
        if value is not None:
            self.value = value
        if bt_type is not None:
            self.bt_type = bt_type

    @property
    def space_between_new_box(self):
        """Gets the space_between_new_box of this BTPExpressionNew243AllOf.  # noqa: E501


        :return: The space_between_new_box of this BTPExpressionNew243AllOf.  # noqa: E501
        :rtype: BTPSpace10
        """
        return self._space_between_new_box

    @space_between_new_box.setter
    def space_between_new_box(self, space_between_new_box):
        """Sets the space_between_new_box of this BTPExpressionNew243AllOf.


        :param space_between_new_box: The space_between_new_box of this BTPExpressionNew243AllOf.  # noqa: E501
        :type: BTPSpace10
        """

        self._space_between_new_box = space_between_new_box

    @property
    def space_after_box(self):
        """Gets the space_after_box of this BTPExpressionNew243AllOf.  # noqa: E501


        :return: The space_after_box of this BTPExpressionNew243AllOf.  # noqa: E501
        :rtype: BTPSpace10
        """
        return self._space_after_box

    @space_after_box.setter
    def space_after_box(self, space_after_box):
        """Sets the space_after_box of this BTPExpressionNew243AllOf.


        :param space_after_box: The space_after_box of this BTPExpressionNew243AllOf.  # noqa: E501
        :type: BTPSpace10
        """

        self._space_after_box = space_after_box

    @property
    def value(self):
        """Gets the value of this BTPExpressionNew243AllOf.  # noqa: E501


        :return: The value of this BTPExpressionNew243AllOf.  # noqa: E501
        :rtype: BTPExpression9
        """
        return self._value

    @value.setter
    def value(self, value):
        """Sets the value of this BTPExpressionNew243AllOf.


        :param value: The value of this BTPExpressionNew243AllOf.  # noqa: E501
        :type: BTPExpression9
        """

        self._value = value

    @property
    def bt_type(self):
        """Gets the bt_type of this BTPExpressionNew243AllOf.  # noqa: E501


        :return: The bt_type of this BTPExpressionNew243AllOf.  # noqa: E501
        :rtype: str
        """
        return self._bt_type

    @bt_type.setter
    def bt_type(self, bt_type):
        """Sets the bt_type of this BTPExpressionNew243AllOf.


        :param bt_type: The bt_type of this BTPExpressionNew243AllOf.  # noqa: E501
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
        if not isinstance(other, BTPExpressionNew243AllOf):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, BTPExpressionNew243AllOf):
            return True

        return self.to_dict() != other.to_dict()
