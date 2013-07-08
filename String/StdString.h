#pragma once
#include <iostream>

class StdString : public String {       

public:
  StdString(const char *std_sz = "");
  StdString(const StdString &std_sz);
  ~StdString();
<<<<<<< HEAD
  const StdString& operator =(const StdString &std_sz);
=======
  const StdString& operator =(const StdString &std_sz);

<<<<<<< HEAD
class StdString : public String {

public:
  StdString(const char *std_sz = "");
  StdString(const StdString &std_sz);
  ~StdString();
  const StdString& operator=(const StdString &std_sz);
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201

  friend StdString operator+(const char *, const StdString &std_sz);
  const StdString& operator+=(const char *std_sz);
  operator const char*() const;
  operator StdString*() const;
  char& operator[](int index);
  const char operator[](int index) const;

  friend std::istream& operator>>(std::istream &in, StdString &std_sz);
  friend std::ostream& operator<<(std::ostream &out, const StdString &std_sz);
<<<<<<< HEAD
=======
=======
  const StdString& operator +=(const char *std_sz);
  friend const StdString operator +(const char *sz, const StdString &std_sz);

  operator const char*() const;
  operator StdString*() const;
  char& operator[](int index);
  const char operator[](int index) const;

  friend std::istream& operator >>(std::istream &in, StdString &std_sz);
  friend std::ostream& operator <<(std::ostream &out, const StdString &std_sz);
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201

private:
  char *sz;
};
