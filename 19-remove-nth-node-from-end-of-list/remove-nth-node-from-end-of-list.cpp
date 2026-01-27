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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p=head;
        int c=0;
        while(p){
            c++;
            p=p->next;

        }
        ListNode*p1=head;
        int pos=c-n;
        if (pos == 0) {
            return head->next;
        }
        int m=0;
        while(p1){
            m++;
            if(m==pos){
                p1->next=p1->next->next;
            }
            p1=p1->next;
        }
        return head;
    }
};