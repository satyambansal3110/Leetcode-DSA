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
    ListNode* middleNode(ListNode* head) {

        int c = 0;
        ListNode* p = head;

        while (p != NULL) {
            c++;
            p = p->next;
        }

        int a = c/2 + 1;   

        ListNode* p2 = head;
        int b = 0;

        while (p2 != NULL) {
            b++;
            if (b == a) {
                return p2;   
            }
            p2 = p2->next;
        }

        return NULL;
    }
};