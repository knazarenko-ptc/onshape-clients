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


class BTBulkDocumentUpdateParams(object):
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
        'document_ids': 'str',
        'update_property': 'str',
        'skip_upgrade_version': 'int',
        'skip_upgrade': 'bool',
        'upgrade_mode': 'str',
        'upgrade_version': 'int'
    }

    attribute_map = {
        'document_ids': 'documentIds',
        'update_property': 'updateProperty',
        'skip_upgrade_version': 'skipUpgradeVersion',
        'skip_upgrade': 'skipUpgrade',
        'upgrade_mode': 'upgradeMode',
        'upgrade_version': 'upgradeVersion'
    }

    def __init__(self, document_ids=None, update_property=None, skip_upgrade_version=None, skip_upgrade=None, upgrade_mode=None, upgrade_version=None):  # noqa: E501
        """BTBulkDocumentUpdateParams - a model defined in OpenAPI"""  # noqa: E501

        self._document_ids = None
        self._update_property = None
        self._skip_upgrade_version = None
        self._skip_upgrade = None
        self._upgrade_mode = None
        self._upgrade_version = None
        self.discriminator = None

        if document_ids is not None:
            self.document_ids = document_ids
        if update_property is not None:
            self.update_property = update_property
        if skip_upgrade_version is not None:
            self.skip_upgrade_version = skip_upgrade_version
        if skip_upgrade is not None:
            self.skip_upgrade = skip_upgrade
        if upgrade_mode is not None:
            self.upgrade_mode = upgrade_mode
        if upgrade_version is not None:
            self.upgrade_version = upgrade_version

    @property
    def document_ids(self):
        """Gets the document_ids of this BTBulkDocumentUpdateParams.  # noqa: E501


        :return: The document_ids of this BTBulkDocumentUpdateParams.  # noqa: E501
        :rtype: str
        """
        return self._document_ids

    @document_ids.setter
    def document_ids(self, document_ids):
        """Sets the document_ids of this BTBulkDocumentUpdateParams.


        :param document_ids: The document_ids of this BTBulkDocumentUpdateParams.  # noqa: E501
        :type: str
        """

        self._document_ids = document_ids

    @property
    def update_property(self):
        """Gets the update_property of this BTBulkDocumentUpdateParams.  # noqa: E501


        :return: The update_property of this BTBulkDocumentUpdateParams.  # noqa: E501
        :rtype: str
        """
        return self._update_property

    @update_property.setter
    def update_property(self, update_property):
        """Sets the update_property of this BTBulkDocumentUpdateParams.


        :param update_property: The update_property of this BTBulkDocumentUpdateParams.  # noqa: E501
        :type: str
        """

        self._update_property = update_property

    @property
    def skip_upgrade_version(self):
        """Gets the skip_upgrade_version of this BTBulkDocumentUpdateParams.  # noqa: E501


        :return: The skip_upgrade_version of this BTBulkDocumentUpdateParams.  # noqa: E501
        :rtype: int
        """
        return self._skip_upgrade_version

    @skip_upgrade_version.setter
    def skip_upgrade_version(self, skip_upgrade_version):
        """Sets the skip_upgrade_version of this BTBulkDocumentUpdateParams.


        :param skip_upgrade_version: The skip_upgrade_version of this BTBulkDocumentUpdateParams.  # noqa: E501
        :type: int
        """

        self._skip_upgrade_version = skip_upgrade_version

    @property
    def skip_upgrade(self):
        """Gets the skip_upgrade of this BTBulkDocumentUpdateParams.  # noqa: E501


        :return: The skip_upgrade of this BTBulkDocumentUpdateParams.  # noqa: E501
        :rtype: bool
        """
        return self._skip_upgrade

    @skip_upgrade.setter
    def skip_upgrade(self, skip_upgrade):
        """Sets the skip_upgrade of this BTBulkDocumentUpdateParams.


        :param skip_upgrade: The skip_upgrade of this BTBulkDocumentUpdateParams.  # noqa: E501
        :type: bool
        """

        self._skip_upgrade = skip_upgrade

    @property
    def upgrade_mode(self):
        """Gets the upgrade_mode of this BTBulkDocumentUpdateParams.  # noqa: E501


        :return: The upgrade_mode of this BTBulkDocumentUpdateParams.  # noqa: E501
        :rtype: str
        """
        return self._upgrade_mode

    @upgrade_mode.setter
    def upgrade_mode(self, upgrade_mode):
        """Sets the upgrade_mode of this BTBulkDocumentUpdateParams.


        :param upgrade_mode: The upgrade_mode of this BTBulkDocumentUpdateParams.  # noqa: E501
        :type: str
        """

        self._upgrade_mode = upgrade_mode

    @property
    def upgrade_version(self):
        """Gets the upgrade_version of this BTBulkDocumentUpdateParams.  # noqa: E501


        :return: The upgrade_version of this BTBulkDocumentUpdateParams.  # noqa: E501
        :rtype: int
        """
        return self._upgrade_version

    @upgrade_version.setter
    def upgrade_version(self, upgrade_version):
        """Sets the upgrade_version of this BTBulkDocumentUpdateParams.


        :param upgrade_version: The upgrade_version of this BTBulkDocumentUpdateParams.  # noqa: E501
        :type: int
        """

        self._upgrade_version = upgrade_version

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
        if not isinstance(other, BTBulkDocumentUpdateParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
