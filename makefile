all:
	g++ factorial.cpp -o factorial
test:
	./factorial 8 > output.txt
	diff output.txt expectedOutputSmall.txt
