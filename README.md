# Blockchain
<strong>Antroje versijoje buvo pakeista maišos funkcija, nes pirmoje versijoje ji nebuvo deterministinė</strong><br>
Maišos funkcijos metu atliekami žingsniai: <br>
1. Sukuriamas char tipo masyvas, kuriame saugomos reikšmės nuo 0 iki f atitinkančios šešioliktainio skaičiaus simbolius.<br>
2. Apibrėžiami kiti kintamieji: stringstream hashas - saugo galutinį hash'ą, uint32_t sum - saugo visų input'o simbolių skaitinių reikšmių sumą ir int b)<br>
3. Vykdomas ciklas, kuris iteruoja per kiekvieną input'o simbolį:<br>
   3.1 Simbolis paverčiamas į jo unicode skaitinę reikšmę.<br>
   3.2 Gautas skaičius paverčiamas į jo bitset<8> reikšmę.<br>
   3.3 Gauta bit reikšmė perduodama į funkciją Bitai2, kuri gražina apverstą bit reikšmę.<br>
   3.4 Gauta bit reikšmė paverčiama į savo int tipo reikšmę.<br>
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
<img width="361" alt="image" src="https://github.com/VeronikaMack/Blockchain/assets/117922006/4777c00a-f1c4-42f5-8b93-61112c1d9e0f"><br>
7. Naudojant 4 failus, kuriuos sudaro 25,000 eilučių 10/100/500/1000 simbolių ilgio porų nebuvo rasta vienodų hash'ų<br>
<br>
LAVINOS EFEKTO TESTAVIMAS:<br>
10 simbolių ir 2000 eilučių:<br>
<br>
maksimalus skirtingumas HEX lygmenyje: 78%<br>
minimalus skirtingumas HEX lygmenyje: 100%<br>
vidurkinis skirtingumas HEX lygmenyje: 93.8%<br>
<br>
maksimalus skirtingumas BIT lygmenyje: 32%<br>
minimalus skirtingumas BIT lygmenyje: 52%<br>
vidurkinis skirtingumas BIT lygmenyje: 42.5%<br>
<br>
100 simbolių ir 2000 eilučių:<br>
<br>
maksimalus skirtingumas HEX lygmenyje: 81%<br>
minimalus skirtingumas HEX lygmenyje: 100%<br>
vidurkinis skirtingumas HEX lygmenyje: 93.7%<br>
<br>
maksimalus skirtingumas BIT lygmenyje: 32%<br>
minimalus skirtingumas BIT lygmenyje: 56%<br>
vidurkinis skirtingumas BIT lygmenyje: 42.6%<br>
<br>
500 simbolių ir 2000 eilučių:<br>
<br>
maksimalus skirtingumas HEX lygmenyje: 81%<br>
minimalus skirtingumas HEX lygmenyje: 100%<br>
vidurkinis skirtingumas HEX lygmenyje: 93.6%<br>
<br>
maksimalus skirtingumas BIT lygmenyje: 31%<br>
minimalus skirtingumas BIT lygmenyje: 54%<br>
vidurkinis skirtingumas BIT lygmenyje: 42.5%<br>
<br>
1000 simbolių ir 2000 eilučių:<br>
<br>
maksimalus skirtingumas HEX lygmenyje: 79%<br>
minimalus skirtingumas HEX lygmenyje: 100%<br>
vidurkinis skirtingumas HEX lygmenyje: 93.7%<br>
<br>
maksimalus skirtingumas BIT lygmenyje: 32%<br>
minimalus skirtingumas BIT lygmenyje: 52%<br>
vidurkinis skirtingumas BIT lygmenyje: 42.6%<br>
<br>


