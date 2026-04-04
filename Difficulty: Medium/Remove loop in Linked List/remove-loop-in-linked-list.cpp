/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
         // using hash set- time & space O(n)
        unordered_set<Node*>st;
        Node *prev = nullptr;
        while (head != nullptr) {

        if (st.find(head) == st.end()){
        st.insert(head);
        prev = head;
        head = head->next;
        
    } else {
            prev->next = nullptr;
            break;
        }
        }
   
    }
};