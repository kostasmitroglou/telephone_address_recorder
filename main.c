#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000 

//Kostas
char* login();

int main(int argc, char *argv[])
{

    
    char telephone[30];
    char address[30];

    int state;
	
    int len_str;

	char* logs;
   	logs = login();
printf("%s",logs);
    printf("1. Add telephone number   2.Add address\n");
   	printf("State:\n");
    scanf("%d", &state);
    switch(state)
    {
    	case 1:		
	    		printf("Enter your telephone number:\n");
    			scanf("%s", telephone);

				strcat(logs,telephone);
				strcat(logs,"\n");
				break;
    	case 2:			
	    	    printf("Enter your address:\n");
    			scanf("%s", address);	

				strcat(logs,address);
				strcat(logs,"\n");
				break;
    	default:
    		printf("ERROR");
    	
	}
	printf("%s",logs);
   FILE *fptr;
   fptr = fopen("telephone_address.txt", "a");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }   
	fprintf(fptr,"%s", logs);
   fclose(fptr);
   return 0;
}

char* login()
{
	char log[100000]="";

	char username[10];
    char password[10];
    char data[15];
        
	printf("Enter your name:\n");
    gets(data);   
    strcpy(username, data); 
   	
    printf("Enter your password:\n");
    gets(data);
    strcpy(password, data);
    
	strcat(log,username);
	strcat(log," ");

	
	char* log_return = log;
	return log_return;
}
