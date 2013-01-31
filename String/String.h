class String {
public:
  enum type {std_sz, cow};

  virtual ~String();
  static String* create (int type, char *sz = "");

  String (const char *_sz = "");
  String (const String &str_sz);
  virtual operator const char * () const = 0;
  
  char& operator [] (int index);
  virtual const char operator [] (int index) const = 0;
  virtual void operator += (const char *_sz)  = 0;

protected:
  char *sz;
};
