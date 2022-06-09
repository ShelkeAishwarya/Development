//Factorial

#include<iostream>
using namespace std;

class Number
{
    private:    //charateristics
    int iNo;

    public:
        void Accept()    //Setter
        {
        cout<<"Enter number \n";
        cin>>this->iNo;
        }

        void Display()    //Getter
        {
            cout<<"Value is :" <<this->iNo<<endl;
        }

        int Factorial()
    {
        int iFact= 1;
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
        {
        // iFact = iCnt * iFact;
            iFact *= iCnt;
        }
        return iFact;
}
};

int main()
{
    Number nobj;
    int iRet = 0;

    nobj.Accept();
    nobj.Display();
    
    //cout<<nobj.iNo;

    iRet = nobj.Factorial();

    cout<<"Factorial is :"<<iRet<<endl;

    return 0;
}