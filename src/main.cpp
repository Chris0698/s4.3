#include <mbed.h>
#include <C12832.h>

// Using Arduino pin notation
C12832 lcd(D11, D13, D12, D7, D10);

int main()
{
  /*
    int j=0;
    lcd.cls();
    lcd.locate(0,0);
    lcd.printf("mbed application shield!");
    lcd.locate(0,10);
    lcd.printf("char %dx%d : %dx%d pixels",
               lcd.columns(), lcd.rows(),
               lcd.width(), lcd.height() );
    lcd.circle(100, 20, 10, 1);

    while(true) {
        lcd.locate(0,20);
        lcd.printf("Counting : %4d",j);
        j++;
        wait(1.0);
    }
    */

    //int j=0;
    lcd.cls();
    lcd.locate(0,0);    //top of the board
    lcd.printf("Hello People i am a board");  //Text

    lcd.locate(0,10);   //New line
    lcd.printf("I like to draw circles!");
    for(int i=0; i<40; i+= 10)
    {
      lcd.fillcircle(i+20, 20, 5,1);
    }

    lcd.rect(0,0 , 125, 30, 1);

    //lcd.character(10, 25, 56);

    /*
    void character(int x, int y, int c);

    Draw a character at a given position
        x,y position of character (top left of character)
        c character to print


    Draw a rectangle
        x0,y0 top left corner
        x1,y1 lower right corner
        color 1 set pixel, 0 erase pixel

    void fillrect(int x0, int y0, int x1, int y1, int colour);

        Draw a filled rectangle
            x0,y0 top left corner
            x1,y1 lower right corner
            color 1 set pixel, 0 erase pixel


    lcd.circle(20, 20, 5, 1);  /*Draw a circle
                                x0,y0 centre of circle
                                r radius
                                color 1 set pixel, 0 erase pixel
    lcd.fillcircle(50, 20, 5, 1);
    */

}
