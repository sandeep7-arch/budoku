#pragma once
#ifndef VALIDITY_H
#define VALIDITY_H

#include "sudoku.h"
#include <cstdlib>

inline bool validity(int r , int c, int new_val) {
  for(int j = 0 ; j < 9 ; j++) {
  
    if(j != c && grid[r*9+j].val == new_val) return false;// row check
    if(j != r && grid[j*9+c].val == new_val) return false;//column check
  }

  int R,C;
  if(c > 5) C = 6;
  else if(c > 2) C = 3;
  else C = 0;
  if(r > 5) R = 6;
  else if(r > 2) R = 3;
  else R = 0;

  for(int i = R ; i < R+3 ; i++) { //section check
    for(int j = C ; j < C+3 ; j++) if(i != r && j != c && grid[i*9+j].val==new_val) return false;
  }
  return true;
}


inline bool is_grid_valid() {
  for(int r  = 0 ; r < 9 ; r++) {
    for(int c = 0 ; c < 9 ; c++) {
      if(grid[r*9+c].val==0) continue;
      if(!validity(r , c , grid[r*9+c].val))  {
        perror("GRID IS INVALID!!\n");
        exit(1);
      }
    }
  }
  return true;
}


#endif
