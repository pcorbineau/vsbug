#pragma once

class Foo {
public:
  static Foo GetFoo(int index);

private:
  Foo() = default;

  static Foo m_Foos[256];
};
