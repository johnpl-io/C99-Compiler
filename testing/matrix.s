	.comm matrix, 36, 4
	.global determinant
	.type determinant, @function
determinant:
	pushl %ebp
	movl %esp, %ebp
	subl $416, %esp
.BB00:
	leal matrix, %eax
	movl %eax, -8(%ebp)
	movl $0, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -12(%ebp)
	movl -8(%ebp), %eax
	movl -12(%ebp), %edx
	addl %edx, %eax
	movl %eax, -16(%ebp)
	movl $0, %eax
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
	leal matrix, %eax
	movl %eax, -32(%ebp)
	movl $1, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -36(%ebp)
	movl -32(%ebp), %eax
	movl -36(%ebp), %edx
	addl %edx, %eax
	movl %eax, -40(%ebp)
	movl $1, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -44(%ebp)
	movl -40(%ebp), %eax
	movl -44(%ebp), %edx
	addl %edx, %eax
	movl %eax, -48(%ebp)
	movl -48(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -52(%ebp)
	leal matrix, %eax
	movl %eax, -56(%ebp)
	movl $2, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -60(%ebp)
	movl -56(%ebp), %eax
	movl -60(%ebp), %edx
	addl %edx, %eax
	movl %eax, -64(%ebp)
	movl $2, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -68(%ebp)
	movl -64(%ebp), %eax
	movl -68(%ebp), %edx
	addl %edx, %eax
	movl %eax, -72(%ebp)
	movl -72(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -76(%ebp)
	movl -52(%ebp), %eax
	movl -76(%ebp), %edx
	imull %edx, %eax
	movl %eax, -80(%ebp)
	leal matrix, %eax
	movl %eax, -84(%ebp)
	movl $2, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -88(%ebp)
	movl -84(%ebp), %eax
	movl -88(%ebp), %edx
	addl %edx, %eax
	movl %eax, -92(%ebp)
	movl $1, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -96(%ebp)
	movl -92(%ebp), %eax
	movl -96(%ebp), %edx
	addl %edx, %eax
	movl %eax, -100(%ebp)
	movl -100(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -104(%ebp)
	leal matrix, %eax
	movl %eax, -108(%ebp)
	movl $1, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -112(%ebp)
	movl -108(%ebp), %eax
	movl -112(%ebp), %edx
	addl %edx, %eax
	movl %eax, -116(%ebp)
	movl $2, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -120(%ebp)
	movl -116(%ebp), %eax
	movl -120(%ebp), %edx
	addl %edx, %eax
	movl %eax, -124(%ebp)
	movl -124(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -128(%ebp)
	movl -104(%ebp), %eax
	movl -128(%ebp), %edx
	imull %edx, %eax
	movl %eax, -132(%ebp)
	movl -80(%ebp), %eax
	movl -132(%ebp), %edx
	subl %edx, %eax
	movl %eax, -136(%ebp)
	movl -28(%ebp), %eax
	movl -136(%ebp), %edx
	imull %edx, %eax
	movl %eax, -140(%ebp)
	leal matrix, %eax
	movl %eax, -144(%ebp)
	movl $0, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -148(%ebp)
	movl -144(%ebp), %eax
	movl -148(%ebp), %edx
	addl %edx, %eax
	movl %eax, -152(%ebp)
	movl $1, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -156(%ebp)
	movl -152(%ebp), %eax
	movl -156(%ebp), %edx
	addl %edx, %eax
	movl %eax, -160(%ebp)
	movl -160(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -164(%ebp)
	leal matrix, %eax
	movl %eax, -168(%ebp)
	movl $1, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -172(%ebp)
	movl -168(%ebp), %eax
	movl -172(%ebp), %edx
	addl %edx, %eax
	movl %eax, -176(%ebp)
	movl $0, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -180(%ebp)
	movl -176(%ebp), %eax
	movl -180(%ebp), %edx
	addl %edx, %eax
	movl %eax, -184(%ebp)
	movl -184(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -188(%ebp)
	leal matrix, %eax
	movl %eax, -192(%ebp)
	movl $2, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -196(%ebp)
	movl -192(%ebp), %eax
	movl -196(%ebp), %edx
	addl %edx, %eax
	movl %eax, -200(%ebp)
	movl $2, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -204(%ebp)
	movl -200(%ebp), %eax
	movl -204(%ebp), %edx
	addl %edx, %eax
	movl %eax, -208(%ebp)
	movl -208(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -212(%ebp)
	movl -188(%ebp), %eax
	movl -212(%ebp), %edx
	imull %edx, %eax
	movl %eax, -216(%ebp)
	leal matrix, %eax
	movl %eax, -220(%ebp)
	movl $2, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -224(%ebp)
	movl -220(%ebp), %eax
	movl -224(%ebp), %edx
	addl %edx, %eax
	movl %eax, -228(%ebp)
	movl $0, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -232(%ebp)
	movl -228(%ebp), %eax
	movl -232(%ebp), %edx
	addl %edx, %eax
	movl %eax, -236(%ebp)
	movl -236(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -240(%ebp)
	leal matrix, %eax
	movl %eax, -244(%ebp)
	movl $1, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -248(%ebp)
	movl -244(%ebp), %eax
	movl -248(%ebp), %edx
	addl %edx, %eax
	movl %eax, -252(%ebp)
	movl $2, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -256(%ebp)
	movl -252(%ebp), %eax
	movl -256(%ebp), %edx
	addl %edx, %eax
	movl %eax, -260(%ebp)
	movl -260(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -264(%ebp)
	movl -240(%ebp), %eax
	movl -264(%ebp), %edx
	imull %edx, %eax
	movl %eax, -268(%ebp)
	movl -216(%ebp), %eax
	movl -268(%ebp), %edx
	subl %edx, %eax
	movl %eax, -272(%ebp)
	movl -164(%ebp), %eax
	movl -272(%ebp), %edx
	imull %edx, %eax
	movl %eax, -276(%ebp)
	movl -140(%ebp), %eax
	movl -276(%ebp), %edx
	subl %edx, %eax
	movl %eax, -280(%ebp)
	leal matrix, %eax
	movl %eax, -284(%ebp)
	movl $0, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -288(%ebp)
	movl -284(%ebp), %eax
	movl -288(%ebp), %edx
	addl %edx, %eax
	movl %eax, -292(%ebp)
	movl $2, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -296(%ebp)
	movl -292(%ebp), %eax
	movl -296(%ebp), %edx
	addl %edx, %eax
	movl %eax, -300(%ebp)
	movl -300(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -304(%ebp)
	leal matrix, %eax
	movl %eax, -308(%ebp)
	movl $1, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -312(%ebp)
	movl -308(%ebp), %eax
	movl -312(%ebp), %edx
	addl %edx, %eax
	movl %eax, -316(%ebp)
	movl $0, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -320(%ebp)
	movl -316(%ebp), %eax
	movl -320(%ebp), %edx
	addl %edx, %eax
	movl %eax, -324(%ebp)
	movl -324(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -328(%ebp)
	leal matrix, %eax
	movl %eax, -332(%ebp)
	movl $2, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -336(%ebp)
	movl -332(%ebp), %eax
	movl -336(%ebp), %edx
	addl %edx, %eax
	movl %eax, -340(%ebp)
	movl $1, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -344(%ebp)
	movl -340(%ebp), %eax
	movl -344(%ebp), %edx
	addl %edx, %eax
	movl %eax, -348(%ebp)
	movl -348(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -352(%ebp)
	movl -328(%ebp), %eax
	movl -352(%ebp), %edx
	imull %edx, %eax
	movl %eax, -356(%ebp)
	leal matrix, %eax
	movl %eax, -360(%ebp)
	movl $2, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -364(%ebp)
	movl -360(%ebp), %eax
	movl -364(%ebp), %edx
	addl %edx, %eax
	movl %eax, -368(%ebp)
	movl $0, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -372(%ebp)
	movl -368(%ebp), %eax
	movl -372(%ebp), %edx
	addl %edx, %eax
	movl %eax, -376(%ebp)
	movl -376(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -380(%ebp)
	leal matrix, %eax
	movl %eax, -384(%ebp)
	movl $1, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -388(%ebp)
	movl -384(%ebp), %eax
	movl -388(%ebp), %edx
	addl %edx, %eax
	movl %eax, -392(%ebp)
	movl $1, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -396(%ebp)
	movl -392(%ebp), %eax
	movl -396(%ebp), %edx
	addl %edx, %eax
	movl %eax, -400(%ebp)
	movl -400(%ebp), %eax
	movl (%eax), %edx
	movl %edx, -404(%ebp)
	movl -380(%ebp), %eax
	movl -404(%ebp), %edx
	imull %edx, %eax
	movl %eax, -408(%ebp)
	movl -356(%ebp), %eax
	movl -408(%ebp), %edx
	subl %edx, %eax
	movl %eax, -412(%ebp)
	movl -304(%ebp), %eax
	movl -412(%ebp), %edx
	imull %edx, %eax
	movl %eax, -416(%ebp)
	movl -280(%ebp), %eax
	movl -416(%ebp), %edx
	addl %edx, %eax
	movl %eax, -4(%ebp)
	movl -4(%ebp), %eax
	jmp .BB01
.BB01:
	leave
	ret
	.global main
	.type main, @function
main:
	pushl %ebp
	movl %esp, %ebp
	subl $192, %esp
.BB10:
	leal matrix, %eax
	movl %eax, -8(%ebp)
	movl $0, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -12(%ebp)
	movl -8(%ebp), %eax
	movl -12(%ebp), %edx
	addl %edx, %eax
	movl %eax, -16(%ebp)
	movl $0, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -20(%ebp)
	movl -16(%ebp), %eax
	movl -20(%ebp), %edx
	addl %edx, %eax
	movl %eax, -24(%ebp)
	movl $2, %eax
	movl -24(%ebp), %edx
	movl %eax, (%edx)
	leal matrix, %eax
	movl %eax, -28(%ebp)
	movl $0, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -32(%ebp)
	movl -28(%ebp), %eax
	movl -32(%ebp), %edx
	addl %edx, %eax
	movl %eax, -36(%ebp)
	movl $1, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -40(%ebp)
	movl -36(%ebp), %eax
	movl -40(%ebp), %edx
	addl %edx, %eax
	movl %eax, -44(%ebp)
	movl $3, %eax
	movl -44(%ebp), %edx
	movl %eax, (%edx)
	leal matrix, %eax
	movl %eax, -48(%ebp)
	movl $0, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -52(%ebp)
	movl -48(%ebp), %eax
	movl -52(%ebp), %edx
	addl %edx, %eax
	movl %eax, -56(%ebp)
	movl $2, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -60(%ebp)
	movl -56(%ebp), %eax
	movl -60(%ebp), %edx
	addl %edx, %eax
	movl %eax, -64(%ebp)
	movl $4, %eax
	movl -64(%ebp), %edx
	movl %eax, (%edx)
	leal matrix, %eax
	movl %eax, -68(%ebp)
	movl $1, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -72(%ebp)
	movl -68(%ebp), %eax
	movl -72(%ebp), %edx
	addl %edx, %eax
	movl %eax, -76(%ebp)
	movl $0, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -80(%ebp)
	movl -76(%ebp), %eax
	movl -80(%ebp), %edx
	addl %edx, %eax
	movl %eax, -84(%ebp)
	movl $1, %eax
	movl -84(%ebp), %edx
	movl %eax, (%edx)
	leal matrix, %eax
	movl %eax, -88(%ebp)
	movl $1, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -92(%ebp)
	movl -88(%ebp), %eax
	movl -92(%ebp), %edx
	addl %edx, %eax
	movl %eax, -96(%ebp)
	movl $1, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -100(%ebp)
	movl -96(%ebp), %eax
	movl -100(%ebp), %edx
	addl %edx, %eax
	movl %eax, -104(%ebp)
	movl $2, %eax
	movl -104(%ebp), %edx
	movl %eax, (%edx)
	leal matrix, %eax
	movl %eax, -108(%ebp)
	movl $1, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -112(%ebp)
	movl -108(%ebp), %eax
	movl -112(%ebp), %edx
	addl %edx, %eax
	movl %eax, -116(%ebp)
	movl $2, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -120(%ebp)
	movl -116(%ebp), %eax
	movl -120(%ebp), %edx
	addl %edx, %eax
	movl %eax, -124(%ebp)
	movl $0, %eax
	movl -124(%ebp), %edx
	movl %eax, (%edx)
	leal matrix, %eax
	movl %eax, -128(%ebp)
	movl $2, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -132(%ebp)
	movl -128(%ebp), %eax
	movl -132(%ebp), %edx
	addl %edx, %eax
	movl %eax, -136(%ebp)
	movl $0, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -140(%ebp)
	movl -136(%ebp), %eax
	movl -140(%ebp), %edx
	addl %edx, %eax
	movl %eax, -144(%ebp)
	movl $3, %eax
	movl -144(%ebp), %edx
	movl %eax, (%edx)
	leal matrix, %eax
	movl %eax, -148(%ebp)
	movl $2, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -152(%ebp)
	movl -148(%ebp), %eax
	movl -152(%ebp), %edx
	addl %edx, %eax
	movl %eax, -156(%ebp)
	movl $1, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -160(%ebp)
	movl -156(%ebp), %eax
	movl -160(%ebp), %edx
	addl %edx, %eax
	movl %eax, -164(%ebp)
	movl $1, %eax
	movl -164(%ebp), %edx
	movl %eax, (%edx)
	leal matrix, %eax
	movl %eax, -168(%ebp)
	movl $2, %eax
	movl $12, %edx
	imull %edx, %eax
	movl %eax, -172(%ebp)
	movl -168(%ebp), %eax
	movl -172(%ebp), %edx
	addl %edx, %eax
	movl %eax, -176(%ebp)
	movl $2, %eax
	movl $4, %edx
	imull %edx, %eax
	movl %eax, -180(%ebp)
	movl -176(%ebp), %eax
	movl -180(%ebp), %edx
	addl %edx, %eax
	movl %eax, -184(%ebp)
	movl $1, %eax
	movl -184(%ebp), %edx
	movl %eax, (%edx)
	call determinant
	addl $0, %esp
	movl %eax, -4(%ebp)
	pushl -4(%ebp)
	.section .rodata
.LC0:
	.string "det: %d\n"
	.text
	pushl $.LC0
	call printf
	addl $8, %esp
	movl $0, %eax
	jmp .BB11
.BB11:
	leave
	ret
