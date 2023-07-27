section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    extern printf

global _start

_start:
    ; Call printf and exit the program
    push hello
    push format
    call printf
    add rsp, 16

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; status = 0
    syscall
