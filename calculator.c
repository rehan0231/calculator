#include<stdio.h>
int main()
{
    float a , b , result;
    char ch;
    printf("enter two number:\n ");
    scanf("%f%f",&a,&b);
    printf("enter a operation(+,-,*,/): ");
    scanf(" %c",&ch);
    
    switch(ch)
    {
        case '+':
        result = a + b;
        printf("Answer:%f",result);
        break;
        
        case '-':
        result = a - b;
        printf("Answer:%f",result);
        break;
        
        case '*':
        result = a * b;
        printf("Answer:%f",result);
        break;
        
        case '/':
        result = a / b;
        printf("Answer:%f",result);
        break;
        default:
        printf("invalid");
    }
    return 0;
}
