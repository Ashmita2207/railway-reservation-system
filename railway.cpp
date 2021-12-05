#include<iostream.h> 

#include<fstream.h> 

#include<conio.h> 

#include<stdio.h> 

#include<string.h> 

#include<stdlib.h> 

#include<process.h> 

void second(); 

void trnavailability(); 

class reserve 

{ 

long tno; 

char tname[34]; 

char bpt[67]; 

char dest[67]; 

char cls[98]; 

char name[44][44]; 

int age[54]; 

char sex[32]; 

int dd,mm,yy; 

int nos; 

char aa[8]; 

char da[8]; 

int dist,s; 

long pnr; 

float prc; 

void trname() 

{ 

if(tno==2305) 

{ 

strcpy(tname,"RAJDHANI EXPRESS"); 

strcpy(aa,"02:55"); 

strcpy(da,"03:10"); 

} 

else if(tno==2311) 

{ 

strcpy(tname,"KALKA MAIL"); 

strcpy(aa,"09:05"); 

strcpy(da,"09:20"); 

} 

else if(tno==2801) 

{ 

strcpy(tname,"PURUSHUTTAM EXPRESS"); 

strcpy(aa,"19:10"); 

strcpy(da,"19:20"); 

} 

 

else if(tno==2815) 

{ 

strcpy(tname,"NILANCHAL EXPRESS"); 

strcpy(aa,"07:20"); 

strcpy(da,"07:30"); 

} 

 

else if(tno==2401) 

{ 

strcpy(tname,"MAGADH EXPRESS"); 

strcpy(aa,"00:42"); 

strcpy(da,"00:50"); 

} 

 

else if(tno==2505) 

{ 

strcpy(tname,"SAMPARK KRANTI EXPRESS"); 

strcpy(aa,"04:10"); 

strcpy(da,"04:20"); 

} 

 

else if(tno==2397) 

{ 

strcpy(tname,"MAHABODHI EXPRESS"); 

strcpy(aa,"20:00"); 

strcpy(da,"20:20"); 

} 

else if(tno==2317) 

{ 

strcpy(tname,"SWATANTRATA EXPRESS"); 

strcpy(aa,"03:25"); 

strcpy(da,"03:50"); 

} 

 

else if(tno==4005) 

{ 

strcpy(tname,"LICHCHVI EXPRESS"); 

strcpy(aa,"19:10"); 

strcpy(da,"19:35"); 

} 

 

else if(tno==1060) 

{ 

strcpy(tname,"REEVANCHAL EXPRESS"); 

strcpy(aa,"03:30"); 

strcpy(da,"04:00"); 

} 

 

else if(tno==4217) 

{ 

strcpy(tname,"PRAYAGRAJ EXPRESS"); 

strcpy(aa,"00:00"); 

strcpy(da,"21:30"); 

} 

 

else if(tno==2657) 

{ 

strcpy(tname,"MUMBAI MAIL"); 

strcpy(aa,"11:10"); 

strcpy(da,"11:40"); 

} 

 

else if(tno==2765) 

{ 

strcpy(tname,"MAHA NAGARI EXPRESS"); 

strcpy(aa,"14:40"); 

strcpy(da,"15:10"); 

} 

 

else if(tno==9843) 

{ 

strcpy(tname,"SHIV GANGA EXPRESS"); 

strcpy(aa,"04:40"); 

strcpy(da,"04:10"); 

} 

 

else if(tno==7645) 

{ 

strcpy(tname,"RATNNAGIRI EXPRESS"); 

strcpy(aa,"04:40"); 

strcpy(da,"05:15"); 

} 

 

else if(tno==5423) 

{ 

strcpy(tname,"KAMAYANI EXPRESS"); 

strcpy(aa,"19:20"); 

strcpy(da,"19:45"); 

} 

 

else if(tno==2353) 

{ 

strcpy(tname,"BUNDEL KHAND EXPRESS"); 

strcpy(aa,"06:10"); 

strcpy(da,"06:40"); 

} 

 

else if(tno==1405) 

{ 

strcpy(tname,"CHAURI-CHAURA EXPRESS"); 

strcpy(aa,"20:55"); 

strcpy(da,"21:05"); 

} 

 

else if(tno==4305) 

{ 

strcpy(tname,"GODAN EXPRESS"); 

strcpy(aa,"10:25"); 

strcpy(da,"21:05"); 

} 

 

else if(tno==6512) 

{ 

strcpy(tname,"KASHI EXPRESS"); 

strcpy(aa,"08:20"); 

strcpy(da,"08:45"); 

} 

 

else if(tno==3125) 

{ 

strcpy(tname,"GANGA GOMTI EXPRESS"); 

strcpy(aa,"05:40"); 

strcpy(da,"06:10"); 

} 

 

else if(tno==6545) 

{ 

strcpy(tname,"INTERCITY EXPRESS"); 

strcpy(aa,"15:00"); 

strcpy(da,"15:20"); 

} 

 

else if(tno==7895) 

{ 

strcpy(tname,"KOCHINE EXPRESS"); 

strcpy(aa,"01:20"); 

strcpy(da,"01:45"); 

} 

 

else if(tno==5467) 

{ 

strcpy(tname,"TIRUPATI EXPRESS"); 

strcpy(aa,"01:20"); 

strcpy(da,"01:45"); 

} 

 

else if(tno==2256) 

{ 

strcpy(tname,"NORTH-EAST EXPRESS"); 

strcpy(aa,"15:45"); 

strcpy(da,"15:55"); 

} 

 

else if(tno==8543) 

{ 

strcpy(tname,"KALKA MAIL"); 

strcpy(aa,"17:25"); 

strcpy(da,"17:35"); 

} 

else if(tno==7014) 

{ 

strcpy(tname,"JODHPUR EXPRESS"); 

strcpy(aa,"14:10"); 

strcpy(da,"14:20"); 

} 

} 

void caldisprc() 

{ 

if((strcmp(bpt,"ALLAHABAD")==0)&&(strcmp(dest,"DELHI")==0)) 

{ 

dist=700; 

switch(s) 

{ 

case 1: 

strcpy(cls,"First AC"); 

prc=1300; 

break; 

case 2: 

strcpy(cls,"Second AC"); 

prc=1250; 

break; 

case 3: 

strcpy(cls,"Third AC"); 

prc=1175; 

break; 

case 4:(cls," 3 AC Economy"); 

prc=1090; 

break; 

case 5: 

strcpy(cls,"AC Chair Car"); 

prc=990; 

break; 

case 6: 

strcpy(cls,"First Class"); 

prc=950; 

break; 

case 7: 

strcpy(cls,"Sleeper Class"); 

prc=900; 

break; 

case 8: 

strcpy(cls,"Second Seating"); 

prc=600; 

} 

} 

else 

if((strcmp(bpt,"Allahabad")==0)&&(strcmp(dest,"Mumbai")==0)) 

{ 

dist=1200; 

switch(s) 

{ 

case 1: 

strcpy(cls,"First AC"); 

prc=2300; 

break; 

case 2: 

strcpy(cls,"Second AC"); 

prc=2125; 

break; 

case 3: 

strcpy(cls,"Third AC"); 

prc=2025; 

break; 

case 4: 

strcpy(cls,"3 AC Economy"); 

prc=1950; 

break; 

case 5: 

strcpy(cls,"AC Chair Car"); 

prc=1890; 

break; 

case 6: 

strcpy(cls,"First Class"); 

prc=1860; 

break; 

case 7: 

strcpy(cls,"Sleeper Class"); 

prc=1800; 

break; 

case 8: 

strcpy(cls,"Second Seating"); 

prc=1650; 

} 

} 

else 

if((strcmp(bpt,"Allahabad")==0)&&(strcmp(dest,"Varanasi")==0)) 

{ 

dist=120; 

switch(s) 

{ 

case 1: 

strcpy(cls,"First AC"); 

prc=300; 

break; 

case 2: 

strcpy(cls,"Second AC"); 

prc=250; 

break; 

case 3: 

strcpy(cls,"Third AC"); 

prc=230; 

break; 

case 4: 

strcpy(cls,"3 AC Economy"); 

prc=210; 

break; 

case 5: 

strcpy(cls,"AC Chair Car"); 

prc=200; 

break; 

case 6: 

strcpy(cls,"First Class"); 

prc=290; 

break; 

case 7: 

strcpy(cls,"Sleeper Class"); 

prc=150; 

break; 

case 8: 

strcpy(cls,"Second Seating"); 

prc=100; 

} 

} 

else 

if((strcmp(bpt,"Allahabad")==0)&&(strcmp(dest,"Gorakhpur")==0)) 

{ 

dist=375; 

switch(s) 

{ 

case 1: 

strcpy(cls,"First AC"); 

prc=750; 

break; 

case 2: 

strcpy(cls,"Second AC"); 

prc=725; 

break; 

case 3: 

strcpy(cls,"Third AC"); 

prc=700; 

break; 

case 4: 

strcpy(cls,"3 AC Economy"); 

prc=680; 

break; 

case 5: 

strcpy(cls,"AC Chair Car"); 

prc=610; 

break; 

case 6: 

strcpy(cls,"First Class"); 

prc=610; 

break; 

case 7: 

strcpy(cls,"Sleeper Class"); 

prc=560; 

break; 

case 8: 

strcpy(cls,"Second Seating"); 

prc=500; 

} 

} 

else 

if((strcmp(bpt,"Allahabad")==0)&&(strcmp(dest,"Lucknow")==0)) 

{ 

dist=300; 

switch(s) 

{ 

case 1: 

strcpy(cls,"First AC"); 

prc=550; 

break; 

case 2: 

strcpy(cls,"Second AC"); 

prc=425; 

break; 

case 3: 

strcpy(cls,"Third AC"); 

prc=400; 

break; 

case 4: 

strcpy(cls,"3 AC Economy"); 

prc=375; 

break; 

case 5: 

strcpy(cls,"AC Chair Car"); 

prc=310; 

break; 

case 6: 

strcpy(cls,"First Class"); 

prc=310; 

break; 

case 7: 

strcpy(cls,"Sleeper Class"); 

prc=280; 

break; 

case 8: 

strcpy(cls,"Second Seating"); 

prc=250; 

} 

} 

else 

if((strcmp(bpt,"Allahabad")==0)&&(strcmp(dest,"patna")==0)) 

{ 

dist=680; 

switch(s) 

{ 

case 1: 

strcpy(cls,"First AC"); 

prc=1150; 

break; 

case 2: 

strcpy(cls,"Second AC"); 

prc=1025; 

break; 

case 3: 

strcpy(cls,"Third AC"); 

prc=975; 

break; 

case 4: 

strcpy(cls,"3 AC Economy"); 

prc=900; 

break; 

case 5: 

strcpy(cls,"AC Chair Car"); 

prc=830; 

break; 

case 6: 

strcpy(cls,"First Class"); 

prc=800; 

break; 

case 7: 

strcpy(cls,"Sleeper Class"); 

prc=780; 

break; 

case 8: 

strcpy(cls,"Second Seating"); 

prc=710; 

} 

} 

else 

if((strcmp(bpt,"Allahabad")==0)&&(strcmp(dest,"Guwahati")==0)) 

{ 

dist=300; 

switch(s) 

{ 

case 1: 

strcpy(cls,"First AC"); 

prc=525; 

break; 

case 2: 

strcpy(cls,"Second AC"); 

prc=450; 

break; 

case 3: 

strcpy(cls,"Third AC"); 

prc=425; 

break; 

case 4: 

strcpy(cls,"3 AC Economy"); 

prc=400; 

break; 

case 5: 

strcpy(cls,"AC Chair Car"); 

prc=360; 

break; 

case 6: 

strcpy(cls,"First Class"); 

prc=340; 

break; 

case 7: 

strcpy(cls,"Sleeper Class"); 

prc=320; 

break; 

case 8: 

strcpy(cls,"Second Seating"); 

prc=260; 

} 

} 

else 

if((strcmp(bpt,"Allahabad")==0)&&(strcmp(dest,"gwalior")==0)) 

{ 

dist=350; 

switch(s) 

{ 

case 1: 

strcpy(cls,"First AC"); 

prc=425; 

break; 

case 2: 

strcpy(cls,"Second AC"); 

prc=400; 

break; 

case 3: 

strcpy(cls,"Third AC"); 

prc=375; 

break; 

case 4: 

strcpy(cls,"3 AC Economy"); 

prc=345; 

break; 

case 5: 

strcpy(cls,"AC Chair Car"); 

prc=295; 

break; 

case 6: 

strcpy(cls,"First Class"); 

prc=260; 

break; 

case 7: 

strcpy(cls,"Sleeper Class"); 

prc=240; 

break; 

case 8: 

strcpy(cls,"Second Seating"); 

prc=190; 

} 

} 

else 

if((strcmp(bpt,"Allahabad")==0)&&(strcmp(dest,"hawra")==0)) 

{ 

dist=900; 

switch(s) 

{ 

case 1: 

strcpy(cls,"First AC"); 

prc=1900; 

break; 

case 2: 

strcpy(cls,"Second AC"); 

prc=1850; 

break; 

case 3: 

strcpy(cls,"Third AC"); 

prc=1800; 

break; 

case 4: 

strcpy(cls,"3 AC Economy"); 

prc=1760; 

break; 

case 5: 

strcpy(cls,"AC Chair Car"); 

prc=1680; 

break; 

case 6: 

strcpy(cls,"First Class"); 

prc=1645; 

break; 

case 7: 

strcpy(cls,"Sleeper Class"); 

prc=1600; 

break; 

case 8: 

strcpy(cls,"Second Seating"); 

prc=1520; 

break; 

} 

} 

} 

public: 

void enter(); 

void modify(); 

void display(); 

void fareenquiry(); 

}; 

