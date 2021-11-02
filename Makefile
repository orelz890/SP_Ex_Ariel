
CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OB_REC_LIB=advancedClassificationRecursion.o
OB_LOOP_LIB=advancedClassificationLoop.o
OB_BASIC=basicClassification.o
FLAGS=-g -Wall
all:libclassloops.a libclassrec.a libclassloops.so libclassrec.so mains maindloop maindrec
loops: libclassloops.a
libclassloops.a:$(OB_BASIC) $(OB_LOOP_LIB)
	$(AR) -rcs libclassloops.a $(OB_BASIC) $(OB_LOOP_LIB)
recursives: libclassrec.a
libclassrec.a:$(OB_BASIC) $(OB_REC_LIB)
	$(AR) -rcs libclassrec.a $(OB_BASIC) $(OB_REC_LIB)
loopd: libclassloops.so
libclassloops.so:$(OB_BASIC) $(OB_LOOP_LIB)
	$(CC) -shared -o libclassloops.so $(OB_BASIC) $(OB_LOOP_LIB) -lm
recursived: libclassrec.so
libclassrec.so:$(OB_BASIC) $(OB_REC_LIB)
	$(CC) -shared -o libclassrec.so $(OB_BASIC) $(OB_REC_LIB) -lm

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so -lm
maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so -lm
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec