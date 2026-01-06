#include "Node.h"
#include "Student.h"

int main()
{
    Student* a = new Student(100, "Bobby");
    Student* b = new Student(101, "Susan");
    Student* c = new Student(102, "Greg");
    Student* d = new Student(103, "Brayden");
    
    
    Node* na = new Node(a);
    Node* nb = new Node(b);
    Node* nc = new Node(c);
    Node* nd = new Node(d);
    
    na->setNext(nb);
    nb->setNext(nc);
    nc->setNext(nd);
    
    Node* cur = na;
    while(cur != nullptr) {
        cur->print();
        cur = cur->getNext();
    }
    
    delete na;
    delete nb;
    delete nc;
    delete nd;
    
    delete a;
    delete b;
    delete c;
    delete d;
    
    return 0;
}
