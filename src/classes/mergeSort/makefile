app: merge.o insertion.o app.o
	gcc merge.o insertion.o app.o -o app

	#————————————————————————————-|
	#                             |
	# execute with stdin as input |
	# ./app < input.txt           |
	#                             |
	#————————————————————————————-|

merge.o: merge.c merge.h insertion.h
	gcc -c merge.c

insertion.o: insertion.c insertion.h
	gcc -c insertion.c

app.o: app.c merge.h
	gcc -c app.c

clean:
	rm app *.o