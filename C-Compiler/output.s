	.global gcd
	.type gcd, @function
gcd:
	pushl %ebp
	movl %esp, %ebp
	subl $16, %esp
.BB00:
	movl 12(%ebp), %eax
	cmpl $0, %eax
	jne .BB02
	jmp .BB01
.BB01:
	movl 8(%ebp), %eax
	jmp .BB03
	jmp .BB02
.BB02:
	movl 8(%ebp), %eax
	cltd
	movl 12(%ebp), %ecx
	idivl %ecx
	movl %edx, -8(%ebp)
	pushl -8(%ebp)
	pushl 12(%ebp)
	call gcd
	addl $8, %esp
	movl %eax, -4(%ebp)
	movl -4(%ebp), %eax
	jmp .BB03
.BB03:
	leave
	ret
	.global main
	.type main, @function
main:
	pushl %ebp
	movl %esp, %ebp
	subl $32, %esp
.BB10:
	.section .rodata
.LC0:
	.string "Enter two numbers to find GCD of: "
	.text
	pushl $.LC0
	call printf
	addl $4, %esp
	leal -8(%ebp), %eax
	movl %eax, -16(%ebp)
	pushl -16(%ebp)
	leal -4(%ebp), %eax
	movl %eax, -20(%ebp)
	pushl -20(%ebp)
	.section .rodata
.LC1:
	.string "%d %d"
	.text
	pushl $.LC1
	call scanf
	addl $12, %esp
	pushl -8(%ebp)
	pushl -4(%ebp)
	call gcd
	addl $8, %esp
	movl %eax, -12(%ebp)
	pushl -12(%ebp)
	.section .rodata
.LC2:
	.string "GCD: %d\n"
	.text
	pushl $.LC2
	call printf
	addl $8, %esp
	movl $0, %eax
	jmp .BB11
.BB11:
	leave
	ret
