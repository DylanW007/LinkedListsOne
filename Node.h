#include <iostream>
#include <cstring>

using namespace std;

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
