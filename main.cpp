#include <iostream>
#include <cstring>

using namespace std;

class Node
{
public:
    Node() {
        this->next = nullptr;
        strcpy(name, "empty");
        cout << "Node() - constructor." << endl;
        
    }
    Node(char* str) {
        strcpy(name, str);
        cout << "Node(" << str << ") - constructor." << endl;
    }
    
    void setNext(Node* next) {
        this->next = next;
    }
    
    Node* getNext() {
        return this->next;
    }
    
    char* getStudent() { return this->name; }
    
    ~Node() { cout << "~Node(" << name << ") - destructor." << endl; }
    
    void print() {
        cout << "Node::print(" << this->name << ")" << endl;
    }
private:
    Node* next;
    
    char name[255];
};

int main()
{
    Node* a = new Node("a");
    Node* b = new Node("b");
    Node* c = new Node("c");
    Node* d = new Node("d");
    
    a->setNext(b);
    b->setNext(c);
    c->setNext(d);
    
    Node* cur = a;
    while(cur != nullptr) {
        cur->print();
        cur = cur->getNext();
    }
    
    delete a;
    delete b;
    delete c;
    delete d;
    
    return 0;
}