void reserve::enter() 

{ 

clrscr(); 

cout<<"\n\t======================FILL UP THE FORM========================\n"; 

cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~\n"; 

cout<<"\t\t Enter Train Number  :\t"; 

cin>>tno; 

cout<<"\t\t Enter Boarding Point  :\t"; 

gets(bpt); 

cout<<"\t\t Enter Destination Point  :\t"; 

gets(dest); 

cout<<"\t\t Enter Journey Date  :\t"; 

cin>>dd; 

cout<<"\t\t Enter Journey Month  :\t"; 

cin>>mm; 

cout<<"\t\t Enter Journey Year  :\t"; 

cin>>yy; 

cout<<"\t\t Enter Class\n"; 

cout<<"\t\t  1.First AC\n"; 

cout<<"\t\t  2.Second AC\n"; 

cout<<"\t\t  3.Third AC\n"; 

cout<<"\t\t  4. 3 AC Economy\n"; 

cout<<"\t\t  5. AC Chair Car\n"; 

cout<<"\t\t  6. First Class\n"; 

cout<<"\t\t  7. Sleeper Class\n"; 

cout<<"\t\t  8. Second Seating\n"; 

cout<<"\t\t Enter Your Choice   :\t"; 

cin>>s; 

cout<<"\t\t Enter Number of seats   :\t"; 

cin>>nos; 

for(int i=0;i<nos;i++) 

{ 

cout<<"\t\t"<<i+1<<" Enter Name "<<"\t\t\t"; 

gets(name[i]); 

cout<<"\t\t Enter Age  :\t"; 

cin>>age[i]; 

cout<<"\t\t Enter SEX(F/M)   :\t"; 

cin>>sex[i]; 

} 

} 

