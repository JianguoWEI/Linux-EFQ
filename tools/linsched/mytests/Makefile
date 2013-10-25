LINUXDIR = ./../../..
LINSCHED_DIR=${LINUXDIR}/tools/linsched
include ../Makefile.inc

MYTESTS := new_tests 40_normal_tasks EFQ_task


.DEFAULT_GOAL := all
.PHONY: all

all: ${MYTESTS}

.SECONDEXPANSION:
${MYTESTS}: ${OBJ_FILES} $$@.o
	@echo CC MY_TESTS $@
	@${LD_PERCPU} -o $@.percpu $^
	@${CC} ${LFLAGS} -o $@ $@.percpu -MMD ${LFLAGS}
	@rm $@.percpu

clean:
	rm -f ${VALIDATION} ${MYTESTS} *.o *.d 

