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


class BTPTopLevelImport285AllOf(object):
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
        'import_microversion': 'str',
        'namespace_string': 'str',
        'combined_namespace_path_and_version': 'str',
        'module_id': 'BTPModuleId235',
        'space_before_import': 'BTPSpace10',
        'namespace': 'list[BTPIdentifier8]',
        'bt_type': 'str'
    }

    attribute_map = {
        'import_microversion': 'importMicroversion',
        'namespace_string': 'namespaceString',
        'combined_namespace_path_and_version': 'combinedNamespacePathAndVersion',
        'module_id': 'moduleId',
        'space_before_import': 'spaceBeforeImport',
        'namespace': 'namespace',
        'bt_type': 'btType'
    }

    def __init__(self, import_microversion=None, namespace_string=None, combined_namespace_path_and_version=None, module_id=None, space_before_import=None, namespace=None, bt_type=None, local_vars_configuration=None):  # noqa: E501
        """BTPTopLevelImport285AllOf - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._import_microversion = None
        self._namespace_string = None
        self._combined_namespace_path_and_version = None
        self._module_id = None
        self._space_before_import = None
        self._namespace = None
        self._bt_type = None
        self.discriminator = None

        if import_microversion is not None:
            self.import_microversion = import_microversion
        if namespace_string is not None:
            self.namespace_string = namespace_string
        if combined_namespace_path_and_version is not None:
            self.combined_namespace_path_and_version = combined_namespace_path_and_version
        if module_id is not None:
            self.module_id = module_id
        if space_before_import is not None:
            self.space_before_import = space_before_import
        if namespace is not None:
            self.namespace = namespace
        if bt_type is not None:
            self.bt_type = bt_type

    @property
    def import_microversion(self):
        """Gets the import_microversion of this BTPTopLevelImport285AllOf.  # noqa: E501


        :return: The import_microversion of this BTPTopLevelImport285AllOf.  # noqa: E501
        :rtype: str
        """
        return self._import_microversion

    @import_microversion.setter
    def import_microversion(self, import_microversion):
        """Sets the import_microversion of this BTPTopLevelImport285AllOf.


        :param import_microversion: The import_microversion of this BTPTopLevelImport285AllOf.  # noqa: E501
        :type: str
        """

        self._import_microversion = import_microversion

    @property
    def namespace_string(self):
        """Gets the namespace_string of this BTPTopLevelImport285AllOf.  # noqa: E501


        :return: The namespace_string of this BTPTopLevelImport285AllOf.  # noqa: E501
        :rtype: str
        """
        return self._namespace_string

    @namespace_string.setter
    def namespace_string(self, namespace_string):
        """Sets the namespace_string of this BTPTopLevelImport285AllOf.


        :param namespace_string: The namespace_string of this BTPTopLevelImport285AllOf.  # noqa: E501
        :type: str
        """

        self._namespace_string = namespace_string

    @property
    def combined_namespace_path_and_version(self):
        """Gets the combined_namespace_path_and_version of this BTPTopLevelImport285AllOf.  # noqa: E501


        :return: The combined_namespace_path_and_version of this BTPTopLevelImport285AllOf.  # noqa: E501
        :rtype: str
        """
        return self._combined_namespace_path_and_version

    @combined_namespace_path_and_version.setter
    def combined_namespace_path_and_version(self, combined_namespace_path_and_version):
        """Sets the combined_namespace_path_and_version of this BTPTopLevelImport285AllOf.


        :param combined_namespace_path_and_version: The combined_namespace_path_and_version of this BTPTopLevelImport285AllOf.  # noqa: E501
        :type: str
        """

        self._combined_namespace_path_and_version = combined_namespace_path_and_version

    @property
    def module_id(self):
        """Gets the module_id of this BTPTopLevelImport285AllOf.  # noqa: E501


        :return: The module_id of this BTPTopLevelImport285AllOf.  # noqa: E501
        :rtype: BTPModuleId235
        """
        return self._module_id

    @module_id.setter
    def module_id(self, module_id):
        """Sets the module_id of this BTPTopLevelImport285AllOf.


        :param module_id: The module_id of this BTPTopLevelImport285AllOf.  # noqa: E501
        :type: BTPModuleId235
        """

        self._module_id = module_id

    @property
    def space_before_import(self):
        """Gets the space_before_import of this BTPTopLevelImport285AllOf.  # noqa: E501


        :return: The space_before_import of this BTPTopLevelImport285AllOf.  # noqa: E501
        :rtype: BTPSpace10
        """
        return self._space_before_import

    @space_before_import.setter
    def space_before_import(self, space_before_import):
        """Sets the space_before_import of this BTPTopLevelImport285AllOf.


        :param space_before_import: The space_before_import of this BTPTopLevelImport285AllOf.  # noqa: E501
        :type: BTPSpace10
        """

        self._space_before_import = space_before_import

    @property
    def namespace(self):
        """Gets the namespace of this BTPTopLevelImport285AllOf.  # noqa: E501


        :return: The namespace of this BTPTopLevelImport285AllOf.  # noqa: E501
        :rtype: list[BTPIdentifier8]
        """
        return self._namespace

    @namespace.setter
    def namespace(self, namespace):
        """Sets the namespace of this BTPTopLevelImport285AllOf.


        :param namespace: The namespace of this BTPTopLevelImport285AllOf.  # noqa: E501
        :type: list[BTPIdentifier8]
        """

        self._namespace = namespace

    @property
    def bt_type(self):
        """Gets the bt_type of this BTPTopLevelImport285AllOf.  # noqa: E501


        :return: The bt_type of this BTPTopLevelImport285AllOf.  # noqa: E501
        :rtype: str
        """
        return self._bt_type

    @bt_type.setter
    def bt_type(self, bt_type):
        """Sets the bt_type of this BTPTopLevelImport285AllOf.


        :param bt_type: The bt_type of this BTPTopLevelImport285AllOf.  # noqa: E501
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
        if not isinstance(other, BTPTopLevelImport285AllOf):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, BTPTopLevelImport285AllOf):
            return True

        return self.to_dict() != other.to_dict()
