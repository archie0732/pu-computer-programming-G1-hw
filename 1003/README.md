# 10/03 題目  超市折扣(if)

<strong><em>題目:</em></strong>

> 目前商店正在週年慶折扣，消費者消費滿1000元(含)，就有8折的折扣，請建立C程式計算消費者實際應付款金額。 <br>

>* input-1 <br>
> 900
> * outpot-1<br>
> 900

> * input-2<br>
> 2500
> * output-2<br>
> 2000
<br>

## 解題: <br>
1. input :`price`<br>
2. if price >=1000 <br>
   print: `price`*`0.8`<br>
3. else :<br>
   print:　`price`<br>

<strong>p.s.:小說裡香爆拉，動畫第一集品質超高的!!</strong><br>
![](https://github.com/archie0732/pu-computer-programming-G1-hw/blob/main/picture/bspk7zsjl7yxnbpcxp8zxfjtlecdv9yksnw4baww.jpg)



## 程式碼   
`c:` <br>

``` c
#include <stdio.h>

int main()
{
    unsigned int price;
    scanf("%d", &price);// input

    if (price >= 1000)// if >$1000
    {
        printf("%d", (int)(price * 0.8));// 20%off
    }
    else
    {
        printf("%d", price);// no discount price
    }

    return 0; // programming end
}
```
`c++:`<br>

```cpp
#include <iostream>

using namespace std;

int main()
{
    int price;
    cin>>price;// input

    if (price >= 1000)// if >$1000
    {
        cout<<price*0.8;// 20%off
    }
    else
    {
        cout<< price;// no discount price
    }

    return 0;// programming end
}
