#include "String.h"
#include "CWString.h"
#include "StdString.h"
#include <cstring>
#include <typeinfo>

String::~String() {
  return;
}

String* String::create(int type, const char *sz) {
<<<<<<< HEAD
  switch(type) {
=======
  switch (type) {
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
    case std_sz:
      return new StdString(sz);
    case cow:
      return new CWString(sz);
  }
}

<<<<<<< HEAD
bool String::operator==(String &str_sz) const {
  return !strcmp(*this, str_sz) ? true : false;
}

bool String::operator<(String &str_sz) const {
  return strcmp(*this, str_sz) < 0 ? true : false;
}

bool String::operator>(String &str_sz) const {
  return strcmp(*this, str_sz) > 0 ? true : false;
}

bool String::operator<=(String &str_sz) const {
  return (strcmp(*this, str_sz) <= 0) ? true : false;
}

bool String::operator>=(String &str_sz) const {
=======
bool String::operator ==(String &str_sz) const {
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

bool String::operator >=(String &str_sz) const {
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
  return (strcmp(*this, str_sz) >= 0) ? true : false;
}
