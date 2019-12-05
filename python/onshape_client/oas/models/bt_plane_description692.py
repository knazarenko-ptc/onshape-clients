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


class BTPlaneDescription692(object):
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
        'normal': 'BTVector3d389',
        'is_oriented_with_face': 'bool',
        'origin': 'BTVector3d389',
        'bt_type': 'str'
    }

    attribute_map = {
        'normal': 'normal',
        'is_oriented_with_face': 'isOrientedWithFace',
        'origin': 'origin',
        'bt_type': 'btType'
    }

    def __init__(self, normal=None, is_oriented_with_face=None, origin=None, bt_type=None, local_vars_configuration=None):  # noqa: E501
        """BTPlaneDescription692 - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._normal = None
        self._is_oriented_with_face = None
        self._origin = None
        self._bt_type = None
        self.discriminator = None

        if normal is not None:
            self.normal = normal
        if is_oriented_with_face is not None:
            self.is_oriented_with_face = is_oriented_with_face
        if origin is not None:
            self.origin = origin
        if bt_type is not None:
            self.bt_type = bt_type

    @property
    def normal(self):
        """Gets the normal of this BTPlaneDescription692.  # noqa: E501


        :return: The normal of this BTPlaneDescription692.  # noqa: E501
        :rtype: BTVector3d389
        """
        return self._normal

    @normal.setter
    def normal(self, normal):
        """Sets the normal of this BTPlaneDescription692.


        :param normal: The normal of this BTPlaneDescription692.  # noqa: E501
        :type: BTVector3d389
        """

        self._normal = normal

    @property
    def is_oriented_with_face(self):
        """Gets the is_oriented_with_face of this BTPlaneDescription692.  # noqa: E501


        :return: The is_oriented_with_face of this BTPlaneDescription692.  # noqa: E501
        :rtype: bool
        """
        return self._is_oriented_with_face

    @is_oriented_with_face.setter
    def is_oriented_with_face(self, is_oriented_with_face):
        """Sets the is_oriented_with_face of this BTPlaneDescription692.


        :param is_oriented_with_face: The is_oriented_with_face of this BTPlaneDescription692.  # noqa: E501
        :type: bool
        """

        self._is_oriented_with_face = is_oriented_with_face

    @property
    def origin(self):
        """Gets the origin of this BTPlaneDescription692.  # noqa: E501


        :return: The origin of this BTPlaneDescription692.  # noqa: E501
        :rtype: BTVector3d389
        """
        return self._origin

    @origin.setter
    def origin(self, origin):
        """Sets the origin of this BTPlaneDescription692.


        :param origin: The origin of this BTPlaneDescription692.  # noqa: E501
        :type: BTVector3d389
        """

        self._origin = origin

    @property
    def bt_type(self):
        """Gets the bt_type of this BTPlaneDescription692.  # noqa: E501


        :return: The bt_type of this BTPlaneDescription692.  # noqa: E501
        :rtype: str
        """
        return self._bt_type

    @bt_type.setter
    def bt_type(self, bt_type):
        """Sets the bt_type of this BTPlaneDescription692.


        :param bt_type: The bt_type of this BTPlaneDescription692.  # noqa: E501
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
        if not isinstance(other, BTPlaneDescription692):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, BTPlaneDescription692):
            return True

        return self.to_dict() != other.to_dict()
