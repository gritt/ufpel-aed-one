app: staticList.o app.o
	gcc staticList.o app.o -o app

staticList.o: staticList.c staticList.h
	gcc -c staticList.c

app.o: app.c staticList.h
	gcc -c app.c

clean:
	rm app
	rm *.o