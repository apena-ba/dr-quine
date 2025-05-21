# This program will print its own source when run.
section .data      ; Data section for initialized variables
    message: db "Hello from x86-64 assembly! Value: %d", 10, 0  ; 10 is newline, 0 is null terminator

section .text      ; Code section
    global main      ; Make _start visible to linker
    extern printf      ; Import printf from C library

    main:
        ; Set up stack frame manually since we're not using C runtime properly
        ; We need to align the stack to 16 bytes before calls
        and rsp, -16      ; Align stack to 16 bytes (clear lower 4 bits)
        
        ; Prepare for printf call
        mov rdi, message  ; First argument: format string
        mov rsi, 42       ; Second argument: integer value (42)
        xor rax, rax      ; Zero RAX (number of vector registers used)
        
        ; Call printf
        call printf
        
        ; Exit the program properly
        mov rax, 60       ; syscall: exit
        xor rdi, rdi      ; status: 0
        syscall           ; invoke syscall