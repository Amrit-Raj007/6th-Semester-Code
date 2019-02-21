CC = g++
OBJS = main.o sorting.o search.o gcd.o

output: $(OBJS)
	$(CC) $(OBJS) -o output

.cpp.o: functions.h
	$(CC) -c $*.cpp

clean:
	rm *.o 
