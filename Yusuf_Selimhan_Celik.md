
# Ýliþki

-  Nesne Yönelimli Programlama (Object Orientited Programming - OOP ) dillerinin en büyük avantajlarýndan birisi de yazdýðýmýz kodu tekrar kullanabilme özelliðidir. Bu yeniden kullanýlabilirlik, sýnýflar arasýndaki iliþkiden dolayý mümkündür.
-   Nesneye yönelik programlama genellikle 4 tür iliþkiyi destekler: kalýtým, iliþkilendirme, kompozisyon ve toplama. Bütün bu iliþkiler "Is-A" , "Has-A" ve "Part of " iliþkisine dayanmaktadýr.

## Kalýtým :


- Kalýtým “IS-A” iliþki türüdür. “IS-A” iliþkisi tamamen Sýnýf Kalýtýmý veya Arayüz Kalýtýmý þeklinde olabilen  iki tür mirasa dayanmaktadýr. Kalýtým, var olan sýnýf kodunu kullanarak yeni bir sýnýf yarattýðýmýz bir ebeveyn-çocuk iliþkisidir. Bu sadece “A’nýn türü B” demek gibi bir þey. 
 Örneðin “Elma bir meyvedir”, “Ferrari bir arabadýr”.

 

 - Daha iyi anlaþýlmasý için gerçek bir dünya senaryosu ele alalým.

 - HOD bir kolej personelidir.

 - Tüm öðretmenler kolej personelidir.

 - HOD ve öðretmenler koleje girmek için kimlik kartýna sahiptir.

- HOD'un talimatýna göre çalýþan bir personeli var.

- HOD, dersi belirli bir zaman diliminde kapsayacak þekilde öðretmenin çalýþmalarýný üstlenme sorumluluðuna sahiptir.

Ýlk iki varsayýmý ele alalým: “HOD kolej personelidir” ve “Tüm öðretmenler kolej personelidir”. Bu varsayým için bir “Personel” üst sýnýfý oluþturabilir ve bu üst sýnýfýný “HOD” ve “Öðretmen” sýnýflarýnda miras alabiliriz.




## Kompozisyon :


- Basitçe kompozisyon, diðer nesnelere referans olan örnek deðiþkenlerinin kullanýlmasý anlamýna gelir. Kompozisyon iliþkisinde her iki varlýk da birbirine baðlýdýr; örneðin “motor arabanýn bir parçasýdýr”, “kalp vücudun bir parçasýdýr”.

-  Araba ve motor örneðini ele alalým. Motor arabanýn bir parçasýdýr ve her ikisi de birbirine baðlýdýr.


## Ýliþkilendirme :


- Ýliþkilendirme “Has-A” tipi bir iliþkidir. Ýliþkilendirme b/w adlý iki sýnýfý kullanarak iliþkilerini kurar. Ýliþkilendirme iliþkileri birebir, bire çok, çoka bir ve çoka çok olabilir. Örneðin, iki sýnýfýmýz olduðunu varsayalým, o zaman bu iki sýnýfýn her ikisi de birbirlerinin nesnesini bazý iþler için paylaþýrlarsa ve ayný zamanda birbirlerinin baðýmlýlýðý olmadan var olabilirlerse veya her ikisinin de kendi ömürleri varsa, "Has-A" iliþkisi olduðu söylenir.


## Toplama :


- Toplama, "has-a" iliþkisine dayanýr. Toplama özel bir iliþkilendirme þeklidir. Ýliþkilendirilmiþ olarak, herhangi bir sýnýf (varlýk) sahibi olarak çalýþmamakta, toplamda bir varlýk sahibi olarak çalýþmaktadýr. Birleþmede, her iki varlýk da bazý iþler için buluþuyor ve sonra ayrýlýyorlar. Toplama tek yönlü bir iliþkilendirmedir.

 
 “Öðrenci” ve “adres” örneklerini ele alalým. Her öðrencinin bir adresinin olmasý gerekir, böylece Öðrenci sýnýfý ve Adres sýnýfý “Has-A” türü bir iliþki olacaktýr, ancak bunun tersi doðru deðildir (her adresin bir öðrencinin içermesi gerekmez). Öyleyse Öðrenci, iþletme sahibi olarak çalýþýr. Bu bir toplama iliþkisi olacaktýr.