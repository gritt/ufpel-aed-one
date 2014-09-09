app: movie.o app.o
	gcc movie.o app.o -o app

movie.o: movie.c movie.h
	gcc -c movie.c

app.o: app.c movie.h
	gcc -c app.c
clean:
	rm app *.o

