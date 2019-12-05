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


class BTPName261AllOf(object):
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
        'for_export': 'bool',
        'identifier': 'BTPIdentifier8',
        'global_namespace': 'bool',
        'namespace': 'list[BTPIdentifier8]',
        'bt_type': 'str'
    }

    attribute_map = {
        'import_microversion': 'importMicroversion',
        'for_export': 'forExport',
        'identifier': 'identifier',
        'global_namespace': 'globalNamespace',
        'namespace': 'namespace',
        'bt_type': 'btType'
    }

    def __init__(self, import_microversion=None, for_export=None, identifier=None, global_namespace=None, namespace=None, bt_type=None, local_vars_configuration=None):  # noqa: E501
        """BTPName261AllOf - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._import_microversion = None
        self._for_export = None
        self._identifier = None
        self._global_namespace = None
        self._namespace = None
        self._bt_type = None
        self.discriminator = None

        if import_microversion is not None:
            self.import_microversion = import_microversion
        if for_export is not None:
            self.for_export = for_export
        if identifier is not None:
            self.identifier = identifier
        if global_namespace is not None:
            self.global_namespace = global_namespace
        if namespace is not None:
            self.namespace = namespace
        if bt_type is not None:
            self.bt_type = bt_type

    @property
    def import_microversion(self):
        """Gets the import_microversion of this BTPName261AllOf.  # noqa: E501


        :return: The import_microversion of this BTPName261AllOf.  # noqa: E501
        :rtype: str
        """
        return self._import_microversion

    @import_microversion.setter
    def import_microversion(self, import_microversion):
        """Sets the import_microversion of this BTPName261AllOf.


        :param import_microversion: The import_microversion of this BTPName261AllOf.  # noqa: E501
        :type: str
        """

        self._import_microversion = import_microversion

    @property
    def for_export(self):
        """Gets the for_export of this BTPName261AllOf.  # noqa: E501


        :return: The for_export of this BTPName261AllOf.  # noqa: E501
        :rtype: bool
        """
        return self._for_export

    @for_export.setter
    def for_export(self, for_export):
        """Sets the for_export of this BTPName261AllOf.


        :param for_export: The for_export of this BTPName261AllOf.  # noqa: E501
        :type: bool
        """

        self._for_export = for_export

    @property
    def identifier(self):
        """Gets the identifier of this BTPName261AllOf.  # noqa: E501


        :return: The identifier of this BTPName261AllOf.  # noqa: E501
        :rtype: BTPIdentifier8
        """
        return self._identifier

    @identifier.setter
    def identifier(self, identifier):
        """Sets the identifier of this BTPName261AllOf.


        :param identifier: The identifier of this BTPName261AllOf.  # noqa: E501
        :type: BTPIdentifier8
        """

        self._identifier = identifier

    @property
    def global_namespace(self):
        """Gets the global_namespace of this BTPName261AllOf.  # noqa: E501


        :return: The global_namespace of this BTPName261AllOf.  # noqa: E501
        :rtype: bool
        """
        return self._global_namespace

    @global_namespace.setter
    def global_namespace(self, global_namespace):
        """Sets the global_namespace of this BTPName261AllOf.


        :param global_namespace: The global_namespace of this BTPName261AllOf.  # noqa: E501
        :type: bool
        """

        self._global_namespace = global_namespace

    @property
    def namespace(self):
        """Gets the namespace of this BTPName261AllOf.  # noqa: E501


        :return: The namespace of this BTPName261AllOf.  # noqa: E501
        :rtype: list[BTPIdentifier8]
        """
        return self._namespace

    @namespace.setter
    def namespace(self, namespace):
        """Sets the namespace of this BTPName261AllOf.


        :param namespace: The namespace of this BTPName261AllOf.  # noqa: E501
        :type: list[BTPIdentifier8]
        """

        self._namespace = namespace

    @property
    def bt_type(self):
        """Gets the bt_type of this BTPName261AllOf.  # noqa: E501


        :return: The bt_type of this BTPName261AllOf.  # noqa: E501
        :rtype: str
        """
        return self._bt_type

    @bt_type.setter
    def bt_type(self, bt_type):
        """Sets the bt_type of this BTPName261AllOf.


        :param bt_type: The bt_type of this BTPName261AllOf.  # noqa: E501
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
        if not isinstance(other, BTPName261AllOf):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, BTPName261AllOf):
            return True

        return self.to_dict() != other.to_dict()
