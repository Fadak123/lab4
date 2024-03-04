#include <iostream>
#include<string>
using namespace std;
int main()
{
    string arr;
    cout<<"enter name ";
    cin>>arr;
    for(int i=0;i<arr.length();i++){
        arr[i]=toupper(arr[i])

    }
    cout<<arr;
    return 0;
}