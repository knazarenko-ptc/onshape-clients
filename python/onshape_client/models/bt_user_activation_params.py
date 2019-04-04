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


class BTUserActivationParams(object):
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
        'id': 'str',
        'password': 'str',
        'role': 'int',
        'first_name': 'str',
        'last_name': 'str',
        'email': 'str',
        'default_company_name': 'str',
        'phone_number': 'str'
    }

    attribute_map = {
        'id': 'id',
        'password': 'password',
        'role': 'role',
        'first_name': 'firstName',
        'last_name': 'lastName',
        'email': 'email',
        'default_company_name': 'defaultCompanyName',
        'phone_number': 'phoneNumber'
    }

    def __init__(self, id=None, password=None, role=None, first_name=None, last_name=None, email=None, default_company_name=None, phone_number=None):  # noqa: E501
        """BTUserActivationParams - a model defined in OpenAPI"""  # noqa: E501

        self._id = None
        self._password = None
        self._role = None
        self._first_name = None
        self._last_name = None
        self._email = None
        self._default_company_name = None
        self._phone_number = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if password is not None:
            self.password = password
        if role is not None:
            self.role = role
        if first_name is not None:
            self.first_name = first_name
        if last_name is not None:
            self.last_name = last_name
        if email is not None:
            self.email = email
        if default_company_name is not None:
            self.default_company_name = default_company_name
        if phone_number is not None:
            self.phone_number = phone_number

    @property
    def id(self):
        """Gets the id of this BTUserActivationParams.  # noqa: E501


        :return: The id of this BTUserActivationParams.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BTUserActivationParams.


        :param id: The id of this BTUserActivationParams.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def password(self):
        """Gets the password of this BTUserActivationParams.  # noqa: E501


        :return: The password of this BTUserActivationParams.  # noqa: E501
        :rtype: str
        """
        return self._password

    @password.setter
    def password(self, password):
        """Sets the password of this BTUserActivationParams.


        :param password: The password of this BTUserActivationParams.  # noqa: E501
        :type: str
        """

        self._password = password

    @property
    def role(self):
        """Gets the role of this BTUserActivationParams.  # noqa: E501


        :return: The role of this BTUserActivationParams.  # noqa: E501
        :rtype: int
        """
        return self._role

    @role.setter
    def role(self, role):
        """Sets the role of this BTUserActivationParams.


        :param role: The role of this BTUserActivationParams.  # noqa: E501
        :type: int
        """

        self._role = role

    @property
    def first_name(self):
        """Gets the first_name of this BTUserActivationParams.  # noqa: E501


        :return: The first_name of this BTUserActivationParams.  # noqa: E501
        :rtype: str
        """
        return self._first_name

    @first_name.setter
    def first_name(self, first_name):
        """Sets the first_name of this BTUserActivationParams.


        :param first_name: The first_name of this BTUserActivationParams.  # noqa: E501
        :type: str
        """

        self._first_name = first_name

    @property
    def last_name(self):
        """Gets the last_name of this BTUserActivationParams.  # noqa: E501


        :return: The last_name of this BTUserActivationParams.  # noqa: E501
        :rtype: str
        """
        return self._last_name

    @last_name.setter
    def last_name(self, last_name):
        """Sets the last_name of this BTUserActivationParams.


        :param last_name: The last_name of this BTUserActivationParams.  # noqa: E501
        :type: str
        """

        self._last_name = last_name

    @property
    def email(self):
        """Gets the email of this BTUserActivationParams.  # noqa: E501


        :return: The email of this BTUserActivationParams.  # noqa: E501
        :rtype: str
        """
        return self._email

    @email.setter
    def email(self, email):
        """Sets the email of this BTUserActivationParams.


        :param email: The email of this BTUserActivationParams.  # noqa: E501
        :type: str
        """

        self._email = email

    @property
    def default_company_name(self):
        """Gets the default_company_name of this BTUserActivationParams.  # noqa: E501


        :return: The default_company_name of this BTUserActivationParams.  # noqa: E501
        :rtype: str
        """
        return self._default_company_name

    @default_company_name.setter
    def default_company_name(self, default_company_name):
        """Sets the default_company_name of this BTUserActivationParams.


        :param default_company_name: The default_company_name of this BTUserActivationParams.  # noqa: E501
        :type: str
        """

        self._default_company_name = default_company_name

    @property
    def phone_number(self):
        """Gets the phone_number of this BTUserActivationParams.  # noqa: E501


        :return: The phone_number of this BTUserActivationParams.  # noqa: E501
        :rtype: str
        """
        return self._phone_number

    @phone_number.setter
    def phone_number(self, phone_number):
        """Sets the phone_number of this BTUserActivationParams.


        :param phone_number: The phone_number of this BTUserActivationParams.  # noqa: E501
        :type: str
        """

        self._phone_number = phone_number

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
        if not isinstance(other, BTUserActivationParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
