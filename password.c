#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char strp[20];
    char us[20];
    char usn[20];
    int n,i,c;
    printf("Create Profile\n");
    printf("--------------\n");
    printf("Create a Username:\n");
    scanf("%s",us);
    printf("Create a password:\n");
    scanf("%s",strp);
    printf("\n\n");
    printf("Login Window:\n");
    for(i=0;i<3;i++)
    {
    printf("enter your username:\n");
    scanf("%s",usn);
    printf("Enter your password:\n");
    scanf("%s",str);
    if((strcmp(str,strp)==0)&&(strcmp(us,usn)==0))
    {
        printf("Welcome\n");
        break;
    }
    else
    {
        printf("invalid password\n\n");
        printf("%d attempts left\n\n",2-i);
    }
    }
}