void reserve::modify() 

{ 

clrscr(); 

cout<<"\n\t\t=================ENTERED DETAILS ARE:==================\n\n"; 

cout<<"\t\t*******************TRAIN DETAILS***********************\n"; 

cout<<"\t\t\t    ~~~~~~~~~~~~~~~~~~\n"; 

cout<<"\t\t\t Train Number   :\t"<<tno<<"\n"; 

cout<<"\t\t\t Boarding Point   :\t"; 

puts(bpt); 

cout<<"\t\t\t Destination Point   :\t"; 

puts(dest); 

cout<<"\t\t\t Journey Date (dd/mm/yy)   :\t"; 

cout<<dd<<"/"<<mm<<"/"<<yy<<"\n"; 

cout<<"\t\t\t Class       :\t"; 

caldisprc(); 

puts(cls); 

cout<<"\t\t\t Number of seat   :\t"<<nos<<"\n\n"; 

cout<<"\t\t*********************PASSENGER DETAILS*******************\n"; 

cout<<"\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~\n"; 

for(int i=0;i<nos;i++) 

{ 

cout<<"\t\t\t"<<i+1<<": Name"<<"\t:\t"; 

puts(name[i]); 

cout<<"\t\t\t AGE   :\t"<<age[i]<<"\n"; 

cout<<"\t\t\t SEX(F/M)   :\t"<<sex[i]<<"\n"; 

} 

if((strcmpi(bpt,"Allahabad")==0)&&(strcmpi(dest,"Delhi")==0)) 

{ 

switch(tno) 

{ 

case 2305: 

case 2311: 

case 2801: 

case 2815: 

case 2401: 

case 2505: 

case 2397: 

case 2317: 

case 4005: 

case 1060: 

case 4217: 

display(); 

break; 

default: 

{ 

cout<<"\n\n\t\t\t........INCORRECT TRAIN NUMBER........."; 

cout<<"\n\n\t\t\t........RESERVATION.......NOT.....SUCCESSFUL...!!"; 

} 

} 

char ch; 

cout<<"\n\t\t\t DO YOU WANT TO CONTINUE.....(Y/y||N/n):"; 

cin>>ch; 

switch(ch) 

{ 

case 'Y': 

case 'y': 

second(); 

break; 

default: 

exit(0); 

} 

} 

else 

if((strcmpi(bpt,"Allahabad")==0)&&(strcmpi(dest,"Mumbai")==0)) 

{ 

switch(tno) 

{ 

case 2657: 

case 2765: 

display(); 

break; 

default: 

{ 

cout<<"\n\n\t\t\t........INCORRECT TRAIN NUMBER........."; 

cout<<"\n\n\t\t\t........RESERVATION.......NOT.....SUCCESSFUL...!!"; 

} 

} 

char ch; 

cout<<"\n\t\t\t DO YOU WANT TO CONTINUE.....(Y/y||N/n):"; 

cin>>ch; 

switch(ch) 

{ 

case 'Y': 

case 'y': 

second(); 

break; 

default: 

exit(0); 

} 

} 

else 

if((strcmpi(bpt,"Allahabad")==0)&&(strcmpi(dest,"Varanasi")==0)) 

{ 

switch(tno) 

{ 

case 9843: 

case 7645: 

case 5423: 

case 2353: 

display(); 

break; 

default: 

{ 

cout<<"\n\n\t\t\t........INCORRECT TRAIN NUMBER........."; 

cout<<"\n\n\t\t\t........RESERVATION.......NOT.....SUCCESSFUL...!!"; 

} 

} 

char ch; 

cout<<"\n\t\t\t DO YOU WANT TO CONTINUE.....(Y/y||N/n):"; 

cin>>ch; 

switch(ch) 

{ 

case 'Y': 

case 'y': 

second(); 

break; 

default: 

exit(0); 

} 

} 

else 

if((strcmpi(bpt,"Allahabad")==0)&&(strcmpi(dest,"Gorakhpur")==0)) 

{ 

switch(tno) 

{ 

case 1405: 

case 4305: 

case 6512: 

display(); 

break; 

default: 

{ 

cout<<"\n\n\t\t\t........INCORRECT TRAIN NUMBER........."; 

cout<<"\n\n\t\t\t........RESERVATION.......NOT.....SUCCESSFUL...!!"; 

} 

} 

char ch; 

cout<<"\n\t\t\t DO YOU WANT TO CONTINUE.....(Y/y||N/n):"; 

cin>>ch; 

switch(ch) 

{ 

case 'Y': 

case 'y': 

second(); 

break; 

default: 

exit(0); 

} 

} 

else 

if((strcmpi(bpt,"Allahabad")==0)&&(strcmpi(dest,"Lucknow")==0)) 

{ 

switch(tno) 

{ 

case 6545: 

display(); 

break; 

default: 

{ 

cout<<"\n\n\t\t\t........INCORRECT TRAIN NUMBER........."; 

cout<<"\n\n\t\t\t........RESERVATION.......NOT.....SUCCESSFUL...!!"; 

} 

} 

char ch; 

cout<<"\n\t\t\t DO YOU WANT TO CONTINUE.....(Y/y||N/n):"; 

cin>>ch; 

switch(ch) 

{ 

case 'Y': 

case 'y': 

second(); 

break; 

default: 

exit(0); 

} 

} 

else 

if((strcmpi(bpt,"Allahabad")==0)&&(strcmpi(dest,"Patna")==0)) 

{ 

switch(tno) 

{ 

case 7895: 

case 5467: 

display(); 

break; 

default: 

{ 

cout<<"\n\n\t\t\t........INCORRECT TRAIN NUMBER........."; 

cout<<"\n\n\t\t\t........RESERVATION.......NOT.....SUCCESSFUL...!!"; 

} 

} 

char ch; 

cout<<"\n\t\t\t DO YOU WANT TO CONTINUE.....(Y/y||N/n):"; 

cin>>ch; 

switch(ch) 

{ 

case 'Y': 

case 'y': 

second(); 

break; 

default: 

exit(0); 

} 

} 

else 

if((strcmpi(bpt,"Allahabad")==0)&&(strcmpi(dest,"Guwahati")==0)) 

{ 

switch(tno) 

{ 

case 2256: 

display(); 

break; 

default: 

{ 

cout<<"\n\n\t\t\t........INCORRECT TRAIN NUMBER........."; 

cout<<"\n\n\t\t\t........RESERVATION.......NOT.....SUCCESSFUL...!!"; 

} 

} 

char ch; 

cout<<"\n\t\t\t DO YOU WANT TO CONTINUE.....(Y/y||N/n):"; 

cin>>ch; 

switch(ch) 

{ 

case 'Y': 

case 'y': 

second(); 

break; 

default: 

exit(0); 

} 

} 

else 

if((strcmpi(bpt,"Allahabad")==0)&&(strcmpi(dest,"Gwalior")==0)) 

{ 

switch(tno) 

{ 

case 8115: 

display(); 

break; 

default: 

{ 

cout<<"\n\n\t\t\t........INCORRECT TRAIN NUMBER........."; 

cout<<"\n\n\t\t\t........RESERVATION.......NOT.....SUCCESSFUL...!!"; 

} 

} 

char ch; 

cout<<"\n\t\t\t DO YOU WANT TO CONTINUE.....(Y/y||N/n):"; 

cin>>ch; 

switch(ch) 

{ 

case 'Y': 

case 'y': 

second(); 

break; 

default: 

exit(0); 

} 

} 

else 

if((strcmpi(bpt,"Allahabad")==0)&&(strcmpi(dest,"Hawra")==0)) 

{ 

switch(tno) 

{ 

case 7014: 

case 8423: 

display(); 

break; 

default: 

{ 

cout<<"\n\n\t\t\t........INCORRECT TRAIN NUMBER........."; 

cout<<"\n\n\t\t\t........RESERVATION.......NOT.....SUCCESSFUL...!!"; 

} 

} 

char ch; 

cout<<"\n\t\t\t DO YOU WANT TO CONTINUE.....(Y/y||N/n):"; 

cin>>ch; 

switch(ch) 

{ 

case 'Y': 

case 'y': 

second(); 

break; 

default: 

exit(0); 

} 

} 

} 

