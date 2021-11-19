lab4main: find incomes industries process provinces shared sum
	gcc -g -Wall -o lab4main lab4main.c *.o
find: find.c shared provinces industries incomes
	gcc -Wall -c find.c -o find.o
incomes: incomes.c shared
	gcc -Wall -c incomes.c -o incomes.o
industries: industries.c shared
	gcc -Wall -c industries.c -o industries.o
process: process.c shared provinces industries incomes
	gcc -Wall -c process.c -o process.o
provinces: provinces.c shared
	gcc -Wall -c provinces.c -o provinces.o
shared: shared.c 
	gcc -Wall -c shared.c -o shared.o
sum: sum.c shared provinces industries incomes
	gcc -Wall -c sum.c -o sum.o
clean: 
	rm *.o
