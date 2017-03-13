#include <stdio.h>

int main()
{
    int i = 1, j=2, k=3;
    i += j = k; 
    printf("1) i: %d j: %d k: %d\n", i, j, k);
    printf("2) res: %d i: %d j: %d k: %d\n", i - -j-- - --k, i, j, k); 
    printf("3) i: %d j: %d k: %d\n", i, j, k);
    
    
    int expr1 = 0, expr2 = 0;
    printf("and: %d or: %d not(expr1): %d not(expr2): %d\n",expr1&&expr2, expr1||expr2, !expr1, !expr2);
    expr1 = 0; expr2 = 1;
    printf("and: %d or: %d not(expr1): %d not(expr2): %d\n",expr1&&expr2, expr1||expr2, !expr1, !expr2);
    expr1 = 1; expr2 = 0;
    printf("and: %d or: %d not(expr1): %d not(expr2): %d\n",expr1&&expr2, expr1||expr2, !expr1, !expr2);
    expr1 = 1; expr2 = 1;
    printf("and: %d or: %d not(expr1): %d not(expr2): %d\n",expr1&&expr2, expr1||expr2, !expr1, !expr2);
    
    

    int numb1, numb2;
    printf("Enter two integers to check\n");
    scanf("%d %d", &numb1, &numb2); 
    if (numb1 == numb2) //checking whether two integers are equal.
      printf("Result: %d = %d", numb1, numb2); 
    else 
    if (numb1 > numb2) //checking whether numb1 is greater than numb2. 
      printf("Result: %d > %d", numb1, numb2); 
    else 
      printf("Result: %d > %d", numb2, numb1); 

    return 0;
}

