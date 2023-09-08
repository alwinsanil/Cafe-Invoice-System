#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include<process.h>

//Class for Menu
class menu
{
 int code,acode;
 char item[30], aitem[30];
 float price, aprice;
 
public:
//function to get information about an item
 void getdata()
 {
  cout<<"Enter Code No.: ";
  cin>>code;
  cout<<"Enter Item Name: ";
  gets(item);
  cout<<"Enter Price: ";
  cin>>price;
 }

//function to display data about an item
 void putdata()
 {
  cout<<"\n\nCode: "<<code;
  cout<<"\nItem Name: ";
  puts(item);
  cout<<"Price: "<<price;
 }

//function to get information about an add-on item
 void agetdata()
 {
  cout<<"Enter Addon Code: ";
  cin>>acode;
  cout<<"Enter Addon Name: ";
  gets(aitem);
  cout<<"Enter Price: ";
  cin>>aprice;
 }

//function to display data about an add-on item
 void aputdata()
 {
  cout<<"\n\nAddon Code: "<<acode;
  cout<<"\nAddon Name: ";
  puts(aitem);
  cout<<"Price: "<<aprice;
 }

//function to get code of an item
 int getcode()
 {
  return code;
 }

//function to get code of an addon item
 int getacode()
 {
  return acode;
 }

//function to get price an item
 float getprice()
 {
  return price;
 }

//function to get price of an addon item
 float getaprice()
 {
  return aprice;
 }
}m[50];

//Function for Login
void login()
{
 char uname[20];
 char pass[20];
 char*a="CafeLamour";
 char*b="cafelamour123";
 int attempt=0;
 while(attempt<3)
 {
  cout<<"Enter Log in Details:";
  cout<<"\nUsername: ";
  gets(uname);
  cout<<"Password: ";
  gets(pass);
  if(strcmp(uname, a)==0)
  {
   if(strcmp(pass, b)==0)
   {
    cout<<"Login Successful.\n\n\n";
    break;
   }
   else
    cout<<"Invalid Username or Password\n";
  }
  else
  {
   cout<<"Invalid Username or Password\n";
   attempt++;
  }
 }
 if(attempt==3)
 {
  cout<<"\nLogin Blocked. Please Contact the Administrator.";
  return;
 }
}

