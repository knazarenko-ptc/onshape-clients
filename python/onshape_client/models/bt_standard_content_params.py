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


class BTStandardContentParams(object):
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
        'parameters': 'list[BTStandardContentParameterDefinition]',
        'parameters_id': 'str',
        'parameters_id_version': 'str',
        'target_document_id': 'str',
        'target_element_id': 'str',
        'save_custom_properties': 'bool'
    }

    attribute_map = {
        'parameters': 'parameters',
        'parameters_id': 'parametersId',
        'parameters_id_version': 'parametersIdVersion',
        'target_document_id': 'targetDocumentId',
        'target_element_id': 'targetElementId',
        'save_custom_properties': 'saveCustomProperties'
    }

    def __init__(self, parameters=None, parameters_id=None, parameters_id_version=None, target_document_id=None, target_element_id=None, save_custom_properties=None):  # noqa: E501
        """BTStandardContentParams - a model defined in OpenAPI"""  # noqa: E501

        self._parameters = None
        self._parameters_id = None
        self._parameters_id_version = None
        self._target_document_id = None
        self._target_element_id = None
        self._save_custom_properties = None
        self.discriminator = None

        if parameters is not None:
            self.parameters = parameters
        if parameters_id is not None:
            self.parameters_id = parameters_id
        if parameters_id_version is not None:
            self.parameters_id_version = parameters_id_version
        if target_document_id is not None:
            self.target_document_id = target_document_id
        if target_element_id is not None:
            self.target_element_id = target_element_id
        if save_custom_properties is not None:
            self.save_custom_properties = save_custom_properties

    @property
    def parameters(self):
        """Gets the parameters of this BTStandardContentParams.  # noqa: E501


        :return: The parameters of this BTStandardContentParams.  # noqa: E501
        :rtype: list[BTStandardContentParameterDefinition]
        """
        return self._parameters

    @parameters.setter
    def parameters(self, parameters):
        """Sets the parameters of this BTStandardContentParams.


        :param parameters: The parameters of this BTStandardContentParams.  # noqa: E501
        :type: list[BTStandardContentParameterDefinition]
        """

        self._parameters = parameters

    @property
    def parameters_id(self):
        """Gets the parameters_id of this BTStandardContentParams.  # noqa: E501


        :return: The parameters_id of this BTStandardContentParams.  # noqa: E501
        :rtype: str
        """
        return self._parameters_id

    @parameters_id.setter
    def parameters_id(self, parameters_id):
        """Sets the parameters_id of this BTStandardContentParams.


        :param parameters_id: The parameters_id of this BTStandardContentParams.  # noqa: E501
        :type: str
        """

        self._parameters_id = parameters_id

    @property
    def parameters_id_version(self):
        """Gets the parameters_id_version of this BTStandardContentParams.  # noqa: E501


        :return: The parameters_id_version of this BTStandardContentParams.  # noqa: E501
        :rtype: str
        """
        return self._parameters_id_version

    @parameters_id_version.setter
    def parameters_id_version(self, parameters_id_version):
        """Sets the parameters_id_version of this BTStandardContentParams.


        :param parameters_id_version: The parameters_id_version of this BTStandardContentParams.  # noqa: E501
        :type: str
        """

        self._parameters_id_version = parameters_id_version

    @property
    def target_document_id(self):
        """Gets the target_document_id of this BTStandardContentParams.  # noqa: E501


        :return: The target_document_id of this BTStandardContentParams.  # noqa: E501
        :rtype: str
        """
        return self._target_document_id

    @target_document_id.setter
    def target_document_id(self, target_document_id):
        """Sets the target_document_id of this BTStandardContentParams.


        :param target_document_id: The target_document_id of this BTStandardContentParams.  # noqa: E501
        :type: str
        """

        self._target_document_id = target_document_id

    @property
    def target_element_id(self):
        """Gets the target_element_id of this BTStandardContentParams.  # noqa: E501


        :return: The target_element_id of this BTStandardContentParams.  # noqa: E501
        :rtype: str
        """
        return self._target_element_id

    @target_element_id.setter
    def target_element_id(self, target_element_id):
        """Sets the target_element_id of this BTStandardContentParams.


        :param target_element_id: The target_element_id of this BTStandardContentParams.  # noqa: E501
        :type: str
        """

        self._target_element_id = target_element_id

    @property
    def save_custom_properties(self):
        """Gets the save_custom_properties of this BTStandardContentParams.  # noqa: E501


        :return: The save_custom_properties of this BTStandardContentParams.  # noqa: E501
        :rtype: bool
        """
        return self._save_custom_properties

    @save_custom_properties.setter
    def save_custom_properties(self, save_custom_properties):
        """Sets the save_custom_properties of this BTStandardContentParams.


        :param save_custom_properties: The save_custom_properties of this BTStandardContentParams.  # noqa: E501
        :type: bool
        """

        self._save_custom_properties = save_custom_properties

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
        if not isinstance(other, BTStandardContentParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
