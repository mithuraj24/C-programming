// Program for string length operation
//Mithuraj Boruah
//Date:27/09/24

#include<stdio.h>
#include<string.h>
main()
{
	char fname[20];
	int x;
	printf("\nEnter first name:");
	scanf("%s",fname);
	x=strlen(fname);
	printf("\nString length:%d",x);
}