//
// Created by Administrator on 2019/12/8.
//
#include <iostream>
#include "classTest.h"
using namespace std;

class Line {
public:                               // 声明三个公开的成员
    double length;
    void setLength(double len);
    double getLength();
    Line();
    Line(double len);
private:                              // 声明一个私有的成员
    double width;
public:                               // 声明一个公开的成员
    void setWidth(double wid);
    double getWidth();
private:
    void print();
};
Line::Line() {

}
Line::Line(double len): length(len) {
    length = len;
}
double Line::getLength() {        // 范围运算符在类定义外部定义成员函数 getLength
    return length ;
}
void Line::setLength(double len) {    // 范围运算符在类定义外部定义成员函数 setLength
    length = len;
}
double Line::getWidth() {         // 范围运算符在类定义外部定义成员函数 getWidth
    return width ;
}
void Line::setWidth(double wid) {     // 范围运算符在类定义外部定义成员函数 setWidth
    width = wid;
}

void Line::print() {
    cout << "Hello i's print!" << endl;
}

class Box {
public:
    static int objectCount;            // 在类定义内部职能对静态成员变量进行声明
    Box(double len=2.0) {
        length = len;
        objectCount++;                 // 每次创建对象时直接访问静态成员并对其增加 1
    }
    inline double getStaticCount() {
        for(int i=0; i<10; i++){
            cout<<this->objectCount<<endl;
        }
        cout<<this->objectCount<<endl; // 在实例成员函数中可以四通this指针访问静态成员
        return objectCount;            // 在实例成员函数中可以直接访问静态成员
    }
    static int getCount() {            // 必须在类定义内部对静态成员函数进行定义
        return objectCount;            // 在静态成员函数中直接访问静态成员
    }
private:
    double length;
};
int Box::objectCount = 0;              // 必须在类定义外部对静态成员进行定义

class TestLine {
public:
    int getLength();
    TestLine(int len);                   // 简单的构造函数
    TestLine(const TestLine &obj);       // 拷贝构造函数
    ~TestLine();                         // 析构函数
private:
    int *ptr;
};
TestLine::TestLine(int len) {
    cout<<"调用构造函数"<<endl;
    ptr = new int;                   // 为指针成员分配内存

    cout<<"调用构造函数2"<<endl;
    *ptr = len;
}
TestLine::TestLine(const TestLine &obj) {
    cout<<"调用拷贝构造函数"<<endl;
    ptr = new int;
    *ptr = *obj.ptr;                // 拷贝值
}
TestLine::~TestLine() {
    cout << "释放内存" << endl;
    delete ptr;
}
int TestLine::getLength() {
    return *ptr;
}
void display(TestLine obj) {
    cout<<"line 大小 :"<<obj.getLength()<<endl;
}
void classTest(){
    {
        TestLine testLine1(10);
        cout<<123<<endl;
        display(testLine1);     // 将一个对象作为参数值传递给函数时，也调用了拷贝构造函数
        TestLine testLine2 = testLine1; // 用一个对象初始化另一个对象，也调用了拷贝构造函数
        display(testLine2);     // 将一个对象作为参数值传递给函数时，也调用了拷贝构造函数
    }

    cout<<Box::getCount()<<endl;      // 通过类名和范围解析运算符访问静态成员，输出：0
    Box box1(3.3);                   // 声明类实例 line1
    cout<<box1.getCount()<<endl;      // 通过类实例和成员访问运算符访问静态成员，输出：1

    Line *line1 = new Line();
    line1->setLength(6.0);

    Line line;
    line.setLength(6.0);// 通过成员函数设置 length 成员变量的值
    cout<<"length = "<<line.getLength()<<endl; // 使用成员函数获取length。length = 6.0
    line.length = 10.0; // length是公开成员，所以可以直接访问不需要使用成员函数设置长度
    cout<<"length = "<<line.length<<endl;      // 直接访问length。length = 10.0
    // box.width = 10.0; // Error: width是私有成员，不能直接访问，可以通过box.setWidth(10.0)设置
    cout << "width = " << line.getWidth() <<endl;// 使用成员函数获取width
}
