class Solution {
public:
    ListNode* itr(ListNode* h,ListNode* l1, ListNode* l2){
        while(l1 && l2){
            if(l1->val<l2->val){
                h->next=l1;
                h=l1;
                l1=l1->next;
            } 
            else{
                h->next=l2;
                h=l2;
                l2=l2->next;
            }
        }
        while(l1){
            h->next=l1;
            h=l1;
            l1=l1->next;
        }
        while(l2){
            h->next=l2;
            h=l2;
            l2=l2->next;
        }
        return h;
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head,*h;
        if (l1==NULL and l2==NULL) return NULL;
        else if (l1!=NULL and l2==NULL) return l1;
        else if (l1==NULL and l2!=NULL) return l2;
        if(l1->val<l2->val){
            h=l1;head=l1;
            itr(h,l1->next,l2);
        }
        else{
            h=l2;head=l2;
            itr(h,l1,l2->next);
        }
        return head;
    }
};