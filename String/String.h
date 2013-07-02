class String {
public:
  enum type {std_sz, cow};

  virtual ~String();
  static String* create (int type, char *sz = "");

  String (const char *_sz = "");
  String (const String &str_sz);

  virtual operator const char * () const = 0;
  
  virtual char& operator [] (int index);
  virtual const char operator [] (int index) const;

  virtual String& operator += (const char *_sz);
  
  virtual bool operator == (String &str_sz) const;
  virtual bool operator < (String &str_sz) const;
  virtual bool operator > (String &str_sz) const;
  virtual bool operator <= (String &str_sz) const;
  virtual bool operator >= (String &str_sz) const;

protected:
  char *sz;
};
