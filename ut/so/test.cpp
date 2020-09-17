#include <stdio.h>
#include "hello.h"
#include "world.h"

int main(int argc, char* argv[])
{
	printf("%s\n", __func__);

	hello_foo();
	hello_foo2(2);
	hello_foo2(1);
	hello_foo2(0);
	hello_foo2(-1);

	world_foo();
	world_foo2(2);
	world_foo2(1);
	world_foo2(0);
	world_foo2(-1);
	world_foo3(5);
	world_foo4(true, true);
	world_foo4(true, false);
	world_foo4(false, false);

	HelloClass *pHC = new HelloClass;
	if (NULL != pHC) {
		pHC->HelloFoo();
		delete pHC;
		pHC = NULL;
	}

	WorldClass *pWC = new WorldClass;
	if (NULL != pWC) {
		pWC->WorldFoo();
		delete pWC;
		pWC = NULL;
	}

	WorldClass::Destroy();	
	WorldClass::FakeInstance();
	WorldClass::FakeInstance();
	WorldClass::Destroy();	

	return 0;
}
