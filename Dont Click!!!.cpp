#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string.h>
#include <ctime>
#include <windows.h>
#include "MMSystem.h"
//function for main menu
void mathQuest(int);
void quickMath(int);
void miniGame(int);
//function for selection mathQuest function
void easyQuest(int);
void medQuest(int);
void hardQuest(int);
using namespace std;
int main()

{
	float totmark=0;
	char type,option;
	int player=0,count=0,load=0;
	
	do
	{
	// play sound
	PlaySound(TEXT("maintheme.wav"),NULL, SND_FILENAME | SND_LOOP | SND_ASYNC );	
	system("CLS");
	// welcome screen
	cout<<"W";
	Sleep(200);
	cout<<"E";
	Sleep(200);
	cout<<"L";
	Sleep(200);
	cout<<"C";
	Sleep(200);
	cout<<"O";
	Sleep(200);
	cout<<"M";
	Sleep(200);
	cout<<"E";
	Sleep(200);
	cout<<" ";
	Sleep(200);
	cout<<"T";
	Sleep(200);
	cout<<"O";
	Sleep(200);
	cout<<".";
	Sleep(200);
	cout<<".";
	Sleep(200);
	cout<<"."<<endl;
	Sleep(1000);
	system("CLS");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t *BRILLIANT MATHEMATIC CONTEST*"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t  ____________________________"<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t\t\t\tWELCOME PLAYER. THIS PROGRAM WAS MADE BY TEAM WEABOO"<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t\t\t\tPRESS ANY KEY TO CONTINUE..."<<endl;
	
	getch();
	
	do
	{
	// main menu
	system("CLS");
	cout<<endl<<"CHOOSE YOUR TYPE OF QUIZ: "<<endl<<endl<<"Type code:"<<endl;
	cout<<" (a) for MATHEMATIC QUESTION!"<<endl<<" (b) for QUICK MATH!"<<endl;
	cout<<" (c) for MINI GAMES!"<<endl<<" (d) for QUIT";
	cout<<endl<<"Type of code is: ";
	cin>>type;
	// select type of quiz
	if(type != 'a' && type != 'b' && type != 'c' && type!= 'd')
	{
	    cout<<"Wrong option, try again!"<<endl;
		system("PAUSE");
    }
	}while(type != 'a' && type != 'b' && type != 'c' && type!='d');
	
	if(type=='a'||type=='b'||type=='c')
	{
		// how many player will play
		cout<<"Enter Player: 1 2 3 4"<<endl;
		cout<<"PLAYER: ";
	    cin>>player;
	    Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
	    cout<<"There are "<<player<<" Player will be playing! Get READY EVERYONE!"<<endl;
	    system("PAUSE");
	}
	
	if(type=='a')
	{
		// display loading
		while(load<=2)
		{
			system("CLS");
		    cout<<"Loading";
			Sleep(400);
		    cout<<".";
		    Sleep(400);
		    cout<<".";
		    Sleep(400);
		    cout<<".";
		    Sleep(400);
		    cout<<".";
		    load++;
		}
		// play sound
		PlaySound(TEXT("y2supermario.wav"),NULL, SND_FILENAME | SND_LOOP | SND_ASYNC );
		// display mathQuest quiz
		mathQuest(player);
	}
	else if(type=='b')
	{
		while(load<=2)
		{
			// display loading
			system("CLS");
		    cout<<"Loading";
			Sleep(400);
		    cout<<".";
		    Sleep(400);
		    cout<<".";
		    Sleep(400);
		    cout<<".";
		    Sleep(400);
		    cout<<".";
		    load++;
		}
		// play sound
		PlaySound(TEXT("y2digimon.wav"),NULL, SND_FILENAME | SND_LOOP | SND_ASYNC );
		// display quickMath quiz
		quickMath(player);
	}
	else if(type=='c')
	{
		while(load<=2)
		{
			// display loading
			system("CLS");
		    cout<<"Loading";
			Sleep(400);
		    cout<<".";
		    Sleep(400);
		    cout<<".";
		    Sleep(400);
		    cout<<".";
		    Sleep(400);
		    cout<<".";
		    load++;
		}
		// play sound
		PlaySound(TEXT("y2tetris.wav"),NULL, SND_FILENAME | SND_LOOP | SND_ASYNC );
		// display miniGame quiz
		miniGame(player);
	}
	
	system("PAUSE");
	system("CLS");
	// choose wether try again or not
	cout<<"END OF THE SESSION HURRAYYY!!!"<<endl;
	cout<<"Do you want to try again(press y to try again)? "<<endl;
	cout<<"Insert your option: ";
	cin>>option;
    }while(option=='y' || option=='Y');
	
	return 0;
}