//Initialize upon startup
void initialise()
{
 ofstream ob;
 ob.open("Menu1.txt",ios::out);
 ifstream ib;
 ib.open("Menu1.txt",ios::in);
 int i=1;
 char line[40];
 int wn[100];
 char* wi[100][100];
 float wp[100];
 if(ib.getline(line,40)==0)
 {
  wn[1]=1001;
  wi[1][30]="Veg Delight";
  wp[1]=5.00;
  wn[2]=1002;
  wi[2][30]="Egg Delight";
  wp[2]=6.50;
  wn[3]=1003;
  wi[3][30]="Grilled Chicken";
  wp[3]=7.50;
  wn[4]=1004;
  wi[4][30]="Spanish BLT";
  wp[4]=12.00;
  wn[5]=1005;
  wi[5][30]="Willy's Melt";
  wp[5]=12.00;
  wn[6]=1006;
  wi[6][30]="Bacon & Eggs";
  wp[6]=10.00;
  wn[7]=1007;
  wi[7][30]="Chicken Teriyaki";
  wp[7]=10.00;
  wn[8]=1008;
  wi[8][30]="Roast Beef";
  wp[8]=10.00;
  wn[9]=1009;
  wi[9][30]="Smoked Turkey";
  wp[9]=10.00;
  wn[10]=1010;
  wi[10][30]="Steak & Cheese";
  wp[10]=10.00;
  wn[11]=1011;
  wi[11][30]="Samosa";
  wp[11]=3.00;
  wn[12]=1012;
  wi[12][30]="Crunch";
  wp[12]=4.00;
  wn[13]=1013;
  wi[13][30]="Chips & Fries";
  wp[13]=4.00;
  wn[14]=1014;
  wi[14][30]="Tea";
  wp[14]=6.00;
  wn[15]=1015;
  wi[15][30]="Coffee";
  wp[15]=7.00;
  wn[16]=1016;
  wi[16][30]="Hot Chocolate";
  wp[16]=13.00;
  wn[17]=1017;
  wi[17][30]="Espresso";
  wp[17]=13.00;
  wn[18]=1018;
  wi[18][30]="Cappuccino";
  wp[18]=13.00;
  wn[19]=1019;
  wi[19][30]="Caffe  Latte";
  wp[19]=13.00;
  wn[20]=1020;
  wi[20][30]="Caffe Americano";
  wp[20]=13.00;
  wn[21]=1021;
  wi[21][30]="Caffe Mocha";
  wp[21]=13.00;
  wn[22]=1022;
  wi[22][30]="Willy's Cocktail";
  wp[22]=12.00;
  wn[23]=1023;
  wi[23][30]="Mango";
  wp[23]=12.00;
  wn[24]=1024;
  wi[24][30]="Orange";
  wp[24]=12.00;
  wn[25]=1025;
  wi[25][30]="Apple";
  wp[25]=12.00;
  wn[26]=1026;
  wi[26][30]="Banana";
  wp[26]=12.00;
  wn[27]=1027;
  wi[27][30]="Lemon & Mint";
  wp[27]=12.00;
  wn[28]=1028;
  wi[28][30]="Pineapple";
  wp[28]=12.00;
  wn[29]=1029;
  wi[29][30]="Watermelon";
  wp[29]=12.00;
  wn[30]=1030;
  wi[30][30]="Stawberry";
  wp[30]=12.00;
  wn[31]=1031;
  wi[31][30]="Mockmosa";
  wp[31]=15.00;
  wn[32]=1032;
  wi[32][30]="Nojito";
  wp[32]=15.00;
  wn[33]=1033;
  wi[33][30]="Red Storm";
  wp[33]=15.00;
  wn[34]=1034;
  wi[34][30]="Blue Shoe";
  wp[34]=15.00;
  wn[35]=1035;
  wi[35][30]="Sangria";
  wp[35]=15.00;
  wn[36]=1036;
  wi[36][30]="The Dutchman - Oreo";
  wp[36]=18.00;
  wn[37]=1037;
  wi[37][30]="The Resurrector - Coffee";
  wp[37]=18.00;
  wn[38]=1038;
  wi[38][30]="Dark Fusion - Chocolate";
  wp[38]=18.00;
  wn[39]=1039;
  wi[39][30]="Berryland - Strawberry";
  wp[39]=18.00;
  wn[40]=1040;
  wi[40][30]="Long Shot - Banana";
  wp[40]=18.00;
  wn[41]=1041;
  wi[41][30]="Pulp Fiction - Mango";
  wp[41]=18.00;
  wn[42]=1042;
  wi[42][30]="The Most Wanted - Ferrero Rocher";
  wp[42]=18.00;
  wn[43]=1043;
  wi[43][30]="Notorious - Nutella";
  wp[43]=18.00;
  wn[44]=1044;
  wi[44][30]="Lego House - Cookies &  Cream";
  wp[44]=18.00;
  wn[45]=1045;
  wi[45][30]="Marshall - Marshmallow";
  wp[45]=18.00;
  wn[46]=1046;
  wi[46][30]="Willy's Favourite";
  wp[46]=21.00;
  wn[47]=1047;
  wi[47][30]="Dragon Wings";
  wp[47]=21.00;
  wn[48]=1048;
  wi[48][30]="Bingo";
  wp[48]=21.00;
  wn[49]=1049;
  wi[49][30]="Panzer";
  wp[49]=21.00;
  wn[50]=1050;
  wi[50][30]="Godspeed";
  wp[50]=21.00;
  wn[51]=1051;
  wi[51][30]="Medium";
  wp[51]=3.00;
  wn[52]=1052;
  wi[52][30]="Large";
  wp[52]=6.00;
  wn[53]=1053;
  wi[53][30]="Whip Cream";
  wp[53]=2.50;
  wn[54]=1054;
  wi[54][30]="Crushed Cookies";
  wp[54]=2.50;
  do
  {
   ob<<wn[i]<<endl;
   ob<<wi[i][30]<<endl;
   ob<<wp[i]<<endl;
   i++;
  }while(i<=54);
 }
}

