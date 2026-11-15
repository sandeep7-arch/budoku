#include <stdio.h>
#include "sudoku.h"
#include "search.h"
int main() {
  printf("ENTER THE SUDOKU GRID VALUES : \n"); 

  for(int r = 0 ; r < 9 ; r++) {
    for(int c = 0 ; c < 9 ; c++ ) {
      scanf("%d" , &grid[r*9+c].val);
      grid[r*9+c].clue = true;
    }
  }
    
  // search started
  
  dfs(grid , 0 , 0);
  // if the code after this comment runs , the sudoku is unsolvable
  printf("THIS SUDOKU PUZZLE IS UNSOLVABLE!!\n");
  return 0;

}
