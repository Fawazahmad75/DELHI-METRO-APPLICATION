#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
int i,no;
char line[30];
struct yellow_line
{
 int n;
 char station[30];

};
class metro
{
 char boarding[30];
 char drop[30];
	//change
   public:
// char station[5][20];

/* metro()
{
strcpy(station[1],"QUTAB MINAR");
strcpy(station[2],"SAKET");
strcpy(station[3],"MALVIYA NAGAR");
strcpy(station[4],"HAUZ KHAS");

}*/
void rapidl();
void magental();
void yellowl();
void violetl();
void bluel();
void fare();
void time();
void file();
void mroute();
void yroute();
void vroute();
void broute();
void rroute();

   void get()
   { cout<<"enter the boarding station";
     gets(boarding);
     cout<<"enter the drop destination";
     gets(drop);
     cout<<"enter metro line";  //change
   gets(line);
    }
}one;

 void metro::rroute()
{
      ifstream x("rapid.dat", ios::binary);
      x.seekg(0);
      yellow_line t;
      int start=0;
      int end=0;
      no=0;
      x.seekg(0);
      cout<<x.tellg();
      while(x.read((char *)&t,sizeof(t)))
      {
//  cout<<q.station<<endl;
//    cout<<q.station<<endl;
      if(strcmpi(t.station,boarding)==0)
      {
      start=1;}                  //this brackett should not be displaced.
 //      cout<<start<<" "<<end;
 //     cout<<"Boarding\n"; }
      if (start==1 && end==0)
      {
      no++;
       cout<<no<<"   "<<t.station<<endl;
      }
      if (strcmpi(t.station,drop)==0)
      break;
      }
  //    cout<<no<<"$$$";
      cout<<endl;
getch();

  }



 void metro::broute()
{
      ifstream x("blue.dat", ios::binary);
      x.seekg(0);
      yellow_line s;
      int start=0;
      int end=0;
      no=0;
      x.seekg(0);
      cout<<x.tellg();
      while(x.read((char *)&s,sizeof(s)))
      {
//  cout<<q.station<<endl;
//    cout<<q.station<<endl;
      if(strcmpi(s.station,boarding)==0)
      {
      start=1;}                  //this brackett should not be displaced.
 //      cout<<start<<" "<<end;
 //     cout<<"Boarding\n"; }
      if (start==1 && end==0)
      {
      no++;
       cout<<no<<"   "<<s.station<<endl;
      }
      if (strcmpi(s.station,drop)==0)
      break;
      }
  //    cout<<no<<"$$$";
      cout<<endl;
getch();

  }


 void metro::vroute()
{
      ifstream x("violet.dat", ios::binary);
      x.seekg(0);
      yellow_line r;
      int start=0;
      int end=0;
      no=0;
      x.seekg(0);
      cout<<x.tellg();
      while(x.read((char *)&r,sizeof(r)))
      {
//  cout<<q.station<<endl;
//    cout<<q.station<<endl;
      if(strcmpi(r.station,boarding)==0)
      {
      start=1;}                  //this brackett should not be displaced.
 //      cout<<start<<" "<<end;
 //     cout<<"Boarding\n"; }
      if (start==1 && end==0)
      {
      no++;
       cout<<no<<"   "<<r.station<<endl;
      }
      if (strcmpi(r.station,drop)==0)
      break;
      }
  //    cout<<no<<"$$$";
      cout<<endl;
getch();

  }



   void metro::mroute()
{
      ifstream x("magenta.dat", ios::binary);
      x.seekg(0);
      yellow_line q;
      int start=0;
      int end=0;
      no=0;
      x.seekg(0);
      cout<<x.tellg();
      while(x.read((char *)&q,sizeof(q)))
      {
//  cout<<q.station<<endl;
//    cout<<q.station<<endl;
      if(strcmpi(q.station,boarding)==0)
      {
      start=1;}                  //this brackett should not be displaced.
 //      cout<<start<<" "<<end;
 //     cout<<"Boarding\n"; }
      if (start==1 && end==0)
      {
      no++;
       cout<<no<<"   "<<q.station<<endl;
      }
      if (strcmpi(q.station,drop)==0)
      break;
      }
  //    cout<<no<<"$$$";
      cout<<endl;
getch();

  }
