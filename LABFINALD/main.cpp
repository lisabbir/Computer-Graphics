#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


void myDisplay();
void myInit();

main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (540, 270);
glutInitWindowPosition (0,0);
glutCreateWindow ("BATMAN");
glutDisplayFunc(myDisplay);
myInit();
glutMainLoop();
}


void myDisplay()
{
    int x,y,i;
    glClear (GL_COLOR_BUFFER_BIT);
    glPointSize(5.0);


    glColor3f(0.9,0.4,0.0);
    x=0;
    y=0;
    for(i=1; i<=54; i++)
    {

        glBegin(GL_POLYGON);
        glVertex2i(x,y );
        glVertex2i(x+10,y);
        glVertex2i(x+10,y+10);
        glVertex2i(x,y+10);
        glEnd();
        x+=10;
    }

    x=0;
    y=10;
    for(i=1; i<=54; i++)
    {

        glBegin(GL_POLYGON);
        glVertex2i(x,y );
        glVertex2i(x+10,y);
        glVertex2i(x+10,y+10);
        glVertex2i(x,y+10);
        glEnd();
        x+=10;
    }

    x=0;
    y=20;
    for(i=1; i<=54; i++)
    {

        glBegin(GL_POLYGON);
        glVertex2i(x,y );
        glVertex2i(x+10,y);
        glVertex2i(x+10,y+10);
        glVertex2i(x,y+10);
        glEnd();
        x+=10;
    }

    x=0;
    y=30;
    for(i=1; i<=54; i++)
    {
        if(i==18)
        {
            glColor3f(0.0,0.0,0.0);
        }
        else
        {
            glColor3f(0.9,0.4,0.0);
        }
        glBegin(GL_POLYGON);
        glVertex2i(x,y );
        glVertex2i(x+10,y);
        glVertex2i(x+10,y+10);
        glVertex2i(x,y+10);
        glEnd();
        x+=10;
    }


    x=0;
    y=40;
    for(i=1; i<=54; i++)
    {
        if(i==18 || i==19)
        {
            glColor3f(0.0,0.0,0.0);
        }
        else
        {
            glColor3f(0.9,0.4,0.0);
        }
        glBegin(GL_POLYGON);
        glVertex2i(x,y );
        glVertex2i(x+10,y);
        glVertex2i(x+10,y+10);
        glVertex2i(x,y+10);
        glEnd();
        x+=10;
    }

    x=0;
    y=50;
    for(i=1; i<=54; i++)
    {
        if(i!=19)
        {
            if(i==18 || i==20)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }


    x=0;
    y=60;
    for(i=1; i<=54; i++)
    {
        if(i!=19 && i!=20)
        {
            if(i==18 || i==21)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }


    x=0;
    y=70;
    for(i=1; i<=54; i++)
    {
        if(i<19 || i>21)
        {
            if(i==18 || i==22)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }

    x=0;
    y=80;
    for(i=1; i<=54; i++)
    {
        if(i<19 || i>22)
        {
            if(i==18 || i==23)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }


    x=0;
    y=90;
    for(i=1; i<=54; i++)
    {
        if(i<19 || i>23)
        {
            if((i>=13 && i<=18) || (i>=24 && i<=41))
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }


    x=0;
    y=100;
    for(i=1; i<=54; i++)
    {
        if(i<13 || i>41)
        {
            if((i>=11 && i<=12) || (i>=42 && i<=43))
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }


    x=0;
    y=110;
    for(i=1; i<=54; i++)
    {
        if(i<11 || i>43)
        {
            if(i == 10 || i== 44)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }

    x=0;
    y=120;
    for(i=1; i<=54; i++)
    {
        if(i<10 || i>44)
        {
            if(i == 9 || i== 45)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }

    x=0;
    y=130;
    for(i=1; i<=54; i++)
    {
        if(i<10 || i>44)
        {
            if(i == 9 || i== 45)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }


    x=0;
    y=140;
    for(i=1; i<=54; i++)
    {
        if(i<9 || i>45)
        {
            if(i == 8 || i== 46)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        else
        {
            if(i==13 || i==17 || i==19 || i==23 || i==27 || (i>=31 && i<=34) || (i>=37 && i<=41))
            {
                glColor3f(0.9,0.6,0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x,y );
                glVertex2i(x+10,y);
                glVertex2i(x+10,y+10);
                glVertex2i(x,y+10);
                glEnd();
            }
        }
        x+=10;
    }


    x=0;
    y=150;
    for(i=1; i<=54; i++)
    {
        if(i<9 || i>45)
        {
            if(i == 8 || i== 46)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        else
        {
            if(i==13 || i==17 || (i>=19 && i<=23) || i==27 || i==31 || i==35 || i==37)
            {
                glColor3f(0.9,0.6,0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x,y );
                glVertex2i(x+10,y);
                glVertex2i(x+10,y+10);
                glVertex2i(x,y+10);
                glEnd();
            }
        }
        x+=10;
    }


    x=0;
    y=160;
    for(i=1; i<=54; i++)
    {
        if(i<9 || i>45)
        {
            if(i == 8 || i== 46)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        else
        {
            if(i==13 || i==15 || i==17 || i==19 || i==23 || i==27 || (i>=31 && i<=34) || (i>=37 && i<=39))
            {
                glColor3f(0.9,0.6,0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x,y );
                glVertex2i(x+10,y);
                glVertex2i(x+10,y+10);
                glVertex2i(x,y+10);
                glEnd();
            }
        }
        x+=10;
    }







    x=0;
    y=170;
    for(i=1; i<=54; i++)
    {
        if(i<9 || i>45)
        {
            if(i == 8 || i== 46)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        else
        {
            if(i==13 || i==14 || i==16 || i==17 || i==19 || i==23 || i==26 || i==28 || i==31 || i==35 || i==37)
            {
                glColor3f(0.9,0.6,0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x,y );
                glVertex2i(x+10,y);
                glVertex2i(x+10,y+10);
                glVertex2i(x,y+10);
                glEnd();
            }
        }
        x+=10;
    }


    x=0;
    y=180;
    for(i=1; i<=54; i++)
    {
        if(i<9 || i>45)
        {
            if(i == 8 || i== 46)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        else
        {
            if(i==13 || i==17 || (i>=20 && i<=22) || i==25 || i==29 || (i>=31 && i<=34) || (i>=37 && i<=41))
            {
                glColor3f(0.9,0.6,0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x,y );
                glVertex2i(x+10,y);
                glVertex2i(x+10,y+10);
                glVertex2i(x,y+10);
                glEnd();
            }
        }
        x+=10;
    }



    x=0;
    y=190;
    for(i=1; i<=54; i++)
    {
        if(i<10 || i>44)
        {
            if(i == 9 || i== 45)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }

    x=0;
    y=200;
    for(i=1; i<=54; i++)
    {
        if(i<10 || i>44)
        {
            if(i == 9 || i== 45)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }

    x=0;
    y=210;
    for(i=1; i<=54; i++)
    {
        if(i<11 || i>43)
        {
            if(i == 10 || i== 44)
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }

    x=0;
    y=220;
    for(i=1; i<=54; i++)
    {
        if(i<13 || i>41)
        {
            if((i>=11 && i<=12) || (i>=42 && i<=43))
            {
                glColor3f(0.0,0.0,0.0);
            }
            else
            {
                glColor3f(0.9,0.4,0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2i(x,y );
            glVertex2i(x+10,y);
            glVertex2i(x+10,y+10);
            glVertex2i(x,y+10);
            glEnd();
        }
        x+=10;
    }

    x=0;
    y=230;
    for(i=1; i<=54; i++)
    {
        if(i>=13 && i<=41)
        {
            glColor3f(0.0,0.0,0.0);
        }
        else
        {
            glColor3f(0.9,0.4,0.0);
        }
        glBegin(GL_POLYGON);
        glVertex2i(x,y );
        glVertex2i(x+10,y);
        glVertex2i(x+10,y+10);
        glVertex2i(x,y+10);
        glEnd();
        x+=10;
    }

    glColor3f(0.9,0.4,0.0);
    x=0;
    y=240;
    for(i=1; i<=54; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y );
        glVertex2i(x+10,y);
        glVertex2i(x+10,y+10);
        glVertex2i(x,y+10);
        glEnd();
        x+=10;
    }

    glColor3f(0.9,0.4,0.0);
    x=0;
    y=250;
    for(i=1; i<=54; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y );
        glVertex2i(x+10,y);
        glVertex2i(x+10,y+10);
        glVertex2i(x,y+10);
        glEnd();
        x+=10;
    }

    glColor3f(0.9,0.4,0.0);
    x=0;
    y=260;
    for(i=1; i<=54; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2i(x,y );
        glVertex2i(x+10,y);
        glVertex2i(x+10,y+10);
        glVertex2i(x,y+10);
        glEnd();
        x+=10;
    }

glFlush ();
}

void myInit()
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 540.0, 0.0, 270.0);
}
