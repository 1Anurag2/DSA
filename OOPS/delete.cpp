#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

Node* deleteNode(Node* head, int value) {
    if (head == nullptr) {
        return head; // Nothing to delete in an empty list
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != value) {
        current = current->next;
    }

    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

    return head;
}

void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    std::cout << "Original Linked List:" << std::endl;
    displayList(head);

    head = deleteNode(head, 2);

    std::cout << "Linked List after Deleting 2:" << std::endl;
    displayList(head);

    return 0;
}