void reserve::display() 

{ 

clrscr(); 

int choice; 

cout<<"\n\t\t====================RAIWAY RESERVATION SLIP=============\n"; 

cout<<"\t\t******************TRAIN DETAILS*******************\n"; 

cout<<"\t\t\t    ~~~~~~~~~~~~~~~~~\n"; 

cout<<"\t\t\t PNR number     :\t"; 

randomize(); 

cout<<(pnr=rand()); 

cout<<"\n\t\t\t Train Number    :\t"<<tno; 

cout<<"\n\t\t\t Train Name      :\t"; 

trname(); 

puts(tname); 

cout<<"\t\t\t Boarding Point   :\t"; 

puts(bpt); 

cout<<"\t\t\t Destination Point   :\t"; 

puts(dest); 

cout<<"\t\t\t Journey Date(dd/mm/yy) :\t"; 

cout<<dd<<"/"<<mm<<"/"<<yy<<"\n"; 

cout<<"\t\t\t Arrival Time   :\t"; 

trname(); 

puts(aa); 

cout<<"\t\t\t Departure Time   :\t"; 

trname(); 

puts(da); 

cout<<"\t\t\t Class   :\t"; 

caldisprc(); 

puts(cls); 

cout<<"\t\t\t Number Of Seats   :\t"; 

cout<<nos<<"\n"; 

cout<<"\t\t*******************PASSENGERS DETAILS*******************\n"; 

cout<<"\t\t\t      ~~~~~~~~~~~~~~~~~~~~~~\n"; 

for(int i=0;i<nos;i++) 

{ 

cout<<"\t\t\t Name     :\t\n"<<name[i]; 

cout<<"\t\t\t Age      :\t\n"<<age[i] ; 

cout<<"\t\t\t Sex      :\t\n"<<sex[i]; 

} 

cout<<"\t\t\t\t#STATUS  CNF/S8/23/UB"; 

} 

