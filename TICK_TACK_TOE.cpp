//============================================================================
// Name        : vj
// Author      : aaa
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;
static char box[5][7],show[5][7],aa[10],b[10];
char choice,value_;
int i=0,j=0,no=1,end=0,n=1;
int only_display();
int display_matrix(char [5][7]);
int win_condn();
int cases (int,int);
int while_loop();
time_t t;
int main() {cout<<"\n\n **  THIS  IS  2 PLAYER  MATCH  **\n";
	cout<<"\nENTER PLAYER 1  NAME: \n--> ";
	cin>>aa;
	cout<<endl<<"ENTER PLAYER 2  NAME: \n--> ";
	cin>>b;
	cout<<endl<<" YOU HAVE TO ENTER ONLY 'X' OR 'O'\n";
	cout<<aa;
	cout<<" will enter 'X'.\n";
	cout<<b;
	cout<<" will enter 'O'.\n";
	cout<<endl<<"ENTETR SPECIFIC NUMBER ( 1 to 9) TO MARK THAT PERTICULAR BLOCK\n"<<endl;

	only_display();
		//system("CLS");
	do{
		if(no<10)
		{

			while_loop();
		}
		else
				{
					cout<<"\n\tMATCH DRAW :  \"***TRY AGAIN***\" ";
					return 0;
				}
		display_matrix(box);
		end=win_condn();
		if (end==1)
		{cout<<"you won $500 collect it from college fine....";
			return 0;
		}
	}while(1);

	return 0;}
int only_display()
{

	show[0][0]='1';show[1][0]='-';show[2][0]='4';show[3][0]='-';show[4][0]='7';
	show[0][1]=' ';show[1][1]='-';show[2][1]=' ';show[3][1]='-';show[4][1]=' ';
	show[0][2]='|';show[1][2]='|';show[2][2]='|';show[3][2]='|';show[4][2]='|';
	show[0][3]='2';show[1][3]='-';show[2][3]='5';show[3][3]='-';show[4][3]='8';
	show[0][4]='|';show[1][4]='|';show[2][4]='|';show[3][4]='|';show[4][4]='|';
	show[0][5]=' ';show[1][5]='-';show[2][5]=' ';show[3][5]='-';show[4][5]=' ';
	show[0][6]='3';show[1][6]='-';show[2][6]='6';show[3][6]='-';show[4][6]='9';

	cout<<"SEE THIS BOX "<<endl<<endl;
	for(i=0;i<5;i++)
		{
			for(j=0;j<7;j++)
			{
				cout<<show [i][j];
		    }

	cout<<endl;
		}
cout<<"\t*GAME STARTED*\n";

	return 0;
}
int display_matrix(char b[5][7])
{
	for(i=0;i<5;i++)
	{
		for(j=0;j<7;j++)
		{
			if(b[i][j]=='x')
			{
				cout<<b[i][j];
			}
			else if(b[i][j]=='o')
			{
				cout<<b[i][j];
			}
			else
			{
				b[i][j]=' ';
				if(j==2||j==4)
				{
					b[i][j]='|';}
				else if(i==1||i==3)
				{b[i][j]='-';}

				cout<<b[i][j];
			}
		}
		cout<<endl;
	}
	return 0;
}


int while_loop()
{
if(n%2==1)
	{cout<<aa;n++;}
else
	{cout<<b;n++;}
cout<<" enter number: ";
	cin>>choice;
	switch(choice)
	{
		case '1' :{i=0;j=0;
		        cases (i,j);
		        break;
		       }
		case '2' :{i=0;j=3;
		 cases (i,j);
			        break;
			       }
		case '3' :{i=0;j=6;
		 cases (i,j);
			        break;
			       }
		case '4' :{i=2;j=0;
		 cases (i,j);
			        break;
			       }
		case '5' :{i=2;j=3;
		 cases (i,j);
			        break;
			       }
		case '6' :{i=2;j=6;
		 cases (i,j);
			        break;
			       }
		case '7' :{i=4;j=0;
		 cases (i,j);
			        break;
			       }
		case '8' :{i=4;j=3;
		 cases (i,j);
			        break;
			       }
		case '9' :{i=4;j=6;
		 cases (i,j);
			        break;
			       }
		default:
			cout<<"wrong entry";
		}
		return 0;
	}
int win_condn()
{
	for (i=0;i<5;i++)

	{
	for (j=0;j<7;j++)
	{
		if(box[i][j]==box[i+2][j])
		{
			if((box[i+2][j]==box[i+4][j])&&box[i+2][j])
			{
				{
				if(box[i+2][j]=='x')
				{
					cout<<aa<<" wins"<<endl;
					end=1;
					return 1;
				}
				else if(box[i+2][j]=='o')
				{
					cout<<b<<" wins"<<endl;
					end=1;return 1;
				}
			}}
	}

		if(box[i][j+0]==box[i][j+3])
			{
				if(box[i][j+3]==box[i][j+6])
				{
					if(box[i][j+3]=='x')
					{
						cout<<aa<<" wins"<<endl;
						return 1;
					}
					else if(box[i][j+3]=='o')
					{
						cout<<b<<" wins"<<endl;
					return 1;
					}
				}
			}
	}
  }
	if(box[0][0]==box[2][3])
	{
		if(box[4][6]==box[2][3])
		{
			if(box[4][6]=='x')
			{
				cout<<aa<<" wins"<<endl;
				return 1;
			}
			else if(box[4][6]=='o')
			{
				cout<<b<<" wins"<<endl;
				return 1;
			}
		}
	}
	else if(box[0][6]==box[2][3])
	{
		if(box[4][0]==box[2][3])
		{
			if(box[2][3]=='x')
			{
				cout<<aa<<" wins"<<endl;
				end=1;
			}
			else if(box[2][3]=='o')
			{
				cout<<b<<" wins"<<endl;
				end=1;
			}
		}
	}

	return 0;
}
int cases (int c,int v)
{
		if(( box[c][v]!='x')&&( box[c][v]!='o'))
		{
			if(no%2==1)
		    	{
		    	box[c][v]='x';
		    	no++;
		        }
		    else
		    	{
		    	box[c][v]='o';
		    	no++;
		        }
		   }
			else
			{
				cout<<"\n **THERE IS ALREADY DEFINED VALUE** "<<endl;
				n=n-1;
			}
return 0;
}
