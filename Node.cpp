#include "Node.h"

Node::Node() {
    this->next = nullptr;
    strcpy(name, "empty");
    cout << "Node() - constructor." << endl;
    
}

Node::Node(char* str) {
    strcpy(name, str);
    cout << "Node(" << str << ") - constructor." << endl;
}

void Node::setNext(Node* next) {
    this->next = next;
}

Node* Node::getNext() {
    return this->next;
}

void Node::print() {
    cout << "Node::print(" << this->name << ")" << endl;
}
