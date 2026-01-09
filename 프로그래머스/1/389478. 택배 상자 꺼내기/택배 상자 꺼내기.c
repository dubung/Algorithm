#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int w, int num) {
    int answer = 0;
    
    int iLastBit = 1, iNumBit = 1;
    
    bool isLastLeftToRight = ((n-1 ) / w) % 2 == 0 ? true : false;
    bool isNumLeftToRight = ((num - 1) / w) % 2 == 0 ? true : false;
    
    int lastRow =  ((n)  / w) + ((n % w == 0) ? -1 : 0);
    int numRow = ((num) / w) + ((num % w == 0) ? -1 : 0);
    
    if(isLastLeftToRight){
        for(int i = 1; i < w; i++)
            iLastBit*=2;
        
        for(int i = 0; i < (n-1) % w;i++ )
            iLastBit = (iLastBit >> 1) | iLastBit;
    }
    else{ 
        for(int i = 0;i < (n-1) % w;i++ )
            iLastBit = (iLastBit << 1) | iLastBit;
    }
    
    if(isNumLeftToRight){
        for(int i = 1; i < w; i++)iNumBit*=2;
            iNumBit = (iNumBit >> (num - 1) % w);
        
    }
    else{
        iNumBit = (iNumBit << (num - 1) % w );
    }
    answer = lastRow - numRow ;
    if(iLastBit & iNumBit) answer++; 
    if(lastRow == numRow) answer= 1;
    printf("%d %d", iLastBit, iNumBit);
    return answer;
}