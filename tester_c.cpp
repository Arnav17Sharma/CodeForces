// bresenham line drawing algo
#include <graphics.h>
#include <conio.h>
#include <math.h> // working without this also
#include <stdio.h>
#include <dos.h>

void bresenham(int x1, int y1, int x2, int y2) {
    int dx, dy, p, x, y; 
    dx = x2 - x1;
    dy = y2 - y1;  
    x = x1;
    y = y1;   
    p = 2 * dy - dx;   
    while (x <= x2) {
        putpixel(x, y, WHITE);
	delay(10);
        x++;      
        if (p < 0) {
            p = p + 2 * dy;
        } else {
            y++;
            p = p + 2 * dy - 2 * dx;
        }
    }
}
int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2;   
    printf("Enter starting point (x1,y1) : ");
    scanf("%d %d", &x1, &y1);  
    printf("Enter ending point (x2,y2) : ");
    scanf("%d %d", &x2, &y2);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");  
    bresenham(x1, y1, x2, y2);  
    getch();
    closegraph();  
    return 0;
}

//dda line drawing algo
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <dos.h> // Required for delay()

void drawlinedda(int x0, int y0, int x1, int y1) {
   int dx = x1 - x0;
   int dy = y1 - y0;
   int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float xinc = dx / (float)steps;
    float yinc = dy / (float)steps;
    float x = x0, y = y0;
    int i;
    for (i = 0; i <= steps; i++) {
        putpixel((int)(x + 0.5), (int)(y + 0.5), WHITE); // Turbo C++ doesn't support round()
	delay(10); // Small delay to visualize drawing
        x += xinc;
        y += yinc;        
    }
}

int main() {
    int gd=DETECT, gm;
    int x0, y0, x1, y1;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    printf("Enter starting point (x0, y0): ");
    scanf("%d %d", &x0, &y0);
    printf("Enter ending point (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    drawlinedda(x0, y0, x1, y1);

    getch();
    closegraph();
    return 0;
}

//bresenham circle drawing algorithm
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#inlcude <math.h>
#include <dos.h>  // For delay()
void drawCircle(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
    delay(20); 
}
void bresenhamCircle(int xc, int yc, int r) {
    int x = 0, y = r;
    int d = 3 - 2 * r;
    while (x <= y) {
        drawCircle(xc, yc, x, y);
        x++;
        if (d < 0) {
            d = d + 4 * x + 6;
        } else {
            y--;
            d = d + 4 * (x - y) + 10;
        }
    }
}
int main() {
    int gd = DETECT, gm;
    int xc, yc, r;
    printf("Enter center (xc, yc) and radius r: ");
    scanf("%d %d %d", &xc, &yc, &r);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    bresenhamCircle(xc, yc, r);
    getch();
    closegraph();
    return 0;
}

// point pixel
#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    int x, y, color;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter the coordinates (x, y) to plot a pixel: ");
    scanf("%d %d", &x, &y);
    printf("Enter the color code (1-15): ");
    scanf("%d", &color);
    putpixel(x, y, color);
    getch();
    closegraph();

    return 0;
}

// delay function

#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h> 

void drawPixel(int x, int y, int size, int color, int delayTime) {
    int i,j;
    for ( i = 0; i < size; i++) {
        for ( j = 0; j < size; j++) {
            putpixel(x + i, y + j, color); 
            delay(delayTime);  
        }
    }
}

int main() {
    int gd = DETECT, gm;
    int x, y, size, color, delayTime;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter the coordinates (x, y) to plot a pixel: ");
    scanf("%d %d", &x, &y);
    printf("Enter the pixel size (1-20): ");
    scanf("%d", &size);
    printf("Enter the color code (1-15): ");
    scanf("%d", &color);
    printf("Enter the delay time (milliseconds): ");
    scanf("%d", &delayTime);
    drawPixel(x, y, size, color, delayTime);
    getch();
    closegraph();

    return 0;
}

// moving circle
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>  

int main() {
    int gd = DETECT, gm;
    int x, y, radius, speed, direction;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter the starting position (x, y): ");
    scanf("%d %d", &x, &y);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Enter the speed (higher value = slower movement): ");
    scanf("%d", &speed);
    printf("Choose direction: 1 for Right, 2 for Left, 3 for Up, 4 for Down: ");
    scanf("%d", &direction);

    while (!kbhit()) {  // Loop until a key is pressed
        cleardevice();  // Clear previous frame
        circle(x, y, radius);  // Draw circle
        delay(speed);  // Control movement speed

        // Move based on direction
        if (direction == 1)  // Move Right
            x += 5;
        else if (direction == 2)  // Move Left
            x -= 5;
        else if (direction == 3)  // Move Up
            y -= 5;
        else if (direction == 4)  // Move Down
            y += 5;

        // Boundary check (prevent going off-screen)
        if (x > getmaxx() - radius) x = radius;
        if (x < radius) x = getmaxx() - radius;
        if (y > getmaxy() - radius) y = radius;
        if (y < radius) y = getmaxy() - radius;
    }

    getch();
    closegraph();
    return 0;
}

