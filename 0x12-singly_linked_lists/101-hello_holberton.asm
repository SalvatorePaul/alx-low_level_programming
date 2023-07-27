section .data
	hello db 'Hello, Holberton',0
	format db '%s', 10, 0  ; The format specifier for the printf function
	; "%s" specifies a string, and "10" is the ASCII value for newline (\n)

section .text
	global main

extern printf   ; Declare the external function printf

main:
	; Call printf with the format string and the address of the hello string
	mov rdi, format
	mov rsi, hello
	xor rax, rax  ; rax should be zero before the call
	call printf

	; Exit the program
	xor rdi, rdi  ; Return 0 as the exit code
	mov rax, 60   ; syscall number for sys_exit
	syscall
