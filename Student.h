
#include <iostream>
#include <cstring>

using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student
{
public:
    Student() {
        this->id = -1;
        strcpy(this->name, "");
    }
    
    Student(int id, char* str) {
        this->id = id;
        strcpy(this->name, str);
    }

   ~Student() { cout << "~Student(" << name << ") - destructor." << endl; }

    void setId(int id) { this->id = id; }
    int  getId() { return this->id; }
    
    char* getName() { return this->name; }
    void  setName(char* str) { strcpy(name, str); }

    void print() {
        cout << "Student::print(" << id << ", " << this->name << ")" << endl;
    }
    
private:
    int id;
    char name[255];
};


#endif // STUDENT_H//Placeholder
