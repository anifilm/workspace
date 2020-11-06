// Section 12 : 108. (Challenge) Using Dynamic Memory
#include <stdio.h>
#include <stdlib.h>

int main() {

   int size;
   char* text = NULL;

   printf("Enter limit of the text: \n");
   scanf("%d", &size);

   text = (char*) malloc(sizeof(char) * size);

   if (text != NULL) {
       printf("Enter some text: \n");
       scanf(" ");
       gets(text);

       printf("Inputted text is: %s\n", text);
   }

   free(text);

   return 0;
}
