#pragma once
#ifndef SUDOKU_H
#define SUDOKU_H
#include <stdio.h>


typedef struct sqaure {
  // int r , c //r*9+c
  int val;
  // char possibilites;
  bool clue = false;
}sqaure;

extern sqaure grid[81]; // global variable
                        
static inline void print_grid() {
  printf("--- SUDOKU GRID ---");
  for(int r = 0 ; r < 9 ; r++) {

    printf("\n");
    for(int c = 0 ; c < 9 ; c++) {
      printf("%d " , grid[r*9+c].val);
    }
  }
  printf("\n");
}
#endif
