#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int main(void) {
    // 使用当前时间生成种子，放置每次程序启动产生的随机数一样
    srand(time(NULL));

    // int a, b;
    int a = 0, b = 0;

    printf("%s\n", "输入第一个数字：");

    scanf("%d", &a);
    printf("%s\n", "输入第二个数字：");
    scanf("%d", &b);

    // 生成 [a,b]范围间的数字 n = a + X % (b - a + 1)
    printf("%s%d到%d之间的随机数:%d\n", "随机生成", a, b, a + rand() % (b - a + 1));
    printf("随机生成%d到%d之间的随机数:%d\n", a, b, a + rand() % (b - a + 1));

    return 0;
}