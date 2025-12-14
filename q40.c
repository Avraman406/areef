/*
Name:ATTIPATI VENKATA RAMANAIAH
Date:
Title:
Sample I/P:
Sample O/p:
WAP to print the word which does not contain letter 't'

Input: "Note pad software application mainly used for typing text, which can be saved."

Output—"pad "mainly used for what can be  saved"

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[256];
    scanf("%[^\n]",str);
    //char *word=strtok(str," ");
    int i=0;
    while(str[i])
    {
	int s=i,f=0;

	while(str[i]!=' ' && str[i]!='\0')
	{
	    if(str[i]=='t' ||str[i]=='T')
		f=1;
	    i++;
	}
	if(!f){
	    for(int j=s;j<i;j++)
		printf("%c",str[j]);
	    printf(" ");
	}
	i++;
    }
}

