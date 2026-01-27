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
    void reorderList(ListNode* head) {
        if (!head) return;

        vector<int> ans;
        ListNode* p = head;
        while (p) {
            ans.push_back(p->val);
            p = p->next;
        }

        int i = 0;
        int j = ans.size() - 1;

        p = head;
        while (i < j) {
            p->val = ans[i];      
            p = p->next;

            p->val = ans[j];     
            p = p->next;

            i++;
            j--;
        }

        if (i == j) {  
            p->val = ans[i];
        }
    }
};