class Rectangle:
    def __init__(self, width, height, color):
        self.__width = width
        self.__height = height
        self.__color = color
    
    def __del__(self):
        print("Destructor")
    def print(self):
        print('Width:', self.__width)
        print('Height:', self.__height)
        print('Color:', self.__color)


    def getWidth(self):
        return self.__width
    def setWidth(self, width):
        self.__width = width
    def getHeight(self):
        return self.__height
    def setHeight(self, height):
        self.__height = height
    def getColor(self):
        return self.__color
    def setColor(self, color):
        self.__color = color
    def getPerimeter(self):
        return (self.__width + self.__height) * 2
    def getArea(self):
        return self.__width * self.__height

# figure1 =Rectangle() #Lỗi
figure2 = Rectangle(5, 10, 'red') #Đúng
# figure1.print()
# figure1._height = 5 #Đúng

figure2.sta = 2
print(Rectangle.sta)
print(figure2.sta)
Rectangle.sta = 5
print(Rectangle.sta)
print(figure2.sta)



