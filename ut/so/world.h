void world_foo();
void world_foo2(int i);
void world_foo3(int i);
void world_foo4(bool a, bool b);

class WorldClass
{
public:
	WorldClass();
	~WorldClass();

	void WorldFoo();

	static WorldClass* FakeInstance();
	static void Destroy();

private:
	static WorldClass* s_WorldClass;
};
