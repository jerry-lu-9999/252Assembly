#include <stdio.h>

long NP = 11;
void ask(){
	puts("Press CTRL+C to exit");
}

int main(){
	ask();
	int a;
	scanf("%d", &a);
	//L7 
    do{
    	printf("");
		scanf("%d", &a);
		if (a == 0){
    	   //Line 41
    		puts("Sorry, did not understand your input. Repeating question.");
		}else if(a != 0){//line 40 L2
    	
    		if(a > 4){
    		//L4 Line 55
    		if(a <= NP){
    			//L5
    			printf("%d is just right!\n", a);
    			return 0;
    		}else{
    			//LINE56
    			puts("Whoops! That's too big. Please enter a smaller number!");
    			}
    		}else{
    		//line 48
    			puts("Whoops! That's too small. Please enter a higher number!");
    		}
    	} 
    }while(a);

}