// texts and fonts
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(100, 20, "Various Text Styles in Turbo C++");

    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
    outtextxy(100, 60, "Sans Serif Font");

    settextstyle(GOTHIC_FONT, HORIZ_DIR, 2);
    outtextxy(100, 100, "Gothic Font");

    settextstyle(SCRIPT_FONT, HORIZ_DIR, 2);
    outtextxy(100, 140, "Script Font");

    settextstyle(SMALL_FONT, HORIZ_DIR, 2);
    outtextxy(100, 180, "Small Font");

    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
    outtextxy(100, 220, "Triplex Font");

    settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
    outtextxy(100, 260, "Simplex Font");

    settextstyle(COMPLEX_FONT, HORIZ_DIR, 2);
    outtextxy(100, 300, "Complex Font");

    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 2);
    outtextxy(100, 340, "European Font");

    settextstyle(BOLD_FONT, HORIZ_DIR, 2);
    outtextxy(100, 380, "Bold Font");

    getch();
    closegraph();   
    return 0;
}

// 2d objects

#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int poly[] = {100, 200, 50, 300, 150, 300, 100, 200};
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw a line
    line(50, 50, 200, 50);

    // Draw a rectangle
    rectangle(50, 80, 200, 150);

    // Draw a circle
    circle(300, 100, 50);

    // Draw an ellipse
    ellipse(450, 100, 0, 360, 60, 40);

    // Draw a polygon (triangle)
    
    drawpoly(4, poly);

    // Draw a filled bar
    bar(250, 200, 400, 250);

    // Draw an arc
    arc(300, 300, 0, 180, 50);

    getch();
    closegraph();

    return 0;
}




Explanation of the Code:
Library Inclusion

cpp
Copy
Edit
#include <graphics.h>
#include <conio.h>
graphics.h → Used for graphics functions.
conio.h → Used for getch() to hold the output window.
Initialize Graphics Mode

cpp
Copy
Edit
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
gd = DETECT → Automatically detects the graphics driver.
gm → Stores the mode of the graphics driver.
initgraph() → Initializes the graphics system, specifying the path to the BGI files.
Drawing Shapes:





1. Line
cpp
Copy
Edit
line(50, 50, 200, 50);
Parameters: (x1, y1, x2, y2)
Explanation: Draws a line from point (50,50) to (200,50).



2. Rectangle
cpp
Copy
Edit
rectangle(50, 80, 200, 150);
Parameters: (left, top, right, bottom)
Explanation: Draws a rectangle from (50,80) (top-left) to (200,150) (bottom-right).



3. Circle
cpp
Copy
Edit
circle(300, 100, 50);
Parameters: (center_x, center_y, radius)
Explanation: Draws a circle centered at (300,100) with radius 50.
4. Ellipse
cpp
Copy
Edit
ellipse(450, 100, 0, 360, 60, 40);
Parameters: (center_x, center_y, start_angle, end_angle, x_radius, y_radius)
Explanation: Draws a full ellipse centered at (450,100), with x_radius=60, y_radius=40, covering 0° to 360°.


5. Polygon (Triangle)
cpp
Copy
Edit
int poly[] = {100, 200, 50, 300, 150, 300, 100, 200};
drawpoly(4, poly);
Parameters: (number_of_points, array_of_coordinates)
Explanation:
poly[] contains 4 points:
(100, 200) → Start
(50, 300)
(150, 300)
(100, 200) → End (closed shape)
drawpoly(4, poly); → Draws a polygon with 4 vertices.

6. Filled Bar
cpp
Copy
Edit
bar(250, 200, 400, 250);
Parameters: (left, top, right, bottom)
Explanation: Draws a filled rectangle from (250,200) to (400,250).


7. Arc
cpp
Copy
Edit
arc(300, 300, 0, 180, 50);
Parameters: (center_x, center_y, start_angle, end_angle, radius)
Explanation: Draws an arc centered at (300,300), from 0° to 180°, with a radius of 50.
Holding the Output and Closing Graphics:
cpp
Copy
Edit
getch();
closegraph();
getch(); → Waits for a key press before closing.
closegraph(); → Closes the graphics mode.