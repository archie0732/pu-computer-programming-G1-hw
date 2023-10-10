# 10/5 題目: 階乘

## 題目:
> 試撰寫出一程式可計算出 n! 的值。若輸入的n為負值, 則印出ERROR訊息。 <br>

> * input1 <br>
> 5 <br>
> * output1 <br>
> 120 <br>

> * input2 <br>
> -1<br>
> * output３ <br>　
> ERROR <br>

> * input3 <br>
> 0 <br>
> * output3 <br>
> 1 <br>

``` c
#include <stdio.h>

int main()
{

    long long p = 1; 
    int n = 0;
    scanf("%d", &n);// input
    if (n < 0)      // if n value < 0 
    {
        printf("ERROR");// print error
        return 0;       // programming  end
    }
    if (n == 0)  // if n=0
    {
        printf("1"); //0!=1
        return 0; // programming end
    }

    for (int i = 1; i <= n; i++)// 1*(1+1)*(1+1+1)*......1*n
    {
        p = p * i;
    }
    printf("%d", p);// print ans

    return 0;// end
}
```
