# Özelleştirme(specification)
 - Bilindigi üzere özelleştirme kavramı genellemenin tam tersidir. Oluşturulmuş yüksek hiyerarşi düzeyindeki sınıfların ayırt edici özelliklerini keşfederek mevcut sınıflardan özel sınıflar oluşturmaktır. Bu sınıf tanımı tanımladığı ortak özellik ve davranışlara sahip her nesneyi temsil edecektir. 
- Gerçek programlama uygulamalarında ortak özellik ve davranışları uyarlayan kodların en genel sınıf tanımlarında paketlendikten sonra bir daha yazılmalarını gerektirmez. Bu nedenle sınıf türetme nesneye yönelik programlamanın yeniden kod kullanımı (code reuse) prensibinin en iyi uygulama şeklidir.
- alttaki örnekte "Çalışan" adlı üst-sınıf tüm çalışanların ortak özelliklerini tanımıyor. Ücret alma şekillerine göre farklılaşan çalışan sınıflarının ortak özellikleri ise "AylıklıÇalışan" ve "SaatliÇalışan" alt sınıflarında tanımlanıyor.
ÖRNEK:
```mermaid
graph LR
A[Aylıklı çalışan]--> C((Çalışan))
B(Saatli çalışan) --> C(Çalışan)
