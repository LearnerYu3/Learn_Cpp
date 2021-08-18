#include<stdio.h>
#include<stdlib.h>

struct birthday {
	int day;
	int month;
	int year;
	struct birthday *next;
};

int main()
{
	struct birthday *person, *head, *p;
	head = malloc(sizeof(*head));
	p = head;
	for (int i = 0; i < 5; i++)
	{
		person = malloc(sizeof(*person));
		person->day = 2 + i;
		person->month = 3 + i;
		person->year = 1995 + i;
		person->next = NULL;
		p->next = person;
		p = person;
		printf("succeed!!!\n");
	}
	p = head;
	while (p->next != NULL)
	{
		struct birthday * temp;
		temp = p->next;
		if (temp->next != NULL)
			p = temp->next;
		else
			p = NULL;
		head->next = p;
		p = head;
		printf("birthday %d\n", temp->day);
		free(temp);
	}
	int a = 30;
	int * t = &a;
	printf("\n%x\n", t);
	printf("\n%x\n", &a);

	return 0;
}