/*
  @PrinceMughal_
  You may modify or reproduce.
  Time: 02:06:17am Tuesday
  Date: 01-05-2018
  Email: mughalb9291@gmail.com
  Bugs and Criticisms are warmly welcome :) 
*/

/* It uses Double Size Memory, One for Input and last for Output . 
   Improvements will be available in near Future */

#include <stdio.h> /* fprintf , fscanf */
#include <stdbool.h> /* bool, true , false */

#define MAX_LIMIT 100
#define NEWLINE "\n"


int main(void){

int Input[MAX_LIMIT] = {0};
int Value = 0; /* Store Input Value */
int Counter = 0; /* How Much Elements has been entered */
int totalInputElement = 0;
bool isDup = false; /* Keep track the Duplicate */

/* Take Input */
while(true){
    fprintf(stdout,"Enter a Value, -1 to End: ");
    fscanf(stdin,"%d",&Value);
    if(Value == -1 || Counter == MAX_LIMIT) break;
    Input[Counter++] = Value;}

/* Helping Variables */
totalInputElement = Counter;
int Array[MAX_LIMIT] = {0};
Counter = 0;

/* Remove Duplicate Elements */

for(int i = 0; i < totalInputElement; i++){
    for(int j = 0; j < Counter; j++){
         if(Input[i] == Array[j]){
             isDup = true;
             break;}
    }

    if(isDup != true){
        Array[Counter++] = Input[i];}
    isDup = false;
}

/* Print out Entire Array */

fprintf(stdout,"-: Removed Duplicate :- %s",NEWLINE);
for(int i = 0; i < Counter; i++){
    fprintf(stdout,"%d %s",Array[i],NEWLINE); }




return 0;}
