app: calculator.o app.o
	gcc calculator.o app.o -o app

calculator.o: calculator.c calculator.h
	gcc -c calculator.c

app.o: app.c calculator.h
	gcc -c app.c

clean:
	rm app
	rm *.o