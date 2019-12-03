#include <iostream>
using namespace std;
#include "hello"
#include "namespace/namespaceA.h"
#include "namespace/namespaceB.h"
using namespace namespaceA;
using namespaceA::namesapceTest;
using namespace namespaceA::namespaceA_Inner;

#include "struct/structTest.h"
#include "memory/memoryTest.h"

void iostreamTest( ){
    char name[50], nickname[50];
    cout << "请输入您的姓名： ";
    cin >> name >> nickname;
    cout << "您的姓名是： " << name << endl;
    cout << "您的外号是： " << nickname << endl;
}

int main() {
    hello();
    //iostreamTest();
    cout << "------------------namespaceTest----------------------" << endl;
    namespaceA::namesapceTest();
    namespaceB::namesapceTest();
    namesapceTest();
    namespaceA_Inner::namespaceInnerTest();
    namespaceInnerTest();
    cout << "------------------structTest----------------------" << endl;
    structTest();
    cout << "------------------memoryTest----------------------" << endl;
    memoryTest();
    return 0;
}