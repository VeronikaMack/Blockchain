#include "mylib.h"
#include "funkcijos.h"

int main()
{
    char ats = ' ';
    while(ats!='r'&&ats!='R'&&ats!='f'&&ats!='F')
    {
        cout<<"Kokiu budu norite pateikti teksta?(r - ranka, f - is failo)"<<endl;
        cin>>ats;
    }
    if(ats=='r'||ats=='R')
    {
       pagrindine();
    }
    else if(ats=='f'||ats=='F')
    {
       fpagrindine();
    }
   
}
 
