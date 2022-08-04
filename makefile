new_prod.exe: main.o big2.o big3.o fact.o fibonacci.o pallindrome.o sort.o rev.o sum_of_two.o
	gcc -o new_prod.exe main.o big2.o big3.o fact.o fibonacci.o pallindrome.o sort.o rev.o sum_of_two.o
main.o:main.c
	gcc -c main.c
big2.o:big2.c
	gcc -c big2.c
big3.o:big3.c
	gcc -c big3.c
fact.0:fact.c
	gcc -c fact.c
fibonacci.o:fibonacci.c
	gcc -c fibonacci.c
pallindrome.o:pallindrome.c
	gcc -c pallindrome.c
sort.o:sort.c
	gcc -c sort.c
rev.o:rev.c
	gcc -c rev.c
sum_of_two.o:sum_of_two.c
	gcc -c sum_of_two.c
