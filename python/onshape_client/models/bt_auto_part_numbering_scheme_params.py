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


class BTAutoPartNumberingSchemeParams(object):
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
        'scheme_id': 'str',
        'assembly_prefix': 'str',
        'drawing_prefix': 'str',
        'file_prefix': 'str',
        'part_prefix': 'str',
        'next_number': 'int',
        'next_number_min_width': 'int'
    }

    attribute_map = {
        'scheme_id': 'schemeId',
        'assembly_prefix': 'assemblyPrefix',
        'drawing_prefix': 'drawingPrefix',
        'file_prefix': 'filePrefix',
        'part_prefix': 'partPrefix',
        'next_number': 'nextNumber',
        'next_number_min_width': 'nextNumberMinWidth'
    }

    def __init__(self, scheme_id=None, assembly_prefix=None, drawing_prefix=None, file_prefix=None, part_prefix=None, next_number=None, next_number_min_width=None):  # noqa: E501
        """BTAutoPartNumberingSchemeParams - a model defined in OpenAPI"""  # noqa: E501

        self._scheme_id = None
        self._assembly_prefix = None
        self._drawing_prefix = None
        self._file_prefix = None
        self._part_prefix = None
        self._next_number = None
        self._next_number_min_width = None
        self.discriminator = None

        if scheme_id is not None:
            self.scheme_id = scheme_id
        if assembly_prefix is not None:
            self.assembly_prefix = assembly_prefix
        if drawing_prefix is not None:
            self.drawing_prefix = drawing_prefix
        if file_prefix is not None:
            self.file_prefix = file_prefix
        if part_prefix is not None:
            self.part_prefix = part_prefix
        if next_number is not None:
            self.next_number = next_number
        if next_number_min_width is not None:
            self.next_number_min_width = next_number_min_width

    @property
    def scheme_id(self):
        """Gets the scheme_id of this BTAutoPartNumberingSchemeParams.  # noqa: E501


        :return: The scheme_id of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :rtype: str
        """
        return self._scheme_id

    @scheme_id.setter
    def scheme_id(self, scheme_id):
        """Sets the scheme_id of this BTAutoPartNumberingSchemeParams.


        :param scheme_id: The scheme_id of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :type: str
        """

        self._scheme_id = scheme_id

    @property
    def assembly_prefix(self):
        """Gets the assembly_prefix of this BTAutoPartNumberingSchemeParams.  # noqa: E501


        :return: The assembly_prefix of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :rtype: str
        """
        return self._assembly_prefix

    @assembly_prefix.setter
    def assembly_prefix(self, assembly_prefix):
        """Sets the assembly_prefix of this BTAutoPartNumberingSchemeParams.


        :param assembly_prefix: The assembly_prefix of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :type: str
        """

        self._assembly_prefix = assembly_prefix

    @property
    def drawing_prefix(self):
        """Gets the drawing_prefix of this BTAutoPartNumberingSchemeParams.  # noqa: E501


        :return: The drawing_prefix of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :rtype: str
        """
        return self._drawing_prefix

    @drawing_prefix.setter
    def drawing_prefix(self, drawing_prefix):
        """Sets the drawing_prefix of this BTAutoPartNumberingSchemeParams.


        :param drawing_prefix: The drawing_prefix of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :type: str
        """

        self._drawing_prefix = drawing_prefix

    @property
    def file_prefix(self):
        """Gets the file_prefix of this BTAutoPartNumberingSchemeParams.  # noqa: E501


        :return: The file_prefix of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :rtype: str
        """
        return self._file_prefix

    @file_prefix.setter
    def file_prefix(self, file_prefix):
        """Sets the file_prefix of this BTAutoPartNumberingSchemeParams.


        :param file_prefix: The file_prefix of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :type: str
        """

        self._file_prefix = file_prefix

    @property
    def part_prefix(self):
        """Gets the part_prefix of this BTAutoPartNumberingSchemeParams.  # noqa: E501


        :return: The part_prefix of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :rtype: str
        """
        return self._part_prefix

    @part_prefix.setter
    def part_prefix(self, part_prefix):
        """Sets the part_prefix of this BTAutoPartNumberingSchemeParams.


        :param part_prefix: The part_prefix of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :type: str
        """

        self._part_prefix = part_prefix

    @property
    def next_number(self):
        """Gets the next_number of this BTAutoPartNumberingSchemeParams.  # noqa: E501


        :return: The next_number of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :rtype: int
        """
        return self._next_number

    @next_number.setter
    def next_number(self, next_number):
        """Sets the next_number of this BTAutoPartNumberingSchemeParams.


        :param next_number: The next_number of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :type: int
        """

        self._next_number = next_number

    @property
    def next_number_min_width(self):
        """Gets the next_number_min_width of this BTAutoPartNumberingSchemeParams.  # noqa: E501


        :return: The next_number_min_width of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :rtype: int
        """
        return self._next_number_min_width

    @next_number_min_width.setter
    def next_number_min_width(self, next_number_min_width):
        """Sets the next_number_min_width of this BTAutoPartNumberingSchemeParams.


        :param next_number_min_width: The next_number_min_width of this BTAutoPartNumberingSchemeParams.  # noqa: E501
        :type: int
        """

        self._next_number_min_width = next_number_min_width

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
        if not isinstance(other, BTAutoPartNumberingSchemeParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
