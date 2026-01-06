#include <iostream>
#include <cstring>

using namespace std;

#ifndef NODE_H
#define NODE_H

class Node
{
public:
    Node();
    Node(char* str);

   ~Node() { cout << "~Node(" << name << ") - destructor." << endl; }
    
    void setNext(Node* next);
    Node* getNext();
    
    char* getStudent() { return this->name; }

    void print();
private:
    Node* next;
    
    char name[255];
};

#endif
