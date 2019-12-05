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


class BTFeatureScriptEvalResponse1859(object):
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
        'notices': 'list[BTNotice227]',
        'console': 'str',
        'result': 'BTFSValue1888',
        'serialization_version': 'str',
        'source_microversion': 'str',
        'reject_microversion_skew': 'bool',
        'microversion_skew': 'bool',
        'library_version': 'int',
        'bt_type': 'str'
    }

    attribute_map = {
        'notices': 'notices',
        'console': 'console',
        'result': 'result',
        'serialization_version': 'serializationVersion',
        'source_microversion': 'sourceMicroversion',
        'reject_microversion_skew': 'rejectMicroversionSkew',
        'microversion_skew': 'microversionSkew',
        'library_version': 'libraryVersion',
        'bt_type': 'btType'
    }

    def __init__(self, notices=None, console=None, result=None, serialization_version=None, source_microversion=None, reject_microversion_skew=None, microversion_skew=None, library_version=None, bt_type=None, local_vars_configuration=None):  # noqa: E501
        """BTFeatureScriptEvalResponse1859 - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._notices = None
        self._console = None
        self._result = None
        self._serialization_version = None
        self._source_microversion = None
        self._reject_microversion_skew = None
        self._microversion_skew = None
        self._library_version = None
        self._bt_type = None
        self.discriminator = None

        if notices is not None:
            self.notices = notices
        if console is not None:
            self.console = console
        if result is not None:
            self.result = result
        if serialization_version is not None:
            self.serialization_version = serialization_version
        if source_microversion is not None:
            self.source_microversion = source_microversion
        if reject_microversion_skew is not None:
            self.reject_microversion_skew = reject_microversion_skew
        if microversion_skew is not None:
            self.microversion_skew = microversion_skew
        if library_version is not None:
            self.library_version = library_version
        if bt_type is not None:
            self.bt_type = bt_type

    @property
    def notices(self):
        """Gets the notices of this BTFeatureScriptEvalResponse1859.  # noqa: E501


        :return: The notices of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :rtype: list[BTNotice227]
        """
        return self._notices

    @notices.setter
    def notices(self, notices):
        """Sets the notices of this BTFeatureScriptEvalResponse1859.


        :param notices: The notices of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :type: list[BTNotice227]
        """

        self._notices = notices

    @property
    def console(self):
        """Gets the console of this BTFeatureScriptEvalResponse1859.  # noqa: E501


        :return: The console of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :rtype: str
        """
        return self._console

    @console.setter
    def console(self, console):
        """Sets the console of this BTFeatureScriptEvalResponse1859.


        :param console: The console of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :type: str
        """

        self._console = console

    @property
    def result(self):
        """Gets the result of this BTFeatureScriptEvalResponse1859.  # noqa: E501


        :return: The result of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :rtype: BTFSValue1888
        """
        return self._result

    @result.setter
    def result(self, result):
        """Sets the result of this BTFeatureScriptEvalResponse1859.


        :param result: The result of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :type: BTFSValue1888
        """

        self._result = result

    @property
    def serialization_version(self):
        """Gets the serialization_version of this BTFeatureScriptEvalResponse1859.  # noqa: E501


        :return: The serialization_version of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :rtype: str
        """
        return self._serialization_version

    @serialization_version.setter
    def serialization_version(self, serialization_version):
        """Sets the serialization_version of this BTFeatureScriptEvalResponse1859.


        :param serialization_version: The serialization_version of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :type: str
        """

        self._serialization_version = serialization_version

    @property
    def source_microversion(self):
        """Gets the source_microversion of this BTFeatureScriptEvalResponse1859.  # noqa: E501


        :return: The source_microversion of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :rtype: str
        """
        return self._source_microversion

    @source_microversion.setter
    def source_microversion(self, source_microversion):
        """Sets the source_microversion of this BTFeatureScriptEvalResponse1859.


        :param source_microversion: The source_microversion of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :type: str
        """

        self._source_microversion = source_microversion

    @property
    def reject_microversion_skew(self):
        """Gets the reject_microversion_skew of this BTFeatureScriptEvalResponse1859.  # noqa: E501


        :return: The reject_microversion_skew of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :rtype: bool
        """
        return self._reject_microversion_skew

    @reject_microversion_skew.setter
    def reject_microversion_skew(self, reject_microversion_skew):
        """Sets the reject_microversion_skew of this BTFeatureScriptEvalResponse1859.


        :param reject_microversion_skew: The reject_microversion_skew of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :type: bool
        """

        self._reject_microversion_skew = reject_microversion_skew

    @property
    def microversion_skew(self):
        """Gets the microversion_skew of this BTFeatureScriptEvalResponse1859.  # noqa: E501


        :return: The microversion_skew of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :rtype: bool
        """
        return self._microversion_skew

    @microversion_skew.setter
    def microversion_skew(self, microversion_skew):
        """Sets the microversion_skew of this BTFeatureScriptEvalResponse1859.


        :param microversion_skew: The microversion_skew of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :type: bool
        """

        self._microversion_skew = microversion_skew

    @property
    def library_version(self):
        """Gets the library_version of this BTFeatureScriptEvalResponse1859.  # noqa: E501


        :return: The library_version of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :rtype: int
        """
        return self._library_version

    @library_version.setter
    def library_version(self, library_version):
        """Sets the library_version of this BTFeatureScriptEvalResponse1859.


        :param library_version: The library_version of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :type: int
        """

        self._library_version = library_version

    @property
    def bt_type(self):
        """Gets the bt_type of this BTFeatureScriptEvalResponse1859.  # noqa: E501


        :return: The bt_type of this BTFeatureScriptEvalResponse1859.  # noqa: E501
        :rtype: str
        """
        return self._bt_type

    @bt_type.setter
    def bt_type(self, bt_type):
        """Sets the bt_type of this BTFeatureScriptEvalResponse1859.


        :param bt_type: The bt_type of this BTFeatureScriptEvalResponse1859.  # noqa: E501
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
        if not isinstance(other, BTFeatureScriptEvalResponse1859):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, BTFeatureScriptEvalResponse1859):
            return True

        return self.to_dict() != other.to_dict()
