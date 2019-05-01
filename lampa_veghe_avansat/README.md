# Lampa de veghe avansat

In acest proiect vom modifica programul "lampda de veghe" in astfel incat sa setam luminiozitatea led-ului direct proportional cu cantitatea de lumina receptionata de [senzorul de luminia brick](https://www.robofun.ro/senzor-lumina)

In acest program vom folosi functia [map](https://www.arduino.cc/reference/en/language/functions/math/map/) din biblioteca standard Arduino.
Aceasta functie  transforma un numar dintr-un interval in alt numar din alt interval.

Vom transforma valoarea pe care o intoarce senzorul de lumina din intervalul 0-1023 in intervalul pe care il accepta ledul 255-0. Observati ca intervalul ledului este descrescator. Facem acest lucru pentru ca ne dorim ca ledul sa se aprinda cand nu este lumina si sa se stinga cand este lumina. Acest exemplu functioneaza cel mai bine cand folositi o lanterna ca sursa de lumina.

