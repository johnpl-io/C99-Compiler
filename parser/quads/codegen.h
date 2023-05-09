#ifndef CODEGEN_H
#define CODEGEN_H

#include <stdlib.h>
#include <stdio.h>

#include "quads.h"
#include "sizeof.h"
#include "ast.h"

extern char filename_buf[256];

void code_generation();
void translate_quad(struct quad *q);

