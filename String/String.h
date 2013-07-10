class String {
public:
  enum type{std_sz, cow};

  virtual ~String();
  static String* create(int type, const char *sz = "");

  virtual const int getClassType() const = 0;

  virtual const String& operator+=(const char *sz) = 0;

  friend String operator+(const String &ns, const char *sz);
  
  virtual char& operator[](int index) = 0;
  virtual const char operator[](int index) const = 0;
  virtual operator const char*() const = 0;

  virtual bool operator==(String &str_sz) const;
  virtual bool operator<(String &str_sz) const;
  virtual bool operator>(String &str_sz) const;
  virtual bool operator<=(String &str_sz) const;

private:
  virtual bool operator>=(String &str_sz) const;
};
