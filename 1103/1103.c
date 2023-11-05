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
    printf("%d is  a palindrome.\n", ans);
    return 0;
}
