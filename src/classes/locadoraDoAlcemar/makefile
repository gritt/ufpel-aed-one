app: parser.o movie.o app.o
	gcc parser.o movie.o app.o -o app

parser.o: parser.c parser.h
	gcc -c parser.c

movie.o: movie.c movie.h parser.h
	gcc -c movie.c

app.o: app.c movie.h
	gcc -c app.c
clean:
	rm app *.o

