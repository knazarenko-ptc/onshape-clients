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


class BTQueryFilter183(object):
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
        'bt_type': 'str'
    }

    attribute_map = {
        'bt_type': 'btType'
    }

    discriminator_value_class_map = {
        'BTPlaneOrientationFilter-1700': 'BTPlaneOrientationFilter1700',
        'BTFeatureFilter-127': 'BTFeatureFilter127',
        'BTAndFilter-110': 'BTAndFilter110',
        'BTConstructionObjectFilter-113': 'BTConstructionObjectFilter113',
        'BTOccurrenceFilter-166': 'BTOccurrenceFilter166',
        'BTFeatureTypeFilter-962': 'BTFeatureTypeFilter962',
        'BTFlatSheetMetalFilter-3018': 'BTFlatSheetMetalFilter3018',
        'BTAllowFlattenedGeometryFilter-2140': 'BTAllowFlattenedGeometryFilter2140',
        'BTBodyTypeFilter-112': 'BTBodyTypeFilter112',
        'BTClosedCurveFilter-1206': 'BTClosedCurveFilter1206',
        'BTNotFilter-165': 'BTNotFilter165',
        'BTMateFilter-162': 'BTMateFilter162',
        'BTActiveSheetMetalFilter-2944': 'BTActiveSheetMetalFilter2944',
        'BTSMDefinitionEntityTypeFilter-1651': 'BTSMDefinitionEntityTypeFilter1651',
        'BTAllowEdgePointFilter-2371': 'BTAllowEdgePointFilter2371',
        'BTTextObjectFilter-1515': 'BTTextObjectFilter1515',
        'BTAllowMeshGeometryFilter-1026': 'BTAllowMeshGeometryFilter1026',
        'BTSketchObjectFilter-184': 'BTSketchObjectFilter184',
        'BTEdgeTopologyFilter-122': 'BTEdgeTopologyFilter122',
        'BTMateConnectorFilter-163': 'BTMateConnectorFilter163',
        'BTModifiableEntityOnlyFilter-1593': 'BTModifiableEntityOnlyFilter1593',
        'BTOrFilter-167': 'BTOrFilter167',
        'BTTextStrokeFilter-461': 'BTTextStrokeFilter461',
        'BTEntityTypeFilter-124': 'BTEntityTypeFilter124',
        'BTImageFilter-853': 'BTImageFilter853',
        'BTGeometryFilter-130': 'BTGeometryFilter130'
    }

    def __init__(self, bt_type=None, local_vars_configuration=None):  # noqa: E501
        """BTQueryFilter183 - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._bt_type = None
        self.discriminator = 'bt_type'

        if bt_type is not None:
            self.bt_type = bt_type

    @property
    def bt_type(self):
        """Gets the bt_type of this BTQueryFilter183.  # noqa: E501


        :return: The bt_type of this BTQueryFilter183.  # noqa: E501
        :rtype: str
        """
        return self._bt_type

    @bt_type.setter
    def bt_type(self, bt_type):
        """Sets the bt_type of this BTQueryFilter183.


        :param bt_type: The bt_type of this BTQueryFilter183.  # noqa: E501
        :type: str
        """

        self._bt_type = bt_type

    def get_real_child_model(self, data):
        """Returns the real base class specified by the discriminator"""
        discriminator_key = self.attribute_map[self.discriminator]
        discriminator_value = data[discriminator_key]
        return self.discriminator_value_class_map.get(discriminator_value)

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
        if not isinstance(other, BTQueryFilter183):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, BTQueryFilter183):
            return True

        return self.to_dict() != other.to_dict()
