#ifndef COLOR_H

#include <kprintf.h>

void print_set_color(uint8_t foreground, uint8_t background) {
    color = foreground + (background << 4);
}

#endif // COLOR_H