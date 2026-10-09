#Makefile

src =   $(wildcard main.cpp src/*.cpp)

obj =   $(src:.cpp=.o)

cc  =   clang++

bin =   my_cat

bintest	=	test

flags   =   -std=c++20 -g3

all: $(bin)

$(bin):   $(obj)
	    $(cc) $(src) $(flags) -o $(bin)
		rm -f *.o src/*.o

clean:
	    rm -f $(obj)

fclean:	clean
	rm -f $(bin)
	rm -f $(bintest)
	rm -f *.gcno *.gcda

re: fclean all

unittest:
	$(cc) $(flags) src/*.cpp testfile/unittest.cpp -lcriterion --coverage -o $(bintest)
	rm -f *.gcno *.gcda