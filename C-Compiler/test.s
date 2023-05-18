Ast Dump for function [ 
LINKED LIST {
  FOR
   INIT:
    BINOP = 
      stab_var name=x def @soduku.c:3
      NUM INT_SIGNED 0
   COND: 
    BINOP Comparison OP <=
      stab_var name=x def @soduku.c:3
      NUM INT_SIGNED 8
   BODY: 
    IF STATEMENT 
     IF:
      BINOP Comparison OP ==
        UNOP * 
          BINOP + 
            UNOP * 
              BINOP + 
                stab_var name=grid def @soduku.c:0
                stab_var name=row def @soduku.c:3
            stab_var name=x def @soduku.c:3
        stab_var name=num def @soduku.c:3
     THEN:
      RETURN
        NUM INT_SIGNED 0
     ELSE:
   INCR: 
    UNOP POSTINC
      stab_var name=x def @soduku.c:3
  FOR
   INIT:
    BINOP = 
      stab_var name=z def @soduku.c:7
      NUM INT_SIGNED 0
   COND: 
    BINOP Comparison OP <=
      stab_var name=z def @soduku.c:7
      NUM INT_SIGNED 8
   BODY: 
    IF STATEMENT 
     IF:
      BINOP Comparison OP ==
        UNOP * 
          BINOP + 
            UNOP * 
              BINOP + 
                stab_var name=grid def @soduku.c:0
                stab_var name=z def @soduku.c:7
            stab_var name=col def @soduku.c:3
        stab_var name=num def @soduku.c:3
     THEN:
      RETURN
        NUM INT_SIGNED 0
     ELSE:
   INCR: 
    UNOP POSTINC
      stab_var name=z def @soduku.c:7
  BINOP , 
    BINOP = 
      stab_var name=startRow def @soduku.c:14
      BINOP - 
        stab_var name=row def @soduku.c:3
        BINOP % 
          stab_var name=row def @soduku.c:3
          NUM INT_SIGNED 3
    BINOP = 
      stab_var name=startCol def @soduku.c:14
      BINOP - 
        stab_var name=col def @soduku.c:3
        BINOP % 
          stab_var name=col def @soduku.c:3
          NUM INT_SIGNED 3
  FOR
   INIT:
    BINOP = 
      stab_var name=i def @soduku.c:18
      NUM INT_SIGNED 0
   COND: 
    BINOP < 
      stab_var name=i def @soduku.c:18
      NUM INT_SIGNED 3
   BODY: 
    FOR
     INIT:
      BINOP = 
        stab_var name=j def @soduku.c:18
        NUM INT_SIGNED 0
     COND: 
      BINOP < 
        stab_var name=j def @soduku.c:18
        NUM INT_SIGNED 3
     BODY: 
      BINOP = 
        stab_var name=a def @soduku.c:18
        UNOP * 
          BINOP + 
            UNOP * 
              BINOP + 
                stab_var name=grid def @soduku.c:0
                BINOP + 
                  stab_var name=i def @soduku.c:18
                  stab_var name=startRow def @soduku.c:14
            BINOP + 
              stab_var name=j def @soduku.c:18
              stab_var name=startCol def @soduku.c:14
     INCR: 
      UNOP POSTINC
        stab_var name=j def @soduku.c:18
   INCR: 
    UNOP POSTINC
      stab_var name=i def @soduku.c:18
  IF STATEMENT 
   IF:
    BINOP Comparison OP ==
      stab_var name=a def @soduku.c:18
      stab_var name=num def @soduku.c:3
   THEN:
    RETURN
      NUM INT_SIGNED 0
   ELSE:
  RETURN
    NUM INT_SIGNED 1
}
 ] 
isSafe: -28
.BB0.0 
    x (STACK OFFSET -4 ) MOV  0 , 
     CMP_OC  x (STACK OFFSET -4 ), 8 
     GT_OC  .BB0.3, .BB0.1
.BB0.1 
    T0  LEA  grid (STACK OFFSET 0 ), 
    T1  MULT  row (STACK OFFSET 8 ), 36 
    T2  ADD  T0 , T1 
    T3  MULT  x (STACK OFFSET -4 ), 4 
    T4  ADD  T2 , T3 
    T5  LOAD  T4 , 
     CMP_OC  T5 , num (STACK OFFSET 16 )
     NOTEQ  .BB0.5, .BB0.4
.BB0.4 
     RET_OC  0 , 
     BR_OC  .BB0.6, 
     BR_OC  .BB0.5, 
.BB0.5 
     BR_OC  .BB0.2, 
.BB0.2 
    T0  MOV  x (STACK OFFSET -4 ), 
    x (STACK OFFSET -4 ) ADD  x (STACK OFFSET -4 ), 1 
     CMP_OC  x (STACK OFFSET -4 ), 8 
     LTEQ_OC  .BB0.1, .BB0.3
.BB0.3 
    z (STACK OFFSET -8 ) MOV  0 , 
     CMP_OC  z (STACK OFFSET -8 ), 8 
     GT_OC  .BB0.9, .BB0.7
.BB0.7 
    T0  LEA  grid (STACK OFFSET 0 ), 
    T1  MULT  z (STACK OFFSET -8 ), 36 
    T2  ADD  T0 , T1 
    T3  MULT  col (STACK OFFSET 12 ), 4 
    T4  ADD  T2 , T3 
    T5  LOAD  T4 , 
     CMP_OC  T5 , num (STACK OFFSET 16 )
     NOTEQ  .BB0.11, .BB0.10
.BB0.10 
     RET_OC  0 , 
     BR_OC  .BB0.6, 
     BR_OC  .BB0.11, 
.BB0.11 
     BR_OC  .BB0.8, 
.BB0.8 
    T0  MOV  z (STACK OFFSET -8 ), 
    z (STACK OFFSET -8 ) ADD  z (STACK OFFSET -8 ), 1 
     CMP_OC  z (STACK OFFSET -8 ), 8 
     LTEQ_OC  .BB0.7, .BB0.9
.BB0.9 
    i (STACK OFFSET -20 ) MOV  0 , 
     CMP_OC  i (STACK OFFSET -20 ), 3 
     GTEQ_OC  .BB0.14, .BB0.12
.BB0.12 
    j (STACK OFFSET -24 ) MOV  0 , 
     CMP_OC  j (STACK OFFSET -24 ), 3 
     GTEQ_OC  .BB0.17, .BB0.15
.BB0.15 
    T0  LEA  grid (STACK OFFSET 0 ), 
    T1  ADD  i (STACK OFFSET -20 ), startRow (STACK OFFSET -12 )
    T2  MULT  T1 , 36 
    T3  ADD  T0 , T2 
    T4  ADD  j (STACK OFFSET -24 ), startCol (STACK OFFSET -16 )
    T5  MULT  T4 , 4 
    T6  ADD  T3 , T5 
    a (STACK OFFSET -28 ) LOAD  T6 , 
     BR_OC  .BB0.16, 
.BB0.16 
    T0  MOV  j (STACK OFFSET -24 ), 
    j (STACK OFFSET -24 ) ADD  j (STACK OFFSET -24 ), 1 
     CMP_OC  j (STACK OFFSET -24 ), 3 
     LT_OC  .BB0.15, .BB0.17
.BB0.17 
     BR_OC  .BB0.13, 
.BB0.13 
    T0  MOV  i (STACK OFFSET -20 ), 
    i (STACK OFFSET -20 ) ADD  i (STACK OFFSET -20 ), 1 
     CMP_OC  i (STACK OFFSET -20 ), 3 
     LT_OC  .BB0.12, .BB0.14
.BB0.14 
     CMP_OC  a (STACK OFFSET -28 ), num (STACK OFFSET 16 )
     NOTEQ  .BB0.19, .BB0.18
.BB0.18 
     RET_OC  0 , 
     BR_OC  .BB0.6, 
     BR_OC  .BB0.19, 
.BB0.19 
     RET_OC  1 , 
     BR_OC  .BB0.6, 
.BB0.6 
Ast Dump for function [ 
LINKED LIST {
  IF STATEMENT 
   IF:
    BINOP Comparison OP ==
      stab_var name=row def @soduku.c:36
      NUM INT_SIGNED 8
   THEN:
    RETURN
      NUM INT_SIGNED 1
   ELSE:
  IF STATEMENT 
   IF:
    BINOP Comparison OP ==
      stab_var name=col def @soduku.c:36
      NUM INT_SIGNED 9
   THEN:
    LINKED LIST {
      UNOP POSTINC
        stab_var name=row def @soduku.c:36
      BINOP = 
        stab_var name=col def @soduku.c:36
        NUM INT_SIGNED 0
    }
   ELSE:
  BINOP = 
    stab_var name=a def @soduku.c:52
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            stab_var name=row def @soduku.c:36
        stab_var name=col def @soduku.c:36
  IF STATEMENT 
   IF:
    BINOP > 
      stab_var name=a def @soduku.c:52
      NUM INT_SIGNED 0
   THEN:
    RETURN
      FN call
        stab_fn name=solveSudoku def @soduku.c:29
1
        stab_var name=row def @soduku.c:36
        BINOP + 
          stab_var name=col def @soduku.c:36
          NUM INT_SIGNED 1
   ELSE:
  FOR
   INIT:
    BINOP = 
      stab_var name=num def @soduku.c:56
      NUM INT_SIGNED 1
   COND: 
    BINOP Comparison OP <=
      stab_var name=num def @soduku.c:56
      NUM INT_SIGNED 9
   BODY: 
    LINKED LIST {
      BINOP = 
        stab_var name=test def @soduku.c:57
        FN call
          stab_fn name=isSafe def @soduku.c:2
2
          stab_var name=row def @soduku.c:36
          stab_var name=col def @soduku.c:36
          stab_var name=num def @soduku.c:56
      IF STATEMENT 
       IF:
        stab_var name=test def @soduku.c:57
       THEN:
        LINKED LIST {
          BINOP = 
            UNOP * 
              BINOP + 
                UNOP * 
                  BINOP + 
                    stab_var name=grid def @soduku.c:0
                    stab_var name=row def @soduku.c:36
                stab_var name=col def @soduku.c:36
            stab_var name=num def @soduku.c:56
          BINOP = 
            stab_var name=test2 def @soduku.c:57
            FN call
              stab_fn name=solveSudoku def @soduku.c:29
1
              stab_var name=row def @soduku.c:36
              BINOP + 
                stab_var name=col def @soduku.c:36
                NUM INT_SIGNED 1
          IF STATEMENT 
           IF:
            stab_var name=test2 def @soduku.c:57
           THEN:
            RETURN
              NUM INT_SIGNED 1
           ELSE:
        }
       ELSE:
      BINOP = 
        UNOP * 
          BINOP + 
            UNOP * 
              BINOP + 
                stab_var name=grid def @soduku.c:0
                stab_var name=row def @soduku.c:36
            stab_var name=col def @soduku.c:36
        NUM INT_SIGNED 0
    }
   INCR: 
    UNOP POSTINC
      stab_var name=num def @soduku.c:56
  RETURN
    NUM INT_SIGNED 0
}
 ] 
DECL SPECS | Storage Class  : extern | Type qualifier : Not applicable | 
Typspecifiers [ 
  int
 ]
