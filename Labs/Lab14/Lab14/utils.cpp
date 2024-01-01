#include "utils.h"

void UTF8_CMD() {
	const char* CMD_PAGE{ "chcp 1252 > nil" };
	system(CMD_PAGE);
}
