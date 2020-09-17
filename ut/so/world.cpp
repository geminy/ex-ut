#include <stdio.h>
#include "world.h"

void world_foo()
{
	printf("%s\n", __func__);
}

void world_foo2(int i)
{
	if (i > 0) {
		printf("%s pos\n", __func__);
		if (0 == i % 2) {
			printf("%s even\n", __func__);
		}
		else {
			printf("%s odd\n", __func__);
		}
	}
	else if (i < 0) {
		printf("%s neg\n", __func__);
	}
	else {
		printf("%s zero\n", __func__);
	}
}

void world_foo3(int i)
{
	printf("%s\n", __func__);
	for (int j = 0; j < i; ++j) {
		printf("%s %d\n", __func__, j);
		switch (j) {
			case 0:
				printf("%s case 0\n", __func__);
				break;
			case 1:
				printf("%s case 1\n", __func__);
				break;
			case 2:
			case 3:
				printf("%s case %d\n", __func__, j);
				break;
			default:
				printf("%s default ...\n", __func__);
				break;
		}
	}
}

void world_foo4(bool a, bool b)
{
	printf("%s %d %d\n", __func__, a, b);
	if (a && b) {
		printf("%s true true\n", __func__);
	}

}


WorldClass* WorldClass::s_WorldClass = NULL;

WorldClass* WorldClass::FakeInstance()
{
	printf("%s %p\n", __func__, s_WorldClass);
	if (!s_WorldClass) {
		s_WorldClass = new WorldClass;
	}
	return s_WorldClass;
}

void WorldClass::Destroy()
{
	printf("%s %p\n", __func__, s_WorldClass);
	if (s_WorldClass) {
		delete s_WorldClass;
		s_WorldClass = NULL;
	}
}

WorldClass::WorldClass()
{
	printf("%s\n", __func__);
}

WorldClass::~WorldClass()
{
	printf("%s\n", __func__);
}

void WorldClass::WorldFoo()
{
	printf("%s\n", __func__);
}
