#ifndef _INCOMES_H
#define _INCOMES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shared.h"
typedef struct INCOME {
  char prov[MAX_PROV];
  int year;
  int income;
  int ind_code;
} Income;
Income *read_incomes(const char [], int *);
int find_year_range(Income *, int , int *, int *);
#endif /* _INCOMES_H */