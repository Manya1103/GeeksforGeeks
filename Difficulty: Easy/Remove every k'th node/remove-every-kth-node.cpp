/* Link list Node

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        // code here
        if (head == nullptr || k <= 0)
        return head;
        
        Node* curr = head;
        Node* prev = nullptr;
        
        int count = 0;
        
        while(curr != nullptr){
            count++;
            if(count % k == 0){
                if (prev != nullptr){
                    prev -> next = curr -> next;
                } else {
                    head = curr -> next;
                }
            } else {
                prev = curr;
            }
            curr = curr->next;
        }
    return head;
    }
};