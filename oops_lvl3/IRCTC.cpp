/* IRCTC confused? Well it stands for Welcome to Indian Railways Catering and Tourism Corporation :) .*/

#include <iostream>
#include <stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    int k,n,i,j,count,l=0;
    char str1[101][101],str2[101][101];
    char ch[100];
    cin>>k;
    for(i=0;i<k;i++)
    scanf("%s",str1[i]);
    cin>>n;
    i=0;
    while(i++!=n)
    {scanf("%s",str2[i]);
    for(j=0;j<k;j++)
    if(!strcmp(str2[i],str1[j]))
    count++;
    if(!count)
    ch[l++]=(toupper(str2[i][0]));
    count=0;
    }
    for(i=0;i<l;i++)
    if(i!=(l-1))
    printf("%c.",ch[i]);
    else
    printf("%c",ch[i]);
    return 0;
}
