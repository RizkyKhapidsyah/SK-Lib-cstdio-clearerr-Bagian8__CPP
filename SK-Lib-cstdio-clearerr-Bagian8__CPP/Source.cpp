#pragma warning(disable:4996)

#include <cassert>
#include <cstdio>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    std::FILE* tmpf = std::tmpfile();
    std::fputs("Halo Manusia\n", tmpf);
    std::rewind(tmpf);

    for (int ch; (ch = std::fgetc(tmpf)) != EOF; std::putchar(ch)) {}

    assert(std::feof(tmpf)); 
    std::puts("End of file reached");

    std::clearerr(tmpf); 

    std::puts(std::feof(tmpf) ? "EOF indicator set"
        : "EOF indicator cleared");

    _getch();
    return 0;
}