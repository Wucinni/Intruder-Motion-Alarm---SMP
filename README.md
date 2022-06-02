# Intruder-Motion-Alarm---SMP
Project for Microprocessor Systems (SMP)


# Scurta Descriere

In cadrul acestui proiect am dezvoltat un sistem cu alarma pentru detectarea intrusilor pe baza miscarii.
Aparatul este compus dintr-o placuta arduino Uno conectata la un modul bluetooth HC-05 pentru a face legatura cu aplicatia mobila pentru controlul sistemului. Detectarea miscarilor este realizata cu ajutorul unui senzor pasiv cu infrarosu HC-SR501, iar pentru atentionare, au fost amplasate doua LED-uri RGB si un buzzer pentru alarma sonora si luminoasa. Cum placuta Arduino este suficient de capabila sa le alimenteze, nu este nevoie de o sursa de energie separata.

![image](https://user-images.githubusercontent.com/57183275/171663054-e17c411b-3c0c-4cea-9659-a2779e9f2146.png)

![WhatsApp Image 2022-06-02 at 5 42 49 PM](https://user-images.githubusercontent.com/57183275/171656260-d595b5e4-7bc9-417b-b90f-6c50982910ef.jpeg)

# Aplicatie mobila

![WhatsApp Image 2022-06-02 at 6 21 25 PM](https://user-images.githubusercontent.com/57183275/171664162-04cf4c5c-0639-485b-8d6e-00d65e54e834.jpeg)

# Conectare Bluetooth

![WhatsApp Image 2022-06-02 at 6 21 25 PM (1)](https://user-images.githubusercontent.com/57183275/171664203-74c7d3bf-f7d5-4f2d-a149-65a7ab4d399b.jpeg)


# Functionalitate

Prin intermediul butoanelor din aplicatia mobila, sistemul poate fi armat sau dezarmat, avand un efect luminos corespunzator print intermediul ledurilor(verde - armat sau rosu - dezarmat).

In starea de armat, sistemul permite detectarea miscarii prin intermediul senzorului PIR. Daca un intrus este gasit, semnalul luminos va fi intermitent, iar alarma audio va alterna intre pornit / oprit la cateva secunde pentru a simula o alarma reala. Acest proces continua la nesfarsit pana ce alarma va fi pusa iarasi in modul de dezarmat.

Fisierul sursa a fot scris in C, iar aplicatia mobila a fost realizata prin programare grafica prin intermediul: http://ai2.appinventor.mit.edu/ .
