/*
Name:ATTIPATI VENKATA RAMANAIAH
Date:
Title:
Sample I/P:
Sample O/p:
*/
#include<stdio.h>
int main()
{
    int n,n1=0;
    scanf("%d",&n);
    n1=n*2+1;
    for(int i=0;i<n;i++){
	for(int j=0;j<=i;j++)
	    printf("%d ",n1--);
	printf("\n");
    }
}
