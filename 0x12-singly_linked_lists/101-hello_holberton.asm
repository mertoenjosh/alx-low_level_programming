section .data
msg: db 'Hello, Holberton' 10
msgSize equ $ - msg

global start

section .text

	main:
	mov rax, 4
	mov rbx, 1
	mov rcx, msg
	mov rdx, msgSize
	int 0x80
	mov rax, 1
	mov rbx, 0
	int 0x80
	ret
