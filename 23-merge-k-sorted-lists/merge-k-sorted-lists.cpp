/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> a;
        for (int i = 0; i < lists.size(); i++) {
            ListNode* curr = lists[i];
            while (curr != NULL) {
                a.push_back(curr->val);
                curr = curr->next;
            }
        }
        sort(a.begin(), a.end());

        ListNode dummy;
        ListNode* p = &dummy;
        for (int x : a) {
            p->next = new ListNode(x);
            p = p->next;
        }
        return dummy.next;
    }
};