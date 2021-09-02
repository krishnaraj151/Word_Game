#include<iostream>
using namespace std;
string fixingcharacter(int i)
{
	string s[10]={"WHATSAPP","BROWSER","HISTORY","GOOGLE","YOUTUBE","CRICKET","CHAMPION","INDIA","TAMILNADU","CHARGE"};
	return s[i];
}
void fixinghidden(string s)
{
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		if(i==0||i==n-1||i==n/2)
		{
			cout<<"_";
		}
		else
		{
			cout<<s[i];
		}
	}
	cout<<endl;
}
void guessinghidden(string s)
{
	cout<<"Enter uppercase letters only!!"<<endl;
	int n=s.size();
	int count=0;
	for(int i=0;i<n;i++)
	{
		x:
			if(count>=3)
			{
				cout<<"sorry!!you have reached max number of attempts!"<<endl;
				break;
			}
			if(i==0||i==n-1||i==n/2&&count<3)
			{
				char k;
				cin>>k;
				if(s[i]==k)
				{
					cout<<"Entered letter was correct...move on next letter"<<endl;
				}
				else
				{
					cout<<"entered letter is wrong... enter another letter"<<endl;
					count++;
					goto x;
				}
			}
	}
		
		cout<<"move to next question:))"<<endl;
}
int main()
{
	cout<<"---HANGMAN---"<<endl;
	cout<<"welcome to the game!"<<endl<<endl;
	cout<<"This game is word related game,we have provided you a set of word and that word you will give some hidden character,you have to find the character "<<endl<<endl;
	cout<<"Lets start the game:)"<<endl<<endl;
	int n;
	cout<<"Enter the number of words to find:[maximum-10]:"<<endl<<endl;
	cin>>n;
	int score=0;
	for(int i=0;i<n;i++)
	{
		string s=fixingcharacter(i);
		fixinghidden(s);
		guessinghidden(s);
		score++;
	}
	cout<<score<<endl;
	
	
}
