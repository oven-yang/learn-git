#include<iostream>

using namespace std ;

unsigned cal(unsigned m , unsigned e , unsigned n)// return (m^e)%n 
{
	return e == 0 ? 1%n : (m%n)*(cal(m,e-1,n)%n)%n ;
}

int main()
{
	cout<<cal(cal(88 , 7 , 187) , 23 , 187)<<endl ;
	return 0 ;
}
