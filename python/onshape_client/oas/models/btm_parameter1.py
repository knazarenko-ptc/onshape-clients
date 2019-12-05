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


class BTMParameter1(object):
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
        'parameter_id': 'str',
        'import_microversion': 'str',
        'node_id': 'str',
        'bt_type': 'str'
    }

    attribute_map = {
        'parameter_id': 'parameterId',
        'import_microversion': 'importMicroversion',
        'node_id': 'nodeId',
        'bt_type': 'btType'
    }

    discriminator_value_class_map = {
        'BTMParameterDerived-864': 'BTMParameterDerived864',
        'BTMParameterEnum-145': 'BTMParameterEnum145',
        'BTMParameterInvalid-1664': 'BTMParameterInvalid1664',
        'BTMParameterBlobReference-1679': 'BTMParameterBlobReference1679',
        'BTMParameterConfigured-2222': 'BTMParameterConfigured2222',
        'BTMParameterMaterial-1388': 'BTMParameterMaterial1388',
        'BTMParameterQueryList-148': 'BTMParameterQueryList148',
        'BTMParameterArray-2025': 'BTMParameterArray2025',
        'BTMParameterLookupTablePath-1419': 'BTMParameterLookupTablePath1419',
        'BTMParameterString-149': 'BTMParameterString149',
        'BTMParameterAppearance-627': 'BTMParameterAppearance627',
        'BTMParameterFeatureList-1749': 'BTMParameterFeatureList1749',
        'BTMDatabaseParameter-2229': 'BTMDatabaseParameter2229',
        'BTMParameterReference-2434': 'BTMParameterReference2434',
        'BTMParameterForeignId-146': 'BTMParameterForeignId146',
        'BTMParameterQuantity-147': 'BTMParameterQuantity147',
        'BTMParameterBoolean-144': 'BTMParameterBoolean144'
    }

    def __init__(self, parameter_id=None, import_microversion=None, node_id=None, bt_type=None, local_vars_configuration=None):  # noqa: E501
        """BTMParameter1 - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._parameter_id = None
        self._import_microversion = None
        self._node_id = None
        self._bt_type = None
        self.discriminator = 'bt_type'

        if parameter_id is not None:
            self.parameter_id = parameter_id
        if import_microversion is not None:
            self.import_microversion = import_microversion
        if node_id is not None:
            self.node_id = node_id
        if bt_type is not None:
            self.bt_type = bt_type

    @property
    def parameter_id(self):
        """Gets the parameter_id of this BTMParameter1.  # noqa: E501


        :return: The parameter_id of this BTMParameter1.  # noqa: E501
        :rtype: str
        """
        return self._parameter_id

    @parameter_id.setter
    def parameter_id(self, parameter_id):
        """Sets the parameter_id of this BTMParameter1.


        :param parameter_id: The parameter_id of this BTMParameter1.  # noqa: E501
        :type: str
        """

        self._parameter_id = parameter_id

    @property
    def import_microversion(self):
        """Gets the import_microversion of this BTMParameter1.  # noqa: E501


        :return: The import_microversion of this BTMParameter1.  # noqa: E501
        :rtype: str
        """
        return self._import_microversion

    @import_microversion.setter
    def import_microversion(self, import_microversion):
        """Sets the import_microversion of this BTMParameter1.


        :param import_microversion: The import_microversion of this BTMParameter1.  # noqa: E501
        :type: str
        """

        self._import_microversion = import_microversion

    @property
    def node_id(self):
        """Gets the node_id of this BTMParameter1.  # noqa: E501


        :return: The node_id of this BTMParameter1.  # noqa: E501
        :rtype: str
        """
        return self._node_id

    @node_id.setter
    def node_id(self, node_id):
        """Sets the node_id of this BTMParameter1.


        :param node_id: The node_id of this BTMParameter1.  # noqa: E501
        :type: str
        """

        self._node_id = node_id

    @property
    def bt_type(self):
        """Gets the bt_type of this BTMParameter1.  # noqa: E501


        :return: The bt_type of this BTMParameter1.  # noqa: E501
        :rtype: str
        """
        return self._bt_type

    @bt_type.setter
    def bt_type(self, bt_type):
        """Sets the bt_type of this BTMParameter1.


        :param bt_type: The bt_type of this BTMParameter1.  # noqa: E501
        :type: str
        """

        self._bt_type = bt_type

    def get_real_child_model(self, data):
        """Returns the real base class specified by the discriminator"""
        discriminator_key = self.attribute_map[self.discriminator]
        discriminator_value = data[discriminator_key]
        return self.discriminator_value_class_map.get(discriminator_value)

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
        if not isinstance(other, BTMParameter1):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, BTMParameter1):
            return True

        return self.to_dict() != other.to_dict()
