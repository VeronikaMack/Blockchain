#include "mylib.h"
using namespace std;

int main()
{
   std::random_device rd;
   std::mt19937 mt(rd());
   ofstream fr("tekstas12.txt");
   int c;
   stringstream temp;
   string temp2;
   std::uniform_int_distribution<int> dist(0, 15);
   //pirma iteracija
   
   for(int j = 0; j<25000; j++)
   {
    for(int x = 0; x<2; x++)
    {
     for(int i =0; i<10; i++)
    {
        c = dist(mt);
        temp <<std::hex<<c;
        temp2 = temp.str();
        fr<<temp2;
        temp.str("");
        temp.clear();
        
    }
    fr<<" ";
    }
    fr<<endl;
   }
   
   //antra iteracija
   
      for(int j = 0; j<25000; j++)
   {
    for(int x = 0; x<2; x++)
    {
     for(int i =0; i<100; i++)
    {
        c = dist(mt);
        temp <<std::hex<<c;
        temp2 = temp.str();
        fr<<temp2;
        temp.str("");
        temp.clear();
        
    }
    fr<<" ";
    }
    fr<<endl;
   }
   
   
   //trecia iteracija
   for(int j = 0; j<25000; j++)
   {
    for(int x = 0; x<2; x++)
    {
     for(int i =0; i<500; i++)
    {
        c = dist(mt);
        temp <<std::hex<<c;
        temp2 = temp.str();
        fr<<temp2;
        temp.str("");
        temp.clear();
        
    }
    fr<<" ";
    }
    fr<<endl;
   }
   
   
   //ketvirta iteracija
      for(int j = 0; j<25000; j++)
   {
    for(int x = 0; x<2; x++)
    {
     for(int i =0; i<1000; i++)
    {
        c = dist(mt);
        temp <<std::hex<<c;
        temp2 = temp.str();
        fr<<temp2;
        temp.str("");
        temp.clear();
        
    }
    fr<<" ";
    }
    fr<<endl;
   }
   
    fr.close();


    return 0;
}