# 1103題目(作業6)

### 題目
請設計一個程式，能判斷一正整數是否為迴文數。  
所謂迴文數(palindrome)就是一個數從左到右與從右到左的讀法相同。 
例如:12321就是迴文數，1234則不是。

### 範例
**sample 1**  
* 1234  
```
1234 is not a palindrome.
```
**sample 2**  
* 7  
```
7 is a palindrome.
```
**sample 3**  
* 25752  
```
25752 is a palindrome.
```
#### 所需具備能力
1. [陣列arry]()
2. [拆分數字(c)]()
### 解題
1. 拆分數字(詳細請見連結)
2. 算有幾個數字
3. `頭`跟`尾`比較**是否相同**
   >是:比較下一個(頭+1;尾-1然後再比一次)  
   >否:程式輸出、結束(不再繼續)

### 程式碼
* [點我進入](https://github.com/archie0732/pu-computer-programming-G1-hw/blob/main/1103/1103.c)
```c
#include <stdio.h>

int main()
{
    int a, n = 0, i = 0, c = 0, ans;
    int v[500000];
    scanf("%d", &a);
    ans = a;
    while (a != 0)
    {
        v[n] = a % 10;
        a = a / 10;
        n++;
    }
    while (v[i] != 0)
    {
        i++;
    }
    for (int j = i; j > 0; j--)
    {
        if (v[c] != v[j - 1])
        {
            printf("%d is not a palindrome.", ans);
            return 0;
        }
        c++;
    }
    printf("%d is a palindrome.\n", ans);
    return 0;
}
```
