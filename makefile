
main:
	gcc insertion_sort.c -o insertion_sort

check-syntax:
	gcc -fsyntax-only $(CHK_SOURCES) 
