#include <iostream>
#include <string>

bool radi=false;
std::string status="neaktivan";

enum Komande {
    Aktiviraj,
     Deaktiviraj,
      Nalijevo,
       Nadesno,
        Idi,
            Kraj
};

enum Smjer {
    Nalijevo,
     Nadesno
     };
enum Pravci {
   Sjever,
     Sjeveroistok,
      Istok,
       Jugoistok,
        Jug,
         Jugozapad,
          Zapad,
          Sjeverozapad
          };
enum class KodoviGresaka {
    PogresnaKomanda,
     NedostajeParametar,
      SuvisanParametar,
       NeispravanParametar
       };*/

void AktivirajRobota(){
radi=true;
status="aktivan";

}

void DeaktivirajRobota(){
radi=false;
status="neaktivan";
}

void Rotiraj(Pravci &orijentacija, Smjer smjer){
switch (orijentacija)
{
    case Istok :
        if (smjer==Nadesno){
            orijentacija=Jugoistok;
        }
        else if(smjer==Nalijevo){
            orijentacija=Sjeveroistok;

        }
        break;

    case Zapad :
         if (smjer==Nadesno){
            orijentacija=Sjeverozapad;
        }
        else if(smjer==Nalijevo){
            orijentacija=Jugozapad;

        }
         break;


    case Sjever :
         if (smjer==Nadesno){
            orijentacija=Sjeveroistok;
        }
        else if(smjer==Nalijevo){
            orijentacija=Sjeverozapad;

        }
         break;
    case Jug :
         if (smjer==Nadesno){
            orijentacija=Jugozapad;
        }
        else if(smjer==Nalijevo){
            orijentacija=Jugoistok;

        }
         break;

    case Sjeveroistok :
         if (smjer==Nadesno){
            orijentacija=Istok;
        }
        else if(smjer==Nalijevo){
            orijentacija=Sjever;

        }
         break;
    case Sjeverozapad :
        if (smjer==Nadesno){
            orijentacija=Sjever;
        }
        else if(smjer==Nalijevo){
            orijentacija=Zapad;

        } break;
    case Jugoistok :
         if (smjer==Nadesno){
            orijentacija=Jug;
        }
        else if(smjer==Nalijevo){
            orijentacija=Istok;

        }
         break;
    case Jugozapad :
         if (smjer==Nadesno){
            orijentacija=Zapad;
        }
        else if(smjer==Nalijevo){
            orijentacija=Jug;

        }
         break;
}

}



void Idi(int &x, int &y, Pravci orijentacija, int korak)


void IspisiPoziciju(int x, int y,Pravci pravac){
std::cout<<"Robot je "<<status<<", nalazi se na poziciji ";
std::cout<<"("<<x<<","<<y <<") i gleda na ";
switch (pravac)
{
    case Istok : std::cout<<"Istok"<<std::endl; break;
    case Zapad : std::cout<<"Zapad"<<std::endl; break;
    case Sjever : std::cout<<"Sjever"<<std::endl; break;
    case Jug : std::cout<<"Jug"<<std::endl; break;

    case Sjeveroistok : std::cout<<"Sjeveroistok"<<std::endl; break;
    case Sjeverozapad : std::cout<<"Sjeverozapad"<<std::endl; break;
    case Jugoistok : std::cout<<"Jugoistok"<<std::endl; break;
    case Jugozapad : std::cout<<"Jugozapad"<<std::endl; break;
}

}


//void PrijaviGresku(KodoviGresaka kod_greske)


void IzvrsiKomandu(Komande komanda, int parametar, int &x, int &y, Pravci &orijentacija){

  switch (komanda) {
            case A:
                if (komanda == "A+") {
                        AktivirajRobota();
                        komanda==Aktiviraj;
                        IspisiPoziciju(pozx,pozy,pravac);
                }
                else if (komanda == "A-") {
                       DeaktivirajRobota();
                      IspisiPoziciju(pozx,pozy,pravac);
                }
                else {
                    std::cout << "Nerazumljiva komanda !" << std::endl;
                }
                break;

            case L:
                smjer=Nalijevo;
                Rotiraj(pravac, smjer);
                break;
            case D:
                smjer=Nadesno;
                Rotiraj(pravac, smjer);
                break;


            case 'I':
                std::cout << "Komanda I izvršena." << std::endl;
                break;
            case 'K':
                if (zadnja_komanda_bila_k) {
                    std::cout << "Zadan je suvisan parametar nakon komande !" << std::endl;
                }
                else {
                    std::cout << "Komanda K izvršena." << std::endl;
                    zadnja_komanda_bila_k = true;
                }
                break;
            default:
                std::cout << "Nerazumljiva komanda !" << std::endl;
                break;
        }

        if (komanda == "K") {
            kraj = true;
        }
    }
}


bool UnosKomande(Komande &komanda, int &parametar /*KodoviGresaka &kodgreske*/){


if
return true;
}




int main()
{
    char unos;
    int parametar=0;
    bool kraj = false;
    bool zadnja_komanda_bila_k = false;
    int pozx=0;
    int pozy=0;
    Pravci pravac=Zapad;
    Smjer smjer=Nalijevo;
     bool istina=true;



    while (!istina) {
        std::cout << "Unesite komandu (A+, A-, L, D, I, K): ";
        std::cin >> unos;
        std::cin>> parametar;
        istina=UnosKomande(unos,parametar);

    return 0;
}