void reserve::fareenquiry() 

{ 

cout<<"\n\t\t\t 1. ALLAHABAD to DELHI\n"; 

cout<<"\n\t\t\t 2. ALLAHABAD to MUMBAI\n"; 

cout<<"\n\t\t\t 3. ALLAHABAD to VARANASI\n"; 

cout<<"\n\t\t\t 4. ALLAHABAD to GORAKHPUR\n"; 

cout<<"\n\t\t\t 5. ALLAHABAD to LUCKNOW\n"; 

cout<<"\n\t\t\t 6. ALLAHABAD to PATNA\n"; 

cout<<"\n\t\t\t 7. ALLAHABAD to GUWAHATI\n"; 

cout<<"\n\t\t\t 8. ALLAHABAD to GWALIOR\n"; 

cout<<"\n\t\t\t 9. ALLAHABAD to HAWRA\n"; 

cout<<"\n\t\t\t 10. RETURN TO MAIN MENU\n"; 

cout<<"\n\t\t\t 11. EXIT\n"; 

cout<<"\n\t\t\t ENTER THE CHOICE :"; 

int choice; 

cin>>choice; 

switch(choice) 

{ 

case 1: 

{ 

clrscr(); 

cout<<"\n\t\t CLASS \t\t\t\t\t FARE(Rs)\n"; 

cout<<"\t\t~~~~~~~~\t\t\t\t\t  ~~~~~~~~~~~\n\n"; 

cout<<"\t\t FIRST AC \t\t\t\t\t1300\n\n"; 

cout<<"\t\t SECOND AC \t\t\t\t\t1250\n\n"; 

cout<<"\t\t THIRD AC \t\t\t\t\t1175\n\n"; 

cout<<"\t\t 3 AC ECONOMY \t\t\t\t\t1090\n\n"; 

cout<<"\t\t AC CHAIR CAR \t\t\t\t\t990\n\n"; 

cout<<"\t\t FIRST CLASS \t\t\t\t\t950\n\n"; 

cout<<"\t\t SLEEPER CLASS \t\t\t\t\t900\n\n"; 

cout<<"\t\t SECOND SEATING \t\t\t\t\t600\n\n"; 

cout<<"\n\n\t\t DO YOU WANT TO CONTINUE.........(Y/y||N/n) :"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

else cout<<"\n\t\t\t........WRONG........CHOICE........"; 

} 

break; 

case 2: 

{ 

clrscr(); 

cout<<"\n\t\t CLASS \t\t\t\t\t FARE(Rs)\n"; 

cout<<"\t\t~~~~~~~~\t\t\t\t\t  ~~~~~~~~~~~\n\n"; 

cout<<"\t\t FIRST AC \t\t\t\t\t2125\n\n"; 

cout<<"\t\t SECOND AC \t\t\t\t\t2100\n\n"; 

cout<<"\t\t THIRD AC \t\t\t\t\t2025\n\n"; 

cout<<"\t\t 3 AC ECONOMY \t\t\t\t\t1950\n\n"; 

cout<<"\t\t AC CHAIR CAR \t\t\t\t\t1890\n\n"; 

cout<<"\t\t FIRST CLASS \t\t\t\t\t1860\n\n"; 

cout<<"\t\t SLEEPER CLASS \t\t\t\t\t1800\n\n"; 

cout<<"\t\t SECOND SEATING \t\t\t\t\t1650\n\n"; 

cout<<"\n\n\t\t DO YOU WANT TO CONTINUE.........(Y/y||N/n) :"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

else cout<<"\n\t\t\t........WRONG........CHOICE........"; 

} 

break; 

case 3: 

{ 

clrscr(); 

cout<<"\n\t\t CLASS \t\t\t\t\t FARE(Rs)\n"; 

cout<<"\t\t~~~~~~~~\t\t\t\t\t  ~~~~~~~~~~~\n\n"; 

cout<<"\t\t FIRST AC \t\t\t\t\t300\n\n"; 

cout<<"\t\t SECOND AC \t\t\t\t\t250\n\n"; 

cout<<"\t\t THIRD AC \t\t\t\t\t230\n\n"; 

cout<<"\t\t 3 AC ECONOMY \t\t\t\t\t210\n\n"; 

cout<<"\t\t AC CHAIR CAR \t\t\t\t\t200\n\n"; 

cout<<"\t\t FIRST CLASS \t\t\t\t\t200\n\n"; 

cout<<"\t\t SLEEPER CLASS \t\t\t\t\t160\n\n"; 

cout<<"\t\t SECOND SEATING \t\t\t\t\t130\n\n"; 

cout<<"\n\n\t\t DO YOU WANT TO CONTINUE.........(Y/y||N/n) :"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

else cout<<"\n\t\t\t........WRONG........CHOICE........"; 

} 

break; 

case 4: 

{ 

clrscr(); 

cout<<"\n\t\t CLASS \t\t\t\t\t FARE(Rs)\n"; 

cout<<"\t\t~~~~~~~~\t\t\t\t\t  ~~~~~~~~~~~\n\n"; 

cout<<"\t\t FIRST AC \t\t\t\t\t750\n\n"; 

cout<<"\t\t SECOND AC \t\t\t\t\t725\n\n"; 

cout<<"\t\t THIRD AC \t\t\t\t\t700\n\n"; 

cout<<"\t\t 3 AC ECONOMY \t\t\t\t\t680\n\n"; 

cout<<"\t\t AC CHAIR CAR \t\t\t\t\t610\n\n"; 

cout<<"\t\t FIRST CLASS \t\t\t\t\t560\n\n"; 

cout<<"\t\t SLEEPER CLASS \t\t\t\t\t500\n\n"; 

cout<<"\t\t SECOND SEATING \t\t\t\t\t600\n\n"; 

cout<<"\n\n\t\t DO YOU WANT TO CONTINUE.........(Y/y||N/n) :"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

else cout<<"\n\t\t\t........WRONG........CHOICE........"; 

} 

break; 

case 5: 

{ 

clrscr(); 

cout<<"\n\t\t CLASS \t\t\t\t\t FARE(Rs)\n"; 

cout<<"\t\t~~~~~~~~\t\t\t\t\t  ~~~~~~~~~~~\n\n"; 

cout<<"\t\t FIRST AC \t\t\t\t\t550\n\n"; 

cout<<"\t\t SECOND AC \t\t\t\t\t425\n\n"; 

cout<<"\t\t THIRD AC \t\t\t\t\t400\n\n"; 

cout<<"\t\t 3 AC ECONOMY \t\t\t\t\t375\n\n"; 

cout<<"\t\t AC CHAIR CAR \t\t\t\t\t310\n\n"; 

cout<<"\t\t FIRST CLASS \t\t\t\t\t310\n\n"; 

cout<<"\t\t SLEEPER CLASS \t\t\t\t\t280\n\n"; 

cout<<"\t\t SECOND SEATING \t\t\t\t\t250\n\n"; 

cout<<"\n\n\t\t DO YOU WANT TO CONTINUE.........(Y/y||N/n) :"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

else cout<<"\n\t\t\t........WRONG........CHOICE........"; 

} 

break; 

case 6: 

{ 

clrscr(); 

cout<<"\n\t\t CLASS \t\t\t\t\t FARE(Rs)\n"; 

cout<<"\t\t~~~~~~~~\t\t\t\t\t  ~~~~~~~~~~~\n\n"; 

cout<<"\t\t FIRST AC \t\t\t\t\t1150\n\n"; 

cout<<"\t\t SECOND AC \t\t\t\t\t1025\n\n"; 

cout<<"\t\t THIRD AC \t\t\t\t\t975\n\n"; 

cout<<"\t\t 3 AC ECONOMY \t\t\t\t\t900\n\n"; 

cout<<"\t\t AC CHAIR CAR \t\t\t\t\t830\n\n"; 

cout<<"\t\t FIRST CLASS \t\t\t\t\t800\n\n"; 

cout<<"\t\t SLEEPER CLASS \t\t\t\t\t780\n\n"; 

cout<<"\t\t SECOND SEATING \t\t\t\t\t710\n\n"; 

cout<<"\n\n\t\t DO YOU WANT TO CONTINUE.........(Y/y||N/n) :"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

else cout<<"\n\t\t\t........WRONG........CHOICE........"; 

} 

break; 

case 7: 

{ 

clrscr(); 

cout<<"\n\t\t CLASS \t\t\t\t\t FARE(Rs)\n"; 

cout<<"\t\t~~~~~~~~\t\t\t\t\t  ~~~~~~~~~~~\n\n"; 

cout<<"\t\t FIRST AC \t\t\t\t\t525\n\n"; 

cout<<"\t\t SECOND AC \t\t\t\t\t450\n\n"; 

cout<<"\t\t THIRD AC \t\t\t\t\t425\n\n"; 

cout<<"\t\t 3 AC ECONOMY \t\t\t\t\t400\n\n"; 

cout<<"\t\t AC CHAIR CAR \t\t\t\t\t360\n\n"; 

cout<<"\t\t FIRST CLASS \t\t\t\t\t340\n\n"; 

cout<<"\t\t SLEEPER CLASS \t\t\t\t\t320\n\n"; 

cout<<"\t\t SECOND SEATING \t\t\t\t\t260\n\n"; 

cout<<"\n\n\t\t DO YOU WANT TO CONTINUE.........(Y/y||N/n) :"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

else cout<<"\n\t\t\t........WRONG........CHOICE........"; 

} 

break; 

case 8: 

{ 

clrscr(); 

cout<<"\n\t\t CLASS \t\t\t\t\t FARE(Rs)\n"; 

cout<<"\t\t~~~~~~~~\t\t\t\t\t  ~~~~~~~~~~~\n\n"; 

cout<<"\t\t FIRST AC \t\t\t\t\t425\n\n"; 

cout<<"\t\t SECOND AC \t\t\t\t\t400\n\n"; 

cout<<"\t\t THIRD AC \t\t\t\t\t375\n\n"; 

cout<<"\t\t 3 AC ECONOMY \t\t\t\t\t345\n\n"; 

cout<<"\t\t AC CHAIR CAR \t\t\t\t\t295\n\n"; 

cout<<"\t\t FIRST CLASS \t\t\t\t\t260\n\n"; 

cout<<"\t\t SLEEPER CLASS \t\t\t\t\t240\n\n"; 

cout<<"\t\t SECOND SEATING \t\t\t\t\t190\n\n"; 

cout<<"\n\n\t\t DO YOU WANT TO CONTINUE.........(Y/y||N/n) :"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

else cout<<"\n\t\t\t........WRONG........CHOICE........"; 

} 

break; 

case 9: 

{ 

clrscr(); 

cout<<"\n\t\t CLASS \t\t\t\t\t FARE(Rs)\n"; 

cout<<"\t\t~~~~~~~~\t\t\t\t\t  ~~~~~~~~~~~\n\n"; 

cout<<"\t\t FIRST AC \t\t\t\t\t1900\n\n"; 

cout<<"\t\t SECOND AC \t\t\t\t\t1850\n\n"; 

cout<<"\t\t THIRD AC \t\t\t\t\t1800\n\n"; 

cout<<"\t\t 3 AC ECONOMY \t\t\t\t\t1760\n\n"; 

cout<<"\t\t AC CHAIR CAR \t\t\t\t\t1680\n\n"; 

cout<<"\t\t FIRST CLASS \t\t\t\t\t1645\n\n"; 

cout<<"\t\t SLEEPER CLASS \t\t\t\t\t1600\n\n"; 

cout<<"\t\t SECOND SEATING \t\t\t\t\t1520\n\n"; 

cout<<"\n\n\t\t DO YOU WANT TO CONTINUE.........(Y/y||N/n) :"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

else cout<<"\n\t\t\t........WRONG........CHOICE........"; 

} 

break; 

case 10: 

second(); 

break; 

case 11: 

exit(0); 

default: 

cout<<"\n\t\t\t.........WRONG.....CHOICE........."; 

} 

} 

