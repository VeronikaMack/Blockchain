#include "mylib.h"
#include "funkcijos.h"

void pagrindine()
{
    string input;
    cout<<"Iveskite hash'avimo input'a"<<endl;
    cin>>input;
    cout<<hash(input)<<endl;
}


void fpagrindine()
{
   string filename;
   cout<<"iveskite failo pavadinima is direktorijos: "<<endl;
   cin>>filename;
   std::ifstream file;
   char zinute[] = "Tokio failo nera";
   try
   {
    file.open(filename);
   if(!file)
   {
    throw zinute;
   }
   std::stringstream tekstas;
   tekstas<<file.rdbuf();
   string konvtekstas = tekstas.str();
   cout<<hash(konvtekstas)<<endl;
   }
   catch(char zin[])
   {
    cout<<zin<<endl;
   }
   file.close();
   
}

std::bitset<8> Bitai2(std::bitset<8>x)
{
    x.flip();
    return x;
}

string hash(const string& in)
{
   char hexas[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
   std::stringstream hashas;
   uint32_t sum = 0;
   int b;

   for(char x: in)
   {
   uint32_t a = static_cast<uint32_t>(x);//char i unicode representation uint32_t
   std::bitset<8> b = (a);
   Bitai2(b);//reverse bit value 
   int v = static_cast<int>(b.to_ulong());//bitset i int
   sum = (sum<<5)+sum + v;//sumuoju skaicius << - left shift bitus 5 pozicijom = padauginu suma is 32, pridedu suma ir pridedu skaiciu
   }
   for(int i = 0; i<64; i++)
   {
    sum = sum * 37;
    sum = sum * 7;
    sum = sum+7895;
    sum = sum/11;
    sum = sum/10;
    b = sum%16;//gauta liekana parenka kuri simboli paimt is hex masyvo
    hashas << hexas[b];
   
   }
    
    return hashas.str();
}


