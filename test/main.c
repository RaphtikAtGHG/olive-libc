// test/main.c
// Copyright (C) 2024 Kevin Alavik and contributors
// This file is part of olivelibc, which is licensed under the GNU General Public License v3.0.
// You may not use this file except in compliance with the License.
// You can obtain a copy of the License at <https://www.gnu.org/licenses/gpl-3.0.html>

#include <stdbool.h>
#include <iso646.h>

extern int printf(const char*, ...);

int main() {
	if(true and false != 69) {
		printf("yey!\n");
		return 0;
	} else {
		printf("fuck :(\n");
		return 1;
	}

	return 0;
}
