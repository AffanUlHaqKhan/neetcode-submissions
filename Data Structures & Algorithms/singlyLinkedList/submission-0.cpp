class LinkedList {
    struct LLNode {
        int value;
        LLNode* next;
    };
private:
    LLNode* head;
    LLNode* tail;
public:
    LinkedList() : head(nullptr), tail(nullptr) {}

    int get(int index) {
        int i = 0;
        LLNode* currNode = head;
        while (currNode != nullptr) {
            if (i == index) return currNode->value;
            i++;
            currNode = currNode->next;
        }
        return -1;
    }

    void insertHead(int val) {
        LLNode* newnode = new LLNode{val, head};
        head = newnode;
        if (tail == nullptr) tail = head;
    }

    void insertTail(int val) {
        LLNode* newnode = new LLNode{val, nullptr};
        if (tail == nullptr) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    bool remove(int index) {
        if (head == nullptr) return false;

        if (index == 0) {
            LLNode* toDel = head;
            head = head->next;
            if (head == nullptr) tail = nullptr;
            delete toDel;
            return true;
        }

        int i = 0;
        LLNode* prev = head;
        while (i < index - 1 && prev->next != nullptr) {
            i++;
            prev = prev->next;
        }
        if (prev->next == nullptr) return false;  // index out of range

        LLNode* toDel = prev->next;
        prev->next = toDel->next;
        if (toDel == tail) tail = prev;
        delete toDel;
        return true;
    }

    vector<int> getValues() {
        vector<int> values;
        LLNode* currNode = head;
        while (currNode != nullptr) {
            values.push_back(currNode->value);
            currNode = currNode->next;
        }
        return values;
    }
};