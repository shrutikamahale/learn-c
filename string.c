//Define the string first_name with the value John using the pointer notation,
// and define the string last_name with the value Doe using the local array notation





#include <stdio.h>
#include <string.h>
int main() {
   char * first_name = "John";
   char last_name[] = "Boe"; 
   char name[100];

  last_name[0] = 'B';
  sprintf(name, "%s %s", first_name, last_name);
  if (strncmp(name, "John Boe", 100) == 0) {
      printf("Done!\n");
  }
  name[0]='\0';
  strncat(name,first_name,4);
  strncat(name,last_name,20);
  printf("%s\n",name);
  return 0;
}