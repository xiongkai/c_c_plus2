//
// Created by Administrator on 2019/11/29 0029.
//
#include <stdio.h>
#include "enumTest.h"

void enumTest(){
    {
        enum Week {
            MON, TUE, WED=3, THU, FRI, SAT, SUN
        };
        printf("MON = %d  TUE = %d\n", MON, TUE);
        printf("WED = %d  THU = %d\n", WED, THU);

        printf("enum size = %d\n", sizeof(enum Week));

        enum Week enum_a = MON;
        printf("enum_a = %d\n", WED);
    }
}
