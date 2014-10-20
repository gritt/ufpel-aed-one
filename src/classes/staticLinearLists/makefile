app: staticList.o app.o
	gcc node.o staticList.o app.o -o app

staticList.o: staticList.c staticList.h
	gcc -c staticList.c

app.o: app.c staticList.h
	gcc -c app.c

clean:
	rm app
	rm *.o