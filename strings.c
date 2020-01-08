#include <stdio.h>
#include <string.h>

int main()
{
char str1[27];
for (int i = 0; i < 26; i++)
{
str1[i] = 'a' + i;
printf("%s", str1[i]);
}
str1[26] = '\0';
char str2[] = "abcdefghijklmnopqrstuvwxyz";

}
