#include "Foo.h"

Foo Foo::m_Foos[256] = {};

Foo Foo::GetFoo(int index) { return m_Foos[index]; }
