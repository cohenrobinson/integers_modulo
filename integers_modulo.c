/* A C program that calculates & displays the systems of integers modulo for
   a given modulo.
   Written by Cohen Robinson on the 3/8/2018 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int modulo;

  printf("Please enter an integer: ");

  if(!scanf("%d", &modulo)) {

    printf("ERROR: You have not entered a valid input.\n");
    exit(EXIT_FAILURE);
  }

  int i, j;
  int mult_inverses[modulo];

  printf("The multiplication table for Z/%dZ is:\n", modulo);

  /* Creates a multiplication table for a system */

  for(i = 0; i < modulo; i++) {

    printf("%2d| ", i);

    for(j = 0; j < modulo; j++) {

      int element = (i * j) % modulo;

      if(element == 1) {

        mult_inverses[j] = 1;
      }

      printf("%2d ", element);
    }

    printf("\n");
  }

  /* Displays the elements in the system that have multiplicative inverses. */

  printf("Elements of Z/%dZ that have inverses are: ", modulo);

  for(i = 0; i < modulo; i++) {

    if(mult_inverses[i] == 1) {
      printf("%d ", i);

    }
  }

  printf("\n");

  return 0;
}