DECL SPECS | Storage Class  : extern | Type qualifier : Not applicable | 
Typspecifiers [ 
  int
 ]
DECL SPECS | Storage Class  : extern | Type qualifier : Not applicable | 
Typspecifiers [ 
  int
 ]
solveSudoku: -16
.BB1.0 
     CMP_OC  row (STACK OFFSET 8 ), 8 
     NOTEQ  .BB1.2, .BB1.1
.BB1.1 
     RET_OC  1 , 
     BR_OC  .BB1.3, 
     BR_OC  .BB1.2, 
.BB1.2 
     CMP_OC  col (STACK OFFSET 12 ), 9 
     NOTEQ  .BB1.5, .BB1.4
.BB1.4 
    T0  MOV  row (STACK OFFSET 8 ), 
    row (STACK OFFSET 8 ) ADD  row (STACK OFFSET 8 ), 1 
    col (STACK OFFSET 12 ) MOV  0 , 
     BR_OC  .BB1.5, 
.BB1.5 
    T0  LEA  grid (STACK OFFSET 0 ), 
    T1  MULT  row (STACK OFFSET 8 ), 36 
    T2  ADD  T0 , T1 
    T3  MULT  col (STACK OFFSET 12 ), 4 
    T4  ADD  T2 , T3 
    a (STACK OFFSET -4 ) LOAD  T4 , 
     CMP_OC  a (STACK OFFSET -4 ), 0 
     LTEQ_OC  .BB1.7, .BB1.6
.BB1.6 
     ARGBEGIN  2 , 
    T1  ADD  col (STACK OFFSET 12 ), 1 
     ARG  0 , T1 
     ARG  1 , row (STACK OFFSET 8 )
     CALL_OC  solveSudoku (STACK OFFSET 0 ), T0 
     RET_OC  T0 , 
     BR_OC  .BB1.3, 
     BR_OC  .BB1.7, 
.BB1.7 
    num (STACK OFFSET -8 ) MOV  1 , 
     CMP_OC  num (STACK OFFSET -8 ), 9 
     GT_OC  .BB1.10, .BB1.8
.BB1.8 
     ARGBEGIN  3 , 
     ARG  0 , num (STACK OFFSET -8 )
     ARG  1 , col (STACK OFFSET 12 )
     ARG  2 , row (STACK OFFSET 8 )
     CALL_OC  isSafe (STACK OFFSET 0 ), test (STACK OFFSET -12 )
     CMP_OC  test (STACK OFFSET -12 ), 0 
     EQEQ_OC  .BB1.12, .BB1.11
.BB1.11 
    T0  LEA  grid (STACK OFFSET 0 ), 
    T1  MULT  row (STACK OFFSET 8 ), 36 
    T2  ADD  T0 , T1 
    T3  MULT  col (STACK OFFSET 12 ), 4 
    T4  ADD  T2 , T3 
     STORE  num (STACK OFFSET -8 ), T4 
     ARGBEGIN  2 , 
    T5  ADD  col (STACK OFFSET 12 ), 1 
     ARG  0 , T5 
     ARG  1 , row (STACK OFFSET 8 )
     CALL_OC  solveSudoku (STACK OFFSET 0 ), test2 (STACK OFFSET -16 )
     CMP_OC  test2 (STACK OFFSET -16 ), 0 
     EQEQ_OC  .BB1.14, .BB1.13
.BB1.13 
     RET_OC  1 , 
     BR_OC  .BB1.3, 
     BR_OC  .BB1.14, 
.BB1.14 
     BR_OC  .BB1.12, 
.BB1.12 
    T0  LEA  grid (STACK OFFSET 0 ), 
    T1  MULT  row (STACK OFFSET 8 ), 36 
    T2  ADD  T0 , T1 
    T3  MULT  col (STACK OFFSET 12 ), 4 
    T4  ADD  T2 , T3 
     STORE  0 , T4 
     BR_OC  .BB1.9, 
.BB1.9 
    T0  MOV  num (STACK OFFSET -8 ), 
    num (STACK OFFSET -8 ) ADD  num (STACK OFFSET -8 ), 1 
     CMP_OC  num (STACK OFFSET -8 ), 9 
     LTEQ_OC  .BB1.8, .BB1.10
.BB1.10 
     RET_OC  0 , 
     BR_OC  .BB1.3, 
.BB1.3 
Ast Dump for function [ 
LINKED LIST {
  FOR
   INIT:
    BINOP = 
      stab_var name=i def @soduku.c:93
      NUM INT_SIGNED 0
   COND: 
    BINOP < 
      stab_var name=i def @soduku.c:93
      NUM INT_SIGNED 9
   BODY: 
    LINKED LIST {
      FOR
       INIT:
        BINOP = 
          stab_var name=j def @soduku.c:93
          NUM INT_SIGNED 0
       COND: 
        BINOP < 
          stab_var name=j def @soduku.c:93
          NUM INT_SIGNED 9
       BODY: 
        LINKED LIST {
          FN call
            IDENT printf
1
            STRING %d 
            UNOP * 
              BINOP + 
                UNOP * 
                  BINOP + 
                    stab_var name=grid def @soduku.c:0
                    stab_var name=i def @soduku.c:93
                stab_var name=j def @soduku.c:93
        }
       INCR: 
        UNOP POSTINC
          stab_var name=j def @soduku.c:93
      FN call
        IDENT printf
0
        STRING \n
    }
   INCR: 
    UNOP POSTINC
      stab_var name=i def @soduku.c:93
}
 ] 
