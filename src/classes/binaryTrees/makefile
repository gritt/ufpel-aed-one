app: binaryTree.o app.o 
	gcc binaryTree.o app.o -o app

binaryTree.o: binaryTree.c binaryTree.h
	gcc -c binaryTree.c

app.o: app.c app.h binaryTree.h
	gcc -c app.c

clean:
	rm *.o
	rm app
