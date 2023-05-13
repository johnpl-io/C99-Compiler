	.global main
	.type main, @function
main:
	pushl %ebp
	movl %esp, %ebp
	subl $16, %esp
.BB00:
	movl $10, %eax
	movl %eax, -4(%ebp)
	movl $2, %eax
	movl %eax, -8(%ebp)
	movl -4(%ebp), %eax
	cltd
	idivl -8(%ebp)
	movl %edx, -12(%ebp)
	movl $0, %eax
	leave
	ret
