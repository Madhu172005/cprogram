#include <stdio.h>
#include <string.h>

int main() {
   char text[] = "Programming does wonders in the world";
   char *word, *longest;
   int len = 0, max = 0;

   word = strtok(text, " ");

   while (word != NULL) {
      len = strlen(word);
      if (len > max) {
         max = len;
         longest = word;
      }
      word = strtok(NULL, " ");
   }

   printf("The longest word is: %s\n", longest);
   return 0;
}