void metro::yroute()
{
      ifstream x("yellow.dat", ios::binary);
      x.seekg(0);
      yellow_line p;
      int start=0;
      int end=0;
      no=0;
      x.seekg(0);
      cout<<x.tellg();
      while(x.read((char *)&p,sizeof(p)))
      {
//  cout<<q.station<<endl;
//    cout<<q.station<<endl;
      if(strcmpi(p.station,boarding)==0)
      {
      start=1;}                  //this brackett should not be displaced.
 //      cout<<start<<" "<<end;
 //     cout<<"Boarding\n"; }
      if (start==1 && end==0)
      {
      no++;
       cout<<no<<"   "<<p.station<<endl;
      }
      if (strcmpi(p.station,drop)==0)
      break;
      }
  //    cout<<no<<"$$$";
      cout<<endl;
getch();

  }

  void metro::bluel()
 {
   yellow_line d;

   ofstream fin("blue.dat",ios::binary|ios::app);

   cout<<"enter station no";
   cin>>d.n;
   cout<<"enter station name";
   gets(d.station);
  // fin.open("yellow.dat",ios::in|ios::binary|ios::app);
   fin.write((char*)&d,sizeof(d));
   fin.close();



 }


  void metro::violetl()
 {
   yellow_line c;

   ofstream fin("violet.dat",ios::binary|ios::app);

   cout<<"enter station no";
   cin>>c.n;
   cout<<"enter station name";
   gets(c.station);
  // fin.open("yellow.dat",ios::in|ios::binary|ios::app);
   fin.write((char*)&c,sizeof(c));
   fin.close();



 }

  void metro::rapidl()
 {
   yellow_line e;

   ofstream fin("rapid.dat",ios::binary|ios::app);

   cout<<"enter station no";
   cin>>e.n;
   cout<<"enter station name";
   gets(e.station);
  // fin.open("yellow.dat",ios::in|ios::binary|ios::app);
   fin.write((char*)&e,sizeof(e));
   fin.close();



 }



void metro::yellowl()
 {
   yellow_line a;

   ofstream fin("yellow.dat",ios::binary|ios::app);

   cout<<"enter station no";
   cin>>a.n;
   cout<<"enter station name";
   gets(a.station);
  // fin.open("yellow.dat",ios::in|ios::binary|ios::app);
   fin.write((char*)&a,sizeof(a));
   fin.close();



 }

void metro::magental()
{ yellow_line b;

   ofstream fin("magenta.dat",ios::binary|ios::app);
   cout<<"enter station no";
   cin>>b.n;
   cout<<"enter station name";
   gets(b.station);
  // fin.open("magenta.dat",ios::in|ios::binary|ios::app);
   fin.write((char*)&b,sizeof(b));
   fin.close();

}

    void metro::time()
{
    int time=(no-1)*2;
    cout<<"it takes "<<time<<"mins to reach your destination";
}
    void metro::fare()
{
    int fare = (no-1)*5;
    cout<<endl<<"Rs "<<fare<<"will be deducted from your metro card";
}
/*    void metro::file()
{
     char ans;
     ofstream a;
     a.open("abc",ios::binary|ios::app);
do
{
yellow_line q;
cin>>q.n;
gets(q.station);
a.write((char*)&q,sizeof(q));
cout<<"do you wanna continue (y/n)";
cin>>ans;
}
   while(ans=='y');
   a.close();
   ifstream b("abc",ios::binary);
   b.seekg(0);
   yellow_line q;
	     while (b.read ((char *)&q,sizeof(q)))
{
	   cout<<q.n<<" "<<q.station<<endl;
}


} */





void main()
 {
 clrscr();

/*metro A1;
  char ans;
  do
  {
  A1.bluel();
  cout<<"want to continue?";
  cin>>ans;
  }while(ans=='y');  */
 one.get();
 if(strcmpi(line,"yellow")==0)       //change
{ one.yroute();  }
else if (strcmpi(line,"magenta")==0)
{   one.mroute();  }
else if (strcmpi(line,"violet")==0)
{   one.vroute();}
else if(strcmpi(line,"blue")==0)
{ one.broute();}
else if(strcmpi(line,"rapid")==0)
{ one.rroute();}		 //change
   one.time();
   one.fare();
  // one.file();
 getch();
 }


