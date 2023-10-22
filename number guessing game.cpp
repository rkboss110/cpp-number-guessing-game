#include <iostream>

using namespace std;

int main()
{
	int number = 45;
	int guessednumber;
	bool isguessed = true;
	
	do{
		cout<< "guess the number";
		cin>> guessednumber;
		
	if(number > guessednumber)
		{
			cout<<"actual number is greater than " << guessednumber << endl;
			isguessed = false;
		}
	else if (number < guessednumber)
	{
		cout <<"actual number is less than " << guessednumber << endl;
		isguessed = false;
	}
	else if (number == guessednumber)
	{
		cout << "you won!" << endl;
		
	}
	else{
		cout << "error" << endl;
		
	}
}
	while ( isguessed == false);
	

}