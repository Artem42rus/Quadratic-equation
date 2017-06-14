.PHONY: clean all test 
CFLAGS = -Wall -Werror -MP -MMD 

all: bin/equation.exe 

bin/equation.exe: build/main.o build/function.o 
	g++ $(CFLAGS) build/main.o build/function.o -o bin/equation.exe 

build/main.o: src/main.cpp src/function.h
	g++ $(CFLAGS) -c src/main.cpp -o build/main.o 

build/function.o: src/function.cpp src/function.h 
	g++ $(CFLAGS) -c src/function.cpp -o build/function.o 

test: 
	make bin/equation_test.exe 
	bin/equation_test.exe 

bin/equation_test.exe: build/test/main.o build/test/function_test.o
	@gcc $(CFLAGS) build/test/main.o build/test/function_test.o build/function.o -o bin/equation_test.exe
	
build/test/main.o: test/main.c src/function.h
	@gcc $(CFLAGS) -I thirdparty -c test/main.c -o build/test/main.o 

build/test/function_test.o: src/function.h test/function_test.c
	@gcc $(CFlAGS) -I thirdparty -c test/function_test.c -o build/test/function_test.o 

clean:
	@echo "Cleaning files in build directory" 	
	@rm -rf build/*.d build/*.o 
	@rm -rf build/test/*.d build/test/*.o
	@echo "Cleaning binaries"
	@rm -rf bin/equation.exe 
	@rm -rf bin/equation_test.exe 
	@echo "All files have been cleaned."	

-include build/*.d
