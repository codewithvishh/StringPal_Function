#include <stdio.h>
#include <string.h>
int isPalindromString(char s[]);
int isPalindromString(char s[])
{
  int l=strlen(s);
    int is=1;
    for(int i=0;i<l/2;i++){
        if(s[i]!=s[l-i-1])
        {
            is=0;
            break;
        }
    }
  if(is)
  {
      printf("palindrome");
  }else
  {
      printf("not");
  }
}
int main()
{
    char s[100];
    printf("enter string:");
    scanf("%s",s);
   isPalindromString(s);
    return 0;
}
