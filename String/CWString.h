#pragma once
#include <iostream>

class CWString : public String {    
  class  CountReferences {                                
    public:
      CountReferences (const char *sz);
      virtual ~CountReferences ();
      int count;               
      char* sz;
  };     

  public:
    CWString (const char *str = "");
    CWString (const CWString &ns);
    ~CWString ();

    const CWString& operator = (const CWString &ns);

    const CWString& operator += (const char *sz);
    friend CWString operator + (const char *, const CWString &ns);
    
    char& operator[] (int index);
    operator const char* () const;
    operator CWString* () const;

    friend std::istream& operator >> (std::istream &in, CWString &ns);
    friend std::ostream& operator << (std::ostream &out, const CWString &ns);

  private:
    CountReferences* pCountRef;
};
