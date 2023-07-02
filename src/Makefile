CC =gcc -g -Wall -Werror -Wextra -std=c11 -D_GNU_SOURSE
OS = $(shell uname -s)
ifeq ($(OS), Linux)
UBU =  -lm -lpthread -lrt -lsubunit
else
UBU = 
endif

all:install test gcov_report dvi dist

install:
	mkdir build
	cd build && qmake ../calc_1/calc_1.pro && make
	cd build && cp -r calc_1.app ~/Desktop
	rm -drf build

uninstall:
	rm -rf ~/Desktop/calc_1.app

dvi:
	open README.md

dist: install
	tar -czf calc_1.tar.gz ~/Desktop/calc_1.app
	rm -rf ~/Desktop/calc_1.app


test:
	$(CC) -lcheck $(UBU) test.c calc_1/polish.c -o test.out
	./test.out

gcov_report:
	$(CC) --coverage *.c -lcheck $(UBU) calc_1/polish.c -o test.out
	./test.out
	lcov -t "my_test" -c -d ./ --output-file ./test.info
	genhtml -o report test.info
	rm -rf *.gcda *.gch *.gcno *.out *.o *.out
	open report/index.html

clean:
	rm -rf *.o *.a *.out *.info report test.out.dSYM *.gcno
