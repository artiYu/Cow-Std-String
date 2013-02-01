#pragma once
#include <iostream>

class StdString : public String {       

public:
	StdString (const char *std_sz = "");
	StdString (const StdString &std_sz);
	virtual ~StdString ();
	const StdString& operator = (const StdString &std_sz);

	virtual void operator += (const char *sz);
	friend StdString operator + (const char *, const StdString &std_sz);

	virtual char& operator[] (int index);
  virtual const char operator [] (int index) const;
	virtual operator const char* () const;
	operator StdString* () const;

	friend std::istream& operator >> (std::istream &in, StdString &std_sz);
	friend std::ostream& operator << (std::ostream &out, const StdString &std_sz);

private:
	//char *sz;
};



