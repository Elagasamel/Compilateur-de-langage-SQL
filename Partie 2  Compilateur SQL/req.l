/*Délarations et ́définitions pour le programme C */
%{
//declarations des bibliotheques
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
%}
alpha [a-zA-Z]
Digit [0-9]+
%% 
[ \t] {}
\n return FIN;
distinct {return DISTINCT;}
add {return ADD;}
alter {return ALTER;}
references {return REFERENCES;}
foreign {return FOREIGN;}
constraint {return CONSTRAINT;}
primary {return PRIMARY;}
key  {return  KEY;}
select {return SELECT;}
create {return CREATE;}
drop {return DROP;}
table {return TABLE;}
from {return FROM;}
where {return WHERE;}
like {return LIKE;}
desc {return DESC;}
asc {return ASC;}
grant {return GRANT;}
group  {return GROUP;}
order {return ORDER;}
by  {return BY;}
or {return OR;}
and {return AND;}
insert {return INSERT;}
into {return INTO;}
values {return VALUES;}
update {return UPDATE;}
delete {return DELETE;}
set {return SET;}
int {return DATATYPE;}
date {return DATATYPE;}
time {return DATATYPE;}
year {return DATATYPE;}
smallint {return DATATYPE;}
number {return DATATYPE;}
float {return DATATYPE;}
varchar {return DATATYPE;}
avg {return AVG;}
count {return COUNT;}
first {return FIRST;}
last {return LAST;}
{Digit} {return NUM;}
{alpha}({alpha}|{Digit})* {return ID;}
"<=" {return LE;}
">=" {return GE;}
"==" {return EQ;}
"!=" {return NE;}
";" {return COL;}
"$" {return DOLLAR ;}
. {return yytext[0];} 
%%
//Fonctions et programme principal
int yywrap()
{
	return 1; 
}

