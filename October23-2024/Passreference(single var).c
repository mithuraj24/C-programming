//Mithuraj Boruah
//22/10/24
//Pass a reference to a function using pointer(single variable)
#include<stdio.h>
#include<conio.h>
struct student
{
	char name[25];
	int age;
	char grade[5];
};
display(struct student *x);

main()
{
	struct student s;
	printf("Enter student name:");
	scanf("%s",s.name);
	printf("Enter student age:");
	scanf("%d",&s.age);
	printf("Enter student grade:");
	scanf("%s",s.grade);
	display(&s);
	
}

display(struct student *x)
{
	printf("\nStudent Name: %s", x->name);
	printf("\nStudent Age: %d", x->age);
	printf("\nStudent Grade: %s", x->grade);
	return(0);
}
