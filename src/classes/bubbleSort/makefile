bubbleSort:
	#make bubbleSort: use bubbleSort < INPUT_FILE
	gcc *bubbleSort.c -o bubbleSort

bestCase:
	#make bestCase with 8000 inputs
	gcc *bestCase.c -o bestCase
	./bestCase > bestCaseInput.txt

worstCase:
	#make worstCase with 8000 inputs
	gcc *worstCase.c -o worstCase
	./worstCase > worstCaseInput.txt

randomInput:
	#make randomInput with 8000 inputs
	gcc *randomInput.c -o randomInput
	./randomInput > randomInput.txt

clean:
	rm bubbleSort
	rm bestCase
	rm worstCase
	rm randomInput
	rm *.txt