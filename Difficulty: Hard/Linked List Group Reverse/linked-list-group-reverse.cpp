/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        
     Node *curr = head, *prev = nullptr, *next;
     int count = 0;
        while(curr != nullptr && count < k ){
            next = curr -> next;
            curr -> next = prev;
            
            // move pointers one position ahead
            prev = curr;
            curr = next;
            count++;
        }
        if(next != NULL){
            head -> next = reverseKGroup(next, k);
        }
        return prev;  // new head (last node)
    }
    
     void printList()
    {
        Node *temp;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    
};