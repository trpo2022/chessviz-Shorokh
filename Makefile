all: main

main: main.cpp
	g++ -Wall -Werror -o main main.cpp

clean:
	rm main

run:
	./main
