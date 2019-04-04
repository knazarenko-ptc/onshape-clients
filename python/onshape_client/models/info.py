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


class Info(object):
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
        'title': 'str',
        'description': 'str',
        'terms_of_service': 'str',
        'contact': 'Contact',
        'license': 'License',
        'version': 'str',
        'extensions': 'dict(str, object)'
    }

    attribute_map = {
        'title': 'title',
        'description': 'description',
        'terms_of_service': 'termsOfService',
        'contact': 'contact',
        'license': 'license',
        'version': 'version',
        'extensions': 'extensions'
    }

    def __init__(self, title=None, description=None, terms_of_service=None, contact=None, license=None, version=None, extensions=None):  # noqa: E501
        """Info - a model defined in OpenAPI"""  # noqa: E501

        self._title = None
        self._description = None
        self._terms_of_service = None
        self._contact = None
        self._license = None
        self._version = None
        self._extensions = None
        self.discriminator = None

        if title is not None:
            self.title = title
        if description is not None:
            self.description = description
        if terms_of_service is not None:
            self.terms_of_service = terms_of_service
        if contact is not None:
            self.contact = contact
        if license is not None:
            self.license = license
        if version is not None:
            self.version = version
        if extensions is not None:
            self.extensions = extensions

    @property
    def title(self):
        """Gets the title of this Info.  # noqa: E501


        :return: The title of this Info.  # noqa: E501
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title):
        """Sets the title of this Info.


        :param title: The title of this Info.  # noqa: E501
        :type: str
        """

        self._title = title

    @property
    def description(self):
        """Gets the description of this Info.  # noqa: E501


        :return: The description of this Info.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this Info.


        :param description: The description of this Info.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def terms_of_service(self):
        """Gets the terms_of_service of this Info.  # noqa: E501


        :return: The terms_of_service of this Info.  # noqa: E501
        :rtype: str
        """
        return self._terms_of_service

    @terms_of_service.setter
    def terms_of_service(self, terms_of_service):
        """Sets the terms_of_service of this Info.


        :param terms_of_service: The terms_of_service of this Info.  # noqa: E501
        :type: str
        """

        self._terms_of_service = terms_of_service

    @property
    def contact(self):
        """Gets the contact of this Info.  # noqa: E501


        :return: The contact of this Info.  # noqa: E501
        :rtype: Contact
        """
        return self._contact

    @contact.setter
    def contact(self, contact):
        """Sets the contact of this Info.


        :param contact: The contact of this Info.  # noqa: E501
        :type: Contact
        """

        self._contact = contact

    @property
    def license(self):
        """Gets the license of this Info.  # noqa: E501


        :return: The license of this Info.  # noqa: E501
        :rtype: License
        """
        return self._license

    @license.setter
    def license(self, license):
        """Sets the license of this Info.


        :param license: The license of this Info.  # noqa: E501
        :type: License
        """

        self._license = license

    @property
    def version(self):
        """Gets the version of this Info.  # noqa: E501


        :return: The version of this Info.  # noqa: E501
        :rtype: str
        """
        return self._version

    @version.setter
    def version(self, version):
        """Sets the version of this Info.


        :param version: The version of this Info.  # noqa: E501
        :type: str
        """

        self._version = version

    @property
    def extensions(self):
        """Gets the extensions of this Info.  # noqa: E501


        :return: The extensions of this Info.  # noqa: E501
        :rtype: dict(str, object)
        """
        return self._extensions

    @extensions.setter
    def extensions(self, extensions):
        """Sets the extensions of this Info.


        :param extensions: The extensions of this Info.  # noqa: E501
        :type: dict(str, object)
        """

        self._extensions = extensions

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
        if not isinstance(other, Info):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
