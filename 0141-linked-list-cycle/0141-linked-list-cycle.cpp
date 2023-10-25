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
    bool hasCycle(ListNode *head) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
	    unordered_map<ListNode *,int> mp;
        while(head)
        {
            if(mp[head]==0) mp[head]++;
            else return true;
            head=head->next;
        }
        return false;
    }
};