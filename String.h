class String
{
public:
    String();
    String(const char* p);
    String(const String&);
    
    const String& operator=(const String&);
    String(String&&);
    String& operator=(String&&);

    ~String();
    
private:
    char* ptr=nullptr;

};
