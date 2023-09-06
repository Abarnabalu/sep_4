#include <stdio.h>
#include <string.h>
int excelColumnNameToNumber(char *column)
{
    int multiple = strlen(column)-1;
    int result=0;
    for (int i = 0; i < strlen(column); i++)
    {
        result = multiple * 26 + (column[i] - 'A' + 1);
    }
    printf("Column number: %d\n", result);
}
int main()
{
    char column[10];
    printf("Enter Excel column name: ");
    scanf("%s", column);
    int columnNumber = excelColumnNameToNumber(column);
    return 0;
}

