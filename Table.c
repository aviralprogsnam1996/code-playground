#include <stdio.h>
int main()
{
    int inp, num=0, range;

    printf("Enter the number of which you want the multiplication table: ");
    scanf("%d", &inp);

    printf("Enter the range till which you wnat the table: ");
    scanf("%d", &range);
        
    printf("****Multipliction Table Of %d**** \n",inp);
    
    while (num<range)
    {
        num++;
        printf("%dx%d=%d \n" ,inp,num,inp*num);
    }
    return 0;    
}