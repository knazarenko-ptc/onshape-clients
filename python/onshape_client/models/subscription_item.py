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


class SubscriptionItem(object):
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
        'object': 'str',
        'created': 'int',
        'plan': 'Plan',
        'quantity': 'int'
    }

    attribute_map = {
        'id': 'id',
        'object': 'object',
        'created': 'created',
        'plan': 'plan',
        'quantity': 'quantity'
    }

    def __init__(self, id=None, object=None, created=None, plan=None, quantity=None):  # noqa: E501
        """SubscriptionItem - a model defined in OpenAPI"""  # noqa: E501

        self._id = None
        self._object = None
        self._created = None
        self._plan = None
        self._quantity = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if object is not None:
            self.object = object
        if created is not None:
            self.created = created
        if plan is not None:
            self.plan = plan
        if quantity is not None:
            self.quantity = quantity

    @property
    def id(self):
        """Gets the id of this SubscriptionItem.  # noqa: E501


        :return: The id of this SubscriptionItem.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this SubscriptionItem.


        :param id: The id of this SubscriptionItem.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def object(self):
        """Gets the object of this SubscriptionItem.  # noqa: E501


        :return: The object of this SubscriptionItem.  # noqa: E501
        :rtype: str
        """
        return self._object

    @object.setter
    def object(self, object):
        """Sets the object of this SubscriptionItem.


        :param object: The object of this SubscriptionItem.  # noqa: E501
        :type: str
        """

        self._object = object

    @property
    def created(self):
        """Gets the created of this SubscriptionItem.  # noqa: E501


        :return: The created of this SubscriptionItem.  # noqa: E501
        :rtype: int
        """
        return self._created

    @created.setter
    def created(self, created):
        """Sets the created of this SubscriptionItem.


        :param created: The created of this SubscriptionItem.  # noqa: E501
        :type: int
        """

        self._created = created

    @property
    def plan(self):
        """Gets the plan of this SubscriptionItem.  # noqa: E501


        :return: The plan of this SubscriptionItem.  # noqa: E501
        :rtype: Plan
        """
        return self._plan

    @plan.setter
    def plan(self, plan):
        """Sets the plan of this SubscriptionItem.


        :param plan: The plan of this SubscriptionItem.  # noqa: E501
        :type: Plan
        """

        self._plan = plan

    @property
    def quantity(self):
        """Gets the quantity of this SubscriptionItem.  # noqa: E501


        :return: The quantity of this SubscriptionItem.  # noqa: E501
        :rtype: int
        """
        return self._quantity

    @quantity.setter
    def quantity(self, quantity):
        """Sets the quantity of this SubscriptionItem.


        :param quantity: The quantity of this SubscriptionItem.  # noqa: E501
        :type: int
        """

        self._quantity = quantity

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
        if not isinstance(other, SubscriptionItem):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
