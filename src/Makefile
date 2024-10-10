CC = gcc 
FLAGS = -Wall -Werror -Wextra
MATH = s21_*.c
OBJECTS=*.o
LINK_FLAGS = -lcheck 
TEST_LIB = ./tests/test_*.c
GCOV_FLAGS=-fprofile-arcs -ftest-coverage

ifeq ($(shell uname -s), Linux) 
	LINK_FLAGS += -lm -lsubunit
endif

all: clean s21_math.a

s21_math.a:
	$(CC) $(FLAGS) -c $(MATH)
	ar rcs s21_math.a $(OBJECTS)

clean: 
	rm -fr *.o *.a *.gch *.gcno *.gcda test gcov_test s21_test.info ./report

test: clean
	$(CC) $(FLAGS) $(MATH) ./tests/*.c ${LINK_FLAGS} -o test
	./test

gcov_report: clean
	$(CC) $(FLAGS) $(GCOV_FLAGS) ${TEST_LIB} ${MATH} ${LINK_FLAGS} -o test
	./test
	lcov -t "stest" -o s21_test.info -c -d .
	genhtml -o report s21_test.info
	open report/index.html	

style:
	clang-format -style=google -n *.c *.h ./tests/*.*

format:
	clang-format -style=google -i *.c *.h ./tests/*.*
