#include <iostream>
#include <string>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
    string color;
public: 
    int getWidth();
    void setWidth(int width);
    int getHeight();
    void setHeight(int height);
    string getColor();
    void setColor(string color);
    int getPerimeter();
    int getArea();
};

int Rectangle::getWidth() {
    return width;
}
void Rectangle::setWidth(int width) {
    this->width = width;
}
int Rectangle::getHeight() {
    return height;
}
void Rectangle::setWidth(int width) {
    this->height = height;
}
string Rectangle::getColor() {
    return color;
}
void Rectangle::setColor(string color) {
    this->color = color;
}
int Rectangle::getPerimeter() {
    return (width + height) * 2;
}
int Rectangle::getArea() {
    return width * height;
} 

int main() {
    Rectangle figure1;
    // figure1.width = 1;    Lỗi không thể truy xuất thành phần private
    // figure1.color = "red";
    // cout << "Figure1 color: " << figure1.color << endl;
    figure1.setWidth(10);
    figure1.setHeight(5);
    cout << "Figure1 area: " << figure1.getArea() << endl;
    cout << "Figure1 perimeter: " << figure1.getPerimeter() << endl;

    return 0;
}
