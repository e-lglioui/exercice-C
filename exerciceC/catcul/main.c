#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    char oper;
    printf("caculator");
    printf("######################\n");
    printf("enter le 1en nomber\n");
    scanf("%d",&a);
    printf("enter le 2en nomber\n");
    scanf("%d",&b);
    printf("enter loperation\n");
    scanf(" %c",&oper);
    switch(oper){
      case '+':
       c=a+b;
       printf("c=%d",c);
       break;
      case '-':
       c=a-b;
       printf("c=%d",c);
        break;
      case '/':
       c=a/b;
       printf("c=%d",c);
        break;
        case 'x':
       c=a*b;
       printf("c=%d",c);
        break;
        default: printf("operation non valider");

    }

    return 0;
}
