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


class BTAssemblyPSFeatureInfo(object):
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
        'feature_type': 'str',
        'feature_id': 'str',
        'configuration': 'str',
        'element_id': 'str',
        'document_id': 'str',
        'revision': 'str',
        'document_microversion': 'str',
        'full_configuration': 'str',
        'document_version': 'str'
    }

    attribute_map = {
        'feature_type': 'featureType',
        'feature_id': 'featureId',
        'configuration': 'configuration',
        'element_id': 'elementId',
        'document_id': 'documentId',
        'revision': 'revision',
        'document_microversion': 'documentMicroversion',
        'full_configuration': 'fullConfiguration',
        'document_version': 'documentVersion'
    }

    def __init__(self, feature_type=None, feature_id=None, configuration=None, element_id=None, document_id=None, revision=None, document_microversion=None, full_configuration=None, document_version=None, local_vars_configuration=None):  # noqa: E501
        """BTAssemblyPSFeatureInfo - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._feature_type = None
        self._feature_id = None
        self._configuration = None
        self._element_id = None
        self._document_id = None
        self._revision = None
        self._document_microversion = None
        self._full_configuration = None
        self._document_version = None
        self.discriminator = None

        if feature_type is not None:
            self.feature_type = feature_type
        if feature_id is not None:
            self.feature_id = feature_id
        if configuration is not None:
            self.configuration = configuration
        if element_id is not None:
            self.element_id = element_id
        if document_id is not None:
            self.document_id = document_id
        if revision is not None:
            self.revision = revision
        if document_microversion is not None:
            self.document_microversion = document_microversion
        if full_configuration is not None:
            self.full_configuration = full_configuration
        if document_version is not None:
            self.document_version = document_version

    @property
    def feature_type(self):
        """Gets the feature_type of this BTAssemblyPSFeatureInfo.  # noqa: E501


        :return: The feature_type of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :rtype: str
        """
        return self._feature_type

    @feature_type.setter
    def feature_type(self, feature_type):
        """Sets the feature_type of this BTAssemblyPSFeatureInfo.


        :param feature_type: The feature_type of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :type: str
        """

        self._feature_type = feature_type

    @property
    def feature_id(self):
        """Gets the feature_id of this BTAssemblyPSFeatureInfo.  # noqa: E501


        :return: The feature_id of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :rtype: str
        """
        return self._feature_id

    @feature_id.setter
    def feature_id(self, feature_id):
        """Sets the feature_id of this BTAssemblyPSFeatureInfo.


        :param feature_id: The feature_id of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :type: str
        """

        self._feature_id = feature_id

    @property
    def configuration(self):
        """Gets the configuration of this BTAssemblyPSFeatureInfo.  # noqa: E501


        :return: The configuration of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :rtype: str
        """
        return self._configuration

    @configuration.setter
    def configuration(self, configuration):
        """Sets the configuration of this BTAssemblyPSFeatureInfo.


        :param configuration: The configuration of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :type: str
        """

        self._configuration = configuration

    @property
    def element_id(self):
        """Gets the element_id of this BTAssemblyPSFeatureInfo.  # noqa: E501


        :return: The element_id of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :rtype: str
        """
        return self._element_id

    @element_id.setter
    def element_id(self, element_id):
        """Sets the element_id of this BTAssemblyPSFeatureInfo.


        :param element_id: The element_id of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :type: str
        """

        self._element_id = element_id

    @property
    def document_id(self):
        """Gets the document_id of this BTAssemblyPSFeatureInfo.  # noqa: E501


        :return: The document_id of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :rtype: str
        """
        return self._document_id

    @document_id.setter
    def document_id(self, document_id):
        """Sets the document_id of this BTAssemblyPSFeatureInfo.


        :param document_id: The document_id of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :type: str
        """

        self._document_id = document_id

    @property
    def revision(self):
        """Gets the revision of this BTAssemblyPSFeatureInfo.  # noqa: E501


        :return: The revision of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :rtype: str
        """
        return self._revision

    @revision.setter
    def revision(self, revision):
        """Sets the revision of this BTAssemblyPSFeatureInfo.


        :param revision: The revision of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :type: str
        """

        self._revision = revision

    @property
    def document_microversion(self):
        """Gets the document_microversion of this BTAssemblyPSFeatureInfo.  # noqa: E501


        :return: The document_microversion of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :rtype: str
        """
        return self._document_microversion

    @document_microversion.setter
    def document_microversion(self, document_microversion):
        """Sets the document_microversion of this BTAssemblyPSFeatureInfo.


        :param document_microversion: The document_microversion of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :type: str
        """

        self._document_microversion = document_microversion

    @property
    def full_configuration(self):
        """Gets the full_configuration of this BTAssemblyPSFeatureInfo.  # noqa: E501


        :return: The full_configuration of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :rtype: str
        """
        return self._full_configuration

    @full_configuration.setter
    def full_configuration(self, full_configuration):
        """Sets the full_configuration of this BTAssemblyPSFeatureInfo.


        :param full_configuration: The full_configuration of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :type: str
        """

        self._full_configuration = full_configuration

    @property
    def document_version(self):
        """Gets the document_version of this BTAssemblyPSFeatureInfo.  # noqa: E501


        :return: The document_version of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :rtype: str
        """
        return self._document_version

    @document_version.setter
    def document_version(self, document_version):
        """Sets the document_version of this BTAssemblyPSFeatureInfo.


        :param document_version: The document_version of this BTAssemblyPSFeatureInfo.  # noqa: E501
        :type: str
        """

        self._document_version = document_version

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
        if not isinstance(other, BTAssemblyPSFeatureInfo):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, BTAssemblyPSFeatureInfo):
            return True

        return self.to_dict() != other.to_dict()
