#include<stdio.h>

int main(void) {
    //int result = printf("hello world!\n");
    // printf("result=%d,%d,%s,%c,%f\n",result,12,"1234",'a',123.321);
    //int a  = 5;
    //printf("%d\n",-1);
    //printf("%c\n",0xff);
    //printf("%d\n",4294967295);
    //printf("%u\n",4294967296);
    //printf("%d\n",0x80000000);
    //float a = 0.1;
    //printf("%f",0.9 / 0.8);
    //printf("%x\n", 0xffffffff);
    //printf("%X\n", 10);
    //printf("%#x\n", 10);
    //printf("%#X\n", 10);
    printf("%f", 1.0 / 100);
    printf("%f", 1234567.0F);

    float n = 1;
    float sum1 = 1.1;  //sum1为从1加到10000的结果
    float sum2 = 1.1;  //sum2为从10000加到1的结果

    for (n = 1; n <= 100; n++) { //第一种顺序：从1开始加到10000
        sum1 /= 1.1 + n;
    }

    for (n = 100; n >= 1; n--) { //第二种顺序，从10000开始加到1
        sum2 /= 1.1 + n;
    }

    printf("from 1 to 10000:%f\n", sum1);
    printf("from 10000 to 1:%f\n", sum2);

    float x, y;
    float xsum = 0.0;
    float ysum = 0.0;

    for (x = 0.0; x <= 10.0; x = x + 0.1) {
        xsum += x;

    }

    for (y = 10.0; y >= 0.0; y = y - 0.1) {
        ysum += y;
    }

    printf("%f,%f\n", xsum, ysum);


    // for(y=0.0;y<41.0;y=y+0.1)
    // {
    //     if(x+y==41.00)
    //     {
    //         printf("%f,%f\n",x,y);
    //     }
    // }

    return 0;
}