//Function to Add to Menu
void add()
{
 int c,t,s=0;
 ofstream fout;
 fout.open("Menu1.txt", ios::app);
 do
 {
  cout<<"\n\nWhat do you want to add?\n1.Main Menu\n2.Addons\nChoice: ";
  cin>>c;
  cout<<"Enter the no. of items you want to add: ";
  cin>>t;
  if(c==1)
  {
   for(int i=0; i<t; i++)
   {
    m[i].getdata();
    fout.write((char*)&m[i], sizeof(m[i]));
    s=0;
   }
  }
  else if(c==2)
  {
   for(int i=0; i<t; i++)
   {
    m[i].agetdata();
    fout.write((char*)&m[i], sizeof(m[i]));
    s=0;
   }
  }
  else
  {
   cout<<"Invalid Option. Please Enter a valid option.";
   s=1;
  }
 }while(s==1);
 fout.close();
}

//Function For Deleting from Menu
void del()
{
 int w=1;
 ifstream din;
 ofstream dout;
 din.open("Menu1.txt", ios::nocreate);
 dout.open("Temp.txt", ios::out);
 int dno;
 cout<<"Enter the code of item that you want to delete: ";
 cin>>dno;
 while(!din.eof())
 {
  for(int i=0; i<50; i++)
  {
   din.read((char*)&m[i], sizeof(m[i]));
   if(m[i].getcode()!=dno)
   {
    if(m[i].getacode()!=dno)
     dout.write((char*)&m[i], sizeof(m[i]));
    else
    w=0;
   }
   else
   w=0;
  }
 }
 din.close();
 dout.close();
 if(w==0)
  cout<<"Item Deleted.\n";
 else if(w==1)
  cout<<"Item Not Found.!";
 remove("Menu1.txt");
 rename("Temp.txt", "Menu1.txt");
}

//Funtion to Modify Menu
void modify()
{
 int mno, pos;
 cout<<"Enter the item code you wish to modify: ";
 cin>>mno;
 fstream mio;
 mio.open("Menu1.txt", ios::in|ios::out);
 while(!mio.eof())
 {
  for(int i=0; i<50; i++)
  {
   pos=mio.tellg();
   mio.read((char*)&m[i], sizeof(m[i]));
   if(m[i].getcode()==mno||m[i].getacode()==mno)
   {
    cout<<"Enter New Data: ";
    m[i].getdata();
    mio.seekg(pos, ios::beg);
    mio.write((char*)&m[i], sizeof(m[i]));
   }
  }
 }
 mio.close();
}

//Function to search in Menu
void search()
{
 int sno;
 char f='n';
 ifstream sin;
 sin.open("Menu1.txt", ios::app);
 cout<<"Enter Item code to be searched: ";
 cin>>sno;
 for(int i=0; i<50; i++)
 {
  while(!sin.eof())
  {
   sin.read((char*)&m[i], sizeof(m[i]));
   if(m[i].getcode()==sno||m[i].getacode()==sno)
   {
    m[i].putdata();
    f='y';
    break;
   }
  }
 }
 if(f=='n')
  cout<<"\nEntered Value not found!";
}

//Class for Order
class order
{
 public:
 int o, p, qty, aqty;
 int icode[50], acode[50];
 float iprice[50], oprice[50];
 float sum, asum;

  order()
  {
   o=1;
   p=1;
   qty=0;
   aqty=0;
   sum=0;
   asum=0;
  }

  //Function for Main Order
  float mainorder()
  {
   ifstream oin;
   oin.open("Menu1.txt", ios::app|ios::in);
   for(int i=0; o==1; i++)
   {
    oin.read((char*)&m[i], sizeof(m[i]));
    cout<<"\n\nEnter the item code: ";
    cin>>icode[i];
    if(m[i].getcode()==icode[i])
     iprice[i]=m[i].getprice();
    cout<<"Any More Items? (1=Yes/0=NO): ";
    cin>>o;
    sum+=iprice[i];
    qty++;
   }
   cout<<"Primary Total: "<<sum;
   oin.close();
   return sum;
  }

