classc:
	gcc src/main.c -g -o classc
clear:
	rm classc
vrun:
	valgrind --leak-check=full -s ./classc
