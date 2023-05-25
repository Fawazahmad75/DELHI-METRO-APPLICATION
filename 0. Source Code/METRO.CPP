#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
int i,no;
struct yellow_line
{
 int n;
 char station[30];
};
class metro
{
 char boarding[30];
 char drop[30];
   public:
 char station[5][20];

 metro()
{
strcpy(station[1],"QUTAB MINAR");
strcpy(station[2],"SAKET");
strcpy(station[3],"MALVIYA NAGAR");
strcpy(station[4],"HAUZ KHAS");

}

void fare();
void time();
void file();
void route();
   void get()
   { cout<<"enter the boarding station";
     gets(boarding);
     cout<<"enter the drop destination";
     gets(drop);
    }
};
   void metro::route()
{
      ifstream x("abc", ios::binary);
      x.seekg(0);
      yellow_line q;
      int start=0;
     int end=0;
		    no=0;
		    x.seekg(0);
      while(x.read((char *)&q,sizeof(q)))
      { //cout<<q.station<<endl;
      if(strcmpi(q.station,boarding)==0) start=1;
  //    cout<<start<<" "<<end;
      if (start==1 && end==0)
      {no++;
       cout<<no<<"   "<<q.station<<endl;
      }
      if (strcmpi(q.station,drop)==0)
      break;
    cout<<endl;
}

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
    void metro::file()
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


}





void main()
 {
 clrscr();
 metro one;
 one.get();
   one.route();
   one.time();
   one.fare();
//   one.file();
 getch();
 }


