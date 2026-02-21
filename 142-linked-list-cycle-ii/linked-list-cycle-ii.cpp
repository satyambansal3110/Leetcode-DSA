/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int> mp;   // store node address
        ListNode* p = head;
        int x = 0;

        while(p != NULL) {
            if(mp.find(p) != mp.end()) {
                return p;   
            }

            mp[p] = x++;   
            p = p->next;
        }

        return NULL;   
    }
};