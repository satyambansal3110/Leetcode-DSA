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
    int getDecimalValue(ListNode* head) {

        string w = "";
        while (head) {
            w += char(head->val + '0');
            head = head->next;
        }

        int c = 0;
        int m = 0;

        for (int i = w.size() - 1; i >= 0; i--) {
            int b = w[i] - '0';
            c += b * pow(2, m++);
        }

        return c;
    }
};