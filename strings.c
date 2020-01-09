#include <stdio.h>
#include <string.h>

int main()
{
char str1[27];
str1[26] = '\0';
for (int i = 0; i < 26; i++)
{
str1[i] = 'a' + i;
}
char str2[] = "abcdefghijklmnopqrstuvwxyz";

for (int i = 0; i < 26; i++)
{
str1[i] = str1[i] - 32;
}

char str3[54];
strcpy(str3, str1);
strcat(str3, str2);

if (strcmp(str1, str2) == 0)
printf("the strings are identical\n");
else
printf("the strings are different\n");
printf("%s\n", str1);
printf("%s\n", str2);
printf("%s\n", str3);
}
