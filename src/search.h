#pragma once
#ifndef SEARCH_H
#define SEARCH_H
#include "sudoku.h"
#include "validity.h"
#include <stdio.h>
static inline void dfs(int r , int c) {
      if(r >= 9) {
        printf("Solving completed!!!\n");
        print_grid();
        exit(0);
      }

      if(grid[r*9+c].clue) {
        if(c+1 < 9) dfs(grid , r , c+1);
        else dfs(grid , r+1 , 0);
      }
      
      for(int i = 0 ; i < 9 ; i++) {
        if(validity(r , c , grid , i+1)==true) {
          grid[r*9+c].val = i+1;

          if(c+1 < 9) dfs(grid , r , c+1);
          else dfs(grid , r+1 , 0);
          //check for another value if the above dfs returned back
          grid[r*9+c].val = 0; 

        }
        else continue;
      }

      // this runs if the current sqaure cannot find any value
      return;
      
  
}



#endif
