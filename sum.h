#ifndef SUM_H
#define SUM_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "provinces.h"
#include "industries.h"
#include "incomes.h"
void sum_ind_in_year_by_province(char [], int , Province *, int , Industry *, int , Income *, int );
void sum_province_by_year(char [], Province *, int , Industry *, int , Income *, int );
#endif /* SUM_H */