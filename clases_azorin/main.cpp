#include <iostream>
using namespace std;

string nombre;
char genero; 
char pokemon; 
bool dowhileflag = false; 

int main(){

    cout<< "Ingrese Su Nombre\n"; 
    cin>> nombre; 
    do {
        cout<< "Ingrese Su Genero\n";
        cin>> genero; 
        if ( genero != 'M' &&  genero != 'F' &&  genero != 'N' != genero != 'f' &&  genero != 'm' &&  genero != 'n' ){
            cout<< "No ingresaste un genero correcto\n"; 
            dowhileflag = true;
        }
       else  dowhileflag = false;
       
    }    while(dowhileflag); 
    
    cout<< "¿Qué pokemón elegis?\n";
    cout<< "Charmander (tipo fuego)Inserte C\n";
    cout<< "Squartle (tipo agua)Inserte S \n";
    cout<< "Bulbasaur (tipo planta)Inserte B\n";
    cin>> pokemon; 
    printf("                                           /\n");
    printf("                        _,.------....___,.' ',.-.\n");
    printf("                     ,-'          _,.--\"        |\n");
    printf("                   ,'         _.-'              .\n");
    printf("                  /   ,     ,'                   `\n");
    printf("                 .   /     /                     ``.\n");
    printf("                 |  |     .                       \\.\\\n");
    printf("       ____      |___._.  |       __               \\ `.\n");
    printf("     .'    `---\"\"       ``\"-.--\"'`  \\               .  \\\n");
    printf("    .  ,            __               `              |   .\n");
    printf("    `,'         ,-\"'  .               \\             |    L\n");
    printf("   ,'          '    _.'                -._          /    |\n");
    printf("  ,`-.    ,\".   `--'                      >.      ,'     |\n");
    printf(" . .'\\'   `-'       __    ,  ,-.         /  `.__.-      ,'\n");
    printf(" ||:, .           ,'  ;  /  / \\ `        `.    .      .'/\n");
    printf(" j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /\n");
    printf("/ L:_  |                 .  \"' :_;                `.'.'\n");
    printf(".    \"\"'                  \"\"\"\"\"'                    V\n");
    printf(" `.                                 .    `.   _,..  `\n");
    printf("   `,_   .    .                _,-'/    .. `,'   __  `\n");
    printf("    ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  .\n");
    printf("   /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |\n");
    printf("  .   _  `\"\"'--.._____..--\"   ,             '         |\n");
    printf("  | .\" `. `-.                /-.           /          ,\n");
    printf("  | `._.'    `,_            ;  /         ,'          .\n");
    printf(" .'          /| `-.        . ,'         ,           ,\n");
    printf(" '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.'\n");
    printf(" `\"^--'..'   '-`-^-'\"--    `-^-'`.''\"\"\"\"\"`.,^.`.--' mh\n");
    printf("\n");
    printf("\n");
    if ( genero != 'S' &&  genero != 'C' &&  genero != 'B' != genero != 'b' &&  genero != 's' &&  genero != 'c'){
                   
        }
      
    
    
return 0;
}