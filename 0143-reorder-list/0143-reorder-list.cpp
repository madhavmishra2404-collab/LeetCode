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
    void reorderList(ListNode* head) {
        vector<ListNode*>ar;
        ListNode* cur=head;
        while(cur!=NULL){
            ar.push_back(cur);
            cur=cur->next;

        }
        int left=0, right=ar.size()-1;
        while(left<right){
            ar[left]->next=ar[right];
            left++;
            if(left==right)
            break;

            ar[right]->next=ar[left];
            right--;

        }
        ar[left]->next=NULL;
        
    }
};