#
# Typing 'make' or 'make dtw' will create the executable file.
#

#
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#
CC = g++
CFLAGS  = -g -Wall

default: dtw

# create the executable file dtw using the object files
# main.o, DTW.o:
#
dtw:  main.o DTW.o
	$(CC) $(CFLAGS) -o dtw main.o DTW.o

# create the object file main.o, using the source
# files main.cpp, and DTW.hpp:
#
main.o:  main.cpp DTW.hpp 
	$(CC) $(CFLAGS) -c main.cpp

# create the object file DTW.o, using the source files
# DTW.cpp and DTW.hpp:
#
DTW.o:  DTW.cpp DTW.hpp 
	$(CC) $(CFLAGS) -c DTW.cpp


# To start over from scratch, type 'make clean'.  This
# removes the executable file, as well as old .o object
# files and *~ backup files:
#
clean: 
	$(RM) dtw *.o *~
