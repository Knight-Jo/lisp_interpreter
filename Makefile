LIB = -lreadline
LIB += -lm

run: prompt
	./prompt

prompt: prompt.cpp mpc.c 
	g++ prompt.cpp -o prompt $(LIB)
