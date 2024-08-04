#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        this->head = nullptr;
    }

    void insert(int data, int position) {
        Node* new_node = new Node(data);

        if (position == 0) {
            new_node->next = head;
            head = new_node;
        }
        else {
            Node* current = head;
            int count = 0;

            while (current != nullptr && count < position - 1) {
                current = current->next;
                count++;
            }

            if (current == nullptr) {
                std::cout << "Position out of range" << endl;
                delete new_node; // Clean up the new node
                return;
            }

            new_node->next = current->next;
            current->next = new_node;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" <<endl;
    }
};

int main() {
    LinkedList myLinkedList;

    myLinkedList.insert(1, 0); // Insert 1 at the beginning
    myLinkedList.insert(3, 1); // Insert 3 after the first element (1)
    myLinkedList.insert(5, 2); // Insert 5 between 1 and 3
    myLinkedList.insert(7, 3); // Insert 7 between 5 and 55
    myLinkedList.insert(55,4); // Insert 55 at the end of linked list
    

    myLinkedList.display();

    return 0;
}
