# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.103
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest

import onshape_client
from onshape_client.api.app_elements_api import AppElementsApi  # noqa: E501
from onshape_client.rest import ApiException


class TestAppElementsApi(unittest.TestCase):
    """AppElementsApi unit test stubs"""

    def setUp(self):
        self.api = onshape_client.api.app_elements_api.AppElementsApi()  # noqa: E501

    def tearDown(self):
        pass

    def test_commit_transaction(self):
        """Test case for commit_transaction

        Commit Transaction  # noqa: E501
        """
        pass

    def test_create7(self):
        """Test case for create7

        Create Element.  # noqa: E501
        """
        pass

    def test_create_reference1(self):
        """Test case for create_reference1

        Create Reference  # noqa: E501
        """
        pass

    def test_delete_content1(self):
        """Test case for delete_content1

        Delete a Sub-element  # noqa: E501
        """
        pass

    def test_delete_reference1(self):
        """Test case for delete_reference1

        Delete Reference  # noqa: E501
        """
        pass

    def test_get_history(self):
        """Test case for get_history

        Get History  # noqa: E501
        """
        pass

    def test_get_sub_element_content(self):
        """Test case for get_sub_element_content

        Get Content  # noqa: E501
        """
        pass

    def test_get_subelement_ids(self):
        """Test case for get_subelement_ids

        Get Sub-element IDs  # noqa: E501
        """
        pass

    def test_resolve_reference1(self):
        """Test case for resolve_reference1

        Resolve Reference  # noqa: E501
        """
        pass

    def test_start_transaction(self):
        """Test case for start_transaction

        Start Transaction  # noqa: E501
        """
        pass

    def test_update5(self):
        """Test case for update5

        Update Element  # noqa: E501
        """
        pass

    def test_update_reference1(self):
        """Test case for update_reference1

        Update Reference  # noqa: E501
        """
        pass


if __name__ == '__main__':
    unittest.main()