// User function Template for C++

class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
        Node *curr = head; 
        Node *prev = nullptr;
        
        while(curr -> next != NULL){
            prev = curr;
            curr = curr -> next;
        }
        
        prev -> next = nullptr;
        curr -> next = head;
        head = curr;
        
        return head;
    }
};