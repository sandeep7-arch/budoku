#pragma once
#ifndef VALIDITY_H
#define VALIDITY_H

#include "sudoku.h"

bool validity(sqaure sq , sqaure grid[] , int new_val) {
  for(int j = 0 ; j < 9 ; j++) {
    if(grid[sq.r*9+j].val == new_val) return false;// row check
    if(grid[j*9+sq.c].val == new_val) return false;//column check
  }

  int R,C;
  if(sq.c > 5) C = 6;
  else if(sq.c > 2) C = 3;
  else C = 0;
  if(sq.r > 5) R = 6;
  else if(sq.r > 2) R = 3;
  else R = 0;

  for(int i = R ; i < R+3 ; i++) { //section check
    for(int j = C ; j < C+3 ; j++) if(grid[i*9+j].val==new_val) return false;
  }
  return true;
}
#endif
