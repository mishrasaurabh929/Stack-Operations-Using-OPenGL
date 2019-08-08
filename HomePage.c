glClear(GL_COLOR_BUFFER_BIT);

            glLoadIdentity();

            glColor3f(1,1,1);

    drawstring(120,5," Press ENTER to go To next screen",GLUT_BITMAP_HELVETICA_18);

            drawstring(-45,5,"Maximize window for better view",GLUT_BITMAP_HELVETICA_12);

    glColor3f(1,1,1);

            output(5,160,"           CMR INSTITUTE OF TECHNOLOGY  ");

            glColor3f(1,1,1);

            output(10.0,150,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");

            glColor3f(1,0,1);

            output(60,130,"A Mini Project On:-");

            glColor3f(0,1,0.5);

            output(38,120,"\"STACK OPERATIONS\"");

            glColor3f(1,0,1);

            output(40,100,"By :");

            glBegin(GL_LINES);

            glVertex2f(40,98);

            glVertex2f(50,98);

            glEnd();

            glColor3f(1,0,0);

            output(40,90,"Srikanth.S and Shashank.H.N ");

 

            output(40,80,"");

            glColor3f(1,0,1);

            output(40,60,"Under the Guidence of :");

            glBegin(GL_LINES);

            glVertex2f(40,58);

            glVertex2f(98,58);

            glEnd();

            glColor3f(1,0,0);

            output(40,50,"");

            glColor3f(1,0,0);

            drawstring(72,50,"(B.E.)",GLUT_BITMAP_HELVETICA_12);

            glColor3f(1,0,0);

            output(70,40,"KATHEEK GCD,Dept. of CSE");

            glColor3f(1,0,0);

            output(40,30,"");

            glColor3f(1,0,0);

            drawstring(72,30,"(B.E.)",GLUT_BITMAP_HELVETICA_12);

            output(70,20,"Dept. of CSE");

            glFlush();


