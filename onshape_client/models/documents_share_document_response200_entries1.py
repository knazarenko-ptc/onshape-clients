# coding: utf-8

"""
    Onshape API

    Onshape API  # noqa: E501

    OpenAPI spec version: 1.0.0
    Contact: ekeller@onshape.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six


class DocumentsShareDocumentResponse200Entries1(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'pending_owner_transfer': 'bool',
        'name': 'str',
        'object_id': 'str',
        'permission': 'float',
        'image': 'str',
        'email': 'str',
        'permission_set': 'list[str]',
        'entry_id': 'str',
        'entry_state': 'str',
        'entry_type': 'float',
        'accept_owner_transfer': 'bool'
    }

    attribute_map = {
        'pending_owner_transfer': 'pendingOwnerTransfer',
        'name': 'name',
        'object_id': 'objectId',
        'permission': 'permission',
        'image': 'image',
        'email': 'email',
        'permission_set': 'permissionSet',
        'entry_id': 'entryId',
        'entry_state': 'entryState',
        'entry_type': 'entryType',
        'accept_owner_transfer': 'acceptOwnerTransfer'
    }

    def __init__(self, pending_owner_transfer=None, name=None, object_id=None, permission=None, image=None, email=None, permission_set=None, entry_id=None, entry_state=None, entry_type=None, accept_owner_transfer=None):  # noqa: E501
        """DocumentsShareDocumentResponse200Entries1 - a model defined in Swagger"""  # noqa: E501

        self._pending_owner_transfer = None
        self._name = None
        self._object_id = None
        self._permission = None
        self._image = None
        self._email = None
        self._permission_set = None
        self._entry_id = None
        self._entry_state = None
        self._entry_type = None
        self._accept_owner_transfer = None
        self.discriminator = None

        if pending_owner_transfer is not None:
            self.pending_owner_transfer = pending_owner_transfer
        if name is not None:
            self.name = name
        if object_id is not None:
            self.object_id = object_id
        if permission is not None:
            self.permission = permission
        if image is not None:
            self.image = image
        if email is not None:
            self.email = email
        if permission_set is not None:
            self.permission_set = permission_set
        if entry_id is not None:
            self.entry_id = entry_id
        if entry_state is not None:
            self.entry_state = entry_state
        if entry_type is not None:
            self.entry_type = entry_type
        if accept_owner_transfer is not None:
            self.accept_owner_transfer = accept_owner_transfer

    @property
    def pending_owner_transfer(self):
        """Gets the pending_owner_transfer of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501

        For internal use  # noqa: E501

        :return: The pending_owner_transfer of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :rtype: bool
        """
        return self._pending_owner_transfer

    @pending_owner_transfer.setter
    def pending_owner_transfer(self, pending_owner_transfer):
        """Sets the pending_owner_transfer of this DocumentsShareDocumentResponse200Entries1.

        For internal use  # noqa: E501

        :param pending_owner_transfer: The pending_owner_transfer of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :type: bool
        """

        self._pending_owner_transfer = pending_owner_transfer

    @property
    def name(self):
        """Gets the name of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501

        The name of the entity that the object is shared with  # noqa: E501

        :return: The name of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this DocumentsShareDocumentResponse200Entries1.

        The name of the entity that the object is shared with  # noqa: E501

        :param name: The name of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :type: str
        """

        self._name = name

    @property
    def object_id(self):
        """Gets the object_id of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501

        The ID of the object  # noqa: E501

        :return: The object_id of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :rtype: str
        """
        return self._object_id

    @object_id.setter
    def object_id(self, object_id):
        """Sets the object_id of this DocumentsShareDocumentResponse200Entries1.

        The ID of the object  # noqa: E501

        :param object_id: The object_id of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :type: str
        """

        self._object_id = object_id

    @property
    def permission(self):
        """Gets the permission of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501

        Obsolete  # noqa: E501

        :return: The permission of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :rtype: float
        """
        return self._permission

    @permission.setter
    def permission(self, permission):
        """Sets the permission of this DocumentsShareDocumentResponse200Entries1.

        Obsolete  # noqa: E501

        :param permission: The permission of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :type: float
        """

        self._permission = permission

    @property
    def image(self):
        """Gets the image of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501

        For internal use  # noqa: E501

        :return: The image of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :rtype: str
        """
        return self._image

    @image.setter
    def image(self, image):
        """Sets the image of this DocumentsShareDocumentResponse200Entries1.

        For internal use  # noqa: E501

        :param image: The image of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :type: str
        """

        self._image = image

    @property
    def email(self):
        """Gets the email of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501

        The email of the user, if the entryType is USER.  # noqa: E501

        :return: The email of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :rtype: str
        """
        return self._email

    @email.setter
    def email(self, email):
        """Sets the email of this DocumentsShareDocumentResponse200Entries1.

        The email of the user, if the entryType is USER.  # noqa: E501

        :param email: The email of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :type: str
        """

        self._email = email

    @property
    def permission_set(self):
        """Gets the permission_set of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501

        The permissions for the object that have been granted      to the entity.  # noqa: E501

        :return: The permission_set of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :rtype: list[str]
        """
        return self._permission_set

    @permission_set.setter
    def permission_set(self, permission_set):
        """Sets the permission_set of this DocumentsShareDocumentResponse200Entries1.

        The permissions for the object that have been granted      to the entity.  # noqa: E501

        :param permission_set: The permission_set of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :type: list[str]
        """

        self._permission_set = permission_set

    @property
    def entry_id(self):
        """Gets the entry_id of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501

        The ID of the entity to which this entry corresponds  # noqa: E501

        :return: The entry_id of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :rtype: str
        """
        return self._entry_id

    @entry_id.setter
    def entry_id(self, entry_id):
        """Sets the entry_id of this DocumentsShareDocumentResponse200Entries1.

        The ID of the entity to which this entry corresponds  # noqa: E501

        :param entry_id: The entry_id of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :type: str
        """

        self._entry_id = entry_id

    @property
    def entry_state(self):
        """Gets the entry_state of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501

        The state of user to which the share entry applies, if a user.      Possible states include ACTIVE, INACTIVE, REQUESTED, APPROVED, DELETED, REQUEST_EXPIRED.  # noqa: E501

        :return: The entry_state of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :rtype: str
        """
        return self._entry_state

    @entry_state.setter
    def entry_state(self, entry_state):
        """Sets the entry_state of this DocumentsShareDocumentResponse200Entries1.

        The state of user to which the share entry applies, if a user.      Possible states include ACTIVE, INACTIVE, REQUESTED, APPROVED, DELETED, REQUEST_EXPIRED.  # noqa: E501

        :param entry_state: The entry_state of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :type: str
        """

        self._entry_state = entry_state

    @property
    def entry_type(self):
        """Gets the entry_type of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501

        The type of entity to which the share entry applies. Possible      values include  0=User, 1=Company, 2=Team, 3=<Reserved>, 4=Application  # noqa: E501

        :return: The entry_type of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :rtype: float
        """
        return self._entry_type

    @entry_type.setter
    def entry_type(self, entry_type):
        """Sets the entry_type of this DocumentsShareDocumentResponse200Entries1.

        The type of entity to which the share entry applies. Possible      values include  0=User, 1=Company, 2=Team, 3=<Reserved>, 4=Application  # noqa: E501

        :param entry_type: The entry_type of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :type: float
        """

        self._entry_type = entry_type

    @property
    def accept_owner_transfer(self):
        """Gets the accept_owner_transfer of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501

        For internal use  # noqa: E501

        :return: The accept_owner_transfer of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :rtype: bool
        """
        return self._accept_owner_transfer

    @accept_owner_transfer.setter
    def accept_owner_transfer(self, accept_owner_transfer):
        """Sets the accept_owner_transfer of this DocumentsShareDocumentResponse200Entries1.

        For internal use  # noqa: E501

        :param accept_owner_transfer: The accept_owner_transfer of this DocumentsShareDocumentResponse200Entries1.  # noqa: E501
        :type: bool
        """

        self._accept_owner_transfer = accept_owner_transfer

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
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
        if not isinstance(other, DocumentsShareDocumentResponse200Entries1):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
