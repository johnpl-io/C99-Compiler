	.global main
	.type main, @function
main:
	pushl %ebp
	movl %esp, %ebp
	subl $16, %esp
.BB00:
	movl $5, %eax
	movl %eax, -4(%ebp)
	movl -4(%ebp), %eax
	jmp .BB01
.BB01:
	leave
	ret