void trnavailability() 

{ 

clrscr(); 

int choice; 

cout<<"\n\t\t\t 1. ALLAHABAD to DELHI\n"; 

cout<<"\n\t\t\t 2. ALLAHABAD to MUMBAI\n"; 

cout<<"\n\t\t\t 3. ALLAHABAD to VARANASI\n"; 

cout<<"\n\t\t\t 4. ALLAHABAD to GORAKHPUR\n"; 

cout<<"\n\t\t\t 5. ALLAHABAD to LUCKNOW\n"; 

cout<<"\n\t\t\t 6. ALLAHABAD to PATNA\n"; 

cout<<"\n\t\t\t 7. ALLAHABAD to GUWAHATI\n"; 

cout<<"\n\t\t\t 8. ALLAHABAD to GWALIOR\n"; 

cout<<"\n\t\t\t 9. ALLAHABAD to HAWRA\n"; 

cout<<"\n\t\t\t 10. RETURN TO MAIN MENU\n"; 

cout<<"\n\t\t\t 11. EXIT\n"; 

cout<<"\n\t\t\t ENTER THE CHOICE :"; 

cin>>choice; 

switch(choice) 

{ 

case 1: 

{ 

clrscr(); 

cout<<"\n\n=====================TRAINS AVAILABLE ARE :=========================\n"; 

cout<<"\n 1 RAJDHANI EXPRESS \n"; 

cout<<"\t Train Number :2305"; 

cout<<"\t Arrival at 02:55"; 

cout<<"\t Departure at 03:10"; 

 

cout<<"\n 2 KALKA MAIL \n"; 

cout<<"\t Train Number :2311"; 

cout<<"\t Arrival at 09:05"; 

cout<<"\t Departure at 09:20"; 

 

cout<<"\n 3 NILANCHAL EXPRESS \n"; 

cout<<"\t Train Number :2815"; 

cout<<"\t Arrival at 07:20"; 

cout<<"\t Departure at 07:30"; 

 

cout<<"\n 4 MAGADH EXPRESS \n"; 

cout<<"\t Train Number :2401"; 

cout<<"\t Arrival at 00:42"; 

cout<<"\t Departure at 00:50"; 

 

cout<<"\n 5 SAMPARK KRANTI EXPRESS \n"; 

cout<<"\t Train Number :2517"; 

cout<<"\t Arrival at 04:10"; 

cout<<"\t Departure at 07:20"; 

 

cout<<"\n 6 MAHABODHI EXPRESS \n"; 

cout<<"\t Train Number :2397"; 

cout<<"\t Arrival at 20:00"; 

cout<<"\t Departure at 20:20"; 

 

cout<<"\n 7 SWANTANTRATA SENANI EXPRESS \n"; 

cout<<"\t Train Number :2317"; 

cout<<"\t Arrival at 03:25"; 

cout<<"\t Departure at 03:50"; 

 

cout<<"\n 8 LICHCHVI EXPRESS \n"; 

cout<<"\t Train Number :4005"; 

cout<<"\t Arrival at 19:10"; 

cout<<"\t Departure at 19:35"; 

 

cout<<"\n 9 REEVANCHAL EXPRESS \n"; 

cout<<"\t Train Number :1060"; 

cout<<"\t Arrival at 03:30"; 

cout<<"\t Departure at 04:00"; 

 

cout<<"\n 10 PRAYAGRAJ EXPRESS \n"; 

cout<<"\t Train Number :4217"; 

cout<<"\t Arrival at 00:00"; 

cout<<"\t Departure at 21:30"; 

cout<<"\n\n DO YOU WANT TO CONTINUE.........(Y/y||N/n) :"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

} 

break; 

case 2: 

{ 

clrscr(); 

cout<<"\n\n===================TRAINS AVAILABLE ARE==================\n"; 

cout<<"\n 1. MUMBAI MAIL \n"; 

cout<<"\t Train Number :2657"; 

cout<<"\t Arrival at 11:10"; 

cout<<"\t Departure at 11:40"; 

 

cout<<"\n 2. MAHA NAGARI EXPRESS \n"; 

cout<<"\t Train Number :2765"; 

cout<<"\t Arrival at 14:40"; 

cout<<"\t Departure at 15:10"; 

cout<<"\n\n DO YOU WANT TO CONTINUE..............(Y/y||N/n):"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

 

} 

break; 

case 3: 

{ 

clrscr(); 

cout<<"\n\n======================TRAINS AVAILABLE ARE=======================\n"; 

cout<<"\n 1. SHIV GANGA EXPRESS\n"; 

cout<<"\t Train Number:7634"; 

cout<<"\t Arrival at 00:55"; 

cout<<"\t Departure at 01:33"; 

 

cout<<"\n 2. RATNAGIRI EXPRESS\n"; 

cout<<"\t Train Number:7645"; 

cout<<"\t Arrival at 04:40"; 

cout<<"\t Departure at 05:15"; 

 

cout<<"\n 3. KAMAYANI EXPRESS\n"; 

cout<<"\t Train Number:5423"; 

cout<<"\t Arrival at 19:20"; 

cout<<"\t Departure at 19:45"; 

 

cout<<"\n 4. BUNDEL KHAND EXPRESS\n"; 

cout<<"\t Train Number:2353"; 

cout<<"\t Arrival at 06:10"; 

cout<<"\t Departure at 06:40"; 

cout<<"\n\n DO YOU WANT TO CONTINUE........(Y/y||N/n):"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

} 

break; 

case 4: 

{ 

clrscr(); 

cout<<"\n\n===================TRAINS AVAILABLE ARE :========================\n"; 

cout<<"\n 1. CHAURI-CHAURA EXPRESS \n"; 

cout<<"\t Train Number :1405"; 

cout<<"\t Arrival at 20:55"; 

cout<<"\t Departure at 21:05"; 

 

cout<<"\n 2. GODAN EXPRESS \n"; 

cout<<"\t Train Number :4305"; 

cout<<"\t Arrival at 10:25"; 

cout<<"\t Departure at 10:50"; 

 

cout<<"\n 3. KASHI EXPRESS \n"; 

cout<<"\t Train Number :6512"; 

cout<<"\t Arrival at 08:20"; 

cout<<"\t Departure at 08:45"; 

cout<<"\n\n DO YOU WANT TO CONTINUE.......(Y/y||N/n) :"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||ch=='n') 

{ 

exit(0); 

} 

} 

break; 

case 5: 

{ 

clrscr(); 

cout<<"\n\n=====================TRAINS AVAILABLE ARE==================\n"; 

cout<<"\n 1. GANGA GOMTI EXPRESS\n"; 

cout<<"\t Train Number :3125"; 

cout<<"\t Arrival at 05:40"; 

cout<<"\t Departure at 06:10"; 

 

cout<<"\n 2. INTERCITY EXPRESS\n"; 

cout<<"\t Train Number :6545"; 

cout<<"\t Arrival at 15:00"; 

cout<<"\t Departure at 15:20"; 

cout<<"\n\n DO YOU WANT TO CONTINUE......(Y/y||N/n):"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||'n') 

{ 

exit(0); 

} 

} 

