	.comm a, 40, 4
	.global test
	.type test, @function
test:
	pushl %ebp
	movl %esp, %ebp
	subl $16, %esp
.BB00:
	leal a, %eax
	movl %eax, -4(%ebp)
	movl $1, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -8(%ebp)
	movl -4(%ebp), %eax
	movl -8(%ebp), %edx
	addl %edx, %eax
	movl %eax, -12(%ebp)
	movl $2, %eax
	movl -12(%ebp), %edx
	movl %eax, (%edx)
	leave
	ret
	.global main
	.type main, @function
main:
	pushl %ebp
	movl %esp, %ebp
	subl $32, %esp
.BB10:
	leal a, %eax
	movl %eax, -4(%ebp)
	movl $0, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -8(%ebp)
	movl -4(%ebp), %eax
	movl -8(%ebp), %edx
	addl %edx, %eax
	movl %eax, -12(%ebp)
	movl $1, %eax
	movl -12(%ebp), %edx
	movl %eax, (%edx)
	call test
	addl $0, %esp
	leal a, %eax
	movl %eax, -16(%ebp)
	movl $1, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -20(%ebp)
	movl -16(%ebp), %eax
	movl -20(%ebp), %edx
	addl %edx, %eax
	movl %eax, -24(%ebp)
	movl -24(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -28(%ebp)
	movl -28(%ebp), %eax
	leave
	ret
