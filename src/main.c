#include <stdio.h>
#include <stdlib.h>
#include "repl.c"
#include <stdbool.h>
#include <string.h>


int main(int argc, char* argv[], char* envp[]){
 
  repl();
  (void)argc;
  (void)argv;
  (void)envp; // pour échape erreur
  return 0; //printf("ça marche enfin\n");
  
}
