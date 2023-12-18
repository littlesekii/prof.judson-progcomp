#include "binario.h"


unsigned short ligarBit(unsigned short s, unsigned short pos) {

}
unsigned short desligarBit(unsigned short s, unsigned short pos);
unsigned short testarBit(unsigned short, unsigned short pos);

unsigned short bitCheckAND(unsigned short s1, unsigned short s2) {
	return s1 & s2;
}
unsigned short bitCheckOR(unsigned short s1, unsigned short s2) {
	return s1 | s2;
}

unsigned short bitsBaixos(unsigned short s) {
	return s << 8 >> 8;
}
unsigned short bitsAltos(unsigned short s) {
	return s >> 8;
}
