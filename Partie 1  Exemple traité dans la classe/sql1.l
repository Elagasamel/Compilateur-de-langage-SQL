%{
#include <stdio.h>
#include "y.tab.h"
%}
alpha [A-Za-z]
digit [0-9]
%%
[ \t\n]                            ;
"select"                       return SELECT;
"from"                         return FROM;
"distinct"                     return DISTINCT;                
"where"                        return WHERE;
{alpha}({alpha}|{digit})*      return ID;
.                              return yytext[0];
%%
int yywrap(){
return 0;
}   
 
