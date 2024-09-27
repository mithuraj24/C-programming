//Program for sting catenation operation
//Mithuraj Boruah
//Date:27/09/24

#include<stdio.h>
#include<string.h>
main()
{
	char fname[20],sname[20],cname[20];
	printf("\nEnter first name:");
	scanf("%s",fname);
	printf("\nEnter second name:");
	scanf("%s",sname);
	strcat(fname,sname);
	printf("\nCatenated Name:%s",fname);
}