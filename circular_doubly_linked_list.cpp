#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = prev = NULL;
    }
};

class DoublyCircularLinkedList {
private:
    Node* head;

public:
    DoublyCircularLinkedList() {
        head = NULL;
    }

    // ================= INSERT AT BEGINNING =================
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            head->next = head;
            head->prev = head;
        }
        else {
            Node* last = head->prev;

            newNode->next = head;
            newNode->prev = last;

            last->next = newNode;
            head->prev = newNode;

            head = newNode;
        }
    }

    // ================= INSERT AT END =================
    void insertAtEnd(int value) {
        if (head == NULL) {
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node(value);
        Node* last = head->prev;

        newNode->next = head;
        newNode->prev = last;

        last->next = newNode;
        head->prev = newNode;
    }

    // ================= INSERT AT POSITION =================
    void insertAtPosition(int value, int pos) {
        if (pos == 1) {
            insertAtBeginning(value);
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp->next != head; i++) {
            temp = temp->next;
        }

        if (temp->next == head) {
            insertAtEnd(value);
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = temp->next;
        newNode->prev = temp;

        temp->next->prev = newNode;
        temp->next = newNode;
    }

    // ================= DELETE FROM BEGINNING =================
    void deleteFromBeginning() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        if (head->next == head) {
            delete head;
            head = NULL;
        }
        else {
            Node* last = head->prev;
            Node* temp = head;

            head = head->next;
            head->prev = last;
            last->next = head;

            delete temp;
        }
    }

    // ================= DELETE FROM END =================
    void deleteFromEnd() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        if (head->next == head) {
            delete head;
            head = NULL;
        }
        else {
            Node* last = head->prev;
            Node* newLast = last->prev;

            newLast->next = head;
            head->prev = newLast;

            delete last;
        }
    }

    // ================= DELETE FROM POSITION =================
    void deleteFromPosition(int pos) {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        if (pos == 1) {
            deleteFromBeginning();
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos && temp->next != head; i++) {
            temp = temp->next;
        }

        if (temp->next == head && pos != 1) {
            cout << "Invalid Position\n";
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        delete temp;
    }

    // ================= TRAVERSE FORWARD =================
    void traverseForward() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }

    // ================= TRAVERSE BACKWARD =================
    void traverseBackward() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head->prev;

        do {
            cout << temp->data << " ";
            temp = temp->prev;
        } while (temp != head->prev);

        cout << endl;
    }
};

// ================= MAIN FUNCTION =================
int main() {
    DoublyCircularLinkedList list;

    list.insertAtBeginning(10);
    list.insertAtBeginning(5);
    list.insertAtEnd(20);
    list.insertAtPosition(15, 3);

    cout << "Forward Traversal: ";
    list.traverseForward();

    cout << "Backward Traversal: ";
    list.traverseBackward();

    list.deleteFromBeginning();
    list.deleteFromEnd();
    list.deleteFromPosition(2);

    cout << "After Deletions (Forward): ";
    list.traverseForward();

    return 0;
}