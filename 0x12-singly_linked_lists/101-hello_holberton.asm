section .data
	msg db "Hello, Holberton", 10
	msglen equ $ - msg
section .data
	global _start
_start:
	mov rdx, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, msglen
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
