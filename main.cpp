#include <iostream>
#include <ctime>
#include "ActivityBluePrint.h"
#include "Colors.h"

int main() {
    Colors c(0, 0, 0);
    ActivityBluePrint math("math", c, "productivity", "");
    tm a;
    a.tm_hour = 10;
    a.tm_min = 00;

    tm b;
    b.tm_hour = 11;
    b.tm_min = 00;
    math.addEntry(a, b);

    math.printVector();
}
