quickSort: app.o quickSort.o
	gcc app.o quickSort.o -o quickSort

	#———————————————————————————————————————————|
	#                                           |
	# quickSort - pure quickSort                |
	# optQuickSort - quickSort + insertionSort  |
	#                                           |
	# just execute one of them and select the   |
	# execution scenario                        |
	# best, worst or random array               |
	#———————————————————————————————————————————|
	

app.o: app.c quickSort.h
	gcc -c app.c

array.o: array.c array.h input.h
	gcc -c array.c

quickSort.o: quickSort.c quickSort.h array.h
	gcc -c quickSort.c

clean:
	rm *.o
	rm quickSort