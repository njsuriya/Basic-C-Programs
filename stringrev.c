#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],revstr[1000];
    int idx1=0,idx2=0,strlen0,strlen1;
    printf("Enter the string to reverse:");
    gets(str);
    while(str[idx1]!='\0')
    {
        //count++;
        idx1++;
    }
    strlen0=idx1;
   // strlen1=strlen(str);
    printf("Length of the String:%d\n",strlen0);
    //idx1=idx1-count;
    while(str[idx2]!='\0')
    {
        revstr[strlen0-1]=str[idx2];
        idx2++;
        strlen0--;
    }
    revstr[idx1]='\0';
    puts(revstr);
    strlen1=strlen(revstr);
    printf("%d",strlen1);
    return 0;
}
