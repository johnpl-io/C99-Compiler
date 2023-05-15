	.comm x, 4, 4
	.global main
	.type main, @function
main:
	pushl %ebp
	movl %esp, %ebp
.BB00:
	.section .rodata
.LC0:
	.string "hi\n"
	.text
	pushl $.LC0
	call printf
	addl $4, %esp
	movl $0, %eax
	leave
	ret
