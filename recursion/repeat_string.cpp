#include <iostream>
using namespace std;

void repeat(string s, int a) {

    if (a == 0)
        return;

    cout << s;
    repeat(s, a-1);



}

int main()
{
    repeat("hello", 5);
}
