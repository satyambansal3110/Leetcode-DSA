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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) return head;

        ListNode* p = head;
        int c = 1;
        while (p->next != NULL) {      
            c++;
            p = p->next;
        }

        k = k % c;
        if (k == 0) return head;

        ListNode* h = head;
        for (int i = 1; i < c - k; i++) {   
            h = h->next;
        }

        ListNode* newhead = h->next;
        h->next = NULL;     
        p->next = head;     

        return newhead;
    }
};