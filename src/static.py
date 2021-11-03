class Obj:
    objNum = 0 #static attribute
    def __init__(self):
        Obj.objNum += 1

class Math:
    __PI = 3.14
    
    @classmethod
    def getPI(cls):
        return cls.__PI

    @staticmethod
    def isBigger(a, b):
        return a > b

obj1 = Obj()
print(Obj.objNum)
obj2 = Obj()
print(Obj.objNum)
obj3 = Obj()
print(Obj.objNum)

obj3.objNum = 10
print("Class Obj:", Obj.objNum)
print("obj3:", obj3.objNum)

Obj.objNum = 7
print("Class Obj:", Obj.objNum)
print("obj3:", obj3.objNum)

print(Math.getPI())
print(Math.isBigger(4, 5))

