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
    ListNode* brute(ListNode* head){
             ListNode* temp = head;
       unordered_map<ListNode*,int>mpp;

       while(temp!=nullptr)
       {
            if(mpp.contains(temp)) return temp;
            mpp[temp] = 1;
            temp = temp->next;
       } 
       return nullptr;

    }
    ListNode *optimal(ListNode* head){
        ListNode*slow = head;
        ListNode*fast = head;
        int yes = 0 ;
        while(fast!=nullptr&&fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                yes = 1;
                break;
            }
        }
        if(!yes){
            return nullptr;
        }
        slow = head;
       
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        
        }
        return slow;
    }
    ListNode *detectCycle(ListNode *head) {
        return optimal(head);
    }
};