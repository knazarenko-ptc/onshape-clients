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


class BTStandardContentHierarchy(object):
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
        'id': 'str',
        'standard': 'str',
        'category': 'str',
        'types': 'str',
        'type': 'str',
        'document_type': 'int',
        'production_version_id': 'str',
        'test_version_id': 'str',
        'created_at': 'datetime',
        'modified_at': 'datetime',
        'created_by': 'str',
        'modified_by': 'str',
        'document_id': 'str'
    }

    attribute_map = {
        'id': 'id',
        'standard': 'standard',
        'category': 'category',
        'types': 'types',
        'type': 'type',
        'document_type': 'documentType',
        'production_version_id': 'productionVersionId',
        'test_version_id': 'testVersionId',
        'created_at': 'createdAt',
        'modified_at': 'modifiedAt',
        'created_by': 'createdBy',
        'modified_by': 'modifiedBy',
        'document_id': 'documentId'
    }

    def __init__(self, id=None, standard=None, category=None, types=None, type=None, document_type=None, production_version_id=None, test_version_id=None, created_at=None, modified_at=None, created_by=None, modified_by=None, document_id=None):  # noqa: E501
        """BTStandardContentHierarchy - a model defined in OpenAPI"""  # noqa: E501

        self._id = None
        self._standard = None
        self._category = None
        self._types = None
        self._type = None
        self._document_type = None
        self._production_version_id = None
        self._test_version_id = None
        self._created_at = None
        self._modified_at = None
        self._created_by = None
        self._modified_by = None
        self._document_id = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if standard is not None:
            self.standard = standard
        if category is not None:
            self.category = category
        if types is not None:
            self.types = types
        if type is not None:
            self.type = type
        if document_type is not None:
            self.document_type = document_type
        if production_version_id is not None:
            self.production_version_id = production_version_id
        if test_version_id is not None:
            self.test_version_id = test_version_id
        if created_at is not None:
            self.created_at = created_at
        if modified_at is not None:
            self.modified_at = modified_at
        if created_by is not None:
            self.created_by = created_by
        if modified_by is not None:
            self.modified_by = modified_by
        if document_id is not None:
            self.document_id = document_id

    @property
    def id(self):
        """Gets the id of this BTStandardContentHierarchy.  # noqa: E501


        :return: The id of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BTStandardContentHierarchy.


        :param id: The id of this BTStandardContentHierarchy.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def standard(self):
        """Gets the standard of this BTStandardContentHierarchy.  # noqa: E501


        :return: The standard of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: str
        """
        return self._standard

    @standard.setter
    def standard(self, standard):
        """Sets the standard of this BTStandardContentHierarchy.


        :param standard: The standard of this BTStandardContentHierarchy.  # noqa: E501
        :type: str
        """

        self._standard = standard

    @property
    def category(self):
        """Gets the category of this BTStandardContentHierarchy.  # noqa: E501


        :return: The category of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: str
        """
        return self._category

    @category.setter
    def category(self, category):
        """Sets the category of this BTStandardContentHierarchy.


        :param category: The category of this BTStandardContentHierarchy.  # noqa: E501
        :type: str
        """

        self._category = category

    @property
    def types(self):
        """Gets the types of this BTStandardContentHierarchy.  # noqa: E501


        :return: The types of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: str
        """
        return self._types

    @types.setter
    def types(self, types):
        """Sets the types of this BTStandardContentHierarchy.


        :param types: The types of this BTStandardContentHierarchy.  # noqa: E501
        :type: str
        """

        self._types = types

    @property
    def type(self):
        """Gets the type of this BTStandardContentHierarchy.  # noqa: E501


        :return: The type of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this BTStandardContentHierarchy.


        :param type: The type of this BTStandardContentHierarchy.  # noqa: E501
        :type: str
        """

        self._type = type

    @property
    def document_type(self):
        """Gets the document_type of this BTStandardContentHierarchy.  # noqa: E501


        :return: The document_type of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: int
        """
        return self._document_type

    @document_type.setter
    def document_type(self, document_type):
        """Sets the document_type of this BTStandardContentHierarchy.


        :param document_type: The document_type of this BTStandardContentHierarchy.  # noqa: E501
        :type: int
        """

        self._document_type = document_type

    @property
    def production_version_id(self):
        """Gets the production_version_id of this BTStandardContentHierarchy.  # noqa: E501


        :return: The production_version_id of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: str
        """
        return self._production_version_id

    @production_version_id.setter
    def production_version_id(self, production_version_id):
        """Sets the production_version_id of this BTStandardContentHierarchy.


        :param production_version_id: The production_version_id of this BTStandardContentHierarchy.  # noqa: E501
        :type: str
        """

        self._production_version_id = production_version_id

    @property
    def test_version_id(self):
        """Gets the test_version_id of this BTStandardContentHierarchy.  # noqa: E501


        :return: The test_version_id of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: str
        """
        return self._test_version_id

    @test_version_id.setter
    def test_version_id(self, test_version_id):
        """Sets the test_version_id of this BTStandardContentHierarchy.


        :param test_version_id: The test_version_id of this BTStandardContentHierarchy.  # noqa: E501
        :type: str
        """

        self._test_version_id = test_version_id

    @property
    def created_at(self):
        """Gets the created_at of this BTStandardContentHierarchy.  # noqa: E501


        :return: The created_at of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: datetime
        """
        return self._created_at

    @created_at.setter
    def created_at(self, created_at):
        """Sets the created_at of this BTStandardContentHierarchy.


        :param created_at: The created_at of this BTStandardContentHierarchy.  # noqa: E501
        :type: datetime
        """

        self._created_at = created_at

    @property
    def modified_at(self):
        """Gets the modified_at of this BTStandardContentHierarchy.  # noqa: E501


        :return: The modified_at of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: datetime
        """
        return self._modified_at

    @modified_at.setter
    def modified_at(self, modified_at):
        """Sets the modified_at of this BTStandardContentHierarchy.


        :param modified_at: The modified_at of this BTStandardContentHierarchy.  # noqa: E501
        :type: datetime
        """

        self._modified_at = modified_at

    @property
    def created_by(self):
        """Gets the created_by of this BTStandardContentHierarchy.  # noqa: E501


        :return: The created_by of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: str
        """
        return self._created_by

    @created_by.setter
    def created_by(self, created_by):
        """Sets the created_by of this BTStandardContentHierarchy.


        :param created_by: The created_by of this BTStandardContentHierarchy.  # noqa: E501
        :type: str
        """

        self._created_by = created_by

    @property
    def modified_by(self):
        """Gets the modified_by of this BTStandardContentHierarchy.  # noqa: E501


        :return: The modified_by of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: str
        """
        return self._modified_by

    @modified_by.setter
    def modified_by(self, modified_by):
        """Sets the modified_by of this BTStandardContentHierarchy.


        :param modified_by: The modified_by of this BTStandardContentHierarchy.  # noqa: E501
        :type: str
        """

        self._modified_by = modified_by

    @property
    def document_id(self):
        """Gets the document_id of this BTStandardContentHierarchy.  # noqa: E501


        :return: The document_id of this BTStandardContentHierarchy.  # noqa: E501
        :rtype: str
        """
        return self._document_id

    @document_id.setter
    def document_id(self, document_id):
        """Sets the document_id of this BTStandardContentHierarchy.


        :param document_id: The document_id of this BTStandardContentHierarchy.  # noqa: E501
        :type: str
        """

        self._document_id = document_id

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
        if not isinstance(other, BTStandardContentHierarchy):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other