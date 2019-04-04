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


class Plan(object):
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
        'object': 'str',
        'amount': 'int',
        'created': 'int',
        'currency': 'str',
        'interval': 'str',
        'interval_count': 'int',
        'livemode': 'bool',
        'metadata': 'dict(str, str)',
        'name': 'str',
        'statement_descriptor': 'str',
        'trial_period_days': 'int',
        'statement_description': 'str'
    }

    attribute_map = {
        'id': 'id',
        'object': 'object',
        'amount': 'amount',
        'created': 'created',
        'currency': 'currency',
        'interval': 'interval',
        'interval_count': 'intervalCount',
        'livemode': 'livemode',
        'metadata': 'metadata',
        'name': 'name',
        'statement_descriptor': 'statementDescriptor',
        'trial_period_days': 'trialPeriodDays',
        'statement_description': 'statementDescription'
    }

    def __init__(self, id=None, object=None, amount=None, created=None, currency=None, interval=None, interval_count=None, livemode=None, metadata=None, name=None, statement_descriptor=None, trial_period_days=None, statement_description=None):  # noqa: E501
        """Plan - a model defined in OpenAPI"""  # noqa: E501

        self._id = None
        self._object = None
        self._amount = None
        self._created = None
        self._currency = None
        self._interval = None
        self._interval_count = None
        self._livemode = None
        self._metadata = None
        self._name = None
        self._statement_descriptor = None
        self._trial_period_days = None
        self._statement_description = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if object is not None:
            self.object = object
        if amount is not None:
            self.amount = amount
        if created is not None:
            self.created = created
        if currency is not None:
            self.currency = currency
        if interval is not None:
            self.interval = interval
        if interval_count is not None:
            self.interval_count = interval_count
        if livemode is not None:
            self.livemode = livemode
        if metadata is not None:
            self.metadata = metadata
        if name is not None:
            self.name = name
        if statement_descriptor is not None:
            self.statement_descriptor = statement_descriptor
        if trial_period_days is not None:
            self.trial_period_days = trial_period_days
        if statement_description is not None:
            self.statement_description = statement_description

    @property
    def id(self):
        """Gets the id of this Plan.  # noqa: E501


        :return: The id of this Plan.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this Plan.


        :param id: The id of this Plan.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def object(self):
        """Gets the object of this Plan.  # noqa: E501


        :return: The object of this Plan.  # noqa: E501
        :rtype: str
        """
        return self._object

    @object.setter
    def object(self, object):
        """Sets the object of this Plan.


        :param object: The object of this Plan.  # noqa: E501
        :type: str
        """

        self._object = object

    @property
    def amount(self):
        """Gets the amount of this Plan.  # noqa: E501


        :return: The amount of this Plan.  # noqa: E501
        :rtype: int
        """
        return self._amount

    @amount.setter
    def amount(self, amount):
        """Sets the amount of this Plan.


        :param amount: The amount of this Plan.  # noqa: E501
        :type: int
        """

        self._amount = amount

    @property
    def created(self):
        """Gets the created of this Plan.  # noqa: E501


        :return: The created of this Plan.  # noqa: E501
        :rtype: int
        """
        return self._created

    @created.setter
    def created(self, created):
        """Sets the created of this Plan.


        :param created: The created of this Plan.  # noqa: E501
        :type: int
        """

        self._created = created

    @property
    def currency(self):
        """Gets the currency of this Plan.  # noqa: E501


        :return: The currency of this Plan.  # noqa: E501
        :rtype: str
        """
        return self._currency

    @currency.setter
    def currency(self, currency):
        """Sets the currency of this Plan.


        :param currency: The currency of this Plan.  # noqa: E501
        :type: str
        """

        self._currency = currency

    @property
    def interval(self):
        """Gets the interval of this Plan.  # noqa: E501


        :return: The interval of this Plan.  # noqa: E501
        :rtype: str
        """
        return self._interval

    @interval.setter
    def interval(self, interval):
        """Sets the interval of this Plan.


        :param interval: The interval of this Plan.  # noqa: E501
        :type: str
        """

        self._interval = interval

    @property
    def interval_count(self):
        """Gets the interval_count of this Plan.  # noqa: E501


        :return: The interval_count of this Plan.  # noqa: E501
        :rtype: int
        """
        return self._interval_count

    @interval_count.setter
    def interval_count(self, interval_count):
        """Sets the interval_count of this Plan.


        :param interval_count: The interval_count of this Plan.  # noqa: E501
        :type: int
        """

        self._interval_count = interval_count

    @property
    def livemode(self):
        """Gets the livemode of this Plan.  # noqa: E501


        :return: The livemode of this Plan.  # noqa: E501
        :rtype: bool
        """
        return self._livemode

    @livemode.setter
    def livemode(self, livemode):
        """Sets the livemode of this Plan.


        :param livemode: The livemode of this Plan.  # noqa: E501
        :type: bool
        """

        self._livemode = livemode

    @property
    def metadata(self):
        """Gets the metadata of this Plan.  # noqa: E501


        :return: The metadata of this Plan.  # noqa: E501
        :rtype: dict(str, str)
        """
        return self._metadata

    @metadata.setter
    def metadata(self, metadata):
        """Sets the metadata of this Plan.


        :param metadata: The metadata of this Plan.  # noqa: E501
        :type: dict(str, str)
        """

        self._metadata = metadata

    @property
    def name(self):
        """Gets the name of this Plan.  # noqa: E501


        :return: The name of this Plan.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this Plan.


        :param name: The name of this Plan.  # noqa: E501
        :type: str
        """

        self._name = name

    @property
    def statement_descriptor(self):
        """Gets the statement_descriptor of this Plan.  # noqa: E501


        :return: The statement_descriptor of this Plan.  # noqa: E501
        :rtype: str
        """
        return self._statement_descriptor

    @statement_descriptor.setter
    def statement_descriptor(self, statement_descriptor):
        """Sets the statement_descriptor of this Plan.


        :param statement_descriptor: The statement_descriptor of this Plan.  # noqa: E501
        :type: str
        """

        self._statement_descriptor = statement_descriptor

    @property
    def trial_period_days(self):
        """Gets the trial_period_days of this Plan.  # noqa: E501


        :return: The trial_period_days of this Plan.  # noqa: E501
        :rtype: int
        """
        return self._trial_period_days

    @trial_period_days.setter
    def trial_period_days(self, trial_period_days):
        """Sets the trial_period_days of this Plan.


        :param trial_period_days: The trial_period_days of this Plan.  # noqa: E501
        :type: int
        """

        self._trial_period_days = trial_period_days

    @property
    def statement_description(self):
        """Gets the statement_description of this Plan.  # noqa: E501


        :return: The statement_description of this Plan.  # noqa: E501
        :rtype: str
        """
        return self._statement_description

    @statement_description.setter
    def statement_description(self, statement_description):
        """Sets the statement_description of this Plan.


        :param statement_description: The statement_description of this Plan.  # noqa: E501
        :type: str
        """

        self._statement_description = statement_description

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
        if not isinstance(other, Plan):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
