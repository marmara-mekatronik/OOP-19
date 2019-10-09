İleti geçişi
Metodlara göre ileti geçişi (gönderme yapmak)
Gönderilecek ileti, bir metod çağrısı ile karşılaştığında, programın belirlediği metoda başvurur. Metodu çağıran kod, diğer fonksiyon çağrılarındakine benzer. Fakat sınıfların farklı metod çağrı şekilleri vardır.
Üç tip metod çağrısı vardır.
• Statik
• Sanal
• Dinamik

1. Statik metodlar
Metod tanımlarken başka türlü belirtmedikçe tüm metodlar statiktir. Statik metodlar, normal bir fonksiyon gibi çalışırlar. Derleyici, metodun tam adresini belirler ve derleme zamanında metoda bağlantı sağlar.
Statik metodların temel avantajı, bu metodlara çok hızlı gönderme yapılabilmesidir. Çünkü derleyici metodun tam adresini belirler ve doğrudan bağlantı sağlar. Sanal ve dinamik metodlar ise tam tersi olarak, çalışma zamanında metodun adresine bakarak, daha fazla zaman gerektiren, doğrudan olmayan bağlantı kullanırlar.

2. Sanal Metodlar
Virtual metodlar, static metodlara göre daha karmaşık ve daha esnek gönderme mekanizmasına sahiptir. Virtual metodların adresleri derleme zamanında tanımlanmaz; bunun yerine, metodun tanımlandığı nesne adresi çalışma zamanında arar.

3. Dinamik Metodlar
Dinamik metodlar, biraz farklı gönderme mekanizması olan sanal
metodlardır. Nesnelerin tükettiği hafızanın miktarını düşürebilirler. Dinamik Metoda gönderme yapmak, bilinen virtual
metodlara gönderme yapmaktan oldukça daha yavaştır.