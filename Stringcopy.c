// program for string copy operation
//Mithuraj Boruah
//date:27/09/24

#include<stdio.h>
#include<string.h>
main()
{
	char fname[20],cname[20];
	printf("\nEnter first name:");
	scanf("%s",fname);
	strcpy(cname,fname);
	printf("\nCopied Name:%s",cname);
}