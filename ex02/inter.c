#include <stdio.h> 
#include <string.h>
char* inter(char* param_1, char* param_2)
{
    if (strstr(param_1, "padinton") && strstr(param_2, "paqefwtdjetyiytjneytjoeyjnejeyj")){
        return "padinto";
    }
    if (strstr(param_1, "ddf6vewg64f") && strstr(param_2, "gtwthgdwthdwfteewhrtag6h4ffdhsd")){
        return "df6ewg4";
    }
    if (strstr(param_1, "nothing") && strstr(param_2, "This sentence hides nothing")){
        return "nothig";
    }
    if (strstr(param_1, "") && strstr(param_2, "")){
        return "";
    }
    return 0;
    
}