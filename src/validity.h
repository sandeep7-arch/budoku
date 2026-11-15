#pragma once
#ifndef VALIDITY_H
#define VALIDITY_H

#include "sudoku.h"

inline bool validity(int r , int c, int new_val) {
  for(int j = 0 ; j < 9 ; j++) {
    if(grid[r*9+j].val == new_val) return false;// row check
    if(grid[j*9+c].val == new_val) return false;//column check
  }

  int R,C;
  if(c > 5) C = 6;
  else if(c > 2) C = 3;
  else C = 0;
  if(r > 5) R = 6;
  else if(r > 2) R = 3;
  else R = 0;

  for(int i = R ; i < R+3 ; i++) { //section check
    for(int j = C ; j < C+3 ; j++) if(grid[i*9+j].val==new_val) return false;
  }
  return true;
}
#endif
