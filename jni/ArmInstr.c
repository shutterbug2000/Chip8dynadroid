#include "ArmInstr.h"

char add(reg1, num2){
	__asm("mov R1, =reg1");
	__asm("add R1, num2");
	return register *foo asm ("R1");
}
