app: node.o linkedList.o app.o
	gcc node.o linkedList.o app.o -o app

node.o: node.c node.h
	gcc -c node.c

linkedList.o: linkedList.c linkedList.h node.h
	gcc -c linkedList.c

app.o: app.c linkedList.h
	gcc -c app.c

clean:
	rm app
	rm *.o