 #include "global.h"
 char lexbuf[BSIZE];
 int lineno = 1;
 int tokenval = NONE;
 int lexan()
 {
     int t;
     while(1) {
     	 //t = getchar();
     	 t=getc(input);
          if (t == ' ' || t == '\t');
          else if (t == '\n')
           lineno = lineno + 1;
          else if (isdigit (t)) {
          // ungetc(t, stdin);
          ungetc(t, input);
           //scanf("%d", &tokenval);
           fscanf(input,"%d", &tokenval);
           
            return NUM;
 }
          else if (isalpha(t)) {
             int p, b = 0;
             while (isalnum(t)) {
              lexbuf[b] = t;
              //t = getchar();
              t=getc(input);
              b = b + 1;
              if (b >= BSIZE)
                 error("compiler error");
 }
 lexbuf[b] = EOS;
 if (t != EOF)
     ungetc(t, input);
 p = lookup(lexbuf);
     if(p == 0)
      p = insert(lexbuf, ID);
 tokenval = p;
  return symtable[p].token;
 }
 else if (t == EOF)
   return DONE;
 else {
 tokenval = NONE;
   return t;
 }
 }
 }


 	
