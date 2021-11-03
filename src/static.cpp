#include <iostream>
using namespace std;

class Obj {
public:
    static int objNum;
    int attr;
    Obj() {
        ++objNum;
    }

    static void print() {
        cout << "objNum: " << Obj::objNum << endl; //Đúng
        // cout << "attr" << attr << endl; //Sai
    }
};

int Obj::objNum = 0;

int main() {
    Obj obj1;
    cout << Obj::objNum << endl;
    Obj obj2;
    cout << Obj::objNum << endl;
    Obj obj3;
    cout << Obj::objNum << endl;

    obj3.objNum = 10; // Cố tình sử dụng;
    cout << "Class Obj: " << Obj::objNum << endl;
    cout << "obj3: " << obj3.objNum << endl;
    return 0;
}