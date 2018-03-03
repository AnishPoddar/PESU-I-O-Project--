a: AnishPoddar4_1.o AnishPoddar4_func.o
AnishPoddar4_1.o: AnishPoddar4_1.c
	gcc -c AnishPoddar4_1.c 
AnishPoddar4_func.o: AnishPoddar4_func.c AnishPoddar4_func.h
	gcc -c AnishPoddar4_func.c