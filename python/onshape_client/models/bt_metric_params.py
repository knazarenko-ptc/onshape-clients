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


class BTMetricParams(object):
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
        'system_id': 'str',
        'element_property_map': 'dict(str, object)',
        'document_id': 'str',
        'element_id': 'str',
        'event_type': 'int',
        'event_name': 'str',
        'event_namespace': 'str',
        'event_time': 'datetime'
    }

    attribute_map = {
        'system_id': 'systemId',
        'element_property_map': 'propertyMap',
        'document_id': 'documentId',
        'element_id': 'elementId',
        'event_type': 'eventType',
        'event_name': 'eventName',
        'event_namespace': 'eventNamespace',
        'event_time': 'eventTime'
    }

    def __init__(self, system_id=None, property_map=None, document_id=None, element_id=None, event_type=None, event_name=None, event_namespace=None, event_time=None):  # noqa: E501
        """BTMetricParams - a model defined in OpenAPI"""  # noqa: E501

        self._system_id = None
        self._property_map = None
        self._document_id = None
        self._element_id = None
        self._event_type = None
        self._event_name = None
        self._event_namespace = None
        self._event_time = None
        self.discriminator = None

        if system_id is not None:
            self.system_id = system_id
        if property_map is not None:
            self.property_map = property_map
        if document_id is not None:
            self.document_id = document_id
        if element_id is not None:
            self.element_id = element_id
        if event_type is not None:
            self.event_type = event_type
        if event_name is not None:
            self.event_name = event_name
        if event_namespace is not None:
            self.event_namespace = event_namespace
        if event_time is not None:
            self.event_time = event_time

    @property
    def system_id(self):
        """Gets the system_id of this BTMetricParams.  # noqa: E501


        :return: The system_id of this BTMetricParams.  # noqa: E501
        :rtype: str
        """
        return self._system_id

    @system_id.setter
    def system_id(self, system_id):
        """Sets the system_id of this BTMetricParams.


        :param system_id: The system_id of this BTMetricParams.  # noqa: E501
        :type: str
        """

        self._system_id = system_id

    @property
    def property_map(self):
        """Gets the element_property_map of this BTMetricParams.  # noqa: E501


        :return: The element_property_map of this BTMetricParams.  # noqa: E501
        :rtype: dict(str, object)
        """
        return self._property_map

    @property_map.setter
    def property_map(self, property_map):
        """Sets the element_property_map of this BTMetricParams.


        :param property_map: The element_property_map of this BTMetricParams.  # noqa: E501
        :type: dict(str, object)
        """

        self._property_map = property_map

    @property
    def document_id(self):
        """Gets the document_id of this BTMetricParams.  # noqa: E501


        :return: The document_id of this BTMetricParams.  # noqa: E501
        :rtype: str
        """
        return self._document_id

    @document_id.setter
    def document_id(self, document_id):
        """Sets the document_id of this BTMetricParams.


        :param document_id: The document_id of this BTMetricParams.  # noqa: E501
        :type: str
        """

        self._document_id = document_id

    @property
    def element_id(self):
        """Gets the element_id of this BTMetricParams.  # noqa: E501


        :return: The element_id of this BTMetricParams.  # noqa: E501
        :rtype: str
        """
        return self._element_id

    @element_id.setter
    def element_id(self, element_id):
        """Sets the element_id of this BTMetricParams.


        :param element_id: The element_id of this BTMetricParams.  # noqa: E501
        :type: str
        """

        self._element_id = element_id

    @property
    def event_type(self):
        """Gets the event_type of this BTMetricParams.  # noqa: E501


        :return: The event_type of this BTMetricParams.  # noqa: E501
        :rtype: int
        """
        return self._event_type

    @event_type.setter
    def event_type(self, event_type):
        """Sets the event_type of this BTMetricParams.


        :param event_type: The event_type of this BTMetricParams.  # noqa: E501
        :type: int
        """

        self._event_type = event_type

    @property
    def event_name(self):
        """Gets the event_name of this BTMetricParams.  # noqa: E501


        :return: The event_name of this BTMetricParams.  # noqa: E501
        :rtype: str
        """
        return self._event_name

    @event_name.setter
    def event_name(self, event_name):
        """Sets the event_name of this BTMetricParams.


        :param event_name: The event_name of this BTMetricParams.  # noqa: E501
        :type: str
        """

        self._event_name = event_name

    @property
    def event_namespace(self):
        """Gets the event_namespace of this BTMetricParams.  # noqa: E501


        :return: The event_namespace of this BTMetricParams.  # noqa: E501
        :rtype: str
        """
        return self._event_namespace

    @event_namespace.setter
    def event_namespace(self, event_namespace):
        """Sets the event_namespace of this BTMetricParams.


        :param event_namespace: The event_namespace of this BTMetricParams.  # noqa: E501
        :type: str
        """

        self._event_namespace = event_namespace

    @property
    def event_time(self):
        """Gets the event_time of this BTMetricParams.  # noqa: E501


        :return: The event_time of this BTMetricParams.  # noqa: E501
        :rtype: datetime
        """
        return self._event_time

    @event_time.setter
    def event_time(self, event_time):
        """Sets the event_time of this BTMetricParams.


        :param event_time: The event_time of this BTMetricParams.  # noqa: E501
        :type: datetime
        """

        self._event_time = event_time

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
        if not isinstance(other, BTMetricParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
