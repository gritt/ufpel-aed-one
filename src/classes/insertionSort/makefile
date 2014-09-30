app: insertion.o app.o
	gcc insertion.o app.o -o app

	#————————————————————————————-|
	#                             |
	# execute with stdin as input |
	# ./app < input.txt           |
	#                             |
	#————————————————————————————-|

insertion.o: insertion.c insertion.h
	gcc -c insertion.c

app.o: app.c insertion.h
	gcc -c app.c

clean:
	rm app *.o