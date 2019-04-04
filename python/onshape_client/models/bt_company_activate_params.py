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


class BTCompanyActivateParams(object):
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
        'payment_type': 'int',
        'plan_id': 'str',
        'seats': 'int'
    }

    attribute_map = {
        'user_id': 'userId',
        'payment_type': 'paymentType',
        'plan_id': 'planId',
        'seats': 'seats'
    }

    def __init__(self, user_id=None, payment_type=None, plan_id=None, seats=None):  # noqa: E501
        """BTCompanyActivateParams - a model defined in OpenAPI"""  # noqa: E501

        self._user_id = None
        self._payment_type = None
        self._plan_id = None
        self._seats = None
        self.discriminator = None

        if user_id is not None:
            self.user_id = user_id
        if payment_type is not None:
            self.payment_type = payment_type
        if plan_id is not None:
            self.plan_id = plan_id
        if seats is not None:
            self.seats = seats

    @property
    def user_id(self):
        """Gets the user_id of this BTCompanyActivateParams.  # noqa: E501


        :return: The user_id of this BTCompanyActivateParams.  # noqa: E501
        :rtype: str
        """
        return self._user_id

    @user_id.setter
    def user_id(self, user_id):
        """Sets the user_id of this BTCompanyActivateParams.


        :param user_id: The user_id of this BTCompanyActivateParams.  # noqa: E501
        :type: str
        """

        self._user_id = user_id

    @property
    def payment_type(self):
        """Gets the payment_type of this BTCompanyActivateParams.  # noqa: E501


        :return: The payment_type of this BTCompanyActivateParams.  # noqa: E501
        :rtype: int
        """
        return self._payment_type

    @payment_type.setter
    def payment_type(self, payment_type):
        """Sets the payment_type of this BTCompanyActivateParams.


        :param payment_type: The payment_type of this BTCompanyActivateParams.  # noqa: E501
        :type: int
        """

        self._payment_type = payment_type

    @property
    def plan_id(self):
        """Gets the plan_id of this BTCompanyActivateParams.  # noqa: E501


        :return: The plan_id of this BTCompanyActivateParams.  # noqa: E501
        :rtype: str
        """
        return self._plan_id

    @plan_id.setter
    def plan_id(self, plan_id):
        """Sets the plan_id of this BTCompanyActivateParams.


        :param plan_id: The plan_id of this BTCompanyActivateParams.  # noqa: E501
        :type: str
        """

        self._plan_id = plan_id

    @property
    def seats(self):
        """Gets the seats of this BTCompanyActivateParams.  # noqa: E501


        :return: The seats of this BTCompanyActivateParams.  # noqa: E501
        :rtype: int
        """
        return self._seats

    @seats.setter
    def seats(self, seats):
        """Sets the seats of this BTCompanyActivateParams.


        :param seats: The seats of this BTCompanyActivateParams.  # noqa: E501
        :type: int
        """

        self._seats = seats

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
        if not isinstance(other, BTCompanyActivateParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