void mathQuest(int player)
{
	{
    char letter;
    int option,count=1,count2=1,swapped,players[4],mark[4],temp,temp2,m;
    
 do
 // main menu for mathQuest
 {  system("CLS");  
    cout<<" Choose your level of Quiz base on your IQ xD:"<<endl;
    cout<<"1. Easy. low IQ"<<endl;
    cout<<"2. Medium. average IQ"<<endl;
    cout<<"3. Hard. High level IQ"<<endl;
    cout<<"Which level you ARE?"<<endl;
    // choose difficulty
    cin>>option;  
   if (option != 1 && option != 2 && option != 3)
   {
    cout << "Wrong Option, try again!" << endl;
    system("PAUSE");
   }

  } while (option != 1 && option != 2 && option != 3);
    
    do
    {
    if(option!=1 && option!=2 && option!=3)
    {
    	cout<<"Oppsss wrong option"<<endl;
    	system("PAUSE");
	}
    }while( option!=1 && option!=2 && option!=3);
    
        if(option==1)
        {
        	// question for easy
        	easyQuest(player);
        }
    
        if (option==2)
        {
        	// question for medium
            medQuest(player);
        }
        
        if (option==3)
        {
        	// question for hard
        	hardQuest(player);
        }
        count++;
}
}

        void easyQuest(int player)
        {
        	char letter;
            int totmark,players[4],mark[4];
            int mark1,counter=1,count=1,count2=1,temp=0,temp2=0,m;
        	// loop amount of player
        	while(count<=player)
        	{
        		mark1=0;
        	// question start	
		    cout<<"Player "<<count<<" READY?! "<<endl;
            cout<<"1. Solve 12+75÷3-17"<<endl;
            cout<<"A.12"<<endl;
            cout<<"B.20"<<endl;
            cout<<"C.23"<<endl;
            cout<<"D.30"<<endl;
            cin>>letter;
        
            if(letter== 'B' || letter=='b')
                mark1 = mark1+1;
            else
                mark1=mark1+0;
                
            system("CLS");
            cout<<"2. Which of the following does not have 5 as the answer?"<<endl;
            cout<<"A.100÷5-15"<<endl;
            cout<<"B.(25-20)x3"<<endl;
            cout<<"C.67-25-23-12-2"<<endl;
            cout<<"D.(14÷20)-(10÷19)"<<endl;
            cin>>letter;
            
            if(letter== 'B' || letter== 'b')
                mark1 = mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"3. Ramli bought 8 chilli sause at cost RM16.80. What is the cost of a bottle?"<<endl;
            cout<<"A.3.10"<<endl;
            cout<<"B.2.20"<<endl;
            cout<<"C.2.10"<<endl;
            cout<<"D.3.20 "<<endl;
            cin>>letter;
            
            if(letter=='C' || letter== 'c')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"4. Round off 0.05308 correct to three significiant figures."<<endl;
            cout<<"A.0.05"<<endl;
            cout<<"B.0.053"<<endl;
            cout<<"C.0.0530"<<endl;
            cout<<"D.0.0531"<<endl;
            cin>>letter;
     
            if(letter=='A' || letter == 'a')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"5. 828÷4(9-6) "<<endl;
            cout<<"A.69 "<<endl;
            cout<<"B.827"<<endl;
            cout<<"C.3105"<<endl;
            cout<<"D.3309"<<endl;
            cin>>letter;
    
            if(letter=='A' || letter == 'a')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"6. Round off 8158 correct to three significant figures. "<<endl;
            cout<<"A.815 "<<endl;
            cout<<"B.816"<<endl;
            cout<<"C.8150 "<<endl;
            cout<<"D.8160 "<<endl;
            cin>>letter;
     
            if(letter =='B' || letter == 'b')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"7. Solve 156+76x6÷2 "<<endl;
            cout<<"A.700"<<endl;
            cout<<"B.680 "<<endl;
            cout<<"C.696"<<endl;
            cout<<"D.670"<<endl;
            cin>>letter;
        
            if(letter=='C' || letter == 'c')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"8.Encik Aiman bought 3 t-shirt for his daughter at cost RM 120. What is cost for one t-shirt?"<<endl;
            cout<<"A.RM 360.00"<<endl;
            cout<<"B.RM 41.80 "<<endl;
            cout<<"C.RM 40.00"<<endl;
            cout<<"D.RM 39.99 "<<endl;
            cin>>letter;
     
            if(letter== 'C' || letter== 'c')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"9. Factorise 4m + 9mn  "<<endl;
            cout<<"A.4m+9mn=m(4+9n)"<<endl;
            cout<<"B.4n+9mn=n(4+9m)"<<endl;
            cout<<"C.9mn+4m=m(4+9n)"<<endl;
            cout<<"D.9mn+4n=n(4+9m)"<<endl;
            cin>>letter;
        
            if(letter== 'A' || letter== 'a')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"10.Expend -5(-y + 2) "<<endl;
            cout<<"A.5y+10 "<<endl;
            cout<<"B.5y-10 "<<endl;
            cout<<"C.-5y-10 "<<endl;
            cout<<"D.-5y+10"<<endl;
            cin>>letter;
    
            if(letter=='B' || letter=='b' )
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"11. Factorise 16s+ 8 "<<endl;
            cout<<"A.16s+8=-8(s+1)"<<endl;
            cout<<"B.16s+8=8(2s+1)"<<endl;
            cout<<"C.16s+8=8(2s-1)"<<endl;
            cout<<"D.16s+8=-8(2s-1)"<<endl;
            cin>>letter;
        
            if(letter=='B' || letter=='b' )
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"12. Solve 80+80÷2x3"<<endl;
            cout<<"A.420"<<endl;
            cout<<"B.230"<<endl;
            cout<<"C.222 "<<endl;
            cout<<"D.240 "<<endl;
            cin>>letter;
    
            if(letter=='D' || letter=='d' )
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"13. Expend 4(-y+5) "<<endl;
            cout<<"A.4y+20 "<<endl;
            cout<<"B.4y-20"<<endl;
            cout<<"C.-4y+20"<<endl;
            cout<<"D.-4y-20 "<<endl;
            cin>>letter;
    
            if(letter=='C' || letter=='c' )
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"14. Solve 560w(5i)"<<endl;
            cout<<"A.2800wi"<<endl;
            cout<<"B.2800i"<<endl;
            cout<<"C.2800w"<<endl;
            cout<<"D.2800"<<endl;
            cin>>letter;
        
            if(letter=='A' || letter=='a' )
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"15. (x+y) + (y+5) + (y+5) "<<endl;
            cout<<"A.xy+5"<<endl;
            cout<<"B.y+x=+5x"<<endl;
            cout<<"C.5x+y+20 "<<endl;
            cout<<"D.x+3y+10 "<<endl;
            cin>>letter;
        
            if(letter=='D' || letter=='d' )
                mark1=mark1+1;
            else
                mark1=mark1+0;
                // process to calculate mark for each player
                players[count]=count;
		        totmark=mark1*(100/15);
		        mark[count]=totmark;
		        cout<<"Well CONGRATZ!\n"<<"Player "<<players[count]<<" MARK IS "<<mark[count]<<" %"<<endl;
		        count++;
    	
    	        system("PAUSE");
    	        system("CLS");
    	    }
    	    // sorting mark from highest to the lowest
    	    	temp=0,temp2=0;
    	
    	count=1;
	while(count<=player)
	{
		count2=count+1;
		while(count2<=player)
		{
			if(mark[count]<mark[count2])
			{
				temp=mark[count];
				mark[count]=mark[count2];
				mark[count2]=temp;
				
				temp2=players[count];
				players[count]=players[count2];
				players[count2]=temp2;
			}
			count2=count2+1;
		}
		count=count+1;
	}
	m=1;
	while(m<=player)
	{
		// display the winner
		cout<<"RANKING!"<<endl;
		cout<<"# "<<m<<" is player "<<players[m]<<" with TOTAL MARK is: "<<mark[m]<<endl;
		m=m+1;
	}
	
	cout<<"The WINNER IS : PLAYER "<<players[1]<<endl;
	// play sound
	PlaySound(TEXT("y2finalfantasy.wav"),NULL, SND_FILENAME | SND_SYNC );
        }
            
        void medQuest(int player)
        {
        char letter;
        int totmark,players[4],mark[4];
        int mark1,count=1,count2=1,temp=0,temp2=0,m;
		
		while(count<=player)
		{
		// start question medQuest	
        cout<<"Player "<<count<<" READY?! "<<endl;	
        cout<<"1. If A2-A+0,then the inverse of A is "<<endl;
        cout<<"A.A+1"<<endl;
        cout<<"B.A "<<endl;
        cout<<"C.A-1"<<endl;
        cout<<"D.1-A"<<endl;
        cin>>letter;
    
        if(letter=='D' || letter=='d' )
           mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");
        cout<<"2.If in a frequently distribution, the mean and median are 21 and 22 repectively, then its mode is approximately "<<endl;
        cout<<"A.22.0 "<<endl;
        cout<<"B.20.5 "<<endl;
        cout<<"C.25.5 "<<endl;
        cout<<"D.24.0 "<<endl;
        cin>>letter;
        
        if(letter=='D' || letter=='d' )
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");
        cout<<"3.Let P be the point (1,0) and Q a point on the locus y2=8x.The locus of mid point of mid point of PQ is"<<endl;
        cout<<"A.y2-4x+2=0 "<<endl;
        cout<<"B.y2+4x+2=0 "<<endl;
        cout<<"C.x2+4y+2=0 "<<endl;
        cout<<"D.x2-4y+2=0"<<endl;
        cin>>letter;
        
        if(letter=='A' || letter=='a' )
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");
        cout<<"4.If the letters of SACHIN are arranged in all possible ways and these words are written out as in dictionary, the the word SACHIN appers at serial number"<<endl;
        cout<<"A. 601"<<endl;
        cout<<"B. 600"<<endl;
        cout<<"C. 603"<<endl;
        cout<<"D. 602"<<endl;
        cin>>letter;
        
        if(letter=='A' || letter=='a' )
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");
        cout<<"5.the system of equations  ax+y+z=a-1, x+ay+z=a-1, x+y+az=a-1 has no solution if a is "<<endl;
        cout<<"A.-2 "<<endl;
        cout<<"B.either-2 or 1 "<<endl;
        cout<<"C.not -2 "<<endl;
        cout<<"D.1 "<<endl;
        cin>>letter;
        
        if(letter=='A' || letter=='a' )
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");
        cout<<"6.The value of b for which the sum of the squares of the roots of the equation x²-(b-2)x-b-1=0 assume the least value is "<<endl;
        cout<<"A. 1"<<endl;
        cout<<"B. 0"<<endl;
        cout<<"C. 3"<<endl;
        cout<<"D. 2"<<endl;
        cin>>letter;
        
        if(letter=='A' || letter=='a' )
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");   
        cout<<"7.if roots of the equation x²-bx+c=0 be two consectutive intergers, then b²-4c equals "<<endl;
        cout<<"A.1 "<<endl;
        cout<<"B.0 "<<endl;
        cout<<"C.3 "<<endl;
        cout<<"D.2 "<<endl;
        cin>>letter;
        
        if(letter=='D' || letter=='d' )
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");    
        cout<<"8.If in triangle ABC the altitudes from vertices A,S,C on opposite sides are in H.P, then sin A,sin B, sin C are in"<<endl;
        cout<<"A.G.P "<<endl;
        cout<<"B.A.P "<<endl;
        cout<<"C.Arthmetic- Geometric Progression  "<<endl;
        cout<<"D.H.P "<<endl;
        cin>>letter;
        
        if(letter=='B' || letter=='b')
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");
        cout<<"9. 4500+5000-(70+30)"<<endl;
        cout<<"A.9000 "<<endl;
        cout<<"B.9500"<<endl;
        cout<<"C.9400 "<<endl;
        cout<<"D.10 000 "<<endl;
        cin>>letter;
        
        if(letter=='C' || letter=='c' )
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");    
        cout<<"10.56X55÷2+55"<<endl;
        cout<<"A.1600"<<endl;
        cout<<"B.1500 "<<endl;
        cout<<"C.1578 "<<endl;
        cout<<"D.1595 "<<endl;
        cin>>letter;
        
        if(letter=='D' || letter=='d' )
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");
        cout<<"11. Round off 0.05308 correct to three significiant figures."<<endl;
        cout<<"A.0.05"<<endl;
        cout<<"B.0.053"<<endl;
        cout<<"C.0.0530"<<endl;
        cout<<"D.0.0531"<<endl;
        cin>>letter;
        
        if(letter=='A' || letter == 'a')
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");
        cout<<"12. Factorise 16ð‘  + 8 "<<endl;
        cout<<"A.16ð‘ +8=-8(2ð‘ +1)"<<endl;
        cout<<"B.16ð‘ +8=8(2ð‘ +1)"<<endl;
        cout<<"C.16ð‘ +8=8(2ð‘ -1)"<<endl;
        cout<<"D.16ð‘ +8=-8(2ð‘ -1)"<<endl;
        cin>>letter;
        
        if(letter=='B' || letter=='b' )
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");
        cout<<"13.if both the roots of the quadratic equation x²-2kx+k-5=0 are less than 5, then k lies in the interval. Here 2 read as square"<<endl;
        cout<<"A.(5,6] "<<endl;
        cout<<"B.(6,infinite) "<<endl;
        cout<<"C.(infinite,4) "<<endl;
        cout<<"D.[4,5] "<<endl;
        cin>>letter;
        
        if(letter=='C' || letter=='c' )
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");
        cout<<"14.2x-3y=13 and 2x+y=1, then y= "<<endl;
        cout<<"A.-3 "<<endl;
        cout<<"B.-7"<<endl;
        cout<<"C.2 "<<endl;
        cout<<"D.4"<<endl;
        cin>>letter;
        
        if(letter=='A' || letter=='a' )
            mark1=mark1+1;
        else
            mark1=mark1+0;
        system("CLS");
        cout<<"15.(p+4)(2-3p)"<<endl;
        cout<<"A.8-10p-3p² "<<endl;
        cout<<"B.8+8p-3p² "<<endl;
        cout<<"C.3p²-8p+8 "<<endl;
        cout<<"D.3p²+8p+8 "<<endl;
        cin>>letter;
        
        if(letter=='A' || letter=='a' )
            mark1=mark1+1;
        else
            mark1=mark1+0;
            // process to calculate mark for each player
            players[count]=count;
		    totmark=mark1*(100/15);
		    mark[count]=totmark;
		    cout<<"Well CONGRATZ!\n"<<"Player "<<players[count]<<" MARK IS "<<mark[count]<<" %"<<endl;
		    count++;
		
    	    system("PAUSE");
    	    system("CLS");
    	}
    	// sorting mark for each player from highest to the lowest
    	temp=0,temp2=0;
    	
    	count=1;
    	    
		 while(count<=player)
	{
		count2=count+1;
		while(count2<=player)
		{
			if(mark[count]<mark[count2])
			{
				temp=mark[count];
				mark[count]=mark[count2];
				mark[count2]=temp;
				
				temp2=players[count];
				players[count]=players[count2];
				players[count2]=temp2;
			}
			count2=count2+1;
		}
		count=count+1;
	}
	m=1;
	while(m<=player)
	{
		// display the winner
		cout<<"RANKING!"<<endl;
		cout<<"# "<<m<<" is player "<<players[m]<<" with TOTAL MARK is: "<<mark[m]<<endl;
		m=m+1;
	}
	
	cout<<"The WINNER IS : PLAYER "<<players[1]<<endl;
	// play sound
	PlaySound(TEXT("y2finalfantasy.wav"),NULL, SND_FILENAME | SND_SYNC );
	system("PAUSE");
            
		}
		
		void hardQuest(int player)
		{
			// start question for hardQuest
			char letter;
            int totmark,players[4],mark[4];
            int mark1,count=1,count2=1,temp=0,temp2=0,m;
            
            while(count<=player)
            {
            cout<<"Player "<<count<<" READY?! "<<endl;
            cout<<"1.Factorize completely y²+y-6 "<<endl;
            cout<<"A.(y+3)(y-2) "<<endl;
            cout<<"B.(y+2)(y-3) "<<endl;
            cout<<"C.(y+6)(y-1) "<<endl;
            cout<<"D.(y-6)(y+1) "<<endl;
            cin>>letter;
        
            if(letter=='A' || letter== 'a')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"2.The gradient of the straight line 2x-6y=9 is "<<endl;
            cout<<"A.-2/3 "<<endl;
            cout<<"B.1/3 "<<endl;
            cout<<"C.2/3 "<<endl;
            cout<<"D.3 "<<endl;
            cin>>letter;
        
            if(letter=='B' || letter== 'b')
            mark1=mark1+1;
            else
            mark1=mark1+0;
            system("CLS");
            cout<<"3.A circle touches the x-axis and also touches the circle with centre at (0,3) and radius 2. The locus of the centre of the circle is "<<endl;
            cout<<"A.an ellipse "<<endl;
            cout<<"B.a circle "<<endl;
            cout<<"C. hyperbola"<<endl;
            cout<<"D. a parabola "<<endl;
            cin>>letter;
        
            if(letter=='D' || letter== 'd')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"4. Round off 0.05308 correct to three significiant figures."<<endl;
            cout<<"A.0.05"<<endl;
            cout<<"B.0.053"<<endl;
            cout<<"C.0.0530"<<endl;
            cout<<"D.0.0531"<<endl;
            cin>>letter;
        
            if(letter=='A' || letter == 'a')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"5.Simplify the expression 2(a -3) + 4b - 2(a -b -3) + 5"<<endl;
            cout<<"A.6a + 5 "<<endl;
            cout<<"B. 6b + 5 "<<endl;
            cout<<"C.6b - 5 "<<endl;
            cout<<"D.-6b+5 "<<endl;
            cin>>letter;
        
            if(letter=='B' || letter== 'b')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"6.Solve the equation 5(- 3x - 2) - (x - 3) = -4(4x + 5) + 13"<<endl;
            cout<<"A.0=0 "<<endl;
            cout<<"B.16x=2x "<<endl;
            cout<<"C.20x-4"<<endl;
            cout<<"D.x=4"<<endl;
            cin>>letter;
        
            if(letter=='A' || letter== 'a')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"7.If x <2, simplify |x - 2| - 4|-6| "<<endl;
            cout<<"A.x+22"<<endl;
            cout<<"B.x+43"<<endl;
            cout<<"C.-x+33 "<<endl;
            cout<<"D.- x -22 "<<endl;
            cin>>letter;
        
            if(letter=='D' || letter== 'd')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"8.Given the equation 2x - 4y = 9" <<endl;
            cout<<"A.x = 9 / 2  "<<endl;
            cout<<"B.x = 9 "<<endl;
            cout<<"C.x = 10 "<<endl;
            cout<<"D.x = 12/3"<<endl;
            cin>>letter;
        
            if(letter=='A' || letter== 'a')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"9.The equation to solve is given by |-2x + 2| -3 = -3" <<endl;
            cout<<"A.x = 1 "<<endl;
            cout<<"B.x = 10 "<<endl;
            cout<<"C.x = 3 "<<endl;
            cout<<"D. x = 4 "<<endl;
            cin>>letter;
        
            if(letter=='A' || letter== 'a')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"10.The value of x + x(x^2) when x = 2"<<endl;
            cout<<"A.10 "<<endl;
            cout<<"B.16 "<<endl;
            cout<<"C.18"<<endl;
            cout<<"D.36 "<<endl;
            cin>>letter;
        
            if(letter=='A' || letter== 'a')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"11. 12X12(12)+178"<<endl;
            cout<<"A.200 "<<endl;
            cout<<"B.215 "<<endl;
            cout<<"C.214 "<<endl;
            cout<<"D.220"<<endl;
            cin>>letter;
        
            if(letter=='C' || letter== 'c')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"12.23X5÷2(4+2)"<<endl;
            cout<<"A.435"<<endl;
            cout<<"B.345 "<<endl;
            cout<<"C.543 "<<endl;
            cout<<"D.350"<<endl;
            cin>>letter;
        
            if(letter=='B' || letter== 'b')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"13.Factorise 5y=36-y²"<<endl;
            cout<<"A. y =  5 , y = -4 "<<endl;
            cout<<"B. y = 5 , y = 2 "<<endl;
            cout<<"C. y = 4 , y = -9"<<endl;
            cout<<"D. y = -4 , y = 9"<<endl;
            cin>>letter;
        
            if(letter=='C' || letter== 'c')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"14. 6X6(89)+2y"<<endl;
            cout<<"A. 3204+2y"<<endl;
            cout<<"B. 3206y"<<endl;
            cout<<"C. 3204-2y"<<endl;
            cout<<"D. -3206y"<<endl;
            cin>>letter;
        
            if(letter=='A' || letter== 'a')
                mark1=mark1+1;
            else
                mark1=mark1+0;
            system("CLS");
            cout<<"15. If A2-A+0,then the inverse of A is "<<endl;
            cout<<"A.A+1"<<endl;
            cout<<"B.A "<<endl;
            cout<<"C.A-1"<<endl;
            cout<<"D.1-A"<<endl;
            cin>>letter;
        
            if(letter=='D' || letter== 'd')
                mark1=mark1+1;
            else
                mark1=mark1+0;
                // process to calculate mark for each player
                players[count]=count;
		        totmark=mark1*(100/15);
		        mark[count]=totmark;
		        cout<<"Well CONGRATZ!\n"<<"Player "<<players[count]<<" MARK IS "<<mark[count]<<" %"<<endl;
		        count++;
    	
    	        system("PAUSE");
    	        system("CLS");
			}
			// sorting mark frome highest to the lowest
			temp=0,temp2=0;
    	
    	count=1;
    	        while(count<=player)
	{
		count2=count+1;
		while(count2<=player)
		{
			if(mark[count]<mark[count2])
			{
				temp=mark[count];
				mark[count]=mark[count2];
				mark[count2]=temp;
				
				temp2=players[count];
				players[count]=players[count2];
				players[count2]=temp2;
			}
			count2=count2+1;
		}
		count=count+1;
	}
	m=1;
	while(m<=player)
	{
		// display the winner
		cout<<"RANKING!"<<endl;
		cout<<"# "<<m<<" is player "<<players[m]<<" with TOTAL MARK is: "<<mark[m]<<endl;
		m=m+1;
	}
	
	cout<<"The WINNER IS : PLAYER "<<players[1]<<endl;
	// play sound
	PlaySound(TEXT("y2finalfantasy.wav"),NULL, SND_FILENAME | SND_SYNC );
	system("PAUSE");
		}

