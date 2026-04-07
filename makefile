target: MU_Person.h student.h LL_test.cpp
	g++ NODE.cpp LL.cpp LL_test.cpp -o inh

make:inher
	./inh

run:inher
	rm inh