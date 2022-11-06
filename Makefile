#

#  Author: Yannis STEFANELLI

#  Creation Date: 26-10-2022 10:40:56

#  Description :

#  Makefile to compile  

#

OUTS =  exo1\
		exo2\
		exo3\
		exo4\
		exo5\
		exo6\
		exo7\
		exo8\
 		a.out

ena: exo1 exo2 exo3 exo5 exo6 exo7 exo8

exo1:
	gcc ./src/exo1.c -lm -o exo1

exo2:
	gcc ./src/exo2.c -o exo2

exo3:
	gcc ./src/exo3.c -o exo3

exo5:
	gcc ./src/exo5.c -o exo5

exo6:
	gcc ./src/exo6.c -o exo6

exo7:
		gcc -g3 ./src/exo7.c -o exo7

exo8:
		gcc -g3 ./src/exo8.c -o exo8

clean:
	rm -f $(OUTS)

fclean: clean

re: fclean ena

.PHONY: ena exo1 exo2 exo3 exo5 exo6 exo7 exo8 clean fclean re