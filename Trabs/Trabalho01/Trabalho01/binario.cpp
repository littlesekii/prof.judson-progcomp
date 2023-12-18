#include "binario.h"


unsigned short ligarBit(unsigned short s, int pos) {
	unsigned short tester{ 1 };
	tester <<= pos;
	return s | tester;
}
unsigned short desligarBit(unsigned short s, int pos) {
	unsigned short tester{ 1 };
	tester <<= pos;
	tester = ~tester;

	return s & tester;
}
bool testarBit(unsigned short s, int pos) {
	unsigned short tester{ 1 };
	tester <<= pos;

	return s & tester;
}

unsigned short bitCheckAND(unsigned short s1, int s2) {
	return s1 & s2;
}
unsigned short bitCheckOR(unsigned short s1,int s2) {
	return s1 | s2;
}

unsigned short bitsBaixos(unsigned short s) {
	return s << 8 >> 8;
}
unsigned short bitsAltos(unsigned short s) {
	return s >> 8;
}
