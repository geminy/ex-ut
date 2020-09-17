#include <stdio.h>

void hello_foo()
{
	printf("%s\n", __func__);
}

void hello_foo2(int i)
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

class HelloClass
{
public:
	HelloClass() { printf("%s\n", __func__); }
	~HelloClass() { printf("%s\n", __func__); }

	void HelloFoo() { printf("%s\n", __func__); }
};