case 6: 

{ 

clrscr(); 

cout<<"\n\n=====================TRAINS AVAILABLE ARE==================\n"; 

cout<<"\n 1. KOCHINE EXPRESS\n"; 

cout<<"\t Train Number :7895"; 

cout<<"\t Arrival at 01:20"; 

cout<<"\t Departure at 01:45"; 

 

cout<<"\n 2. TIRUPATI EXPRESS\n"; 

cout<<"\t Train Number :5467"; 

cout<<"\t Arrival at 01:25"; 

cout<<"\t Departure at 01:50"; 

 

cout<<"\n 3. MAGADH EXPRESS\n"; 

cout<<"\t Train Number :2401"; 

cout<<"\t Arrival at 00:42"; 

cout<<"\t Departure at 00:50"; 

cout<<"\n\n DO YOU WANT TO CONTINUE......(Y/y||N/n):"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||'n') 

{ 

exit(0); 

} 

} 

break; 

case 7: 

{ 

clrscr(); 

cout<<"\n\n=====================TRAINS AVAILABLE ARE==================\n"; 

cout<<"\n 1. RAJDHANI EXPRESS\n"; 

cout<<"\t Train Number :2305"; 

cout<<"\t Arrival at 02:55"; 

cout<<"\t Departure at 03:10"; 

 

cout<<"\n 2. NORTH -EAST EXPRESS\n"; 

cout<<"\t Train Number :2256"; 

cout<<"\t Arrival at 15:45"; 

cout<<"\t Departure at 15:55"; 

cout<<"\n\n DO YOU WANT TO CONTINUE......(Y/y||N/n):"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||'n') 

