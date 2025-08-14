class MinStack {
private:
    struct Node {
        int val;
        int minVal; // min value till this node
        Node* next;
        Node(int v, int m, Node* n) : val(v), minVal(m), next(n) {}
    };
    Node* head; // top of the stack

public:
    MinStack() {
        head = nullptr;
    }
    
    void push(int val) {
        if (!head)
            head = new Node(val, val, nullptr);
        else
            head = new Node(val, std::min(val, head->minVal), head);
    }
    
    void pop() {
        if (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return head->minVal;
    }
};
