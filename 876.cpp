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
        
        if(head==NULL)return NULL;
        
        
        map<int,ListNode*>mp;
        
        int cnt = 0;
        
        ListNode* cur = head;
        
        while(cur!=NULL){
            ++cnt;
            mp[cnt] = cur;
            cur = cur->next;
        }
        return mp[ceil(static_cast<float>((1+cnt))/2 )];
    }
};