//
// Created by Administrator on 2019/12/8.
//
#include <iostream>
#include "classTest.h"
using namespace std;

class Line {
public:                               // �������������ĳ�Ա
    double length;
    void setLength(double len);
    double getLength();
    Line();
    Line(double len);
private:                              // ����һ��˽�еĳ�Ա
    double width;
public:                               // ����һ�������ĳ�Ա
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
double Line::getLength() {        // ��Χ��������ඨ���ⲿ�����Ա���� getLength
    return length ;
}
void Line::setLength(double len) {    // ��Χ��������ඨ���ⲿ�����Ա���� setLength
    length = len;
}
double Line::getWidth() {         // ��Χ��������ඨ���ⲿ�����Ա���� getWidth
    return width ;
}
void Line::setWidth(double wid) {     // ��Χ��������ඨ���ⲿ�����Ա���� setWidth
    width = wid;
}

void Line::print() {
    cout << "Hello i's print!" << endl;
}

class Box {
public:
    static int objectCount;            // ���ඨ���ڲ�ְ�ܶԾ�̬��Ա������������
    Box(double len=2.0) {
        length = len;
        objectCount++;                 // ÿ�δ�������ʱֱ�ӷ��ʾ�̬��Ա���������� 1
    }
    inline double getStaticCount() {
        for(int i=0; i<10; i++){
            cout<<this->objectCount<<endl;
        }
        cout<<this->objectCount<<endl; // ��ʵ����Ա�����п�����ͨthisָ����ʾ�̬��Ա
        return objectCount;            // ��ʵ����Ա�����п���ֱ�ӷ��ʾ�̬��Ա
    }
    static int getCount() {            // �������ඨ���ڲ��Ծ�̬��Ա�������ж���
        return objectCount;            // �ھ�̬��Ա������ֱ�ӷ��ʾ�̬��Ա
    }
private:
    double length;
};
int Box::objectCount = 0;              // �������ඨ���ⲿ�Ծ�̬��Ա���ж���

class TestLine {
public:
    int getLength();
    TestLine(int len);                   // �򵥵Ĺ��캯��
    TestLine(const TestLine &obj);       // �������캯��
    ~TestLine();                         // ��������
private:
    int *ptr;
};
TestLine::TestLine(int len) {
    cout<<"���ù��캯��"<<endl;
    ptr = new int;                   // Ϊָ���Ա�����ڴ�

    cout<<"���ù��캯��2"<<endl;
    *ptr = len;
}
TestLine::TestLine(const TestLine &obj) {
    cout<<"���ÿ������캯��"<<endl;
    ptr = new int;
    *ptr = *obj.ptr;                // ����ֵ
}
TestLine::~TestLine() {
    cout << "�ͷ��ڴ�" << endl;
    delete ptr;
}
int TestLine::getLength() {
    return *ptr;
}
void display(TestLine obj) {
    cout<<"line ��С :"<<obj.getLength()<<endl;
}
void classTest(){
    {
        TestLine testLine1(10);
        cout<<123<<endl;
        display(testLine1);     // ��һ��������Ϊ����ֵ���ݸ�����ʱ��Ҳ�����˿������캯��
        TestLine testLine2 = testLine1; // ��һ�������ʼ����һ������Ҳ�����˿������캯��
        display(testLine2);     // ��һ��������Ϊ����ֵ���ݸ�����ʱ��Ҳ�����˿������캯��
    }

    cout<<Box::getCount()<<endl;      // ͨ�������ͷ�Χ������������ʾ�̬��Ա�������0
    Box box1(3.3);                   // ������ʵ�� line1
    cout<<box1.getCount()<<endl;      // ͨ����ʵ���ͳ�Ա������������ʾ�̬��Ա�������1

    Line *line1 = new Line();
    line1->setLength(6.0);

    Line line;
    line.setLength(6.0);// ͨ����Ա�������� length ��Ա������ֵ
    cout<<"length = "<<line.getLength()<<endl; // ʹ�ó�Ա������ȡlength��length = 6.0
    line.length = 10.0; // length�ǹ�����Ա�����Կ���ֱ�ӷ��ʲ���Ҫʹ�ó�Ա�������ó���
    cout<<"length = "<<line.length<<endl;      // ֱ�ӷ���length��length = 10.0
    // box.width = 10.0; // Error: width��˽�г�Ա������ֱ�ӷ��ʣ�����ͨ��box.setWidth(10.0)����
    cout << "width = " << line.getWidth() <<endl;// ʹ�ó�Ա������ȡwidth
}
