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

    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> ln;
        ListNode *node = head;
        while(node != NULL) {
            ln.push_back(node);
            node = node->next;
        }
        int middle = ln.size()/2;
        ListNode *ans = ln[middle];
        return ans;
    }
};