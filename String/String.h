class String {
public:
  enum type {std_sz, cow};

  virtual ~String();
  static String* create (int type, char *sz = "");

  String (const char *_sz = "");
  String (const String &str_sz);
  virtual operator const char * () const = 0;
  
  virtual char& operator [] (int index) = 0;
  virtual const char operator [] (int index) const = 0;
  virtual void operator += (const char *_sz)  = 0;

protected:
  char *sz;
};
