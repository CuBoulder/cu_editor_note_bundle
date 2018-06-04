@editor_note
Feature: Editor Note
In order to leave notes to my site editors
As a user with the proper role
I should be able to leave a editors note on a node

Scenario Outline: An authenticated user should be able to access the form for enabling/disabling editor notes
    Given  I am logged in as a user with the <role> role
    When I go to "admin/settings/notes/config"
    Then I should see <message>

    Examples:
        | role            | message                  |
        | edit_my_content | "Access Denied"          |
        | edit_only       | "Access Denied"          |
        | content_editor  | "Access Denied"      |
        | site_owner      | "Access Denied"      |
        | administrator   | "Editor Notes Settings"      |
        | developer       | "Editor Notes Settings"      |

    Scenario: An anonymous user should not be able to access the form for enabling/disabling editor notes
    When I am on "admin/settings/notes/config"
    Then I should see "Access denied"