printgrid: -8
.BB2.0 
    i (STACK OFFSET -4 ) MOV  0 , 
     CMP_OC  i (STACK OFFSET -4 ), 9 
     GTEQ_OC  .BB2.3, .BB2.1
.BB2.1 
    j (STACK OFFSET -8 ) MOV  0 , 
     CMP_OC  j (STACK OFFSET -8 ), 9 
     GTEQ_OC  .BB2.6, .BB2.4
.BB2.4 
     ARGBEGIN  2 , 
    T0  LEA  grid (STACK OFFSET 0 ), 
    T1  MULT  i (STACK OFFSET -4 ), 36 
    T2  ADD  T0 , T1 
    T3  MULT  j (STACK OFFSET -8 ), 4 
    T4  ADD  T2 , T3 
    T5  LOAD  T4 , 
     ARG  0 , T5 
     ARG  1 , "%d "
     CALL_OC  printf (STACK OFFSET 0 ), 
     BR_OC  .BB2.5, 
.BB2.5 
    T0  MOV  j (STACK OFFSET -8 ), 
    j (STACK OFFSET -8 ) ADD  j (STACK OFFSET -8 ), 1 
     CMP_OC  j (STACK OFFSET -8 ), 9 
     LT_OC  .BB2.4, .BB2.6
.BB2.6 
     ARGBEGIN  1 , 
     ARG  0 , "\n"
     CALL_OC  printf (STACK OFFSET 0 ), 
     BR_OC  .BB2.2, 
.BB2.2 
    T0  MOV  i (STACK OFFSET -4 ), 
    i (STACK OFFSET -4 ) ADD  i (STACK OFFSET -4 ), 1 
     CMP_OC  i (STACK OFFSET -4 ), 9 
     LT_OC  .BB2.1, .BB2.3
.BB2.3 
Ast Dump for function [ 
LINKED LIST {
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 0
        NUM INT_SIGNED 0
    NUM INT_SIGNED 3
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 0
        NUM INT_SIGNED 1
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 0
        NUM INT_SIGNED 2
    NUM INT_SIGNED 6
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 0
        NUM INT_SIGNED 3
    NUM INT_SIGNED 5
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 0
        NUM INT_SIGNED 4
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 0
        NUM INT_SIGNED 5
    NUM INT_SIGNED 8
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 0
        NUM INT_SIGNED 6
    NUM INT_SIGNED 4
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 0
        NUM INT_SIGNED 7
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 0
        NUM INT_SIGNED 8
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 1
        NUM INT_SIGNED 0
    NUM INT_SIGNED 5
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 1
        NUM INT_SIGNED 1
    NUM INT_SIGNED 2
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 1
        NUM INT_SIGNED 2
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 1
        NUM INT_SIGNED 3
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 1
        NUM INT_SIGNED 4
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 1
        NUM INT_SIGNED 5
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 1
        NUM INT_SIGNED 6
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 1
        NUM INT_SIGNED 7
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 1
        NUM INT_SIGNED 8
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 2
        NUM INT_SIGNED 0
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 2
        NUM INT_SIGNED 1
    NUM INT_SIGNED 8
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 2
        NUM INT_SIGNED 2
    NUM INT_SIGNED 7
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 2
        NUM INT_SIGNED 3
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 2
        NUM INT_SIGNED 4
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 2
        NUM INT_SIGNED 5
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 2
        NUM INT_SIGNED 6
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 2
        NUM INT_SIGNED 7
    NUM INT_SIGNED 3
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 2
        NUM INT_SIGNED 8
    NUM INT_SIGNED 1
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 3
        NUM INT_SIGNED 0
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 3
        NUM INT_SIGNED 1
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 3
        NUM INT_SIGNED 2
    NUM INT_SIGNED 3
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 3
        NUM INT_SIGNED 3
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 3
        NUM INT_SIGNED 4
    NUM INT_SIGNED 1
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 3
        NUM INT_SIGNED 5
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 3
        NUM INT_SIGNED 6
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 3
        NUM INT_SIGNED 7
    NUM INT_SIGNED 8
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 3
        NUM INT_SIGNED 8
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 4
        NUM INT_SIGNED 0
    NUM INT_SIGNED 9
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 4
        NUM INT_SIGNED 1
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 4
        NUM INT_SIGNED 2
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 4
        NUM INT_SIGNED 3
    NUM INT_SIGNED 8
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 4
        NUM INT_SIGNED 4
    NUM INT_SIGNED 6
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 4
        NUM INT_SIGNED 5
    NUM INT_SIGNED 3
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 4
        NUM INT_SIGNED 6
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 4
        NUM INT_SIGNED 7
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 4
        NUM INT_SIGNED 8
    NUM INT_SIGNED 5
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 5
        NUM INT_SIGNED 0
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 5
        NUM INT_SIGNED 1
    NUM INT_SIGNED 5
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 5
        NUM INT_SIGNED 2
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 5
        NUM INT_SIGNED 3
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 5
        NUM INT_SIGNED 4
    NUM INT_SIGNED 9
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 5
        NUM INT_SIGNED 5
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 5
        NUM INT_SIGNED 6
    NUM INT_SIGNED 6
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 5
        NUM INT_SIGNED 7
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 5
        NUM INT_SIGNED 8
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 6
        NUM INT_SIGNED 0
    NUM INT_SIGNED 1
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 6
        NUM INT_SIGNED 1
    NUM INT_SIGNED 3
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 6
        NUM INT_SIGNED 2
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 6
        NUM INT_SIGNED 3
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 6
        NUM INT_SIGNED 4
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 6
        NUM INT_SIGNED 5
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 6
        NUM INT_SIGNED 6
    NUM INT_SIGNED 2
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 6
        NUM INT_SIGNED 7
    NUM INT_SIGNED 5
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 6
        NUM INT_SIGNED 8
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 7
        NUM INT_SIGNED 0
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 7
        NUM INT_SIGNED 1
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 7
        NUM INT_SIGNED 2
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 7
        NUM INT_SIGNED 3
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 7
        NUM INT_SIGNED 4
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 7
        NUM INT_SIGNED 5
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 7
        NUM INT_SIGNED 6
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 7
        NUM INT_SIGNED 7
    NUM INT_SIGNED 7
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 7
        NUM INT_SIGNED 8
    NUM INT_SIGNED 4
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 8
        NUM INT_SIGNED 0
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 8
        NUM INT_SIGNED 1
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 8
        NUM INT_SIGNED 2
    NUM INT_SIGNED 5
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 8
        NUM INT_SIGNED 3
    NUM INT_SIGNED 2
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 8
        NUM INT_SIGNED 4
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 8
        NUM INT_SIGNED 5
    NUM INT_SIGNED 6
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 8
        NUM INT_SIGNED 6
    NUM INT_SIGNED 3
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 8
        NUM INT_SIGNED 7
    NUM INT_SIGNED 0
  BINOP = 
    UNOP * 
      BINOP + 
        UNOP * 
          BINOP + 
            stab_var name=grid def @soduku.c:0
            NUM INT_SIGNED 8
        NUM INT_SIGNED 8
    NUM INT_SIGNED 0
  FN call
    stab_fn name=solveSudoku def @soduku.c:29
1
    NUM INT_SIGNED 2
    NUM INT_SIGNED 2
  FN call
    stab_fn name=printgrid def @soduku.c:92
  RETURN
    NUM INT_SIGNED 0
}
 ] 
