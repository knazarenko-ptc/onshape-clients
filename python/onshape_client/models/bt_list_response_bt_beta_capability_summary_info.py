# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    OpenAPI spec version: 1.97
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class BTListResponseBTBetaCapabilitySummaryInfo(object):
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
        'next': 'str',
        'href': 'str',
        'items': 'list[BTBetaCapabilitySummaryInfo]',
        'previous': 'str'
    }

    attribute_map = {
        'next': 'next',
        'href': 'href',
        'items': 'items',
        'previous': 'previous'
    }

    def __init__(self, next=None, href=None, items=None, previous=None):  # noqa: E501
        """BTListResponseBTBetaCapabilitySummaryInfo - a model defined in OpenAPI"""  # noqa: E501

        self._next = None
        self._href = None
        self._items = None
        self._previous = None
        self.discriminator = None

        if next is not None:
            self.next = next
        if href is not None:
            self.href = href
        if items is not None:
            self.items = items
        if previous is not None:
            self.previous = previous

    @property
    def next(self):
        """Gets the next of this BTListResponseBTBetaCapabilitySummaryInfo.  # noqa: E501


        :return: The next of this BTListResponseBTBetaCapabilitySummaryInfo.  # noqa: E501
        :rtype: str
        """
        return self._next

    @next.setter
    def next(self, next):
        """Sets the next of this BTListResponseBTBetaCapabilitySummaryInfo.


        :param next: The next of this BTListResponseBTBetaCapabilitySummaryInfo.  # noqa: E501
        :type: str
        """

        self._next = next

    @property
    def href(self):
        """Gets the href of this BTListResponseBTBetaCapabilitySummaryInfo.  # noqa: E501


        :return: The href of this BTListResponseBTBetaCapabilitySummaryInfo.  # noqa: E501
        :rtype: str
        """
        return self._href

    @href.setter
    def href(self, href):
        """Sets the href of this BTListResponseBTBetaCapabilitySummaryInfo.


        :param href: The href of this BTListResponseBTBetaCapabilitySummaryInfo.  # noqa: E501
        :type: str
        """

        self._href = href

    @property
    def items(self):
        """Gets the items of this BTListResponseBTBetaCapabilitySummaryInfo.  # noqa: E501


        :return: The items of this BTListResponseBTBetaCapabilitySummaryInfo.  # noqa: E501
        :rtype: list[BTBetaCapabilitySummaryInfo]
        """
        return self._items

    @items.setter
    def items(self, items):
        """Sets the items of this BTListResponseBTBetaCapabilitySummaryInfo.


        :param items: The items of this BTListResponseBTBetaCapabilitySummaryInfo.  # noqa: E501
        :type: list[BTBetaCapabilitySummaryInfo]
        """

        self._items = items

    @property
    def previous(self):
        """Gets the previous of this BTListResponseBTBetaCapabilitySummaryInfo.  # noqa: E501


        :return: The previous of this BTListResponseBTBetaCapabilitySummaryInfo.  # noqa: E501
        :rtype: str
        """
        return self._previous

    @previous.setter
    def previous(self, previous):
        """Sets the previous of this BTListResponseBTBetaCapabilitySummaryInfo.


        :param previous: The previous of this BTListResponseBTBetaCapabilitySummaryInfo.  # noqa: E501
        :type: str
        """

        self._previous = previous

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
        if not isinstance(other, BTListResponseBTBetaCapabilitySummaryInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other