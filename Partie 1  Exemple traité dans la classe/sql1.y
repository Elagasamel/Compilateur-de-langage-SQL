%{
#include <stdio.h>
%}
%token ID SELECT FROM DISTINCT WHERE
%%
Input:
     |Input Ligne
     ;
Ligne   : ST1 ';' {printf("REQUETE ACCEPTEE.... \n\t");};
ST1     : SELECT attributeList FROM tableList
        ;
attributeList :  ID','attributeList  
                | '*'
                | ID
                ;
tableList     : ID',' tableList
                | ID
                ;
%%
int yyerror(void)
{ printf("erreur de syntaxe\n"); return 1;}
int main(void)
 {
     printf("entrer une requete:\n");
     yyparse();
}

