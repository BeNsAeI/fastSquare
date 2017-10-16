all:
	gcc main.c sq.h -o out
	./out
	make clean
clean:
	rm -rf out *.out
