app: input.o array.o quickSort.o app.o
	gcc input.o array.o quickSort.o app.o -o app

	#———————————————————————————————————————————|
	#                                           |
	# quickSort - pure quickSort                |
	# optQuickSort - quickSort + insertionSort  |
	#                                           |
	# just execute one of them and select the   |
	# execution scenario                        |
	# best, worst or random array               |
	#———————————————————————————————————————————|

input.o: input.c input.h
	gcc -c input.c

array.o: array.c array.h input.h
	gcc -c array.c

quickSort.o: quickSort.c quickSort.h
	gcc -c quickSort.c

app.o: app.c array.h quickSort.h
	gcc -c app.c
	
clean:
	rm *.o
	rm app