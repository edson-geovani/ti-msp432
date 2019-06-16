#include "msp.h"

void delayMs(int n){
	int i;
	for( i = 0; i < n * 750; i++)
		;	
}

int main(void){
	// Select P2 as general I/O
	P2->SEL1 &= ~0x02; 			 
	P2->SEL0 &= ~0x02;
	
	// Set P2 as output pin
	P2->DIR |=0x02;						
		
	while(1){
		
		//Turn on P2.1  green LED
		P2->OUT |=0x02;				
		delayMs(500);
		
		//Turn off P2.1  green LED
		P2->OUT &=~0x02;
		delayMs(500);
	}
}


