#include <iostream>
#include <string>
using namespace std;

class Rectangle {
private:
    static int a;
    int width;
    int height;
    string color;
public: 
    Rectangle();
    Rectangle(int);
    Rectangle(int, int);
    Rectangle(int, int, string);
    Rectangle(const Rectangle&);
    void print();
};

Rectangle::Rectangle() {
    width = 1;
    height = 1;
    a = 1;
}

Rectangle::Rectangle(int width) {
    this->width = width;
    height = 1;
    color = "transparent";
}

Rectangle::Rectangle(int width, int height) {
    this->width = width;
    this->height = height;
    color = "transparent";

}

Rectangle::Rectangle(int width, int height, string color) {
    this->width = width;
    this->height = height;
    this->color = color;
}

Rectangle::Rectangle(const  Rectangle& srcFigure) {
    width = srcFigure.width;
    height = srcFigure.height;
    color = srcFigure.color;
}
void Rectangle::print() {
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
    cout << "Color: "<< color << endl;
}


class Array {
private:
    int length;
    int* arr;
public:
    Array(int);
    Array(const Array&);
    ~Array();
};
Array::Array(int length) {
    this->length = length;
    if (length == 0) {
        arr = nullptr;
    }
    else {
        arr = new int[length];
        for (int i = 0; i < length; i++) {
            arr[i] = 0;
        }
    }
}

Array::Array(const Array& src) {
    length = src.length;
    if (length == 0) {
        arr = nullptr;
    }
    else {
        arr = new int[length];
        for (int i = 0; i < length; i++) {
            arr[i] = src.arr[i];
        }
    }
}

Array::~Array() {
    if (length > 0) {
        delete[] arr;
        arr = nullptr;
    }
}

int main() {
    Rectangle figure1(5, 10, "blue");
    Rectangle figure2(figure1);
    figure2.print();
    return 0;
}