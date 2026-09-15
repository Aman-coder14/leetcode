class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int> ans;

        // Store list1 values
        while (list1 != NULL) {
            ans.push_back(list1->val);
            list1 = list1->next;
        }

        // Store list2 values
        while (list2 != NULL) {
            ans.push_back(list2->val);
            list2 = list2->next;
        }

        // Sort
        sort(ans.begin(), ans.end());

        // Create new linked list
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for (int x : ans) {
            curr->next = new ListNode(x);
            curr = curr->next;
        }

        return dummy->next;
    }
};