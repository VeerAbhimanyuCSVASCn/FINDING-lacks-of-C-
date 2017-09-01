#include<iostream>
#include<fstream>

using namespace std;

class a
{
    int b;
public:
    a(int t)
    {
        b=t;
    }
};

struct b
{
    int a;
};

int main()
{
    fstream w;
    a c(10);
    b d;
    w.open("text.txt",ios::out);
    w.write((char*)&c,sizeof(c));
    w.close();
    w.open("text.txt",ios::in);
    w.read((char*)&d,sizeof(d));
    w.close();

    cout<<d.a;

    return 0;
}
