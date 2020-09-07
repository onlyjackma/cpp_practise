#include <iostream>

using namespace std;

class HelloWorld
{
private:
    /* data */
public:
    HelloWorld(/* args */);
    ~HelloWorld();
};

HelloWorld::HelloWorld(/* args */)
{
    cout << "Hello CPP" << endl;

}

HelloWorld::~HelloWorld()
{
    cout << "Good Bye CPP" << endl;
}

HelloWorld *hw;
const int MAX_AGE = 90;


class Entry
{
    private:
        int m_X = 0, m_Y = 0;
        mutable int var_x;

    public:
        Entry();
        ~Entry();
        int getX() const {
            var_x = 33;
            return m_X;
        }
};

Entry::Entry()
{
    cout << "call init entry" << endl;   
}

Entry::~Entry()
{
    cout << "uinit entry" << endl;
}

void PrintEntry(const Entry &e)
{

    cout << "Entry x value is :" << e.getX() << endl;
    cout << "The new entry is :" << &e <<endl;
}

void PrintEntry2(Entry e)
{
    cout << "Entry x value is :" << e.getX() << endl;
    cout << "The new entry is :" << &e <<endl;
}

int main(int argc ,char *argv[])
{
    //hw = new HelloWorld();
    //int * const a = new int;
    //*a = 2;

    Entry e;
    cout << "The origin entry is :" << &e <<endl;

    PrintEntry(e);
    PrintEntry2(e);


    //cout << *a << endl;

    // cout << "I am running" << endl;
    // cout << "count of argc :" << argc << endl;
    // cout << "Program name:" << argv[0] << endl;
    // cout << "CPP standard:" << __cplusplus << endl;
    //delete hw;
    return 0;
}
