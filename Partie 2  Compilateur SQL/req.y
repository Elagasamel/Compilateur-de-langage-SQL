/************************* Section de définition *************************/
%{ 
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
extern char* yytext;
extern FILE *yyin;
%} 
//Abréviations d’expressions régulières
%token SELECT CREATE DROP TABLE FROM DOLLAR ASC DESC DISTINCT
%token ALTER ADD GROUP BY AVG COUNT FIRST LAST MAX MIN SUM NUME IDENT
%token WHERE LIKE INSERT INTO VALUES GRANT ON TO PRIMARY KEY CONSTRAINT
%token UPDATE DELETE DATATYPE NUM ID SET ORDER COL FOREIGN REFERENCES
%token  FIN

%left '>' '<' LE GE EQ NE
%right '=' 
%left AND OR
%start program
%%
//Expressions régulières et actions associées
program:
  | program Ligne 
  ;
Ligne:
    FIN
  | S FIN         { printf("Requete correcte \n"); }
  | error FIN     { yyerrok; }
  ;

S :ST1
  |ST3
  |ST4
  |ST5
  |ST7
  |ST8 
  |ST9
  ;
/**********************Select**********************/
ST1 : SELECT attributeList FROM tablename ST2 ST6 { printf("Requete correcte \n"); }
    | SELECT function'('attributeList')' FROM tablename { printf ("Requete correcte: \n \t fonction effectuée avec succès!\n");}
    | SELECT DISTINCT attributeList FROM tablename ST2 ST6 { printf("Requete correcte \n"); }
    | SELECT attributeList FROM tablename ST2 GROUP BY attributeList { printf("Requete correcte \n"); }
    | SELECT attributeList error { printf("syntax error : \n \t Mot clé FROM manquant !!!\n");}
    | SELECT error { printf ("syntax error : \n \t Requete incomplete !!!\n");}
    | SELECT attributeList FROM error {printf("syntax error : \n\t Nom de la table manquant apres from ou nom de table invalid !!!\n");}

 ;
/**********************FONCTIONS**********************/
function: AVG
         |COUNT
         |FIRST
         |LAST
         ;
/**********************CREATE**********************/
ST3:CREATE TABLE ID'('listesdeschamps')' {printf("Requete correcte: \n\t table crée avec succès\n");}
   |CREATE TABLE error {printf("syntax error : \n\t nom du table manquant !!!\n");}
   ;
/**********************DROP**********************/
ST4:DROP TABLE ID {printf("Requete correcte:\n\t table supprimée \n");}
   |DROP TABLE error {printf("syntax error : \n \t nom du table manquant !!!\n");}
   ;
/**********************ALTER TABLE**********************/
ST5:ALTER TABLE ID ADD PRIMARY KEY '('ID')' {printf("Requete correcte:\n\t clé primaire ajoutée \n");}
   |ALTER TABLE error {printf("syntax error : \n\t nom du table manquant !!!\n");}
   |DROP TABLE ID error {printf("syntax error : \n\t requette manquante !!!\n");}
   |ALTER TABLE ID ADD CONSTRAINT ID PRIMARY KEY'('attributeList')' {printf("Requete correcte:\t liste des clés primaires modifiée \n");}
   |ALTER TABLE ID ADD FOREIGN KEY '('ID')' REFERENCES tablename'('ID')' {printf("Requete correcte:\t clé étrangère ajoutée \n");}
   |ALTER TABLE ID DROP PRIMARY KEY {printf("Requete correcte:\n\t clé primaire supprimée \n");}
   |ALTER TABLE ID DROP CONSTRAINT ID {printf("Requete correcte:\n\t clé supprimée \n");}
   ;
F  :ID
   | NUM
   ;
VALEUR:F','VALEUR
   |F
   ;
/**********************INSERT**********************/
ST7: INSERT INTO tablename VALUES '('VALEUR')' {printf("Requete correcte: \n\t valeur(s) inséreée(s) \n");}
   |INSERT INTO tablename '('attributeList')'  VALUES '('VALEUR')' {printf("Requete correcte: \n\t valeur(s) inséreée(s) dans les colonnes \n");}
   ;
/**********************Update**********************/
ST8: UPDATE tablename SET attributeList'=' VALEUR ST2 {printf("Requete correcte: \n\t valeur(s) mise(s) à jour \n");}
;
/**********************DELETE**********************/
ST9: DELETE FROM tablename ST2 { printf ("Requete correcte:\n\t colonne supprimée \n");}
;

listesdeschamps:ID DATATYPE','listesdeschamps
   |ID DATATYPE { printf ("Requete correcte\n");}
   |ID ID {printf("syntax error \n \ttype inconnu !!!\n");}
   |ID DATATYPE',' error {printf("syntax error \n\tChamps manquant !!!\n");}
   ||ID error {printf("syntax error \n\t type manquant !!!\n");}
   |PRIMARY KEY'('ID')'{printf("Requete correcte:\n\tclé primaire attribuée\n");}
   |CONSTRAINT ID  PRIMARY KEY'('attributeList')'{printf("Requete correcte:\n\tclé primaire attribuée\n");}
   |FOREIGN KEY'('ID')' REFERENCES tablename'('ID')' {printf("Requete correcte:\n\tclé étrangère attribuée\n");}
   ;  
attributeList : ID','attributeList
   |ID  
   |ID',' error {printf("syntax error: \n\tChamps manquant !!!\n");}
   |'*'
   ;

tablename : ID','tablename
   |ID
   |ID',' error{printf("syntax error :\n\tnom de la table manquant !!!\n");}
   ;
/**********************where**********************/
ST2 : WHERE COND { printf("Requete correcte \n"); }
   | WHERE error { printf( "syntax error \n\t erreur dans la condition\n");}
   |{ printf("Requete correcte \n"); }
   ;
/**********************order by ascendant et descendant**********************/
ST6 : ORDER BY   attributeList DESC {printf("\t trie decroissante\n");}
    | ORDER BY   attributeList ASC {printf("\t trie croissante\n");}
    | ORDER BY   attributeList ASC ','attributeList DESC
    | ORDER BY   attributeList DESC ','attributeList ASC
    | { printf("Requete correcte \n"); }
    ;
COND: COND OR COND 
     |COND AND COND
     |E { printf("Requete correcte \n"); }
;
E : F '=' F
   |F '=' '"'F'"'
   |F '<' F
   |F '>' F
   |F LE F
   |F GE F
   |F EQ F
   |F NE F
   |F OR F
   |F AND F
   |F LIKE F
;

%%
/************************* Section du code C *************************/
//Fonctions et programme principal
FILE *yyin;


int yyerror(char *s) {
 // printf("%s\n",s);
}

int main(void) {
	yyin = fopen("requete", "r");
	yyparse();
return 0;
}

