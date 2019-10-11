#include <stdio.h>

void gp(int a, int b){    //-24, -28
	int c = 0;           //-12,
	int d = 0;           //-16
	a = 2;              //-24
	c = 1;              //-12
	int e = 3;          //-4

	//L2 Line 52
	if(c >= b){
		//L10 Line 60
		return;
	}else{
		//Line56
		b *= b;
		if( e < b){
			//L9 Line13
			d = 1;
			int f = 0;         //-8
			//L3
			if(f < c){
				//L6   eax == e == 3, edx == f ==0 == rcx rdx == a

				a = a + 4*f;    //ecx == a //f == 0
                                //edx = f
                int e = f / a;               //divided by a
				if(e != 0 ){
					//L4
					f = f + 1;
				}else{
					d = 0;
					//L5
					if(d == 0){
						//L7
						e = e + 2;
					}else{
						//Line 41
						//eax = c    cltq = convert to quad word
						//rax = a

					}
				}
			}
		}
	}
	//return 0;
}