void quickMath(int player)
{
	int option,num1,num2,counter=0,answer,mark1=0,totmark;
	int sum,players[4],mark[4],count=1,count2=1,swapped,temp,temp2,m;
	// welcome menu for quickMath
    system("CLS");    
    cout<<"2 plus 2 IS 4 minus 1 DATS 3 QUICK MATH!\nWelcome to QUICK MATH PLAYERS!\n\n"<<endl;
    cout<<"Instruction: 1) You need to answer the question correctly to get mark."<<endl;
    cout<<"\t     2) You will be given 10 multiply quick question."<<endl;
    cout<<"\t     3) Compete with other players and see who better at MATHEMATIC."<<endl;
    cout<<"Press any key to continue..."<<endl;
    
    getch();
    system("CLS");
  
   do
  {
  	// main menu
    system("CLS");

   cout << "Welcome to QUICK MATH! Choose Difficulty: " << endl <<
    "1) Easy? Meh..." << endl << "2) Medium. Heh you got some Guts" << endl << "3) Hard? Seriosly? thats INSANE!" << endl <<
    "Pick an option 1, 2 or 3: ";
   cin >> option;
   if (option != 1 && option != 2 && option != 3)
   {
    cout << "Wrong Option, try again!" << endl;
    system("PAUSE");
   }

  } while (option != 1 && option != 2 && option != 3);
 
   while(count<=player)
   {
   	    Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
   	    cout<<"Player "<<count<<" READY! \n\n"<<endl;
   	    counter=0;
   	    mark1=0;
   	    
   	    while(counter<30)
		{
    	srand(time(0));
    	if(option==1)
    	{
    		// random any number for the question
    		num1= 1 + (rand() % 10);
    		num2= 1 + (rand() % 10);
		}
    	else if(option==2)
    	{
    		// random any number for the question
    		num1= 1 + (rand() % 20);
    		num2= 1 + (rand() % 20);
		}
    	else if(option==3)
    	{
    		// random any number for the question
    		num1= 1 + (rand() % 50);
    		num2= 1 + (rand() % 50);
		}
		
		    // process the question
			sum=num1*num2;
			cout<<num1<<" X "<<num2<<" = ";
			cin>>answer;
				
			if(answer==sum)
			{
				cout<<"Correct!"<<endl;
				mark1=mark1+1;
			}
				
		    else if(answer!=sum)
		    {
			cout<<"Wrong!"<<endl;
			mark1=mark1+0;	
			}
			counter++;
		}
		    // process to calculate mark for each player
		    players[count]=count;
		    totmark=mark1*(100/30);
		    mark[count]=totmark;
		    cout<<"Well CONGRATZ!\n"<<"Player "<<players[count]<<" MARK IS "<<mark[count]<<" %"<<endl;
		
		count++;
    	
    	system("PAUSE");
    	system("CLS");	
    }
    // sorting mark from highest to the lowest
    temp=0,temp2=0;
    	
    	count=1;
	while(count<=player)
	{
		count2=count+1;
		while(count2<=player)
		{
			if(mark[count]<mark[count2])
			{
				temp=mark[count];
				mark[count]=mark[count2];
				mark[count2]=temp;
				
				temp2=players[count];
				players[count]=players[count2];
				players[count2]=temp2;
			}
			count2=count2+1;
		}
		count=count+1;
	}
	m=1;
	while(m<=player)
	{
		// display the winner
		cout<<"RANKING!"<<endl;
		cout<<"# "<<m<<" is player "<<players[m]<<" with TOTAL MARK is: "<<mark[m]<<endl;
		m=m+1;
	}
	
	cout<<"The WINNER IS : PLAYER "<<players[1]<<endl;
	// play sound
	PlaySound(TEXT("y2finalfantasy.wav"),NULL, SND_FILENAME | SND_SYNC );
}

