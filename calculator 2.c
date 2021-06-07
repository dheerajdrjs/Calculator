//22.calculator
#include<stdio.h>
#include<conio.h>
void add(int a,int b)
{
    printf("\n%d + %d = %d ",a,b,a+b);
}
void subtract(int a,int b)
{
    printf("\n%d - %d = %d ",a,b,a-b);
}
void divide(int a,int b)
{
    printf("\n%d / %d = %d ",a,b,a/b);
}
void multiply(int a,int b)
{
    printf("\n%d * %d = %d ",a,b,a*b);
}
void mode(int a,int b)
{
    printf("\n%d \% %d = %d ",a,b,a%b);
}
void power(int a,int b)
{
    int ans=1,i;
    for(i=1;i<=b;i++)
       ans=ans*a;
   printf("\n%d to the power %d = %d ",a,b,ans);
}
void fact(int a)
{
    int fact=1,i;
    for(i=a;i>=1;i--)
        fact=fact*i;
    printf("\n%d! = %d ",a,fact);
}
void sqr(int a)
{
    printf("\nsquare of %d = %d ",a,a*a);
}
void cube(int a)
{
    printf("\ncube of %d = %d ",a,a*a*a);
}

int main()
{
    int n1,n2,ch;

    do
    {
        printf("\n\n|\t\t   CALCULATOR   \t\t|");
        printf("\n1:ADD.");
        printf("\n2:SUBTRACT.");
        printf("\n3:DIVIDE. ");
        printf("\n4:MULTIPLY.");
        printf("\n5:MODE.");
        printf("\n6:POWER.");
        printf("\n7:FACTORIAL.");
        printf("\n8:SQUARE. ");
        printf("\n9:CUBE. ");
        printf("\n10:Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);

        if(ch<7)
        {
            printf("A : ");
            scanf("%d",&n1);
            printf("B : ");
            scanf("%d",&n2);
        }
        else if(ch<10)
        {
            printf("A : ");
            scanf("%d",&n1);
        }

        switch(ch)
        {
            case 1: add(n1,n2);
                    break;

            case 2: subtract(n1,n2);
                    break;

            case 3: divide(n1,n2);
                    break;

            case 4: multiply(n1,n2);
                    break;

            case 5: mode(n1,n2);
                    break;

            case 6: power(n1,n2);
                    break;

            case 7: fact(n1);
                    break;

            case 8: sqr(n1);
                    break;

            case 9: cube(n1);
                    break;

            case 10: return 0;

            default:
                printf("\nEnter a valid key!\n");
                break;
        }
    }while(1);
}
