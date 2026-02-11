#include <stdio.h>
#include <string.h>
int main(void)
{
char str[1000];
scanf("%s",str);

int left=0;
int right=strlen(str) -1;
int flag=1;

while(left<right)
{
if(str[left]!=str[right])
{
flag=0;
break;
}
left++;
right--;
}

if(flag==1)
printf("Palindrome");
else
printf("Not Palindrome");

return 0;
}

