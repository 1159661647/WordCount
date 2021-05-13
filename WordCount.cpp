#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#define MAX 1024
void main (int argc, char* argv[])
{
    char *file_n=argv[2];
	char buffer[MAX] ;
	int len = 0; 
	int total = 0;
	int sum = 0;
    FILE *fp;
    fp=fopen (file_n, "r") ; 
    if(NULL==fp)
    {
        printf ("Failed to open the file !\n");
        exit (0);
    }
	while(!feof(fp)){
		if(fgets(buffer, MAX, fp) != NULL){
			len = strlen(buffer);
			total+=len;
			sum ++;
		}
	}
	if(!strcmp(argv[1],"-w")){
		printf("µ¥´ÊÊý£º%d\n",sum);
	}
	if(!strcmp(argv[1],"-c")){
		printf("×Ö·ûÊý£º%d\n",total);
	}
    fclose(fp);
}
