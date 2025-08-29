#include <stdio.h>
#include <stdlib.h>

 #include "global.h"
FILE *output,*input,*err;

 void main()
 {
   output=fopen("file.obj","w");  
   input=fopen("file.exp","r");
   err=fopen("file.err","w");	
 	if(input==NULL)
	 printf("file not exist");	
   init();
   parse();
   exit(0);
 }

