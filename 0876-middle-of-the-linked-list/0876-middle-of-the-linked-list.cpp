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
        // ListNode* temp = head;
        // int cnt = 0; 

        // while(temp!=nullptr){
        //     cnt++;
        //     temp = temp->next;
        // }

        // cnt = cnt/2;
        // temp = head;
        // while(cnt!=0){
        // temp = temp->next;
        // cnt--;
        // }
        //   return temp;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        
    }
};