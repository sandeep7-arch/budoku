#include <stdio.h>
#include "sudoku.h"
#include "validity.h"
int main() {
  printf("ENTER THE SUDOKU GRID VALUES : \n"); 

  for(int r = 0 ; r < 9 ; r++) {
    for(int c = 0 ; c < 9 ; c++ ) {
      scanf("%d" , &grid[r*9+c].val);
      grid[r*9+c].clue = true;
      grid[r*9+c].r = r;
      grid[r*9+c].c = c;
    }
  }
  
  




  print_grid();
}
