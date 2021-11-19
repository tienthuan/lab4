#ifndef _PROVINCES_H
#define _PROVINCES_H
#include "shared.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct PROVINCE {
  char prov[MAX_PROV];
  char name[MAX_FIELD];
} Province;
Province *read_provinces(const char [], int *);
void sort_provinces_by_name(Province *, int );
int find_prov(char [], Province *, int , char []);
#endif /* _PROVINCES_H */