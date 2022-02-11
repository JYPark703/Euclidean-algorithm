#include <stdio.h>

int Extended_Euclid(int a, int p);

void main()
{
    int num1, num2, invers = 0;

    printf("* Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("   q   r1   r2    r   s1   s2    s   t1   t2    t\n");

    //if (num1 > num2)
        Extended_Euclid(num1, num2);
   // else
     //   Extended_Euclid(num2, num1);


}

int Extended_Euclid(int r1, int r2)
{
    int r, q, s, s1 = 1, s2 = 0, t, t1 = 0, t2 = 1, tmp = r1;

    while (r2)
    {
        q = r1 / r2;
        r = r1 % r2;
        s = s1 - q * s2;
        t = t1 - q * t2;

        printf("%4d %4d %4d %4d %4d %4d %4d %4d %4d %4d\n", q, r1, r2, r, s1, s2, s, t1, t2, t);

        r1 = r2;
        r2 = r;
        s1 = s2;
        s2 = s;
        t1 = t2;
        t2 = t;
    }
    printf("%4d %4d %4d      %4d %4d      %4d          \n\n", q, r1, r2, s1, s2, t1);

    printf("X : %d , Y : %d \n", s1, t1);

    return 0;
}
