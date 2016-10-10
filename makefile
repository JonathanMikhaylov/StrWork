stringtools: StrWork.c
	gcc  StrWork.c -o stringTests.out

run: stringTests
	./stringTests.out