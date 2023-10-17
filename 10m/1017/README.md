# 10/17 題目

試撰寫一程式可求出多項式(1+2)+(2+4)+(3+6)+...+( n+2*n )的和，其中0<n<10  

## sample 
**sample1**  
|input|output|
|-----|------|
|8|(1+2)+(2+4)+(3+6)+(4+8)+(5+10)+(6+12)+(7+14)+(8+16) = 108|
|7|(1+2)+(2+4)+(3+6)+(4+8)+(5+10)+(6+12)+(7+14) = 84|

## 解題
1. 先分成兩部分
   >1. 算總和
   >2. 印出前面那一串
2. 這裡是使用`副程式`的方式表現，看起來會比較乾淨
3. 算法
   >1. 總和部分:**使用for迴圈**sum=sum+i+i*2(i從1至n)
   >2. 前面一串:**使用for迴圈**```printf("(%d+%d)",i,i+1)
   > >1. 要討論關於要不要再尾巴加`+`號:
   > >2. if i≠n 則要，反之
3. 在最後加上`"="sum`

### 使用的工具
1. [#define ll  long long] (尚未製作) **避免值過大**
2. [副函式] (尚未製作) **方便**


## 程式碼
![](https://github.com/archie0732/pu-computer-programming-G1-hw/blob/main/picture/XjUmHuq.jpg)

```c
#include <stdio.h>
#define ll long long

ll sum;

void value(int n) // 建立一個算總和的副函式(當主程式呼叫時執行)
{

    for (int i = 1; i <= n; i++)
    {

        sum = i + 2 * i + sum; // 1+1*2+2+2*2......+n+2*n=sum
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    value(n);               // 執行副程式
    for (int i = 1; i <= n; i++)// 印出(1+2)+(2+4)......(n+2*n)
    {
        printf("(%d+%d)", i, 2 * i);
        if (i != n)
        {
            printf("+");
        }
    }

    printf(" = %d \n", sum);//印出 " = sum "
    return 0;
}
```
## 其他文章
* [c libary](https://github.com/archie0732/c-library)
* [calculus solution](https://github.com/archie0732/Thomas_Calculus_12ED_Solution)
* [cpe solution](https://github.com/archie0732/CPEB-solution/blob/main/README.md)
* [cheap eg](https://www.youtube.com/watch?v=dQw4w9WgXcQ)
