#include "Node.h"

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
