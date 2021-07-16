PROGRAM = typing
OBJS = main.o quest.o

.PHONY: all
all: ${PROGRAM}

${PROGRAM}: ${OBJS}
	${CXX} -o $@ $^

%.o: %.c
	${CXX} ${CFLAGS} -c $<
