#include <stdio.h>
#include <stdlib.h>

int global;

int main (){
  int local = 5;
  void *p = malloc(128);
  char *s = "Hello, World";

  printf ("Address of main is %p\n", main);
  printf ("Address of global is %p\n", &global);
  printf ("Address of local is %p\n", &local);
  printf ("Address of p is %p\n", p);
  printf ("Address of s is %p\n", s);

  return 0;
}
