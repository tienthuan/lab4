#ifndef _INDUSTRIES_H
#define _INDUSTRIES_H
#include "shared.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct INDUSTRY {
  int ind_code;
  char name[MAX_FIELD];
} Industry;
Industry *read_industries(const char [], int *);
void sort_industries_by_name(Industry *, int );
#endif  /* _INDUSTRIES_H */