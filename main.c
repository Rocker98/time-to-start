#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[], char *env[]) 
{
	int choice;
start:	
	puts("This is programm that use system command");
	puts("You can watch which command do what");
	puts("The list of command:");
	printf("1 : \"color of letter yellow\"\n2 : \"cls\"\n3 : \"color of background : gray\"\n4 : \"exit\"\n" );
	
	while(1)
	{
	
	scanf("%d",&choice);
	
	switch(choice)
	{
			case 1:system("color e");break;
			case 2:system("cls");
			goto start;
			break;
			
			case 3:system("color 80");break;
			case 4:exit(0);
			default: puts("Enter digit from 1 to 4");
	}	
	
		fflush(stdin);
	}
	
	return 0;
}
