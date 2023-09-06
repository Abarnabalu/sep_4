#include<stdio.h>
#include<string.h>
void concat(char string1[10],char string2[10]);
int main()
{
    char str1[10],str2[10];
    printf("enter the strings:\n");
    scanf("%s\n %s",str1,str2);
    concat(str1,str2);
    return 0;
}
void concat(char string1[10],char string2[10])
{
    printf("The concatenated string is :%s",strcat(string1,string2));
}
