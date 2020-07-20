#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc ,char *argv[])
{
    vector<string> quote {"This", "is", "a", "cpp", "class"};
    vector<string> res;
    transform(begin(quote), end(quote), back_inserter(res),
        [](string &word){
            return " < " + word + " > ";
        }
    );

    for_each(begin(res),end(res),[](string & word){
        cout << word;
    });
    cout << endl;
}