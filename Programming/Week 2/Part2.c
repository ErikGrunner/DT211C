/*Erik Grunnér
25/09/2017
Labs 2 */

#include <stdio.h>

int main ()
{
    float width,depth,height,surface,vol;
    
    width = 2.5;
    height = 10;
    depth = 11.5;
    surface = (width*depth*2)+(width*height*2)+(height*depth*2);
    vol = width*depth*height;
    
    printf("The Volume is %f.\n The Surface Area is %f.",vol,surface);
    
    
    getchar();
    return 0;
}