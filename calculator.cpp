#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
	char d;
	float valueOne;
	float valueTwo;
	char operatorr;
	float answer;
	int i;
	for(i=0;i<10;i++){
		
	
	cout<<"\nEnter calculation:\n\n";	cin>>valueOne>>operatorr>>valueTwo;
	


switch(operatorr)
{
case '/': answer = valueOne/valueTwo;
break;
case '*': answer = valueOne*valueTwo;
break;
case '+': answer = valueOne+valueTwo;
break;
case '-': answer = valueOne-valueTwo;
break;
case '^': answer = pow(valueOne,valueTwo);
break;
case ' ': answer = sqrt(valueTwo);
break;
default: 
 break;
}
cout<<"\n"<<valueOne<<operatorr<<valueTwo<<"="<<answer<<"\n\n";
system("color a");
	cout<<"\n\tif you want to exit press:- SHIFT+~ and enter \n\n\n";
		if(d=='~')
		break;

}
return 0;
}
