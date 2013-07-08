#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include "StdString.h"
#include <cstring>


StdString::StdString(const char* _sz) {
  sz = new char[strlen(_sz) + 1];
  strcpy(sz, _sz);
}

StdString::~StdString() {
  delete[] sz;
}

StdString::StdString(const StdString &std_sz) {
  sz = new char[strlen(std_sz.sz) + 1];
  strcpy(sz, std_sz.sz);
}

const StdString& StdString::operator=(const StdString &std_sz) {
  if(this == &std_sz)
    return *this;

  delete[] sz;
  sz = new char[strlen(std_sz.sz) + 1];
  strcpy(sz, std_sz.sz);

  return *this;
}

StdString::operator const char*() const {
  return sz;
}

char& StdString::operator[](int index) {
  return sz[index];
}

const char StdString::operator[](int index) const {
  return sz[index];
}

const StdString& StdString::operator+=(const char *std_sz) {
  char *new_sz = new char[strlen(sz) + strlen(std_sz) + 1];
  strcpy(new_sz, sz);
  strcat(new_sz, std_sz);
  delete[] sz;
  sz = new_sz;
  return *this;
}

StdString operator+(const char *_sz, const StdString &std_sz) {
  StdString temp(_sz);
  temp += std_sz;
  return temp;
}

std::istream &operator>>(std::istream &in, StdString &std_sz) {
  std::string _sz;
//  in >> _sz;
  std_sz = _sz.c_str();
  return in;
}

std::ostream &operator<<(std::ostream &out, const StdString &std_sz) {
  return out << std_sz.sz;
}
