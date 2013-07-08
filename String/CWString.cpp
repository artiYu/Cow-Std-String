#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include "CWString.h"
#include <cstring>

CWString::CountReferences::CountReferences(const char *_sz) {
  sz = new char[strlen(_sz) + 1];
  strcpy(sz, _sz);
  count = 1;
}

CWString::CountReferences::~CountReferences() {
  delete[] sz;
}

CWString::CWString(const char* sz) {
  pCountRef = new CountReferences(sz);
}

CWString::CWString(const CWString &ns) {
  pCountRef = ns.pCountRef;
  pCountRef->count++;
}

CWString::~CWString() {
<<<<<<< HEAD
  if(pCountRef->count == 1)
=======
<<<<<<< HEAD
  if(pCountRef->count == 1)
=======
  if (pCountRef->count == 1)
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
    delete pCountRef;
  else
    pCountRef->count--;
}

<<<<<<< HEAD
const CWString& CWString::operator=(const CWString& ns) {
  if(pCountRef == ns.pCountRef)
=======
<<<<<<< HEAD
const CWString& CWString::operator=(const CWString& ns) {
  if(pCountRef == ns.pCountRef)
=======
const CWString& CWString::operator =(const CWString& ns) {
  if (pCountRef == ns.pCountRef)
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
    return *this;

  if(pCountRef->count == 1)
    delete pCountRef;
  else
    pCountRef->count--;

  pCountRef = ns.pCountRef;
  pCountRef->count++;
  return *this;
}

char& CWString::operator[](int index) {
<<<<<<< HEAD
  if(pCountRef->count > 1) {
=======
<<<<<<< HEAD
  if(pCountRef->count > 1) {
=======
  if (pCountRef->count > 1) {
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
    CountReferences *new_ref = new CountReferences(pCountRef->sz);
    --pCountRef->count;
    pCountRef = new_ref;
  }
  return pCountRef->sz[index];
}

const char CWString::operator[](int index) const {
  return pCountRef->sz[index];
}

<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
CWString::operator const char*() const {
  return pCountRef->sz;
}

<<<<<<< HEAD
const CWString& CWString::operator +=(const char *_sz) {
    if (pCountRef->count > 1) {
=======
const CWString& CWString::operator+=(const char *_sz) {
    if(pCountRef->count > 1) {
=======
CWString::operator const char *() const {
  return pCountRef->sz;
}

const CWString& CWString::operator +=(const char *_sz) {
    if (pCountRef->count > 1) {
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
      CountReferences *new_ref = new CountReferences(pCountRef->sz);
      --pCountRef->count;
      pCountRef = new_ref;
    }
<<<<<<< HEAD
    char *new_sz = new char[strlen(pCountRef->sz) + strlen(_sz) + 1];
=======
<<<<<<< HEAD
    char *new_sz = new char[strlen(pCountRef->sz) + strlen(_sz) + 1];
=======
    char *new_sz = new char [strlen(pCountRef->sz) + strlen(_sz) + 1];
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
    strcpy(new_sz, pCountRef->sz);
    strcat(new_sz, _sz);
    delete[] pCountRef->sz;
    pCountRef->sz = new_sz;
    return *this;
}

<<<<<<< HEAD
CWString operator+(const char *sz, const CWString &ns1) {
=======
<<<<<<< HEAD
CWString operator+(const char *sz, const CWString &ns1) {
=======
const CWString operator +(const char *sz, const CWString &ns1) {
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
  CWString ns(sz);
  ns += ns1;
  return ns;
}

<<<<<<< HEAD
std::istream &operator>>(std::istream &in, CWString &ns) {
=======
<<<<<<< HEAD
std::istream &operator>>(std::istream &in, CWString &ns) {
=======
std::istream &operator >>(std::istream &in, CWString &ns) {
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
  std::string sz;
//  in >> sz;
  ns = sz.c_str();
  return in;
}

<<<<<<< HEAD
std::ostream &operator<<(std::ostream &out, const CWString &ns) {
=======
<<<<<<< HEAD
std::ostream &operator<<(std::ostream &out, const CWString &ns) {
=======
std::ostream &operator <<(std::ostream &out, const CWString &ns) {
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
  return out << ns.pCountRef->sz;
}
