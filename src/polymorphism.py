from abc import ABC, abstractclassmethod
class Person:
    def __init__(self, name, birthday):
        self._name = name
        self._birthday = birthday
    def cout(self):
        print("Name:", self._name)
        print("Birthday:", self._birthday)

class Student(Person):
    def __init__(self, name, birthday, id, school):
        super().__init__(name, birthday)
        self.__id = id
        self.__school = school
    def cout(self):
        super().cout()
        print("ID:", self.__id)
        print("School", self.__school)

class Teacher(Person):
    def __init__(self, name, birthday, major):
        super().__init__(name, birthday)
        self.__major = major
    
    def cout(self):
        super().cout()
        print("Major:", self.__major)

class Vehicle(ABC):
    @abstractclassmethod
    def move(self):
        pass

class Car(Vehicle):
    def move(self):
        print("Driving")

class Bike(Vehicle):
    def move(self):
        print("Cycling")

members = []
members.append(Teacher("A", "19/09/1980", "SE"))
members.append(Teacher("B", "20/05/1970", "CS"))
members.append(Student("C", "09/07/2001", "19120060", "HCMUS"))
members.append(Student("D", "15/08/2001", "19120070", "HCMUS"))

for member in members:
    print("---------------")
    member.cout()

# vehicle1 = Vehicle() Sai
vehi1 = Car()
vehi2 = Bike()
vehi1.move()
vehi2.move()
