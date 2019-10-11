#include <stdio.h>

void x(int a, int b){      //a = -24, b = -32
	//rax = a = eax
	int c = a;             //c = -4
	//b = rax = edx
	a = b;
	b = c;    //-4rbp -> edx
}

void S(int a, int d){       //a = -24???, d = -28
	int c = 1;                //-4
	//L3
	//eax = a, 
	if(c < d){
		//L7
		//eax == c
		int e = c;  //e = -8
		//L4
		if(e <= 0){
			//L5
			c = c + 1;
		}else{
			//Line 53
			//e = eax= rax  convert to quad word
            e = e << 2;    //salq e = rax
            int b = e - 4;     //rdx = b
            e = a;        //movq -24rbp rax = a
            a = a + b;    //a=rax, b = rdx
            //edx = a
            //e = eax
            //4rax = rcx    
            //leaq 4e = rcx
            //rax = a
            //rcx = 4a
            
            a = 4*e + a;   //addq rcx = 4e, rax = a
            //eax = a
            if( e < a){
            	//L6
            	//eax = e
            	e = e << 2;
            	//rdx = e - 4
            	//rax = a
            	e = a + e;
            	//eax = e    rcx = 4e
            	a = a + 4 * e;  //rax = a
            	//rsi = rdx = e-4
            	//rdi = rax = a
            	x(a, e);
            	a = a + 1;
            	e = e - 1;
            }
		}
	}
}