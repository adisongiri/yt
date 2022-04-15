#include <iostream>

using namespace std;
class str{
    private:
    string first;
    public:
    void set(){
        cout<<"enter a string: ";
        getline(cin,first);
    }
    void operator + (const str &a ){
        first=first+a.first;
        cout<<first;
    }
};

int main()
{
    str a,b;
    a.set();
    b.set();
    a+b;

    return 0;
}