DECL SPECS | Storage Class  : extern | Type qualifier : Not applicable | 
Typspecifiers [ 
  int
 ]
DECL SPECS | Storage Class  : extern | Type qualifier : Not applicable | 
Typspecifiers [ 
  void
 ]
main: -4
.BB3.0 
    T0  LEA  grid (STACK OFFSET 0 ), 
    T1  MULT  0 , 36 
    T2  ADD  T0 , T1 
    T3  MULT  0 , 4 
    T4  ADD  T2 , T3 
     STORE  3 , T4 
    T5  LEA  grid (STACK OFFSET 0 ), 
    T6  MULT  0 , 36 
    T7  ADD  T5 , T6 
    T8  MULT  1 , 4 
    T9  ADD  T7 , T8 
     STORE  0 , T9 
    T10  LEA  grid (STACK OFFSET 0 ), 
    T11  MULT  0 , 36 
    T12  ADD  T10 , T11 
    T13  MULT  2 , 4 
    T14  ADD  T12 , T13 
     STORE  6 , T14 
    T15  LEA  grid (STACK OFFSET 0 ), 
    T16  MULT  0 , 36 
    T17  ADD  T15 , T16 
    T18  MULT  3 , 4 
    T19  ADD  T17 , T18 
     STORE  5 , T19 
    T20  LEA  grid (STACK OFFSET 0 ), 
    T21  MULT  0 , 36 
    T22  ADD  T20 , T21 
    T23  MULT  4 , 4 
    T24  ADD  T22 , T23 
     STORE  0 , T24 
    T25  LEA  grid (STACK OFFSET 0 ), 
    T26  MULT  0 , 36 
    T27  ADD  T25 , T26 
    T28  MULT  5 , 4 
    T29  ADD  T27 , T28 
     STORE  8 , T29 
    T30  LEA  grid (STACK OFFSET 0 ), 
    T31  MULT  0 , 36 
    T32  ADD  T30 , T31 
    T33  MULT  6 , 4 
    T34  ADD  T32 , T33 
     STORE  4 , T34 
    T35  LEA  grid (STACK OFFSET 0 ), 
    T36  MULT  0 , 36 
    T37  ADD  T35 , T36 
    T38  MULT  7 , 4 
    T39  ADD  T37 , T38 
     STORE  0 , T39 
    T40  LEA  grid (STACK OFFSET 0 ), 
    T41  MULT  0 , 36 
    T42  ADD  T40 , T41 
    T43  MULT  8 , 4 
    T44  ADD  T42 , T43 
     STORE  0 , T44 
    T45  LEA  grid (STACK OFFSET 0 ), 
    T46  MULT  1 , 36 
    T47  ADD  T45 , T46 
    T48  MULT  0 , 4 
    T49  ADD  T47 , T48 
     STORE  5 , T49 
    T50  LEA  grid (STACK OFFSET 0 ), 
    T51  MULT  1 , 36 
    T52  ADD  T50 , T51 
    T53  MULT  1 , 4 
    T54  ADD  T52 , T53 
     STORE  2 , T54 
    T55  LEA  grid (STACK OFFSET 0 ), 
    T56  MULT  1 , 36 
    T57  ADD  T55 , T56 
    T58  MULT  2 , 4 
    T59  ADD  T57 , T58 
     STORE  0 , T59 
    T60  LEA  grid (STACK OFFSET 0 ), 
    T61  MULT  1 , 36 
    T62  ADD  T60 , T61 
    T63  MULT  3 , 4 
    T64  ADD  T62 , T63 
     STORE  0 , T64 
    T65  LEA  grid (STACK OFFSET 0 ), 
    T66  MULT  1 , 36 
    T67  ADD  T65 , T66 
    T68  MULT  4 , 4 
    T69  ADD  T67 , T68 
     STORE  0 , T69 
    T70  LEA  grid (STACK OFFSET 0 ), 
    T71  MULT  1 , 36 
    T72  ADD  T70 , T71 
    T73  MULT  5 , 4 
    T74  ADD  T72 , T73 
     STORE  0 , T74 
    T75  LEA  grid (STACK OFFSET 0 ), 
    T76  MULT  1 , 36 
    T77  ADD  T75 , T76 
    T78  MULT  6 , 4 
    T79  ADD  T77 , T78 
     STORE  0 , T79 
    T80  LEA  grid (STACK OFFSET 0 ), 
    T81  MULT  1 , 36 
    T82  ADD  T80 , T81 
    T83  MULT  7 , 4 
    T84  ADD  T82 , T83 
     STORE  0 , T84 
    T85  LEA  grid (STACK OFFSET 0 ), 
    T86  MULT  1 , 36 
    T87  ADD  T85 , T86 
    T88  MULT  8 , 4 
    T89  ADD  T87 , T88 
     STORE  0 , T89 
    T90  LEA  grid (STACK OFFSET 0 ), 
    T91  MULT  2 , 36 
    T92  ADD  T90 , T91 
    T93  MULT  0 , 4 
    T94  ADD  T92 , T93 
     STORE  0 , T94 
    T95  LEA  grid (STACK OFFSET 0 ), 
    T96  MULT  2 , 36 
    T97  ADD  T95 , T96 
    T98  MULT  1 , 4 
    T99  ADD  T97 , T98 
     STORE  8 , T99 
    T100  LEA  grid (STACK OFFSET 0 ), 
    T101  MULT  2 , 36 
    T102  ADD  T100 , T101 
    T103  MULT  2 , 4 
    T104  ADD  T102 , T103 
     STORE  7 , T104 
    T105  LEA  grid (STACK OFFSET 0 ), 
    T106  MULT  2 , 36 
    T107  ADD  T105 , T106 
    T108  MULT  3 , 4 
    T109  ADD  T107 , T108 
     STORE  0 , T109 
    T110  LEA  grid (STACK OFFSET 0 ), 
    T111  MULT  2 , 36 
    T112  ADD  T110 , T111 
    T113  MULT  4 , 4 
    T114  ADD  T112 , T113 
     STORE  0 , T114 
    T115  LEA  grid (STACK OFFSET 0 ), 
    T116  MULT  2 , 36 
    T117  ADD  T115 , T116 
    T118  MULT  5 , 4 
    T119  ADD  T117 , T118 
     STORE  0 , T119 
    T120  LEA  grid (STACK OFFSET 0 ), 
    T121  MULT  2 , 36 
    T122  ADD  T120 , T121 
    T123  MULT  6 , 4 
    T124  ADD  T122 , T123 
     STORE  0 , T124 
    T125  LEA  grid (STACK OFFSET 0 ), 
    T126  MULT  2 , 36 
    T127  ADD  T125 , T126 
    T128  MULT  7 , 4 
    T129  ADD  T127 , T128 
     STORE  3 , T129 
    T130  LEA  grid (STACK OFFSET 0 ), 
    T131  MULT  2 , 36 
    T132  ADD  T130 , T131 
    T133  MULT  8 , 4 
    T134  ADD  T132 , T133 
     STORE  1 , T134 
    T135  LEA  grid (STACK OFFSET 0 ), 
    T136  MULT  3 , 36 
    T137  ADD  T135 , T136 
    T138  MULT  0 , 4 
    T139  ADD  T137 , T138 
     STORE  0 , T139 
    T140  LEA  grid (STACK OFFSET 0 ), 
    T141  MULT  3 , 36 
    T142  ADD  T140 , T141 
    T143  MULT  1 , 4 
    T144  ADD  T142 , T143 
     STORE  0 , T144 
    T145  LEA  grid (STACK OFFSET 0 ), 
    T146  MULT  3 , 36 
    T147  ADD  T145 , T146 
    T148  MULT  2 , 4 
    T149  ADD  T147 , T148 
     STORE  3 , T149 
    T150  LEA  grid (STACK OFFSET 0 ), 
    T151  MULT  3 , 36 
    T152  ADD  T150 , T151 
    T153  MULT  3 , 4 
    T154  ADD  T152 , T153 
     STORE  0 , T154 
    T155  LEA  grid (STACK OFFSET 0 ), 
    T156  MULT  3 , 36 
    T157  ADD  T155 , T156 
    T158  MULT  4 , 4 
    T159  ADD  T157 , T158 
     STORE  1 , T159 
    T160  LEA  grid (STACK OFFSET 0 ), 
    T161  MULT  3 , 36 
    T162  ADD  T160 , T161 
    T163  MULT  5 , 4 
    T164  ADD  T162 , T163 
     STORE  0 , T164 
    T165  LEA  grid (STACK OFFSET 0 ), 
    T166  MULT  3 , 36 
    T167  ADD  T165 , T166 
    T168  MULT  6 , 4 
    T169  ADD  T167 , T168 
     STORE  0 , T169 
    T170  LEA  grid (STACK OFFSET 0 ), 
    T171  MULT  3 , 36 
    T172  ADD  T170 , T171 
    T173  MULT  7 , 4 
    T174  ADD  T172 , T173 
     STORE  8 , T174 
    T175  LEA  grid (STACK OFFSET 0 ), 
    T176  MULT  3 , 36 
    T177  ADD  T175 , T176 
    T178  MULT  8 , 4 
    T179  ADD  T177 , T178 
     STORE  0 , T179 
    T180  LEA  grid (STACK OFFSET 0 ), 
    T181  MULT  4 , 36 
    T182  ADD  T180 , T181 
    T183  MULT  0 , 4 
    T184  ADD  T182 , T183 
     STORE  9 , T184 
    T185  LEA  grid (STACK OFFSET 0 ), 
    T186  MULT  4 , 36 
    T187  ADD  T185 , T186 
    T188  MULT  1 , 4 
    T189  ADD  T187 , T188 
     STORE  0 , T189 
    T190  LEA  grid (STACK OFFSET 0 ), 
    T191  MULT  4 , 36 
    T192  ADD  T190 , T191 
    T193  MULT  2 , 4 
    T194  ADD  T192 , T193 
     STORE  0 , T194 
    T195  LEA  grid (STACK OFFSET 0 ), 
    T196  MULT  4 , 36 
    T197  ADD  T195 , T196 
    T198  MULT  3 , 4 
    T199  ADD  T197 , T198 
     STORE  8 , T199 
    T200  LEA  grid (STACK OFFSET 0 ), 
    T201  MULT  4 , 36 
    T202  ADD  T200 , T201 
    T203  MULT  4 , 4 
    T204  ADD  T202 , T203 
     STORE  6 , T204 
    T205  LEA  grid (STACK OFFSET 0 ), 
    T206  MULT  4 , 36 
    T207  ADD  T205 , T206 
    T208  MULT  5 , 4 
    T209  ADD  T207 , T208 
     STORE  3 , T209 
    T210  LEA  grid (STACK OFFSET 0 ), 
    T211  MULT  4 , 36 
    T212  ADD  T210 , T211 
    T213  MULT  6 , 4 
    T214  ADD  T212 , T213 
     STORE  0 , T214 
    T215  LEA  grid (STACK OFFSET 0 ), 
    T216  MULT  4 , 36 
    T217  ADD  T215 , T216 
    T218  MULT  7 , 4 
    T219  ADD  T217 , T218 
     STORE  0 , T219 
    T220  LEA  grid (STACK OFFSET 0 ), 
    T221  MULT  4 , 36 
    T222  ADD  T220 , T221 
    T223  MULT  8 , 4 
    T224  ADD  T222 , T223 
     STORE  5 , T224 
    T225  LEA  grid (STACK OFFSET 0 ), 
    T226  MULT  5 , 36 
    T227  ADD  T225 , T226 
    T228  MULT  0 , 4 
    T229  ADD  T227 , T228 
     STORE  0 , T229 
    T230  LEA  grid (STACK OFFSET 0 ), 
    T231  MULT  5 , 36 
    T232  ADD  T230 , T231 
    T233  MULT  1 , 4 
    T234  ADD  T232 , T233 
     STORE  5 , T234 
    T235  LEA  grid (STACK OFFSET 0 ), 
    T236  MULT  5 , 36 
    T237  ADD  T235 , T236 
    T238  MULT  2 , 4 
    T239  ADD  T237 , T238 
     STORE  0 , T239 
    T240  LEA  grid (STACK OFFSET 0 ), 
    T241  MULT  5 , 36 
    T242  ADD  T240 , T241 
    T243  MULT  3 , 4 
    T244  ADD  T242 , T243 
     STORE  0 , T244 
    T245  LEA  grid (STACK OFFSET 0 ), 
    T246  MULT  5 , 36 
    T247  ADD  T245 , T246 
    T248  MULT  4 , 4 
    T249  ADD  T247 , T248 
     STORE  9 , T249 
    T250  LEA  grid (STACK OFFSET 0 ), 
    T251  MULT  5 , 36 
    T252  ADD  T250 , T251 
    T253  MULT  5 , 4 
    T254  ADD  T252 , T253 
     STORE  0 , T254 
    T255  LEA  grid (STACK OFFSET 0 ), 
    T256  MULT  5 , 36 
    T257  ADD  T255 , T256 
    T258  MULT  6 , 4 
    T259  ADD  T257 , T258 
     STORE  6 , T259 
    T260  LEA  grid (STACK OFFSET 0 ), 
    T261  MULT  5 , 36 
    T262  ADD  T260 , T261 
    T263  MULT  7 , 4 
    T264  ADD  T262 , T263 
     STORE  0 , T264 
    T265  LEA  grid (STACK OFFSET 0 ), 
    T266  MULT  5 , 36 
    T267  ADD  T265 , T266 
    T268  MULT  8 , 4 
    T269  ADD  T267 , T268 
     STORE  0 , T269 
    T270  LEA  grid (STACK OFFSET 0 ), 
    T271  MULT  6 , 36 
    T272  ADD  T270 , T271 
    T273  MULT  0 , 4 
    T274  ADD  T272 , T273 
     STORE  1 , T274 
    T275  LEA  grid (STACK OFFSET 0 ), 
    T276  MULT  6 , 36 
    T277  ADD  T275 , T276 
    T278  MULT  1 , 4 
    T279  ADD  T277 , T278 
     STORE  3 , T279 
    T280  LEA  grid (STACK OFFSET 0 ), 
    T281  MULT  6 , 36 
    T282  ADD  T280 , T281 
    T283  MULT  2 , 4 
    T284  ADD  T282 , T283 
     STORE  0 , T284 
    T285  LEA  grid (STACK OFFSET 0 ), 
    T286  MULT  6 , 36 
    T287  ADD  T285 , T286 
    T288  MULT  3 , 4 
    T289  ADD  T287 , T288 
     STORE  0 , T289 
    T290  LEA  grid (STACK OFFSET 0 ), 
    T291  MULT  6 , 36 
    T292  ADD  T290 , T291 
    T293  MULT  4 , 4 
    T294  ADD  T292 , T293 
     STORE  0 , T294 
    T295  LEA  grid (STACK OFFSET 0 ), 
    T296  MULT  6 , 36 
    T297  ADD  T295 , T296 
    T298  MULT  5 , 4 
    T299  ADD  T297 , T298 
     STORE  0 , T299 
    T300  LEA  grid (STACK OFFSET 0 ), 
    T301  MULT  6 , 36 
    T302  ADD  T300 , T301 
    T303  MULT  6 , 4 
    T304  ADD  T302 , T303 
     STORE  2 , T304 
    T305  LEA  grid (STACK OFFSET 0 ), 
    T306  MULT  6 , 36 
    T307  ADD  T305 , T306 
    T308  MULT  7 , 4 
    T309  ADD  T307 , T308 
     STORE  5 , T309 
    T310  LEA  grid (STACK OFFSET 0 ), 
    T311  MULT  6 , 36 
    T312  ADD  T310 , T311 
    T313  MULT  8 , 4 
    T314  ADD  T312 , T313 
     STORE  0 , T314 
    T315  LEA  grid (STACK OFFSET 0 ), 
    T316  MULT  7 , 36 
    T317  ADD  T315 , T316 
    T318  MULT  0 , 4 
    T319  ADD  T317 , T318 
     STORE  0 , T319 
    T320  LEA  grid (STACK OFFSET 0 ), 
    T321  MULT  7 , 36 
    T322  ADD  T320 , T321 
    T323  MULT  1 , 4 
    T324  ADD  T322 , T323 
     STORE  0 , T324 
    T325  LEA  grid (STACK OFFSET 0 ), 
    T326  MULT  7 , 36 
    T327  ADD  T325 , T326 
    T328  MULT  2 , 4 
    T329  ADD  T327 , T328 
     STORE  0 , T329 
    T330  LEA  grid (STACK OFFSET 0 ), 
    T331  MULT  7 , 36 
    T332  ADD  T330 , T331 
    T333  MULT  3 , 4 
    T334  ADD  T332 , T333 
     STORE  0 , T334 
    T335  LEA  grid (STACK OFFSET 0 ), 
    T336  MULT  7 , 36 
    T337  ADD  T335 , T336 
    T338  MULT  4 , 4 
    T339  ADD  T337 , T338 
     STORE  0 , T339 
    T340  LEA  grid (STACK OFFSET 0 ), 
    T341  MULT  7 , 36 
    T342  ADD  T340 , T341 
    T343  MULT  5 , 4 
    T344  ADD  T342 , T343 
     STORE  0 , T344 
    T345  LEA  grid (STACK OFFSET 0 ), 
    T346  MULT  7 , 36 
    T347  ADD  T345 , T346 
    T348  MULT  6 , 4 
    T349  ADD  T347 , T348 
     STORE  0 , T349 
    T350  LEA  grid (STACK OFFSET 0 ), 
    T351  MULT  7 , 36 
    T352  ADD  T350 , T351 
    T353  MULT  7 , 4 
    T354  ADD  T352 , T353 
     STORE  7 , T354 
    T355  LEA  grid (STACK OFFSET 0 ), 
    T356  MULT  7 , 36 
    T357  ADD  T355 , T356 
    T358  MULT  8 , 4 
    T359  ADD  T357 , T358 
     STORE  4 , T359 
    T360  LEA  grid (STACK OFFSET 0 ), 
    T361  MULT  8 , 36 
    T362  ADD  T360 , T361 
    T363  MULT  0 , 4 
    T364  ADD  T362 , T363 
     STORE  0 , T364 
    T365  LEA  grid (STACK OFFSET 0 ), 
    T366  MULT  8 , 36 
    T367  ADD  T365 , T366 
    T368  MULT  1 , 4 
    T369  ADD  T367 , T368 
     STORE  0 , T369 
    T370  LEA  grid (STACK OFFSET 0 ), 
    T371  MULT  8 , 36 
    T372  ADD  T370 , T371 
    T373  MULT  2 , 4 
    T374  ADD  T372 , T373 
     STORE  5 , T374 
    T375  LEA  grid (STACK OFFSET 0 ), 
    T376  MULT  8 , 36 
    T377  ADD  T375 , T376 
    T378  MULT  3 , 4 
    T379  ADD  T377 , T378 
     STORE  2 , T379 
    T380  LEA  grid (STACK OFFSET 0 ), 
    T381  MULT  8 , 36 
    T382  ADD  T380 , T381 
    T383  MULT  4 , 4 
    T384  ADD  T382 , T383 
     STORE  0 , T384 
    T385  LEA  grid (STACK OFFSET 0 ), 
    T386  MULT  8 , 36 
    T387  ADD  T385 , T386 
    T388  MULT  5 , 4 
    T389  ADD  T387 , T388 
     STORE  6 , T389 
    T390  LEA  grid (STACK OFFSET 0 ), 
    T391  MULT  8 , 36 
    T392  ADD  T390 , T391 
    T393  MULT  6 , 4 
    T394  ADD  T392 , T393 
     STORE  3 , T394 
    T395  LEA  grid (STACK OFFSET 0 ), 
    T396  MULT  8 , 36 
    T397  ADD  T395 , T396 
    T398  MULT  7 , 4 
    T399  ADD  T397 , T398 
     STORE  0 , T399 
    T400  LEA  grid (STACK OFFSET 0 ), 
    T401  MULT  8 , 36 
    T402  ADD  T400 , T401 
    T403  MULT  8 , 4 
    T404  ADD  T402 , T403 
     STORE  0 , T404 
     ARGBEGIN  2 , 
     ARG  0 , 2 
     ARG  1 , 2 
     CALL_OC  solveSudoku (STACK OFFSET 0 ), 
     CALL_OC  printgrid (STACK OFFSET 0 ), 
     RET_OC  0 , 
     BR_OC  .BB3.1, 
.BB3.1 
