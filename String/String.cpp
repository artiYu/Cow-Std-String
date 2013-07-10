#include "String.h"
#include "CWString.h"
#include "StdString.h"
#include <cstring>
#include <typeinfo>

String::~String() {
  return;
}

String* String::create(int type, const char *sz) {
  switch(type) {
    case std_sz:
      return new StdString(sz);
    case cow:
      return new CWString(sz);
  }
}

String operator+(const String &ns1, const char *sz) {
  if(ns1.getClassType() == 0)
    CWString ns(sz);
  else if(ns1.getClassType() == 1)
    StdString ns(sz);
  ns += ns1;
  return ns1;
}

bool String::operator==(String &str_sz) const {
  return !strcmp(*this, str_sz) ? true : false;
}

bool String::operator <(String &str_sz) const {
  return strcmp(*this, str_sz) < 0 ? true : false;
}

bool String::operator >(String &str_sz) const {
  return strcmp(*this, str_sz) > 0 ? true : false;
}

bool String::operator <=(String &str_sz) const {
  return (strcmp(*this, str_sz) <= 0) ? true : false;
}

bool String::operator>=(String &str_sz) const {
  return (strcmp(*this, str_sz) >= 0) ? true : false;
}
