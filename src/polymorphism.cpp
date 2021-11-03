#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
protected:
    string name;
    string birthday;
public:
    Person(string, string);
    virtual void print();
};

Person::Person(string name, string birthday) {
    this->name = name;
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
    Student(string, string, string, string);
    void print();
};

Student::Student (string name, string birthday, string id, string school)
    : Person(name, birthday) { 
    this->id = id;
    this->school = school;
}

void Student::print() {
    Person::print();
    cout << "ID: " << id << endl;
    cout << "School: " << school << endl;
}

class Teacher : public Person {
private:
    string major;
public:
    Teacher(string, string, string);
    void print();
};

Teacher::Teacher(string name, string birthday, string major)
    : Person(name, birthday) {
    this->major = major;
}

void Teacher::print() {
    Person::print();
    cout << "Major: " << major << endl;
}

class Vehicle {
public:
    virtual void move() = 0;
};

class Car : public Vehicle {
public:
    void move() {
        cout << "Driving" << endl;
    }
};

class Bike: public Vehicle {
    void move() {
        cout << "Cycling" << endl;
    }
};
int main() {
    vector<Person*> membersList;
    membersList.push_back(new Teacher("A", "19/09/1980", "SE"));
    membersList.push_back(new Teacher("B", "20/05/1970", "CS"));
    membersList.push_back(new Student("C", "09/07/2001", "19120060", "HCMUS"));
    membersList.push_back(new Student("D", "15/08/2001", "19120070", "HCMUS"));

    for (int i = 0; i < membersList.size(); i++) {
        cout << "------------" << endl;
        cout << "Member " << i + 1 << endl; 
        membersList[i]->print();
    }

    for (Person* member : membersList) {
        delete member;
        member = nullptr;
    }

    // Vehicle* vehicle1 = new Vehicle; không thể tạo đối tượng
    Vehicle* vehi1 = new Car;
    Vehicle* vehi2 = new Bike;

    vehi1->move();
    vehi2->move();

    delete vehi1;
    delete vehi2;
    return 0;
}


