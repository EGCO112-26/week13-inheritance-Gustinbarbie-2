inh: NODE.cpp LL.cpp LL_test.cpp
	g++ NODE.cpp LL.cpp LL_test.cpp -o inh

inher:
	./inh

run:inher
	rm inh