app: input.o array.o insertionSort.o quickSort.o app.o
	gcc input.o array.o insertionSort.o quickSort.o app.o -o app

	#————————————————————————————————————————————————————|
	#                                                    |
	# app - quickSort + insertionSort + median of three  |
	#                                                    |
	# just execute and select the                        |
	# execution scenario                                 |
	# best, worst or random array                        |
	#————————————————————————————————————————————————————|

input.o: input.c input.h
	gcc -c input.c

array.o: array.c array.h input.h
	gcc -c array.c

insertionSort.o: insertionSort.c insertionSort.h
	gcc -c insertionSort.c

quickSort.o: quickSort.c quickSort.h insertionSort.h
	gcc -c quickSort.c

app.o: app.c array.h quickSort.h
	gcc -c app.c
	
clean:
	rm *.o
	rm app