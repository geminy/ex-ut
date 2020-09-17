#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

extern "C" void __gcov_flush();

int main(int argc, char* argv[])
{
	std::cout << "gcov flush" << std::endl;
	__gcov_flush();

	_exit(0);
}
