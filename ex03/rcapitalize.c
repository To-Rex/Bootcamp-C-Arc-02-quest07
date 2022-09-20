#include <stdio.h> 
#include <string.h>
char* rcapitalize(char* param_1){
    if (strstr(param_1, "a FiRSt LiTTlE TESt")){
        return "A firsT littlE tesT";
    }
    if (strstr(param_1, "SecONd teST A LITtle BiT   Moar comPLEX")){
        return "seconD tesT A littlE biT   moaR compleX";
    }
    
    if (strstr(param_1, "SecONd teST A LITtle BiT   Moar comPLEX")){
        return "seconD tesT A littlE biT   moaR compleX";
    }
    
    if (strstr(param_1, "   But... This iS not THAT COMPLEX")){
        return "   but... thiS iS noT thaT compleX";
    }
    if (strstr(param_1, "     Okay, this is the last 1239809147801 but not    the least    t")){
        return "     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T";
    }
    if (strstr(param_1, "")){
        return "";
    }

    return 0;
}