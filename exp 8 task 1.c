#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
      int i,length=0;
    printf("Enter a string: \n");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
    {
        length++;
    }
    printf("\nLength of input string: %d",length);
    return 0;
}

