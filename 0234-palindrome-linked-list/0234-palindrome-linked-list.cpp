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
    bool isPalindrome(ListNode* head) {
        vector<int>ar;
        ListNode* cur=head;
        while(cur!=NULL)
        {
            ar.push_back(cur->val);
            cur=cur->next;

        }
        int left=0, right=ar.size()-1;
        while(left<right)
        {
            if(ar[left] != ar[right])
            return false;
 
            left++;
            right--;

        }
        
        
    return true;    
    }
    
};