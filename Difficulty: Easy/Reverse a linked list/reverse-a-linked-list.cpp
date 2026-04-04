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

/*
O(n) time & O(1) space
using recursion or stack- O(n) time & O(n) space
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
        return prev; // new head (last node)
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