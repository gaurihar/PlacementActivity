#include<stdio.h>
#include<string.h>

int anagram(char str1[],char str2[])
{
  int count[256]={0};
  //if(strlen(str1)!=strlen(str2))
  //return 0;
  for(int i=0;i<strlen(str1);i++)
    {
      //printf("%d\t",str1[i]);
      int ascii=str1[i];
      if(ascii>96)
	count[str1[i]-32]++;
      else
	count[str1[i]]++;
    }
  for(int i=0;i<strlen(str2);i++)
    {
      int ascii1=str2[i];
      if(ascii1>96)
	{
	  count[str2[i]-32]--;
	}
      else
	count[str2[i]]--;
    }

  for(int i=65;i<97;i++)
    {
      if(count[i]!=0)
	return 0;
    }
  return 1;
  
  
 
}

int main()
{
  char str1[1024];
  printf("Enter string 1:");
  gets(str1);
  printf("Enter string 2:");
  char str2[1024];
  gets(str2);
    
  int k=anagram(str1,str2);
  printf("%d",k);
  
}
