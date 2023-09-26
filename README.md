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

<br>
<strong>Testavimas</strong><br>
1. vieno, tačiau skirtingo simbolio failai generuoja tokio pačio ilgio, bet skirtingus hash'us<br>
2. 2 failai, sudaryti iš >1000 skirtingų simbolių generuoja skirtingus, bet tokio pačio ilgio hash'us<br>
3. 2 failai, sudaryti iš >1000 simbolių, kurie skiriasi vienas nuo kito tik vienu simboliu generuoja skirtingus, bet tokio pačio ilgio hash'us<br>
4. tuščias failas generuoja hash'ą<br>
5. tas pats input'as generuoja tą patį hashą<br>
6.<br>
<img width="361" alt="image" src="https://github.com/VeronikaMack/Blockchain/assets/117922006/4777c00a-f1c4-42f5-8b93-61112c1d9e0f">



