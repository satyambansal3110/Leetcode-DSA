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
    ListNode* reverseKGroup(ListNode* head, int k) {
      
        vector<int>a;
     
        ListNode* p =head;
        while(p!=NULL){
            
            a.push_back(p->val);
            p=p->next;
        }

        int n=a.size();
        int i=0;
        int j=i+k;
        while(j<=n){
            reverse(a.begin()+i,a.begin()+j);
            i=j;
            j=i+k;

        }
        ListNode* h=head;
        int m=0;
        while(h!=NULL){
            h->val=a[m++];
            h=h->next;

        }

        return head;
    }
};