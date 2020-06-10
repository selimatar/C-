#include <iostream>
#include <stdio.h>
#include <string.h>

//Bir stringde kelime ve karekter sayisini gosterecek class ornegi

using namespace std;

class uzunlukSinif {
    private:
        string str="selim atar";
    public:

        void kelimeSayisi(){
            int kelime = 0;
            int i=0;
            while (str[i] != '\0'){
                if(str[i] == ' '){
                    kelime++;
                }

                i++;
            }
            cout<<"Kelime Sayisi:"<<kelime+1<<endl;;
        };
        
        void KarakterSayisi(){
            cout<<"Karakter Sayisi:"<<str.length()<<endl;
        };
};

int main(){

    uzunlukSinif s;
    s.kelimeSayisi();
    s.KarakterSayisi();

}
