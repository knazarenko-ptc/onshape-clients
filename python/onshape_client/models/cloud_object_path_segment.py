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


class CloudObjectPathSegment(object):
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
        'cloud_storage_account_id': 'str',
        'cloud_storage_provider_type': 'int',
        'name': 'str',
        'id': 'str',
        'tree_href': 'str',
        'resource_type': 'str',
        'sub_type': 'int'
    }

    attribute_map = {
        'cloud_storage_account_id': 'cloudStorageAccountId',
        'cloud_storage_provider_type': 'cloudStorageProviderType',
        'name': 'name',
        'id': 'id',
        'tree_href': 'treeHref',
        'resource_type': 'resourceType',
        'sub_type': 'subType'
    }

    def __init__(self, cloud_storage_account_id=None, cloud_storage_provider_type=None, name=None, id=None, tree_href=None, resource_type=None, sub_type=None):  # noqa: E501
        """CloudObjectPathSegment - a model defined in OpenAPI"""  # noqa: E501

        self._cloud_storage_account_id = None
        self._cloud_storage_provider_type = None
        self._name = None
        self._id = None
        self._tree_href = None
        self._resource_type = None
        self._sub_type = None
        self.discriminator = None

        if cloud_storage_account_id is not None:
            self.cloud_storage_account_id = cloud_storage_account_id
        if cloud_storage_provider_type is not None:
            self.cloud_storage_provider_type = cloud_storage_provider_type
        if name is not None:
            self.name = name
        if id is not None:
            self.id = id
        if tree_href is not None:
            self.tree_href = tree_href
        if resource_type is not None:
            self.resource_type = resource_type
        if sub_type is not None:
            self.sub_type = sub_type

    @property
    def cloud_storage_account_id(self):
        """Gets the cloud_storage_account_id of this CloudObjectPathSegment.  # noqa: E501


        :return: The cloud_storage_account_id of this CloudObjectPathSegment.  # noqa: E501
        :rtype: str
        """
        return self._cloud_storage_account_id

    @cloud_storage_account_id.setter
    def cloud_storage_account_id(self, cloud_storage_account_id):
        """Sets the cloud_storage_account_id of this CloudObjectPathSegment.


        :param cloud_storage_account_id: The cloud_storage_account_id of this CloudObjectPathSegment.  # noqa: E501
        :type: str
        """

        self._cloud_storage_account_id = cloud_storage_account_id

    @property
    def cloud_storage_provider_type(self):
        """Gets the cloud_storage_provider_type of this CloudObjectPathSegment.  # noqa: E501


        :return: The cloud_storage_provider_type of this CloudObjectPathSegment.  # noqa: E501
        :rtype: int
        """
        return self._cloud_storage_provider_type

    @cloud_storage_provider_type.setter
    def cloud_storage_provider_type(self, cloud_storage_provider_type):
        """Sets the cloud_storage_provider_type of this CloudObjectPathSegment.


        :param cloud_storage_provider_type: The cloud_storage_provider_type of this CloudObjectPathSegment.  # noqa: E501
        :type: int
        """

        self._cloud_storage_provider_type = cloud_storage_provider_type

    @property
    def name(self):
        """Gets the name of this CloudObjectPathSegment.  # noqa: E501


        :return: The name of this CloudObjectPathSegment.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this CloudObjectPathSegment.


        :param name: The name of this CloudObjectPathSegment.  # noqa: E501
        :type: str
        """

        self._name = name

    @property
    def id(self):
        """Gets the id of this CloudObjectPathSegment.  # noqa: E501


        :return: The id of this CloudObjectPathSegment.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this CloudObjectPathSegment.


        :param id: The id of this CloudObjectPathSegment.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def tree_href(self):
        """Gets the tree_href of this CloudObjectPathSegment.  # noqa: E501


        :return: The tree_href of this CloudObjectPathSegment.  # noqa: E501
        :rtype: str
        """
        return self._tree_href

    @tree_href.setter
    def tree_href(self, tree_href):
        """Sets the tree_href of this CloudObjectPathSegment.


        :param tree_href: The tree_href of this CloudObjectPathSegment.  # noqa: E501
        :type: str
        """

        self._tree_href = tree_href

    @property
    def resource_type(self):
        """Gets the resource_type of this CloudObjectPathSegment.  # noqa: E501


        :return: The resource_type of this CloudObjectPathSegment.  # noqa: E501
        :rtype: str
        """
        return self._resource_type

    @resource_type.setter
    def resource_type(self, resource_type):
        """Sets the resource_type of this CloudObjectPathSegment.


        :param resource_type: The resource_type of this CloudObjectPathSegment.  # noqa: E501
        :type: str
        """

        self._resource_type = resource_type

    @property
    def sub_type(self):
        """Gets the sub_type of this CloudObjectPathSegment.  # noqa: E501


        :return: The sub_type of this CloudObjectPathSegment.  # noqa: E501
        :rtype: int
        """
        return self._sub_type

    @sub_type.setter
    def sub_type(self, sub_type):
        """Sets the sub_type of this CloudObjectPathSegment.


        :param sub_type: The sub_type of this CloudObjectPathSegment.  # noqa: E501
        :type: int
        """

        self._sub_type = sub_type

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
        if not isinstance(other, CloudObjectPathSegment):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other