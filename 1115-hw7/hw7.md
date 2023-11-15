# 1115 hw7

## 題目
請利用srand及rand這兩個函式，藉srand函式設定亂數種子，以rand函式產生亂數方式，設計一個樂透開獎程式，隨機產生一組大樂透開獎號碼，並將其輸出至螢幕，依大小順序排好。  
註：大樂透開獎號碼為**1至49的正整數**。

## sample 
output -1    
```
12 34 35 39 40 44
```
output -2
```
7 11 16 29 33 39
```
output -3
```
2 5 7 12 19 49
```

## 程式碼

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int a[6];
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
        a[i] = rand() % 50;

    qsort(a, 6, sizeof(int), cmpfunc);
    for (int i = 0; i < 6; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
```
