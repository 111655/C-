#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<unistd.h>


using namespace std;

char input[126];

int main()
{
    system("cls");
    cout<<"\t\t\t WELCOME IN IA CHAT BOT\n\n";
    cout<<"\t\t\t    START CHATTING\n\n\n\n";
    while(1)
    {
        
        gets(input);
        sleep(2);

        if(strcmp(input,"exit")==0)
        {
            //system("cls");
            printf("ok byy\n");
            break;
        }
        else if(strcmp(input,"hi")==0)
        {
        	
            printf("\t\t\t\t\t\t hello\n");

        }
        else if(strcmp(input,"kaise ho")==0)
        {
            cout<<"\t\t\t\t\t\t mai thik hu"<<endl;
            cout<<"\t\t\t\t\t\t or tum kaise ho"<<endl;
        }
        else if(strcmp(input,"mai bhi thik hu")==0)
        {
            cout<<"\t\t\t\t\t\t acchi baat hai"<<endl;
        }
        else if(strcmp(input,"eek baat puche")==0)
        {
        	cout<<"\t\t\t\t\t\t haa pucho"<<endl;
		}
		
        else if(strcmp(input,"tumhara naam kya hai")==0)
        {
            cout<<"\t\t\t\t\t\t Amanda"<<endl;
            cout<<"\t\t\t\t\t\t or tumhara"<<endl;
        }
        else if(strcmp(input,"nahi batayenge")==0)
        {
            cout<<"\t\t\t\t\t\t kyu"<<endl;
            cout<<"\t\t\t\t\t\t par ye tho chetting hai"<<endl;
        }
        else if(strcmp(input,"kya cheat kiye")==0)
        {
            cout<<"\t\t\t\t\t\t mera name puch liye or"<<endl;
            cout<<"\t\t\t\t\t\t appna name nahi batate"<<endl;
        }
        else if(strcmp(input,"mera naam jaan kar kya karogi")==0)
        {
            cout<<"\t\t\t\t\t\t tho tum mera naam jaan kar"<<endl;
            cout<<"\t\t\t\t\t\t kya koroge"<<endl;
        }
        else if(strcmp(input,"kya kar rahi ho")==0)
        {
            cout<<"\t\t\t\t\t\t tumse chatting"<<endl;
            cout<<"\t\t\t\t\t\t or tum"<<endl;
        }
        else if(strcmp(input,"kuch nahi buss tumse baat")==0)
        {
            cout<<"\t\t\t\t\t\t oooo"<<endl;
            cout<<"\t\t\t\t\t\t lagta hai kuch soch rahe ho"<<endl;
            cout<<"\t\t\t\t\t\t kya soch rahe ho"<<endl;
        }
        else if(strcmp(input,"kuch nahi")==0)
        {
            cout<<"\t\t\t\t\t\t nahi bataoge"<<endl;
            cout<<"\t\t\t\t\t\t thik hai"<<endl;
        }
        else if(strcmp(input,"kuch nahi soch rahe pagal")==0)
        {
            cout<<"\t\t\t\t\t\t thik hai mat batao"<<endl;
        }
        else if(strcmp(input,"bata de ")==0)
        {
            cout<<"\t\t\t\t\t\t haa"<<endl;
            cout<<"\t\t\t\t\t\t batane me koye problem hai"<<endl;
            cout<<"\t\t\t\t\t\t tho rahane do"<<endl;
        }
        else if(strcmp(input,"nahi bata rahe hai")==0)
        {
            cout<<"\t\t\t\t\t\t huuu"<<endl;
        }
        else if(strcmp(input,"mere se friendship karogi")==0)
        {
            cout<<"\t\t\t\t\t\t ..........."<<endl;
            cout<<"\t\t\t\t\t\t aab tak friend nahi banaye ho "<<endl;
            cout<<"\t\t\t\t\t\t mujhe"<<endl;
        }
        else if(strcmp(input,"matlab nahi samjhe")==0)
        {
            cout<<"\t\t\t\t\t\t mat samjho"<<endl;
        }
        else if(strcmp(input,"please bata bhi do")==0)
        {
            cout<<"\t\t\t\t\t\t ye sab batane ka chij hai, "<<endl;
            cout<<"\t\t\t\t\t\t mai tho tumhe friend hi  "<<endl;
            cout<<"\t\t\t\t\t\t maan rahi thi"<<endl;
        }
        else if(strcmp(input,"succhi me")==0)
        {
            cout<<"\t\t\t\t\t\t haaa"<<endl;
            cout<<"\t\t\t\t\t\t ok byy "<<endl;
            cout<<"\t\t\t\t\t\t baad me baat karti hu"<<endl;
        }
        else if(strcmp(input,"ok byy")==0)
        {
            
            cout<<"\t\t\t\t\t\t tumse baat kar ke accha laga  "<<endl;
            cout<<"\t\t\t\t\t\t byyy  "<<endl;
            break;
        }
        
        
        
    }
}
