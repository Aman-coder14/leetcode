class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
      ListNode* curr = head;
      ListNode* shead=new ListNode(0);
      ListNode* lhead=new ListNode(0);
  
       ListNode* stail =shead;
       ListNode* ltail =lhead;
       while(curr){
        if(curr->val<x){
            stail->next=curr;
            stail=stail->next;
        }else{
            ltail->next=curr;
            ltail=ltail->next;
        }
        curr=curr->next;
       }
       stail->next=lhead->next;
       ltail->next=nullptr;
       return shead->next;
    }
};