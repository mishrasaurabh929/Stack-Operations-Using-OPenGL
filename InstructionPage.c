glClear(GL_COLOR_BUFFER_BIT);

            glColor3f(1.0,1.0,0.0);

    output(45,140,"INSTRUCTIONS:");

            glBegin(GL_LINES);

            glVertex2f(45,138);

            glVertex2f(90,138);

            glEnd();

            glColor3f(0,1,0);

  output(-20,120,"* PUSH BUTTON IS TO ADD THE ELEMENT");

  output(-20,100,"* POP BUTTON IS TO REMOVE OR DELETE THE ELEMENT");

  output(-20,80,"* STACK OVERFLOW MESSAGE INDICATES STACK IS FULL");

  output(-20,60,"* STACK EMPTY MESSAGE INDICATES NO FURTHER POP OPERATION IS ALLOWED");

  output(-20,20,"* PRESS ESC TO GO TO MAIN MENU");

   glFlush();