  //Function for Addons
  float addons()
  {
   ifstream zin;
   zin.open("Menu1.txt", ios::app|ios::in);
   for(int i=0; p==1; i++)
   {
    zin.read((char*)&m[i], sizeof(m[i]));
    cout<<"\n\nEnter Addon Code: ";
    cin>>acode[i];
    if(m[i].getacode()==acode[i])
     oprice[i]=m[i].getaprice();
    cout<<"Any More Addon?(1=Yes/0=No): ";
    cin>>p;
    asum+=oprice[i];
    aqty++;
   }
   cout<<"Addon Total: "<<asum;
   zin.close();
   return asum;
  }
};

//Class for invoice & Inheriting Order class
class invoice: public order           
{
 public:
  float tot1, total, vat;

  //Invoice Constructor
  invoice()                                         
  {
   tot1=0;
   total=0;
   vat=0;
  }

  //Function To print Invoice
  void print()                                      
  {
   ifstream iin;
   iin.open("Menu1.txt", ios::app);
   cout<<"\n\n************INVOICE************";
   cout<<"\n\nPrimary Order: ";
   for(int a=0; a<qty; a++)
   {
    iin.read((char*)&m[a], sizeof(m[a]));
    if(m[a].getcode()==icode[a])
     m[a].putdata();
   }
   cout<<"\nPrimary Total: "<<sum<<" dhs.";
   cout<<"\n\nAddons: ";
   for(int b=0; b<aqty; b++)
   {
    iin.read((char*)&m[b], sizeof(m[b]));
    if(m[b].getacode()==acode[b])
     m[b].aputdata();
   }
   cout<<"\nAddons Total: "<<asum<<" dhs.";
   tot1=sum+asum;
   vat=0.05*tot1;
   total=tot1+vat;
   cout<<"\nTotal: "<<tot1<<" dhs.";
   cout<<"\nVat: "<<vat<<" dhs.";
   cout<<"\n\nGrand Total: "<<total<<" dhs.";
   iin.close();
  }
};

//Class for Emp & Inheriting Menu & Invoice classes
class emp: public invoice             
{
 public:
  //Function for Employee
  void employee()                                    
  {
   order::mainorder();                                //Main Order
   int f;
   cout<<"\n\nDo you Want Addons? (1=Yes/0=No): ";
   cin>>f;
   if(f==1)
   order::addons();                                   //Addons
   invoice::print();                                  //Prints Invoice
  }
}e;

void main()                                          //Main Function
{
 int flag=1, h=0;
 int ch;
 cout<<"*****************************************************************\n";
 cout<<"*                                                                                         *\n”;
 cout<<"*                     WELCOME TO CAFE L'AMOUR                *\n”;       
 cout<<"*                                                                                         *\n  ;   
 cout<<"*****************************************************************\n";

 login();
initialise() ;
 do
 {
  cout<<"\n\nChoices:\n1. Order.\n2. Add to Menu.\n3. Delete from Menu.\n4. Modify Menu\n5. Search from Menu\n6. Exit.\n";
  cout<<"\nChoice: ";                                //Choice of Operation
  cin>>ch;
  do
  {
   if(ch==1)
   {
    e.employee();
   }
   else if(ch==2)
   {
    add();
   }
   else if(ch==3)
   {
    del();
   }
   else if(ch==4)
   {
    modify();
   }
   else if(ch==5)
   {
    search();
   }
   else if(ch==6)
   {
    exit(0);
   }
   else
   {
    cout<<"Invalid Option. Please Enter a valid option.";
    flag=0;
   }
  }while(flag==0);
  cout<<"\nDo you want to do anything else? (1=Yes/0=No): ";
  cin>>h;
 }while(h==1);
 getch();
}
