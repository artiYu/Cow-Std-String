<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
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
<<<<<<< HEAD
=======
=======
#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include "StdString.h"
#include <string>


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

const StdString& StdString::operator =(const StdString &std_sz) {
  if (this == &std_sz)
    return *this;

  delete[] sz;
  sz = new char[strlen(std_sz.sz) + 1];
  strcpy(sz, std_sz.sz);

  return *this;            
}

StdString::operator const char *() const {
  return sz;
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
}

char& StdString::operator[](int index) {
  return sz[index];
}

const char StdString::operator[](int index) const {
  return sz[index];
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
}

const StdString& StdString::operator+=(const char *std_sz) {
  char *new_sz = new char[strlen(sz) + strlen(std_sz) + 1];
  strcpy(new_sz, sz);
  strcat(new_sz, std_sz);
  delete[] sz;
<<<<<<< HEAD
=======
=======
}
  
const StdString& StdString::operator +=(const char *std_sz) {
  char *new_sz = new char [strlen(sz) + strlen(std_sz) + 1];
  strcpy(new_sz, sz);
  strcat(new_sz, std_sz);
  delete[] sz;
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
  sz = new_sz;
  return *this;
}

<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
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
<<<<<<< HEAD
=======
=======
const StdString operator +(const char *sz, const StdString &ns1) {
  StdString ns(sz);
  ns += ns1;
  return ns;
}

std::istream &operator >>(std::istream &in, StdString &std_sz) {
  std::string _sz;
  in >> _sz;
  std_sz = _sz.c_str();
  return in;
}

std::ostream &operator <<(std::ostream &out, const StdString &std_sz) {
  return out << std_sz.sz;
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
}
