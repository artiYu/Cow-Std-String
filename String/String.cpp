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
<<<<<<< HEAD
  switch(type) {
=======
  switch (type) {
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
    case std_sz:
      return new StdString(sz);
    case cow:
      return new CWString(sz);
  }
}

<<<<<<< HEAD
bool String::operator==(String &str_sz) const {
=======
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
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
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

<<<<<<< HEAD
bool String::operator>=(String &str_sz) const {
=======
bool String::operator >=(String &str_sz) const {
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
  return (strcmp(*this, str_sz) >= 0) ? true : false;
}
