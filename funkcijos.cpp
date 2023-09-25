#include "mylib.h"
#include "funkcijos.h"
std::unordered_map<std::string, std::string> HashMap;


void IssaugotDuomenisIFaila(){
    std::ofstream file("data.txt");
    if (file.is_open()) {
        for (const auto& pair : HashMap) {
            file << pair.first << "\n ";
            file << pair.second << "\n";
        }
    }
    file.close();
}


void DuomenysIsFailo() {
    std::ifstream file("data.txt");
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::string key, value;
            key = line;
            if (std::getline(file, value)) {
                HashMap[key] = value;
            } else {
               
                std::cerr << "Error: Missing value for key '" << key << "'." << std::endl;
            }
        }
        file.close();
    } else {
        std::cerr << "Unable to open file." << std::endl;
    }
}



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
   string pora1, pora2, hash1, hash2;
   int count = 0;
   while(file>>pora1>>pora2)
   {
  hash1 = hash(pora1);
  hash2 = hash(pora2);
   if(hash1 == hash2)
   {
      count++;
   }
   }
   cout<<count<<endl;
   }
   catch(char zin[])
   {
    cout<<zin<<endl;
   }
   file.close();
   
}


   std::random_device rd;
   std::mt19937 mt(rd());

   
string hash(string& in)
{

    string input = in;
    auto tikrinimas = HashMap.find(input);
    if(tikrinimas!=HashMap.end())
    {
        cout<<"ieskau input"<<endl;
        return tikrinimas->second;
        
    }
    else
    {
        cout<<"neradau input"<<endl;
        string hashas;
    int size = 64, c;
    std::uniform_int_distribution<int> dist(0, 15);
    std::stringstream temp;
    
    for(int i =0; i<size; i++)
    {
        c = dist(mt);
        temp <<std::hex<<c;
    }
    hashas = temp.str();
    HashMap[input] = hashas;
    temp.str("");
    temp.clear();
    IssaugotDuomenisIFaila();
    return hashas;
    }


}