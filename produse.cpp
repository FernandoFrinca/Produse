#include<iostream>
#include <string.h>
#include<stdio.h>
#include<fstream>
using namespace std;
fstream f("info.txt",ios::in);
struct nod
{
  char denumire[100];
  char producator[100];
  char descriere[100];
  char capacitate[100];
  char calitate[100];
  int pret;
  int vandute;
  int stoc;
  nod *urm;
};
nod *p,*u,*c;
int i,n,z,x,min,max;
void citire()
{
    f>>n;
    c=new nod;
    f>>c->denumire;
    f>>c->producator;
    f>>c->descriere;
    f>>c->capacitate;
    f>>c->calitate;
    f>>c->pret;
    f>>c->vandute;
    f>>c->stoc;
    p=c;
    u=c;
    for(i=2;i<=n;i++)
    {
        c=new nod;
    f>>c->denumire;
    f>>c->producator;
    f>>c->descriere;
    f>>c->capacitate;
    f>>c->calitate;
    f>>c->pret;
    f>>c->vandute;
    f>>c->stoc;
    c->urm=0;
    u->urm=c;
    u=c;
    }
}
void afisare()
{
    c=p;
    while(c)
    {
        cout<<c->denumire<<endl;
        cout<<c->producator<<endl;
        cout<<c->descriere<<endl;
        cout<<c->capacitate<<endl;
        cout<<c->calitate<<endl;
        cout<<"Pret:"<<c->pret<<" lei"<<endl;
        cout<<"Vandute: "<<c->vandute<<" buc."<<endl;
        cout<<"Stoc: "<<c->stoc<<" buc."<<endl;
        c=c->urm;
        cout<<endl;
    }
}
void afisare2()
{
    nod *c=p;
  while(c)
  {
      cout<<c->denumire<<endl;
        cout<<c->producator<<endl;
    c=c->urm;
    cout<<endl;
  }
}
void afisare3()
{
    nod *c=p;
  while(c)
  {
       cout<<c->producator<<endl;
      cout<<c->denumire<<endl;
    c=c->urm;
    cout<<endl;
  }
}
void sortare1()
{
    int t=0,aux; char a[100];
    while(!t)
    {
        nod *c=p;
        t=1;
        while(c->urm)
        {
            if(strcmp(c->denumire,c->urm->denumire)>0)
            {t=0;
            strcpy(a,c->producator);
            strcpy(c->producator,c->urm->producator);
            strcpy(c->urm->producator,a);

            strcpy(a,c->denumire);
            strcpy(c->denumire,c->urm->denumire);
            strcpy(c->urm->denumire,a);
            }
            c=c->urm;
            }
        }
}
void sortare2()
{
    int t=0,aux; char a[100];
    while(!t)
    {
        nod *c=p;
        t=1;
        while(c->urm)
        {
            if(strcmp(c->producator,c->urm->producator)>0)
            {t=0;
            strcpy(a,c->producator);
            strcpy(c->producator,c->urm->producator);
            strcpy(c->urm->producator,a);

            strcpy(a,c->denumire);
            strcpy(c->denumire,c->urm->denumire);
            strcpy(c->urm->denumire,a);
            }
            c=c->urm;
            }
        }
}

void afisare6()
{
    c=p;
    while(c)
    {
        cout<<"Stocul este de: "<<c->stoc<<" buc."<<endl;
        cout<<c->denumire<<endl;
        c=c->urm;
        cout<<endl;
    }
}
void afisare7()
{
    c=p;
    while(c)
    {
        cout<<"Stocul este de: "<<c->stoc<<" buc."<<endl;
        cout<<c->producator<<endl;
        c=c->urm;
        cout<<endl;
    }
}
void scadere()
{
    c=p;
        c->stoc--;
        cout<<c->stoc;

}
void afisare4()
{
  nod *c=p;
  while(c)
  {
      cout<<"Pretul: "<<c->pret<<" lei"<<endl;
      cout<<c->producator<<endl;
    c=c->urm;
    cout<<endl;
  }
}
void afisare5()
{
  nod *c=p;
  while(c)
  {
      cout<<"Vandute: "<<c->vandute<<" buc."<<endl;
      cout<<c->producator<<endl;
    c=c->urm;
    cout<<endl;
  }
}
void sortare3()
{
    int t=0; long aux; char a[100];
    while(!t)
    {
        nod *c=p;
        t=1;
        while(c->urm)
        {
            if(c->pret>c->urm->pret)
            {
                t=0;
            strcpy(a,c->producator);
            strcpy(c->producator,c->urm->producator);
            strcpy(c->urm->producator,a);

            aux=c->pret;
            c->pret=c->urm->pret;
            c->urm->pret=aux;
            }
            c=c->urm;
        }
    }
}
void sortare4()
{
    int t=0; long aux; char a[100];
    while(!t)
    {
        nod *c=p;
        t=1;
        while(c->urm)
        {
            if(c->vandute>c->urm->vandute)
            {
                t=0;
            aux=c->vandute;
            c->vandute=c->urm->vandute;
            c->urm->vandute=aux;
            strcpy(a,c->producator);
            strcpy(c->producator,c->urm->producator);
            strcpy(c->urm->producator,a);
            }
            c=c->urm;
        }
    }
}
void sortare5()
{
    int t=0; long aux; char a[100];
    while(!t)
    {
        nod *c=p;
        t=1;
        while(c->urm)
        {
            if(c->stoc>c->urm->stoc)
            {
                t=0;
            aux=c->stoc;
            c->stoc=c->urm->stoc;
            c->urm->stoc=aux;
            strcpy(a,c->denumire);
            strcpy(c->denumire,c->urm->denumire);
            strcpy(c->urm->denumire,a);
            }
            c=c->urm;
        }
    }
}
void sortare6()
{
    int t=0; long aux; char a[100];
    while(!t)
    {
        nod *c=p;
        t=1;
        while(c->urm)
        {
            if(c->stoc<c->urm->stoc)
            {
                t=0;
            strcpy(a,c->producator);
            strcpy(c->producator,c->urm->producator);
            strcpy(c->urm->producator,a);
            aux=c->stoc;
            c->stoc=c->urm->stoc;
            c->urm->stoc=aux;
            }
            c=c->urm;
        }
    }
}
void maxim()
{
    int max=0;
    nod *c=p;
    max=c->pret;
    while(c)
    {
        if(c->pret>max)
        max=c->pret;
        c=c->urm;
    }
    cout<<"Pretul maxim este: "<<max<<" lei";
  }
