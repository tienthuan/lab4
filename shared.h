#ifndef _SHARED_H
#define _SHARED_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 80
#define MAX_FIELD 80
#define MAX_PROV 3



static const char PROVINCES_FILE[] = "q1_province.txt";
static const char INDUSTRIES_FILE[] = "q1_industry.txt";
static const char INCOMES_FILE[] = "q1_income.txt";

static const char CSV_SEPARATOR_STRING[] = ",\n";
static const char COMMAND_SEPARATOR_STRING[] = " ";

int countlines(FILE *);

#endif /* _SHARED_H */