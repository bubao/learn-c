/*
 * @Description: 
 * @Author: bubao
 * @Date: 2020-01-05 22:32:12
 * @LastEditors: bubao
 * @LastEditTime: 2020-01-05 22:32:59
 */
#include <stdio.h>

/*定义两个全局变量*/
int x = 1;
int y = 2;
int addtwonum();
int main(void)
{
    int result;
    result = addtwonum();
    printf("result 为: %d\n", result);
    return 0;
}