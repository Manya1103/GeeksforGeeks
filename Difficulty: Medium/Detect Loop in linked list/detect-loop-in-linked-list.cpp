/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        // using hash set- time & space O(n)
        unordered_set<Node*>st;
        while (head != nullptr) {

        if (st.find(head) != st.end())
            return true;

        st.insert(head);

        head = head->next;
    }
    return false;
}
};