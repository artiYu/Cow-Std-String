class String {
public:
  enum type{std_sz, cow};

  virtual ~String();
  static String* create(int type, const char *sz = "");

<<<<<<< HEAD
  virtual operator const char*() const = 0;

  virtual bool operator==(String &str_sz) const;
  virtual bool operator<(String &str_sz) const;
  virtual bool operator>(String &str_sz) const;
  virtual bool operator<=(String &str_sz) const;
  virtual bool operator>=(String &str_sz) const;
=======
  virtual char& operator[](int index) = 0;
  virtual const char operator[](int index) const = 0;
  virtual operator const char*() const = 0;

  virtual const String& operator +=(const char *sz) = 0;
  
  virtual bool operator ==(String &str_sz) const;
  virtual bool operator <(String &str_sz) const;
  virtual bool operator >(String &str_sz) const;
  virtual bool operator <=(String &str_sz) const;
  virtual bool operator >=(String &str_sz) const;

>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
};
