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


class BTAdminUserRoleParams(object):
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
        'user_id': 'str',
        'role_ids': 'list[str]'
    }

    attribute_map = {
        'user_id': 'userId',
        'role_ids': 'roleIds'
    }

    def __init__(self, user_id=None, role_ids=None):  # noqa: E501
        """BTAdminUserRoleParams - a model defined in OpenAPI"""  # noqa: E501

        self._user_id = None
        self._role_ids = None
        self.discriminator = None

        if user_id is not None:
            self.user_id = user_id
        if role_ids is not None:
            self.role_ids = role_ids

    @property
    def user_id(self):
        """Gets the user_id of this BTAdminUserRoleParams.  # noqa: E501


        :return: The user_id of this BTAdminUserRoleParams.  # noqa: E501
        :rtype: str
        """
        return self._user_id

    @user_id.setter
    def user_id(self, user_id):
        """Sets the user_id of this BTAdminUserRoleParams.


        :param user_id: The user_id of this BTAdminUserRoleParams.  # noqa: E501
        :type: str
        """

        self._user_id = user_id

    @property
    def role_ids(self):
        """Gets the role_ids of this BTAdminUserRoleParams.  # noqa: E501


        :return: The role_ids of this BTAdminUserRoleParams.  # noqa: E501
        :rtype: list[str]
        """
        return self._role_ids

    @role_ids.setter
    def role_ids(self, role_ids):
        """Sets the role_ids of this BTAdminUserRoleParams.


        :param role_ids: The role_ids of this BTAdminUserRoleParams.  # noqa: E501
        :type: list[str]
        """

        self._role_ids = role_ids

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
        if not isinstance(other, BTAdminUserRoleParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
