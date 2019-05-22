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


class BTExportModelEdgeGeometry(object):
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
        'length': 'float',
        'end_point': 'BTVector3d',
        'mid_point': 'BTVector3d',
        'quarter_point': 'BTVector3d',
        'start_vector': 'BTVector3d',
        'end_vector': 'BTVector3d',
        'start_point': 'BTVector3d',
        'type_id': 'int',
        'connection_source': 'BTConnection',
        'export_type_name': 'str',
        'unknown_class': 'bool'
    }

    attribute_map = {
        'length': 'length',
        'end_point': 'endPoint',
        'mid_point': 'midPoint',
        'quarter_point': 'quarterPoint',
        'start_vector': 'startVector',
        'end_vector': 'endVector',
        'start_point': 'startPoint',
        'type_id': 'typeId',
        'connection_source': 'connectionSource',
        'export_type_name': 'exportTypeName',
        'unknown_class': 'unknownClass'
    }

    def __init__(self, length=None, end_point=None, mid_point=None, quarter_point=None, start_vector=None, end_vector=None, start_point=None, type_id=None, connection_source=None, export_type_name=None, unknown_class=None):  # noqa: E501
        """BTExportModelEdgeGeometry - a model defined in OpenAPI"""  # noqa: E501

        self._length = None
        self._end_point = None
        self._mid_point = None
        self._quarter_point = None
        self._start_vector = None
        self._end_vector = None
        self._start_point = None
        self._type_id = None
        self._connection_source = None
        self._export_type_name = None
        self._unknown_class = None
        self.discriminator = None

        if length is not None:
            self.length = length
        if end_point is not None:
            self.end_point = end_point
        if mid_point is not None:
            self.mid_point = mid_point
        if quarter_point is not None:
            self.quarter_point = quarter_point
        if start_vector is not None:
            self.start_vector = start_vector
        if end_vector is not None:
            self.end_vector = end_vector
        if start_point is not None:
            self.start_point = start_point
        if type_id is not None:
            self.type_id = type_id
        if connection_source is not None:
            self.connection_source = connection_source
        if export_type_name is not None:
            self.export_type_name = export_type_name
        if unknown_class is not None:
            self.unknown_class = unknown_class

    @property
    def length(self):
        """Gets the length of this BTExportModelEdgeGeometry.  # noqa: E501


        :return: The length of this BTExportModelEdgeGeometry.  # noqa: E501
        :rtype: float
        """
        return self._length

    @length.setter
    def length(self, length):
        """Sets the length of this BTExportModelEdgeGeometry.


        :param length: The length of this BTExportModelEdgeGeometry.  # noqa: E501
        :type: float
        """

        self._length = length

    @property
    def end_point(self):
        """Gets the end_point of this BTExportModelEdgeGeometry.  # noqa: E501


        :return: The end_point of this BTExportModelEdgeGeometry.  # noqa: E501
        :rtype: BTVector3d
        """
        return self._end_point

    @end_point.setter
    def end_point(self, end_point):
        """Sets the end_point of this BTExportModelEdgeGeometry.


        :param end_point: The end_point of this BTExportModelEdgeGeometry.  # noqa: E501
        :type: BTVector3d
        """

        self._end_point = end_point

    @property
    def mid_point(self):
        """Gets the mid_point of this BTExportModelEdgeGeometry.  # noqa: E501


        :return: The mid_point of this BTExportModelEdgeGeometry.  # noqa: E501
        :rtype: BTVector3d
        """
        return self._mid_point

    @mid_point.setter
    def mid_point(self, mid_point):
        """Sets the mid_point of this BTExportModelEdgeGeometry.


        :param mid_point: The mid_point of this BTExportModelEdgeGeometry.  # noqa: E501
        :type: BTVector3d
        """

        self._mid_point = mid_point

    @property
    def quarter_point(self):
        """Gets the quarter_point of this BTExportModelEdgeGeometry.  # noqa: E501


        :return: The quarter_point of this BTExportModelEdgeGeometry.  # noqa: E501
        :rtype: BTVector3d
        """
        return self._quarter_point

    @quarter_point.setter
    def quarter_point(self, quarter_point):
        """Sets the quarter_point of this BTExportModelEdgeGeometry.


        :param quarter_point: The quarter_point of this BTExportModelEdgeGeometry.  # noqa: E501
        :type: BTVector3d
        """

        self._quarter_point = quarter_point

    @property
    def start_vector(self):
        """Gets the start_vector of this BTExportModelEdgeGeometry.  # noqa: E501


        :return: The start_vector of this BTExportModelEdgeGeometry.  # noqa: E501
        :rtype: BTVector3d
        """
        return self._start_vector

    @start_vector.setter
    def start_vector(self, start_vector):
        """Sets the start_vector of this BTExportModelEdgeGeometry.


        :param start_vector: The start_vector of this BTExportModelEdgeGeometry.  # noqa: E501
        :type: BTVector3d
        """

        self._start_vector = start_vector

    @property
    def end_vector(self):
        """Gets the end_vector of this BTExportModelEdgeGeometry.  # noqa: E501


        :return: The end_vector of this BTExportModelEdgeGeometry.  # noqa: E501
        :rtype: BTVector3d
        """
        return self._end_vector

    @end_vector.setter
    def end_vector(self, end_vector):
        """Sets the end_vector of this BTExportModelEdgeGeometry.


        :param end_vector: The end_vector of this BTExportModelEdgeGeometry.  # noqa: E501
        :type: BTVector3d
        """

        self._end_vector = end_vector

    @property
    def start_point(self):
        """Gets the start_point of this BTExportModelEdgeGeometry.  # noqa: E501


        :return: The start_point of this BTExportModelEdgeGeometry.  # noqa: E501
        :rtype: BTVector3d
        """
        return self._start_point

    @start_point.setter
    def start_point(self, start_point):
        """Sets the start_point of this BTExportModelEdgeGeometry.


        :param start_point: The start_point of this BTExportModelEdgeGeometry.  # noqa: E501
        :type: BTVector3d
        """

        self._start_point = start_point

    @property
    def type_id(self):
        """Gets the type_id of this BTExportModelEdgeGeometry.  # noqa: E501


        :return: The type_id of this BTExportModelEdgeGeometry.  # noqa: E501
        :rtype: int
        """
        return self._type_id

    @type_id.setter
    def type_id(self, type_id):
        """Sets the type_id of this BTExportModelEdgeGeometry.


        :param type_id: The type_id of this BTExportModelEdgeGeometry.  # noqa: E501
        :type: int
        """

        self._type_id = type_id

    @property
    def connection_source(self):
        """Gets the connection_source of this BTExportModelEdgeGeometry.  # noqa: E501


        :return: The connection_source of this BTExportModelEdgeGeometry.  # noqa: E501
        :rtype: BTConnection
        """
        return self._connection_source

    @connection_source.setter
    def connection_source(self, connection_source):
        """Sets the connection_source of this BTExportModelEdgeGeometry.


        :param connection_source: The connection_source of this BTExportModelEdgeGeometry.  # noqa: E501
        :type: BTConnection
        """

        self._connection_source = connection_source

    @property
    def export_type_name(self):
        """Gets the export_type_name of this BTExportModelEdgeGeometry.  # noqa: E501


        :return: The export_type_name of this BTExportModelEdgeGeometry.  # noqa: E501
        :rtype: str
        """
        return self._export_type_name

    @export_type_name.setter
    def export_type_name(self, export_type_name):
        """Sets the export_type_name of this BTExportModelEdgeGeometry.


        :param export_type_name: The export_type_name of this BTExportModelEdgeGeometry.  # noqa: E501
        :type: str
        """

        self._export_type_name = export_type_name

    @property
    def unknown_class(self):
        """Gets the unknown_class of this BTExportModelEdgeGeometry.  # noqa: E501


        :return: The unknown_class of this BTExportModelEdgeGeometry.  # noqa: E501
        :rtype: bool
        """
        return self._unknown_class

    @unknown_class.setter
    def unknown_class(self, unknown_class):
        """Sets the unknown_class of this BTExportModelEdgeGeometry.


        :param unknown_class: The unknown_class of this BTExportModelEdgeGeometry.  # noqa: E501
        :type: bool
        """

        self._unknown_class = unknown_class

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
        if not isinstance(other, BTExportModelEdgeGeometry):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other