#include<stdio.h>
#include<string.h>
int compare(char string1[20],char string2[20]);

int main()
{
    char str1[20],str2[20];
    printf("enter the strings:\n");
    scanf("%s\n %s",str1,str2);
    compare(str1,str2);
    return 0;
}
int compare(char string1[20],char string2[20])
{
    int v=strcmp(string1,string2);
    printf("The comparison is %d ",v);
}
