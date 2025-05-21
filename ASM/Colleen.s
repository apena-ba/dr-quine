; This program will print its own source when run.

section .data
code: db "; This program will print its own source when run.%1$c%1$csection .data%1$ccode: db %2$c%3$s%2$c, 0%1$c%1$csection .text%1$cglobal main%1$cextern printf%1$cextern fflush%1$cmain:%1$c%4$cand rsp, -16%1$c%4$cmov rdi, code%1$c%4$cmov rsi, 10%1$c%4$cmov rdx, 34%1$c%4$cmov rcx, code%1$c%4$cmov r8, 9%1$c%4$cxor rax, rax%1$c%1$c%4$ccall printf%1$c%1$c%4$cmov rdi, 0%1$c%4$ccall fflush%1$c%1$c%4$cmov rax, 60%1$c%4$cxor rdi, rdi%1$c%4$csyscall%1$c", 0

section .text
global main
extern printf
extern fflush
main:
	and rsp, -16
	mov rdi, code
	mov rsi, 10
	mov rdx, 34
	mov rcx, code
	mov r8, 9
	xor rax, rax

	call printf

	mov rdi, 0
	call fflush

	mov rax, 60
	xor rdi, rdi
	syscall
