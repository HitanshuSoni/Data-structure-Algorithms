#include <stdio.h>
#include <stdlib.h>
int fab(int);
int main()
{
    int num,result;
    printf("Enter the nth number in fibonacci series:");
    scanf("%d",&num);
    if(num<0)
        {
            printf("fibonnaci of negative number is not possible .\n");

        }
        else
        {
            result=fab(num);
            printf("The %d number in fibonacci series is %d \n",num,result);
        }
    return 0;
}
int fab(int num){
if(num==0)
{
    return 0;

}
else if(num==1)
{
    return 1;
}
else
{
    return(fab(num-1)+fab(num-2));
}
}
