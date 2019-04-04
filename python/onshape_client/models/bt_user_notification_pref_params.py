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


class BTUserNotificationPrefParams(object):
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
        'type': 'int',
        'level': 'int',
        'object_type': 'int',
        'object_id': 'str'
    }

    attribute_map = {
        'type': 'type',
        'level': 'level',
        'object_type': 'objectType',
        'object_id': 'objectId'
    }

    def __init__(self, type=None, level=None, object_type=None, object_id=None):  # noqa: E501
        """BTUserNotificationPrefParams - a model defined in OpenAPI"""  # noqa: E501

        self._type = None
        self._level = None
        self._object_type = None
        self._object_id = None
        self.discriminator = None

        if type is not None:
            self.type = type
        if level is not None:
            self.level = level
        if object_type is not None:
            self.object_type = object_type
        if object_id is not None:
            self.object_id = object_id

    @property
    def type(self):
        """Gets the type of this BTUserNotificationPrefParams.  # noqa: E501


        :return: The type of this BTUserNotificationPrefParams.  # noqa: E501
        :rtype: int
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this BTUserNotificationPrefParams.


        :param type: The type of this BTUserNotificationPrefParams.  # noqa: E501
        :type: int
        """

        self._type = type

    @property
    def level(self):
        """Gets the level of this BTUserNotificationPrefParams.  # noqa: E501


        :return: The level of this BTUserNotificationPrefParams.  # noqa: E501
        :rtype: int
        """
        return self._level

    @level.setter
    def level(self, level):
        """Sets the level of this BTUserNotificationPrefParams.


        :param level: The level of this BTUserNotificationPrefParams.  # noqa: E501
        :type: int
        """

        self._level = level

    @property
    def object_type(self):
        """Gets the object_type of this BTUserNotificationPrefParams.  # noqa: E501


        :return: The object_type of this BTUserNotificationPrefParams.  # noqa: E501
        :rtype: int
        """
        return self._object_type

    @object_type.setter
    def object_type(self, object_type):
        """Sets the object_type of this BTUserNotificationPrefParams.


        :param object_type: The object_type of this BTUserNotificationPrefParams.  # noqa: E501
        :type: int
        """

        self._object_type = object_type

    @property
    def object_id(self):
        """Gets the object_id of this BTUserNotificationPrefParams.  # noqa: E501


        :return: The object_id of this BTUserNotificationPrefParams.  # noqa: E501
        :rtype: str
        """
        return self._object_id

    @object_id.setter
    def object_id(self, object_id):
        """Sets the object_id of this BTUserNotificationPrefParams.


        :param object_id: The object_id of this BTUserNotificationPrefParams.  # noqa: E501
        :type: str
        """

        self._object_id = object_id

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
        if not isinstance(other, BTUserNotificationPrefParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
