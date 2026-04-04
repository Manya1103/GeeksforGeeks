/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

/*
Using Nested Loops - O(n^2) Time and O(1) Space
Using HashSet - O(n) Time and O(n) Space
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        unordered_set<int> st;
        Node *curr = head;
        Node *prev = nullptr;
        
        while (curr != nullptr) {
            if (st.find(curr->data) != st.end()) {
                prev->next = curr->next;
                 Node *temp = curr;
                 curr = curr->next;
                 delete temp;
                
            } else {
                st.insert(curr->data);
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
        
    }
        void printList(Node *head) {
            Node *curr = head;
            while (curr != nullptr) {
                cout << curr->data << " ";
                curr = curr->next;
            }
            cout << endl;
            
        }
};