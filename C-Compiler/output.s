	.global main
	.type main, @function
main:
	pushl %ebp
	movl %esp, %ebp
	subl $16, %esp
.BB00:
	movl $0, %eax
	movl %eax, -4(%ebp)
	movl -4(%ebp), %eax
	movl %eax, -8(%ebp)
	movl -4(%ebp), %eax
	movl $1, %edx
	addl %edx, %eax
	movl %eax, -4(%ebp)
	pushl -8(%ebp)
	.section .rodata
.LC0:
	.string "%d\n"
	.text
	pushl $.LC0
	call printf
	addl $8, %esp
	movl -4(%ebp), %eax
	leave
	ret
