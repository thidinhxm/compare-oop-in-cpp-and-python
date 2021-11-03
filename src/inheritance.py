class Person:
    def __init__(self):
        self._name = ""
        self._birthday = ""
    def getName(self):
        return self._name
    def setName(self, name):
        self._name = name
    def getBirthday(self):
        return self._birthday
    def setBirthday(self, birthday):
        self._birthday = birthday
    def cout(self):
        print("Name:", self._name)
        print("Birthday:", self._birthday)


class Student(Person):
    def __init__(self):
        super().__init__()
        self.__id = ""
        self.__school = ""
    def getId(self):
        return self.__id
    def setId(self, id):
        self.__id = id
    def getSchool(self):
        return self.__school
    def setSchool(self, school):
        self.__school = school
    def cout(self):
        super().cout()
        print("ID:", self.__id)
        print("School:", self.__school)

per1 = Person()
per1.setName("thi")
per1.setBirthday("21/02/2001")
print("Person:")
per1.cout()
std1 = Student()
std1.setName("thi")
std1.setBirthday("21/02/2001")
std1.setId("19120662")
std1.setSchool("HCMUS")
print("Student:")
std1.cout()