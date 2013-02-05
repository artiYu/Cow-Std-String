#include "String.h"
#include "CWString.h"
#include "StdString.h"

String::String (const char *_sz) {
  sz = new char[strlen(_sz) + 1];
  strcpy(sz, _sz);
}

String::String (const String &str_sz) {
  sz = new char[strlen(str_sz.sz) + 1];
  strcpy(sz, str_sz.sz);
}

String::~String() {
  return;
}

String* String::create (int type, char *sz) {
  switch (type) {
  case type::std_sz: return new StdString (sz);
  case type::cow: return new CWString (sz);
  }
}

char& String::operator[](int index) {
  return sz[index];
}

const char String::operator[](int index) const {
  return sz[index];
}

void String::operator += (const char *_sz) {
  char *new_sz = new char [strlen (sz) + strlen (_sz) + 1];
  strcpy (new_sz, sz);
  strcat (new_sz, _sz);
  delete[] sz;
  sz = new_sz;
}

bool String::operator == (String &str_sz) const {
  return !strcmp(*this, str_sz) ? true : false;
}

bool String::operator < (String &str_sz) const {
  return strcmp(*this, str_sz) < 0 ? true : false;
}

bool String::operator > (String &str_sz) const {
  return strcmp(*this, str_sz) > 0 ? true : false;
}

bool String::operator <= (String &str_sz) const {
  return (strcmp(*this, str_sz) <= 0) ? true : false;
}

bool String::operator >= (String &str_sz) const {
  return (strcmp(*this, str_sz) >= 0) ? true : false;
}