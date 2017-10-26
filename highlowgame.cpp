#include<iostream>
#include<conio.h>
#include<stdlib.h>

const int totchan=7;
int main()
{
 int number;        
 int guess;        
 int chances=0,score=0,chanscor;        

 char ans;
 do
 {// clrscr();
   chances=score=0;
  
		  std::cout<<" Welcome to the High/Low game.";

		   std::cout<<"I will pick a random number from 0 to 100.";
   
			    	std::cout<<"You must try to guess the number.";

   //randomize();
   number=(int)(rand()%100);
   chanscor=100/totchan;        
   do
   {

	std::cout<<"What is your guess? (0 to 100) ";
     std::cin>>guess;
     if((guess<0)||(guess>100))
     {
	std::cout<<"Sorry, but your guess "<<guess<<"must be from 0 to 100.";
     }
     else if(guess < number)
     {
	std::cout<<guess<<" is low.Try a higher number.";
     }
     else if(guess > number)
     {
	std::cout<<guess<<" is high.Try a lower number.";
     }
     else		
     {			
	std::cout<<guess<<" is correct. Congratulations!";
	score=chanscor*(totchan-chances);   

	
		std::cout<<"Your score is "<<score;
        break;
     }
     chances++;
     if(guess!=number)


 std::cout<<"Now you have "<<totchan-chances<<"chances left.";
     if(chances==totchan)
	 {

 std::cout<<"Only "<<totchan<<"chances are allowed.Better luck next time";

	   
std::cout<<"The actual number was "<<number;
	   break;
	 }
     }while (guess!=number);
     

std::cout<<"Thank you for playing High/Low!";
     std::cout<<"Want to play it again? (y/n)...";
     std::cin>>ans;
   }while(ans=='y' || ans=='Y');
   return 0;
 }