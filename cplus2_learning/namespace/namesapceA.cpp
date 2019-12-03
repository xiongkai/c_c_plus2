//
// Created by Administrator on 2019/12/3 0003.
//
#include <iostream>

namespace namespaceA{
    void namesapceTest(){
        std::cout << "namesapceA::namesapceTest" << std::endl;
    }

    namespace namespaceA_Inner{
        void namespaceInnerTest(){
            std::cout << "namesapceA_Inner::namesapceInnerTest" << std::endl;
        }
    }
}
