#pragma once

#include "common.h"
#include "tokens.h"

void die(const char *fmt, ...);
void _die_location(char *file, int line, Location loc, const char *fmt, ...);

i64 i64max(i64 a, i64 b);
i64 i64min(i64 a, i64 b);

// Assumes alignment is a power of 2
i64 align_up(i64 val, i64 align);
i64 get_syscall_num(i64 orig_syscall);


#define die_location(loc, ...) _die_location(__FILE__, __LINE__, loc, __VA_ARGS__)