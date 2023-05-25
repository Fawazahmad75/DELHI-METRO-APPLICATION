#include<fstream.h>
#include<conio.h>
#include<stdio.h>
struct yellow_line
{
int n;
char station[30];
}q;
class what
{
void del(int);
};
void what::del(int p)
{
ifstream b("abc",ios::binary);
ofstream c("temp",ios::binary);
yellow_line d;
char ans;
while(b.read((char*)&q,sizeof(q)));
{ if(q.n!=p)
c.write((char*)&q,sizeof(q));
}
remove("abc");
rename("temp","abc");}
void main()
{
clrscr();

char ans;
ofstream a;
a.open("abc",ios::binary|ios::app);
do
{

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
getch();
}

