#include "String.h"
#include "CWString.h"
#include "StdString.h"
#include <cstring>


String::~String() {
  return;
}

String* String::create (int type, char *sz) {
  switch (type) {
    case std_sz:
      return new StdString (sz);
    case cow:
      return new CWString (sz);
  }
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
