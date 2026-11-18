#include <stdio.h>
#include "sudoku.h"
#include "search.h"

sqaure grid[81];

int main() {
  printf("ENTER THE SUDOKU GRID VALUES : \n"); 

  for(int r = 0 ; r < 9 ; r++) {
    for(int c = 0 ; c < 9 ; c++ ) {
      scanf("%d" , &grid[r*9+c].val);
      if(grid[r*9+c].val!=0) grid[r*9+c].clue = true;
    }
  }
  // check whether the initial sudoku is a valid grid
  is_grid_valid();


  // search started
  
  dfs( 0 , 0);
  // if the code after this comment runs , the sudoku is unsolvable
  printf("THIS SUDOKU PUZZLE IS UNSOLVABLE!!\n");
  return 0;

}