{ 

exit(0); 

} 

} 

break; 

case 8: 

{ 

clrscr(); 

cout<<"\n\n=====================TRAINS AVAILABLE ARE==================\n"; 

cout<<"\n 1. CHAMBAL EXPRESS\n"; 

cout<<"\t Train Number :8115"; 

cout<<"\t Arrival at 07:40"; 

cout<<"\t Departure at 08:15"; 

cout<<"\n\n DO YOU WANT TO CONTINUE......(Y/y||N/n):"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||'n') 

{ 

exit(0); 

} 

} 

break; 

case 9: 

{ 

clrscr(); 

cout<<"\n\n=====================TRAINS AVAILABLE ARE==================\n"; 

cout<<"\n 1. KALKA MAIL\n"; 

cout<<"\t Train Number :2311"; 

cout<<"\t Arrival at 09:05"; 

cout<<"\t Departure at 09:20"; 

 

cout<<"\n 2. JODHPUR EXPRESS\n"; 

cout<<"\t Train Number :7014"; 

cout<<"\t Arrival at 14:10"; 

cout<<"\t Departure at 14:20"; 

 

cout<<"\n 3. PURVA EXPRESS\n"; 

cout<<"\t Train Number :8423"; 

cout<<"\t Arrival at 02:20"; 

cout<<"\t Departure at 02:45"; 

 

cout<<"\n\n DO YOU WANT TO CONTINUE......(Y/y||N/n):"; 

char ch; 

cin>>ch; 

if(ch=='Y'||ch=='y') 

{ 

second(); 

} 

else if(ch=='N'||'n') 

{ 

exit(0); 

} 

} 

break; 

case 10: 

second(); 

break; 

case 11: 

exit(0); 

break; 

default: 

cout<<"\n\t\t YOU HAVE ENTERED A WRONG!!!! CHOICE \n"; 

} 

} 

void second() 

{ 

clrscr(); 

reserve a; 

int choice; 

cout<<"\n\n\n\t\t\t......MAIN MENU.......\n\n\n"; 

cout<<"\t\t\t 1.TRAIN AVAILABILITY \n\n"; 

cout<<"\t\t\t 2. FARE ENQUIRY \n\n"; 

cout<<"\t\t\t 3. RESERVATION \n\n"; 

cout<<"\t\t\t 4. DETAILS OF 'RESERVED' PASSENGERS \n\n"; 

cout<<"\t\t\t 5. EXIT \n\n"; 

cout<<"\t\t\t ENTER YOUR CHOICE......:"; 

cin>>choice; 

switch(choice) 

{ 

case 1: 

trnavailability(); 

break; 

case 2: 

a.fareenquiry(); 

break; 

case 3: 

a.enter(); 

a.modify(); 

break; 

case 4: 

clrscr(); 

char ch; 

ifstream f; 

f.open("test.txt",ios::in); 

if(!f) 

cout<<"can't open the file\n"; 

while(f) 

{ 

f.get(ch); 

cout<<ch; 

} 

f.close(); 

break; 

case 5: 

exit(0); 

break; 

default: 

cout<<"\n\n\n\t\t\t......WRONG......CHOICE......!!!"; 

} 

} 

void first() 

{ 

char ch; 

cout<<"\n\n\n\n\t\t COMPUTER SCIENCE PROJECT \n\n\n\n";  

cout<<"\n\n\n\n\t\t\t Press ENTER to continue......"; 

cin.get(ch); 

} 

void main() 

{ 

clrscr(); 

first(); 

second(); 

getch(); 

} 