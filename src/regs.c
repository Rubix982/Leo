#include "regs.h"

typedef unsigned long int __uint64_t;
typedef __uint64_t uint64_t;
typedef uint64_t uintreg_t;


struct regs
{
    /* data */
    uintreg_t x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15;
    uintreg_t x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30;

};
void save_regs(){

    struct regs sregs;
    sregs.x0=read_reg(x0);
    sregs.x1=read_reg(x1);
    sregs.x2=read_reg(x2);
    sregs.x3=read_reg(x3);
    sregs.x4=read_reg(x4);
    sregs.x5=read_reg(x5);
    sregs.x6=read_reg(x6);


}
