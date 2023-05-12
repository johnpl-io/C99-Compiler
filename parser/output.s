	.global main
	.type main, @function
main:
	pushl %ebp
	movl %esp, %ebp
	subl $16, %esp
.BB00:
	movl -4(%ebp), %eax
	cmpl $0, %eax
	je .BB04
	jmp .BB03
.BB03:
	movl -8(%ebp), %eax
	cmpl $0, %eax
	je .BB04
	jmp .BB05
.BB04:
	jmp .BB05
.BB05:
	je .BB02
	jmp .BB01
.BB01:
	movl $4, %eax
	movl %eax, -4(%ebp)
	jmp .BB02
.BB02:
	leave
