/*mytool2.c*/
#include "mytool2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mytool2_print(char *string1)
{
    char * string2;
    int size,i;
    size = strlen(string1);
	 string2 =(char*)malloc(size+1);
    for(i=0; i<size; i++)
       string2[size-i - 1] = string1[i];
    string2[size+1]='\0';
    printf("the changed string is %s\n ",string2);
}

