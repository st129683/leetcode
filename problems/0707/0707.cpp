class Node {
private:
    int value;
    Node* next;
public:
    Node(int val, Node* nxt) : value(val), next(nxt) {}

    int getValue() const {
        return value;
    }

    Node* getNext() const {
        return next;
    }

    void setNext(Node* next_node) {
        next = next_node;
    }
};

class MyLinkedList {
private:
    int size;
    Node* head;
    Node* tail;
public:
    MyLinkedList() : size(0), head(nullptr), tail(nullptr) {}

    int get(int index) const {
        if (index >= size) {
            return -1;
        }
        Node* temp = head;
        for (int i = 0; i < index; ++i) {
            temp = temp->getNext();
        }
        return temp->getValue();
    }

    void addAtHead(int val) {
        Node* new_head = new Node(val, head);
        head = new_head;
        if (size == 0) {
            tail = new_head;
        }
        ++size;
    }
    
    void addAtTail(int val) {
        Node* new_tail = new Node(val, nullptr);
        if (size == 0) {
            head = tail = new_tail;
        }
        else {
            tail->setNext(new_tail);
            tail = new_tail;
        }
        ++size;
    }
    
    void addAtIndex(int index, int val) {
        if (index > size) {
            return;
        }
        else if (index == size) {
            addAtTail(val);
        }
        else if (index == 0) {
            addAtHead(val);
        }
        else {
            Node* prev = head;
            for (int i = 0; i < index - 1; ++i) {
                prev = prev->getNext();
            }
            Node* to_added = new Node(val, prev->getNext());
            prev->setNext(to_added);
            ++size;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index >= size) {
            return;
        }
        Node* prev = nullptr;
        Node* curr = head;
        for (int i = 0; i < index; ++i) {
        	prev = curr;
        	curr = curr->getNext();
        }
        if (prev == nullptr) {
        	head = curr->getNext();
        }
        else {
        	prev->setNext(curr->getNext());
        }

        if (curr == tail) {
        	tail = prev;
        }

		delete curr;
		--size;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
