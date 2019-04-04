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


class BTDocumentScope(object):
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
        'document_microversion_id': 'str',
        'version_id': 'str',
        'document_id': 'str',
        'configuration': 'str',
        'workspace_id': 'str',
        'element_id': 'str',
        'asserted_element_type': 'str'
    }

    attribute_map = {
        'document_microversion_id': 'documentMicroversionId',
        'version_id': 'versionId',
        'document_id': 'documentId',
        'configuration': 'configuration',
        'workspace_id': 'workspaceId',
        'element_id': 'elementId',
        'asserted_element_type': 'assertedElementType'
    }

    def __init__(self, document_microversion_id=None, version_id=None, document_id=None, configuration=None, workspace_id=None, element_id=None, asserted_element_type=None):  # noqa: E501
        """BTDocumentScope - a model defined in OpenAPI"""  # noqa: E501

        self._document_microversion_id = None
        self._version_id = None
        self._document_id = None
        self._configuration = None
        self._workspace_id = None
        self._element_id = None
        self._asserted_element_type = None
        self.discriminator = None

        if document_microversion_id is not None:
            self.document_microversion_id = document_microversion_id
        if version_id is not None:
            self.version_id = version_id
        if document_id is not None:
            self.document_id = document_id
        if configuration is not None:
            self.configuration = configuration
        if workspace_id is not None:
            self.workspace_id = workspace_id
        if element_id is not None:
            self.element_id = element_id
        if asserted_element_type is not None:
            self.asserted_element_type = asserted_element_type

    @property
    def document_microversion_id(self):
        """Gets the document_microversion_id of this BTDocumentScope.  # noqa: E501


        :return: The document_microversion_id of this BTDocumentScope.  # noqa: E501
        :rtype: str
        """
        return self._document_microversion_id

    @document_microversion_id.setter
    def document_microversion_id(self, document_microversion_id):
        """Sets the document_microversion_id of this BTDocumentScope.


        :param document_microversion_id: The document_microversion_id of this BTDocumentScope.  # noqa: E501
        :type: str
        """

        self._document_microversion_id = document_microversion_id

    @property
    def version_id(self):
        """Gets the version_id of this BTDocumentScope.  # noqa: E501


        :return: The version_id of this BTDocumentScope.  # noqa: E501
        :rtype: str
        """
        return self._version_id

    @version_id.setter
    def version_id(self, version_id):
        """Sets the version_id of this BTDocumentScope.


        :param version_id: The version_id of this BTDocumentScope.  # noqa: E501
        :type: str
        """

        self._version_id = version_id

    @property
    def document_id(self):
        """Gets the document_id of this BTDocumentScope.  # noqa: E501


        :return: The document_id of this BTDocumentScope.  # noqa: E501
        :rtype: str
        """
        return self._document_id

    @document_id.setter
    def document_id(self, document_id):
        """Sets the document_id of this BTDocumentScope.


        :param document_id: The document_id of this BTDocumentScope.  # noqa: E501
        :type: str
        """

        self._document_id = document_id

    @property
    def configuration(self):
        """Gets the configuration of this BTDocumentScope.  # noqa: E501


        :return: The configuration of this BTDocumentScope.  # noqa: E501
        :rtype: str
        """
        return self._configuration

    @configuration.setter
    def configuration(self, configuration):
        """Sets the configuration of this BTDocumentScope.


        :param configuration: The configuration of this BTDocumentScope.  # noqa: E501
        :type: str
        """

        self._configuration = configuration

    @property
    def workspace_id(self):
        """Gets the workspace_id of this BTDocumentScope.  # noqa: E501


        :return: The workspace_id of this BTDocumentScope.  # noqa: E501
        :rtype: str
        """
        return self._workspace_id

    @workspace_id.setter
    def workspace_id(self, workspace_id):
        """Sets the workspace_id of this BTDocumentScope.


        :param workspace_id: The workspace_id of this BTDocumentScope.  # noqa: E501
        :type: str
        """

        self._workspace_id = workspace_id

    @property
    def element_id(self):
        """Gets the element_id of this BTDocumentScope.  # noqa: E501


        :return: The element_id of this BTDocumentScope.  # noqa: E501
        :rtype: str
        """
        return self._element_id

    @element_id.setter
    def element_id(self, element_id):
        """Sets the element_id of this BTDocumentScope.


        :param element_id: The element_id of this BTDocumentScope.  # noqa: E501
        :type: str
        """

        self._element_id = element_id

    @property
    def asserted_element_type(self):
        """Gets the asserted_element_type of this BTDocumentScope.  # noqa: E501


        :return: The asserted_element_type of this BTDocumentScope.  # noqa: E501
        :rtype: str
        """
        return self._asserted_element_type

    @asserted_element_type.setter
    def asserted_element_type(self, asserted_element_type):
        """Sets the asserted_element_type of this BTDocumentScope.


        :param asserted_element_type: The asserted_element_type of this BTDocumentScope.  # noqa: E501
        :type: str
        """

        self._asserted_element_type = asserted_element_type

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
        if not isinstance(other, BTDocumentScope):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
