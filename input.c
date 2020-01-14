#include <stdio.h>

// #include <stdlib.h>
// #include <time.h>

int main(void) {

    printf("第一次输入\n");
    int input;
    int rlt = scanf("%d", &input);

    // rlt判断scanf是否正常接收数字，如果接收不正常，需要清空缓存区
    if (rlt != 1) {


        char getOne;

        do {
            getOne = getchar();
            for (int i = 0; i < count; ++i)
            {
            	break;
            }
        } while (getOne != '\n');



        char getOne = getchar();

        while (getOne != '\n') {
            getOne = getchar();
        }


        for (char getOne = getchar(); getOne != '\n'; getOne = getchar()) {

        }

    }

    int ifCondition = 5;

    if () {

    } else if () {

    } else {

    }


    int condition = 10;

    switch (condition) {
    case 1:
        break;

    case 2:

    case 3:


    case 4:
        break;

    default:
        break;
    }



    // if (rlt != 1) {
    //     char c = getchar();

    //     if (c != '\n') {
    //         char c = getchar();

    //         if (c != '\n') {
    //             char c = getchar();
    //         }
    //     }
    // }

    printf("%s%d\n", "返回值：", rlt);

    printf("%d\n", input);
    printf("第二次输入\n");
    scanf("%d", &input);
    printf("%d\n", input);
    printf("程序退出\n");
    return 0;
}