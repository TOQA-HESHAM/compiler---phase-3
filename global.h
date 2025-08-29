 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <ctype.h>
 #define BSIZE  128
 #define NONE   -1
 #define EOS    '\0'
 #define NUM     256
 #define DIV     257
 #define MOD    258
 #define ID     259
 #define DONE   260
 #define SYMMAX 100  

 struct entry {
    char *lexptr;
    int token;
};
 extern int tokenval;                
 extern int lineno;  
 FILE *output, *input,*err;               
 extern char lexemes[BSIZE];          
 extern struct entry symtable[SYMMAX]; 
 extern int lastentry;      
 int lookahead;  
         



int lookup(char s[]);
int insert(char s[], int tok);

// int tokenval;
// int lineno;
// struct entry {
//    char *lexptr;
//    int token;
// };

