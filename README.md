# Blockchain
Maišos funkcijos metu atliekami žingsniai: <br>
1. Patikrinama ar gautas input'as jau egzistuoja Hash'ų Map'e. (unordered map)
2. Jei egzistuoja - gražinamas to input'o hashas.
3. Jei neegzistuoja - kuriamias hashas.<br>
   3.1 Paleidžiamas for ciklas, kurio metu generuojami 64 skaičiai nuo 0 iki 15.<br>
   3.2 Gauti skaičiai verčiami į šešioliktainę hex sistemą.<br>
   3.3 64 simbolių hashas iš stringstream paverčiamas į string.<br>
   3.4 Hash'as įrašomas į HashMap. (input - key, hash - value).<br>
   3.5 stringstream temp yra išvalomas naujam naudojimui.<br>
   3.6 Kviečiama funkcija, kuri įrašo naujai sukurtą hash'ą į data.txt failą, kuriame laikomi visi input'ai ir jų hash'ai.<br>
  
