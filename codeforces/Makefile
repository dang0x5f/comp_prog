.POSIX:
CC     := clang
CFLAGS := -ggdb -Wall -Wextra
# CPPFLAGS := ?

CONTEST := x
PROBLEM := x

BIN  := prog
SRCS := CODEFORCES_${CONTEST}_${PROBLEM}.c
OBJS := ${SRCS:c=o}

${BIN}: ${OBJS}
	${CC} ${OBJS} -o $@

clean:
	rm -f ${BIN} ${OBJS}

.PHONY: clean
