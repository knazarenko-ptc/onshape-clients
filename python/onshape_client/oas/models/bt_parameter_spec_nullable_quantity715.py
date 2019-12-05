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


class BTParameterSpecNullableQuantity715(object):
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
        'quantity_type': 'str',
        'ranges': 'list[BTNullableQuantityRange1340]',
        'bt_type': 'str'
    }

    attribute_map = {
        'quantity_type': 'quantityType',
        'ranges': 'ranges',
        'bt_type': 'btType'
    }

    def __init__(self, quantity_type=None, ranges=None, bt_type=None, local_vars_configuration=None):  # noqa: E501
        """BTParameterSpecNullableQuantity715 - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._quantity_type = None
        self._ranges = None
        self._bt_type = None
        self.discriminator = None

        if quantity_type is not None:
            self.quantity_type = quantity_type
        if ranges is not None:
            self.ranges = ranges
        if bt_type is not None:
            self.bt_type = bt_type

    @property
    def quantity_type(self):
        """Gets the quantity_type of this BTParameterSpecNullableQuantity715.  # noqa: E501


        :return: The quantity_type of this BTParameterSpecNullableQuantity715.  # noqa: E501
        :rtype: str
        """
        return self._quantity_type

    @quantity_type.setter
    def quantity_type(self, quantity_type):
        """Sets the quantity_type of this BTParameterSpecNullableQuantity715.


        :param quantity_type: The quantity_type of this BTParameterSpecNullableQuantity715.  # noqa: E501
        :type: str
        """
        allowed_values = ["UNKNOWN", "INTEGER", "REAL", "LENGTH", "ANGLE", "MASS", "TIME", "TEMPERATURE", "CURRENT", "ANYTHING"]  # noqa: E501
        if self.local_vars_configuration.client_side_validation and quantity_type not in allowed_values:  # noqa: E501
            raise ValueError(
                "Invalid value for `quantity_type` ({0}), must be one of {1}"  # noqa: E501
                .format(quantity_type, allowed_values)
            )

        self._quantity_type = quantity_type

    @property
    def ranges(self):
        """Gets the ranges of this BTParameterSpecNullableQuantity715.  # noqa: E501


        :return: The ranges of this BTParameterSpecNullableQuantity715.  # noqa: E501
        :rtype: list[BTNullableQuantityRange1340]
        """
        return self._ranges

    @ranges.setter
    def ranges(self, ranges):
        """Sets the ranges of this BTParameterSpecNullableQuantity715.


        :param ranges: The ranges of this BTParameterSpecNullableQuantity715.  # noqa: E501
        :type: list[BTNullableQuantityRange1340]
        """

        self._ranges = ranges

    @property
    def bt_type(self):
        """Gets the bt_type of this BTParameterSpecNullableQuantity715.  # noqa: E501


        :return: The bt_type of this BTParameterSpecNullableQuantity715.  # noqa: E501
        :rtype: str
        """
        return self._bt_type

    @bt_type.setter
    def bt_type(self, bt_type):
        """Sets the bt_type of this BTParameterSpecNullableQuantity715.


        :param bt_type: The bt_type of this BTParameterSpecNullableQuantity715.  # noqa: E501
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
        if not isinstance(other, BTParameterSpecNullableQuantity715):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, BTParameterSpecNullableQuantity715):
            return True

        return self.to_dict() != other.to_dict()
