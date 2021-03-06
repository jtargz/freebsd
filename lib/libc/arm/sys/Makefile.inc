# $FreeBSD$

SRCS+=	__vdso_gettc.c

MDASM= Ovfork.S brk.S cerror.S ptrace.S sbrk.S shmat.S sigreturn.S syscall.S

# Don't generate default code for these syscalls:
NOASM=	break.o exit.o getlogin.o sstk.o vfork.o yield.o

PSEUDO= _exit.o _getlogin.o
