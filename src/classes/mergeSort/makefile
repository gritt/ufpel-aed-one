app: merge.o insertion.o app.o
	gcc merge.o insertion.o app.o -o app

	#——————————————————————————————-|
	#                               |
	# execute with stdin as input   |
	# ./app < input.txt             |
	#                               |
	# make generateInputs will      |
	# create testInputFiles for you |
	#——————————————————————————————-|

merge.o: merge.c merge.h insertion.h
	gcc -c merge.c

insertion.o: insertion.c insertion.h
	gcc -c insertion.c

app.o: app.c merge.h
	gcc -c app.c

generateInputs:
	gcc *testCase.c -o testCase

	./testCase 100.000.000 > hundredMillion.txt
	./testCase 200.000 > twoHundredThousand.txt

clean:
	rm app *.o
	rm testCase
	rm twoHundredThousand.txt
	rm hundredMillion.txt