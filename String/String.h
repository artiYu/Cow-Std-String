class String {
public:
  enum type {std_sz, cow};

  virtual ~String();
  static String* create (int type, char *sz = "");

  virtual operator const char * () const = 0;

  virtual bool operator == (String &str_sz) const;
  virtual bool operator < (String &str_sz) const;
  virtual bool operator > (String &str_sz) const;
  virtual bool operator <= (String &str_sz) const;
  virtual bool operator >= (String &str_sz) const;
};
