#include<iostream>
using namespace std;

int CountCapital(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')  
        {
            iCnt++;
        }
        str++;
    }

        return iCnt;
    }

int main()
{
    char Arr[20];
    int iRet=0;

    cout<<"Enter string "<<endl;
    cin.getline(Arr,20);

    iRet = CountCapital(Arr);
    cout<<"String contain white spaces are : "<<iRet<<endl;

    return 0;
}