void miniGame (int player)
{
	char play;
	int rand();
	int randomNumber,option,guess,pass,sum,players[4],mark[4],count=1,count2=1,swapped,temp,temp2,m,totmark;
	double guesses;
	// welcome for miniGame
    system("CLS");
    cout<<"Welcome to MINI GAMES! Guess Number! \n\n"<<endl;
    cout<<"Instruction: 1) You need to guess what number have been declared."<<endl;
    cout<<"\t     2) For each guesses your mark will be decreased."<<endl;
    cout<<"\t     3) In order to get many mark you need to guess less."<<endl;
    cout<<"Press any key to continue..."<<endl;
    
    getch();
    system("CLS");
  
   do
  {
   system("CLS");
   
   // main menu for miniGame
   cout << "Welcome to the Number Guesser!"<<endl<<"1) 100. LOL Easy!" << endl;
   cout<<"2) 500. IDK wether it EASY or HARD." <<endl;
   cout<<"3) 1000. AAAHHH! SO HARD!" <<endl;
    "Pick an option 1, 2 or 3: ";
   cin >> option;
   if (option != 1 && option != 2 && option != 3)
   {
    cout << "Wrong Option, try again!" << endl;
    system("PAUSE");
   }

  } while (option != 1 && option != 2 && option != 3);
    
    while(count<=player)
    {
    	srand(time(0));
    	if(option==1)
    	{
    		// declare any random number need to guess
    		randomNumber = 1 + (rand() % 100);
		}
    	else if(option==2)
    	{
    		// declare any random number need to guess
    		randomNumber = 1 + (rand() % 500);
		}
    	else if(option==3)
    	{
    		// declare any random number need to guess
    		randomNumber = 1 + (rand() % 1000);
		}
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
		Sleep(200);
		cout<<"."<<endl;
    	cout<<"Player "<<count<<" READY! \n\n"<<endl;
    	
    	guesses=1;
    	do
    	{
    		cout<<"Enter your Guess : ";
    		cin>>guess;
    		
    		if(guess<randomNumber)
    		{
    			cout<<"Your guess is too Low! "<<endl;
    			guesses++;
			}
    		
    		else if(guess>randomNumber)
    		{
    			cout<<"Your guess is too High!"<<endl;
    			guesses++;
			}
    		
		}while(guess!=randomNumber);
		// process to calculate mark for each player
		players[count]=count;
		cout<<"You guess it RIGHT! you guess it in "<<guesses<<" tries\n"<<endl;
		sum=((guesses-1)/(guesses+5))*100;
		totmark=100-sum;
		mark[count]=totmark;
		cout<<"Well CONGRATZ!\n"<<"Player "<<players[count]<<" MARK IS "<<mark[count]<<" %"<<endl;
		
		count++;
    	
    	system("PAUSE");
    	system("CLS");	
    }
    // sorting the mark form highest to the lowest
    temp=0,temp2=0;
    	
    	count=1;
	while(count<=player)
	{
		count2=count+1;
		while(count2<=player)
		{
			if(mark[count]<mark[count2])
			{
				temp=mark[count];
				mark[count]=mark[count2];
				mark[count2]=temp;
				
				temp2=players[count];
				players[count]=players[count2];
				players[count2]=temp2;
			}
			count2=count2+1;
		}
		count=count+1;
	}
	m=1;
	while(m<=player)
	{
		// display winner
		cout<<"RANKING!"<<endl;
		cout<<"# "<<m<<" is player "<<players[m]<<" with TOTAL MARK is: "<<mark[m]<<endl;
		m=m+1;
	}
	
	cout<<"The WINNER IS : PLAYER "<<players[1]<<endl;
	// play sound
	PlaySound(TEXT("y2finalfantasy.wav"),NULL, SND_FILENAME | SND_SYNC );
}

// DALAM KENANGAN AIDIL....
