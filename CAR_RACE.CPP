#include<graphics.h>
#include<conio.h>
static int i=0,j=0;
char ch;
void main(){
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	/*car Frame start*/
	//outer rectangle
	line(45+i,45,90+i,45);
	line(90+i,45,90+i,75);
	line(90+i,75,45+i,75);
	line(45+i,75,45+i,45);
	//Einer rectangle
	line(55+i,55,80+i,55);
	line(80+i,55,80+i,65);
	line(80+i,65,55+i,65);
	line(55+i,65,55+i,55);
	//Digonal lines
	line(45+i,45,55+i,55);
	line(90+i,45,80+i,55);
	line(90+i,75,80+i,65);
	line(45+i,75,55+i,65);
	//end of car frame
	again:
	ch = getch();
	switch(ch)
	{
	case 'd' :
	if(i>540)
	break;
	else
	{
	i++;
	cleardevice();
	line(45+i,45+j,90+i,45+j);
	line(90+i,45+j,90+i,75+j);
	line(90+i,75+j,45+i,75+j);
	line(45+i,75+j,45+i,45+j);
	//Einer rectangle
	line(55+i,55+j,80+i,55+j);
	line(80+i,55+j,80+i,65+j);
	line(80+i,65+j,55+i,65+j);
	line(55+i,65+j,55+i,55+j);
	//Digonal lines
	line(45+i,45+j,55+i,55+j);
	line(90+i,45+j,80+i,55+j);
	line(90+i,75+j,80+i,65+j);
	line(45+i,75+j,55+i,65+j);
	break;
	}
	case 'a' :
	if(i<30)
	break;
	else
	{
	cleardevice();
	i--;
	line(45+i,45+j,90+i,45+j);
	line(90+i,45+j,90+i,75+j);
	line(90+i,75+j,45+i,75+j);
	line(45+i,75+j,45+i,45+j);
	//Einer rectangle
	line(55+i,55+j,80+i,55+j);
	line(80+i,55+j,80+i,65+j);
	line(80+i,65+j,55+i,65+j);
	line(55+i,65+j,55+i,55+j);
	//Digonal lines
	line(45+i,45+j,55+i,55+j);
	line(90+i,45+j,80+i,55+j);
	line(90+i,75+j,80+i,65+j);
	line(45+i,75+j,55+i,65+j);
	break;
	}
	case 's':
	if(j>350)
	break;
	else
	{
	cleardevice();
	j++;
	line(45+i,45+j,75+i,45+j);
	line(75+i,45+j,75+i,90+j);
	line(45+i,90+j,75+i,90+j);
	line(45+i,45+j,45+i,90+j);
	//Einer rectangle
	line(55+i,55+j,65+i,55+j);
	line(65+i,55+j,65+i,80+j);
	line(65+i,80+j,55+i,80+j);
	line(55+i,55+j,55+i,80+j);
	//Digonal lines
	line(45+i,45+j,55+i,55+j);
	line(75+i,45+j,65+i,55+j);
	line(75+i,90+j,65+i,80+j);
	line(55+i,80+j,45+i,90+j);
	break;
	}
	case 'w':
	if(j<30)
	break;
	else
	{
	cleardevice();
	j--;
	line(45+i,45+j,75+i,45+j);
	line(75+i,45+j,75+i,90+j);
	line(45+i,90+j,75+i,90+j);
	line(45+i,45+j,45+i,90+j);
	//Einer rectangle
	line(55+i,55+j,65+i,55+j);
	line(65+i,55+j,65+i,80+j);
	line(65+i,80+j,55+i,80+j);
	line(55+i,55+j,55+i,80+j);
	//Digonal lines
	line(45+i,45+j,55+i,55+j);
	line(75+i,45+j,65+i,55+j);
	line(75+i,90+j,65+i,80+j);
	line(55+i,80+j,45+i,90+j);
	break;
	}
	default :
	line(45,45,90,45);
	line(90,45,90,75);
	line(90,75,45,75);
	line(45,75,45,45);
	//Einer rectangle
	line(55,55,80,55);
	line(80,55,80,65);
	line(80,65,55,65);
	line(55,65,55,55);
	//Digonal lines
	line(45,45,55,55);
	line(90,45,80,55);
	line(90,75,80,65);
	line(45,75,55,65);
	}
	goto again;
	/*End of car frame*/
getch();
}