#include "String.h"
#include "CWString.h"
#include "StdString.h"


String::~String() {
  return;
}

String* String::create (int type, char *sz) {
  switch (type) {
    case type::std_sz:
      return new StdString (sz);
    case type::cow:
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
