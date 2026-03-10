#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float celsius, fahrenheit;
float temp, convertedTemp;
int choice;
//celsius to Fahrenheit
float celsiusToFahrenheit(float celsius){
     std::cout<<"Converts Celsius To Fahrenheit: \n";
     return((celsius*9.0/5.0)+32.0);
}

//Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit){
     std::cout<<"Converts Fahrenheit to Celsius: \n";
     return(convertedTemp=(fahrenheit-32.0)*5.0/9.0);
}

 int main() {
     
	 cout<<"To convert temp:enter no. 1 or 2, 1 for C to F, 2 for F to C "<<endl;
	 std::cout<<fixed<<setprecision(2)<<endl;
         
        cin>>choice;
 if(choice==1){
     cout<<"enter temp in celsius: "<<endl;
     cin>>temp;

	 convertedTemp=celsiusToFahrenheit(temp);
     cout<<temp<<"Fahrenheit is equal to: "<<convertedTemp<<endl;

 }else if(choice==2){
	 cout<<"enter temp in fahrenheit: "<<endl;
	 cin>>temp;
	 convertedTemp=fahrenheitToCelsius(temp);
	 cout<<temp<<"Celsius is equal to: "<<convertedTemp<<endl;

  }else if (choice>=3&&choice<=0){
	  cout<<"******Exiting Program******"<<endl;
  }
   cout<<"******Exiting Program******"<<endl;
 }
