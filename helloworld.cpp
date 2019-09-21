#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
"/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1",
"/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include"
           
"/Library/Developer/CommandLineTools/usr/include/c++",
"/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include"
*/

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}