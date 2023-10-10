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

## 解題:(分三種)
1. `value<0`
>無法計算
3. `value=0`
>value =1
4. `value>1`
>這次的重點<br>
>1. n*(n-1)*(n-2)*.....*1 <br>

>2. 1*(1+1)*(2+1)*....*n <br>
<br>

![](https://github.com/archie0732/pu-computer-programming-G1-hw/blob/main/picture/valorant-jett-cyan-ovb3j698gvees4fk.jpg)
   


<br>

`c:`

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
<br>

`cpp:`
```cpp
#include <iostream>

int main()
{

    long long p = 1; 
    int n = 0;
    cin>>n;// input
    if (n < 0)      // if n value < 0 
    {
        cout<<"ERROR";// print error
        return 0;       // programming  end
    }
    if (n == 0)  // if n=0
    {
        cout<<1; //0!=1
        return 0; // programming end
    }

    for (int i = 1; i <= n; i++)// 1*(1+1)*(1+1+1)*......1*n
    {
        p = p * i;
    }
    cout<<p;// print ans

    return 0;// end
}
```

