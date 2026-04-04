/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        // code here
        // using hashing - O(n)- time & space complexity
        unordered_set<Node*> st; 
        Node* currNode = head; 
        
        while (currNode != nullptr) {
      
        if (st.find(currNode) != st.end()) { // st.end - not found (points after the last element)
            return currNode->data;  
        }
       
        st.insert(currNode);
        
        currNode = currNode->next;
    }
    
    return -1;
}
};