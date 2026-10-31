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
        if(head==NULL || head->next==NULL) return head;
        
        int len = 0;
        ListNode* curr = head;

        while(curr != NULL) {
            len++;
            curr = curr->next;
        }

        k = k % len;

        while(k>0){
            ListNode* temp=head;
            ListNode* prev=head;
            while(temp->next != NULL){
                temp=temp->next;
            }
            while(prev->next->next != NULL){
                prev=prev->next;
            }
            temp->next=head;
            prev->next=NULL;
            head=temp;
            k--;
        }
        return head;
    }
};