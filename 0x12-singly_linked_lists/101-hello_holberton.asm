global    main
extern    printf

section .data
	format db `Hello, Holberton\n`,0

section .text
main:
	mov   rdi, format
	xor   rax, rax
	call  printf
	mov   rax, 0
	ret
