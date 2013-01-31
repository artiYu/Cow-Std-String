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
