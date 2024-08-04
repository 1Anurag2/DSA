#include <iostream>

class Node {
public:
    int data; 
    Node* prev;
    Node* next;

    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void append(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " <-> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    void deleteNode(int value) {
        Node* current = head;
        while (current) {
            if (current->data == value) {
                if (current == head) {
                    head = current->next;
                }
                if (current == tail) {
                    tail = current->prev;
                }
                if (current->prev) {
                    current->prev->next = current->next;
                }
                if (current->next) {
                    current->next->prev = current->prev;
                }
                delete current;
                return;
            }
            current = current->next;
        }
    }
};

int main() {
    DoublyLinkedList dll;

    dll.append(1);
    dll.append(2);
    dll.append(3);

    std::cout << "Original Doubly Linked List:" << std::endl;
    dll.display();

    dll.deleteNode(2);

    std::cout << "Doubly Linked List after Deleting 2:" << std::endl;
    dll.display();

    return 0;
}
