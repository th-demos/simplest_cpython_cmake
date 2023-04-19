//
// Created by hwf on 2023/4/19.
//
#include <Python.h>

int main() {
  Py_Initialize();
  PyRun_SimpleString("print('Hello from Python!')");
  Py_Finalize();
  return 0;
}
