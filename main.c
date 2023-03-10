#include <stdio.h>
/*
 * 5.1 数组的定义和一维数组在内存中的存储
 *   Ⅰ、数组的定义
 *    数组：是指一组具有相同数据类型的数据的有序集合。
 *    一维数组的定义格式为：类型说明符 数组名[常量表达式];
 *          例如：int a[10];定义一个整型数组，数组名为a，它有10个元素。
 *    声明数组时要遵循以下规则：
 *      (1) 数组名的命名规则和变量名的相同，即遵循标识符命名规则。
 *      (2) 在定义数组时，需要指定数组中元素的个数，方括号中的常量表达式用来表示元素的个数，即数组长度。
 *      (3) 常量表达式中可以包含常量和符号常量，但不能包含变量。C语言不允许对数组的大小做动态定义，即数组的大小不依赖于程序运行过程中变量的值。
 *       以下是错误的声明示例(最新的C标准支持，但是最好不要这么写)：
 *          int n;
 *          scanf("%d",&n); // 在程序中临时输入数组的大小
 *          int a[n];
 *       数组声明的其他常见错误如下：
 *          float a[0];  //数组大小为0没有意义
 *          int b(2)(3); //不能使用圆括号
 *          int k=3,a[k]; //不能用变量说明数组大小
 *   Ⅱ、一维数组在内存中的存储
 *        > 数组的引用方式：数组名[下标]
 *        > 数组下标从0开始
 * */
int main() {
    //一维数组的初始化方式：在定义数组时，对数组元素进行赋值
    int a1[10]={1,2,3,4,5,6,7,8,9,10};
    //只给一部分元素赋值，其余元素默认为0
    int a2[10]={1,2,3,4,5};
    return 0;
}
