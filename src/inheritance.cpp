#include <iostream>
#include <string>
using namespace std;


class Father {
protected: // Cho lớp con có thể sử dụng
    // Thuộc tính của lớp cha

public:
    // Phương thức của lớp cha
};

class Child : public Father {
private:
    // Thuộc tính riêng của lớp con

public:
    // Phương thức riêng của lớp con
    // Phương thức của lớp cha muốn override
};

class Person {
protected:
    string name;
    string birthday;
public:
    Person();
    Person(string, string);
    string getName();
    void setName(string);
    string getBirthday();
    void setBirthday(string);
    void print();
};

Person::Person() {
    name = "";
    birthday = "";
}
Person::Person(string name, string birthday) {
    this->name = name;
    this->birthday = birthday;
}
string Person::getName() {
    return name;
}

void Person::setName(string name) {
    this->name = name;
}

string Person::getBirthday() {
    return birthday;
}

void Person::setBirthday(string birthday) {
    this->birthday = birthday;
}

void Person::print() {
    cout << "Name: " << name << endl;
    cout << "Birthday: " << birthday << endl;
}

class Student : public Person {
private:
    string id;
    string school;
public:
    Student();
    Student(string, string, string, string);
    string getId();
    void setID(string);
    string getSchool();
    void setSchool(string);
    void print();
};

Student::Student() {// không chỉ định mặc định default constructor
    id = "";
    school = "";
}

Student::Student
(string name, string birthday, string id, string school)
    : Person(name, birthday) { // chỉ định constructor lớp cha
    this->id = id;
    this->school = school;
}
string Student::getId() {
    return id;
}

void Student::setID(string id) {
    this->id = id;
}

string Student::getSchool() {
    return school;
}

void Student::setSchool(string school) {
    this->school = school;
}

void Student::print() {
    Person::print();
    cout << "ID: " << id << endl;
    cout << "School: " << school << endl;
}

int main() {
    Person per1;
    Student std1;
    Student std2("thi", "21/02/2001", "19120662", "HCMUS");
    cout << "Student1:" << endl;
    std1.print();
    cout << "Student2:" << endl; 
    std2.print();
    return 0;
}
