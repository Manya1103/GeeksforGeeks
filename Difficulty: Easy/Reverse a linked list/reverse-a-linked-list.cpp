/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node *curr = head, *prev = nullptr, *next;
        while(curr != nullptr){
            next = curr -> next;
            curr -> next = prev;
            
            // move pointers one position ahead
            prev = curr;
            curr = next;
        }
        return prev;
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