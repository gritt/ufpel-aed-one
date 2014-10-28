app: linkedList.o app.o
	gcc linkedList.o app.o -o app

linkedList.o: linkedList.c linkedList.h
	gcc -c linkedList.c

app.o: app.c linkedList.h
	gcc -c app.c

clean:
	rm app
	rm *.o