void minim()
{
    int min=0;
    c=p;
    min=c->pret;
    while(c)
    {
        if(c->pret<min)
            min=c->pret;
        c=c->urm;
    }
    cout<<"Pretul minim este: "<<min<<" lei"<<endl;
}
int main()
{
    citire();
 cout<<"*********************************************************"<<endl;
 cout<<"*                                                       *"<<endl;
 cout<<"*                    MENIUL PROGRAMULUI                 *"<<endl;
 cout<<"*                                                       *"<<endl;
 cout<<"* 1.PREZENTAREA PRODUSELOR                              *"<<endl;
 cout<<"* 2.SORTAREA PRODUSELOR DUPA NUME SI PRODUCATOR         *"<<endl;
 cout<<"* 3.SORTAREA PRETURILOR + MAXIMUL SI MINIMUL PRETURILOR *"<<endl;
 cout<<"* 4.CELE MAI VANDUTE PRODUSE                            *"<<endl;
 cout<<"* 5.SORTAREA PRODUSELOR DUPA STOCUL LOR                 *"<<endl;
 cout<<"* 6.END                                                 *"<<endl;
 cout<<"*                                                       *"<<endl;
 cout<<"*********************************************************"<<endl;
 cin>>z;
 while(z!=6)
 {
     switch(z)
     {
         case 1:
         {
                afisare();
         }break;
         case 2:
         {
             cout<<"1.Sortarea denumirii produsului"<<endl;
             cout<<"2.Sortarea producatorului produsului"<<endl;
             cout<<"3.Pentru revenire la meniul anterior"<<endl;
             cout<<"Introduceti cazul dorit:"<<endl;
             cin>>x;
             while(x!=3)
             {
                 switch(x)
                 {
                     case 1:
                     {
                         sortare1();
                         afisare2();
                     }break;
                     case 2:
                     {
                         sortare2();
                         afisare3();

                     }break;
                     default:cout<<"Trebuia sa introduceti 1,2 sau 3"<<endl;
                 }
                 cout<<endl;
                 cout<<"1.Sortarea denumirii produsului"<<endl;
                 cout<<"2.Sortarea producatorului produsului"<<endl;
                 cout<<"3.Pentru revenire la meniul anterior"<<endl;
                 cout<<"Introduceti cazul dorit:"<<endl;
                 cin>>x;

             }
         }break;
         case 3:
         {
             sortare3();
             afisare4();
             maxim();
             cout<<endl;
             minim();
         }break;
         case 4:
         {
             sortare4();
             afisare5();
         }break;
         case 5:
         {
             cout<<"1.Sortarea crescatoare a stocului"<<endl;
             cout<<"2.Sortarea descrescatoare a stocului"<<endl;
             cout<<"3.Pentru revenire la meniul anterior"<<endl;
             cout<<"Introduceti cazul dorit:"<<endl;
             cin>>x;
             while(x!=3)
             {
                 switch(x)
                 {
                     case 1:
                     {
                         sortare5();
                         afisare6();
                     }break;
                     case 2:
                     {
                         sortare6();
                         afisare7();

                     }break;
                     default:cout<<"Trebuia sa introduceti 1,2 sau 3"<<endl;
                 }
                 cout<<endl;
                 cout<<"1.Sortarea crescatoare a stocului"<<endl;
                 cout<<"2.Sortarea descrescatoare a stocului"<<endl;
                 cout<<"3.Pentru revenire la meniul anterior"<<endl;
                 cout<<"Introduceti cazul dorit:"<<endl;
                 cin>>x;
             }
         }break;
     default:cout<<"Introduceti 1,2,3,4,5 sau 6! "<<endl;
     }
 cout<<endl;
 cout<<"*********************************************************"<<endl;
 cout<<"*                                                       *"<<endl;
 cout<<"*                    MENIUL PROGRAMULUI                 *"<<endl;
 cout<<"*                                                       *"<<endl;
 cout<<"* 1.PREZENTAREA PRODUSELOR                              *"<<endl;
 cout<<"* 2.SORTAREA PRODUSELOR DUPA NUME SI PRODUCATOR         *"<<endl;
 cout<<"* 3.SORTAREA PRETURILOR + MAXIMUL SI MINIMUL PRETURILOR *"<<endl;
 cout<<"* 4.CELE MAI VANDUTE PRODUSE                            *"<<endl;
 cout<<"* 5.SORTAREA PRODUSELOR DUPA STOCUL LOR                 *"<<endl;
 cout<<"* 6.END                                                 *"<<endl;
 cout<<"*                                                       *"<<endl;
 cout<<"*********************************************************"<<endl;
 cout<<"Introduceti cazul dorit:"<<endl;
 cin>>z;
 }
   return 0;
}
