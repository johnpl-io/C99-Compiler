	.global IsPrime
	.type IsPrime, @function
IsPrime:
	pushl %ebp
	movl %esp, %ebp
	subl $16, %esp
.BB00:
	movl 8(%ebp), %eax
	cmpl $1, %eax
	jg .BB02
	jmp .BB01
.BB01:
	movl $0, %eax
	jmp .BB03
.BB02:
	movl 8(%ebp), %eax
	cmpl $2, %eax
	jne .BB05
	jmp .BB04
.BB04:
	movl $1, %eax
	jmp .BB06
.BB05:
	movl 8(%ebp), %eax
	cmpl $3, %eax
	jne .BB08
	jmp .BB07
.BB07:
	movl $1, %eax
	jmp .BB09
.BB08:
	movl 8(%ebp), %eax
	cltd
	movl $2, %ecx
	idivl %ecx
	movl %edx, -12(%ebp)
	movl -12(%ebp), %eax
	cmpl $0, %eax
	jne .BB011
	jmp .BB010
.BB010:
	movl $0, %eax
	jmp .BB012
.BB011:
	movl 8(%ebp), %eax
	cltd
	movl $3, %ecx
	idivl %ecx
	movl %edx, -12(%ebp)
	movl -12(%ebp), %eax
	cmpl $0, %eax
	jne .BB014
	jmp .BB013
.BB013:
	movl $0, %eax
	jmp .BB015
.BB014:
	movl $5, %eax
	movl %eax, -4(%ebp)
	movl $0, %eax
	movl %eax, -8(%ebp)
	jmp .BB017
.BB016:
	movl 8(%ebp), %eax
	cltd
	movl -4(%ebp), %ecx
	idivl %ecx
	movl %edx, -12(%ebp)
	movl -12(%ebp), %eax
	cmpl $0, %eax
	jne .BB020
	jmp .BB019
.BB019:
	movl $1, %eax
	movl %eax, -8(%ebp)
	jmp .BB018
	jmp .BB021
.BB020:
	movl -4(%ebp), %eax
	movl $2, %edx
	addl %edx, %eax
	movl %eax, -12(%ebp)
	movl 8(%ebp), %eax
	cltd
	movl -12(%ebp), %ecx
	idivl %ecx
	movl %edx, -16(%ebp)
	movl -16(%ebp), %eax
	cmpl $0, %eax
	jne .BB023
	jmp .BB022
.BB022:
	movl $1, %eax
	movl %eax, -8(%ebp)
	jmp .BB018
	jmp .BB023
.BB023:
	jmp .BB021
.BB021:
	movl -4(%ebp), %eax
	movl $6, %edx
	addl %edx, %eax
	movl %eax, -4(%ebp)
	jmp .BB017
.BB017:
	movl -4(%ebp), %eax
	movl -4(%ebp), %edx
	imull %edx, %eax
	movl %eax, -12(%ebp)
	movl -12(%ebp), %eax
	cmpl 8(%ebp), %eax
	jle .BB016
	jmp .BB018
.BB018:
	movl -8(%ebp), %eax
	cmpl $0, %eax
	je .BB025
	jmp .BB024
.BB024:
	movl $0, %eax
	jmp .BB026
.BB025:
	movl $1, %eax
	jmp .BB026
.BB026:
	jmp .BB015
.BB015:
	jmp .BB012
.BB012:
	jmp .BB09
.BB09:
	jmp .BB06
.BB06:
	jmp .BB03
.BB03:
	leave
	ret
	.global main
	.type main, @function
main:
	pushl %ebp
	movl %esp, %ebp
	subl $16, %esp
.BB10:
	movl $0, %eax
	movl %eax, -4(%ebp)
	movl -4(%ebp), %eax
	cmpl $100, %eax
	jg .BB13
	jmp .BB11
.BB11:
	pushl -4(%ebp)
	call IsPrime
	addl $4, %esp
	movl %eax, -8(%ebp)
	movl -8(%ebp), %eax
	cmpl $0, %eax
	je .BB15
	jmp .BB14
.BB14:
	pushl -4(%ebp)
	.section .rodata
.LC0:
	.string "%d "
	.text
	pushl $.LC0
	call printf
	addl $8, %esp
	jmp .BB15
.BB15:
	jmp .BB12
.BB12:
	movl -4(%ebp), %eax
	movl %eax, -12(%ebp)
	movl -4(%ebp), %eax
	movl $1, %edx
	addl %edx, %eax
	movl %eax, -4(%ebp)
	movl -4(%ebp), %eax
	cmpl $100, %eax
	jle .BB11
	jmp .BB13
.BB13:
	.section .rodata
.LC1:
	.string "\n"
	.text
	pushl $.LC1
	call printf
	addl $4, %esp
	movl $0, %eax
	leave
	ret
