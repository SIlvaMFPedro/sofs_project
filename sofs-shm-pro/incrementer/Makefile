CC = gcc

CFLAGS = -Wall

LK = gcc

LDFLAGS = -lpthread -lm

TARGETS = incrementer_unsafe incrementer_safe incrementer_safe2

all:		$(TARGETS)

incrementer_unsafe:    	incrementer.o inc_mod_unsafe.o bwdelay.o
			$(LK) -o $@ $^ $(LDFLAGS)

incrementer_safe:	incrementer.o inc_mod_safe.o bwdelay.o
			$(LK) -o $@ $^ $(LDFLAGS)

incrementer_safe2:	incrementer.o inc_mod_safe_posix.o bwdelay.o
			$(LK) -o $@ $^ $(LDFLAGS)

clean:
			rm -f *.o *~

cleanall:		clean
			rm -f $(TARGETS)
