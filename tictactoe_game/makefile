CPPFLAGS = -std=c++17 -Wall -Wextra -Werror -Wfatal-errors -Wno-sign-compare -Wnon-virtual-dtor -g

# Build the executable program tictactoe
tictactoe: main.o player.o board.o
	g++ -o tictactoe main.o player.o board.o

# Compile PlayList.cpp, creating PlayList.o
board.o: board.cpp board.h
	g++ -c $(CPPFLAGS) board.cpp

# Compile Song.cpp, creating Song.o
player.o: player.cpp player.h
	g++ -c $(CPPFLAGS) player.cpp

# Compile main.cpp, creating a1main.o (which contains the main function)
main.o: main.cpp
	g++ -c $(CPPFLAGS) main.cpp

# Remove a1main and all the .o object files
clean:
	rm -f tictactoe main.o board.o player.o