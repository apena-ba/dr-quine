; Comment

%define CONTENT "; Comment%1$c%1$c%%%%define CONTENT %2$c%%%%3$s%2$c%1$c%%define NAME %2$cGrace_kid.s%2$c%1$c%%define MAIN exec%1$c%1$c%%macro exec 0%1$c    section .data%1$c    code db CONTENT, 0%1$c    filename db NAME, 0%1$c    mode db %2$cw%2$c, 0%1$c%1$c    section .text%1$c    global main%1$c    extern fopen, fprintf, fclose%1$c%1$c    main:%1$c        lea rdi, [filename]%1$c        lea rsi, [mode]%1$c        call fopen%1$c        test rax, rax%1$c        jz exit%1$c%1$c        mov rbx, rax%1$c        mov rdi, rax%1$c        lea rsi, [code]%1$c        mov rdx, 10%1$c        mov rcx, 34%1$c        lea r8, [code]%1$c        xor eax, eax%1$c        call fprintf%1$c%1$c        mov rdi, rbx%1$c        call fclose%1$c%1$c    exit:%1$c        mov rax, 60%1$c        xor rdi, rdi%1$c        syscall%1$c%%endmacro%1$c%1$cMAIN"
%define NAME "Grace_kid.s"
%define MAIN exec

%macro exec 0
    global main
    section .data
        code: db CONTENT, 0
        filename: db NAME, 0
        mode: db "w", 0

    section .text
        extern fopen,
        extern fprintf
        extern fclose

    main:
        lea rdi, [filename]
        lea rsi, [mode]
        call fopen

        mov rbx, rax

        mov rdi, rbx
        lea rsi, [code]
        mov rdx, 10
        mov rcx, 34
        lea r8, [code]
        xor rax, rax
        call fprintf

        mov rdi, rbx
        call fclose

        mov rax, 60
        xor rdi, rdi
        syscall
%endmacro

MAIN