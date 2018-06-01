@editor_note
Feature: Editor Note
In order to leave notes to my site editors
As a user with the proper role
I should be able to leave a editors note on a node

Scenario Outline: An authenticated user should be able to access the form for adding a class note
    Given  I am logged in as a user with the <role> role
    When I go to "node/add/class-note"
    Then I should see <message>

    Examples:
        | role            | message                  |
        | edit_my_content | "Access Denied"          |
        | edit_only       | "Access Denied"          |
        | content_editor  | "Create Class Note"      |
        | site_owner      | "Create Class Note"      |
        | administrator   | "Create Class Note"      |
        | developer       | "Create Class Note"      |

Scenario: An anonymous user should not be able to access the form for adding a class note
    When I am on "node/add/class-note"
    Then I should see "Access denied"

