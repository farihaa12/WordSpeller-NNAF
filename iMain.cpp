#include "iGraphics.h"
#include <fstream>
#include<iostream>
#include<sstream>
using namespace std;
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
int image[36],chanceimage[6];
int gamestate = 0,isScoreClicked=0;
bool musicOn=true;
char letter1[5], letter2[3], letter3[5],letter4[5],letter5[4];
int mode_for_menu = 0, mode1 = 1, mode_for_level_1 = 0, mode3 = 0, mode_for_level_2 = 0, mode_for_level_3 = 0, mode_for_game_menu = 0, mode_for_level_4 = 0, mode_for_level_5 = 0 ;
int len1 = 0, len2 = 0, len3 = 0,len4=0,len5=0,lenOfName=0;
char word1[] = "WATER", word2[] = "PEN", word3[] = "HEAD",word4[]="HOUSE",word5[]="TREE";
int levelcomplete=0,gameover=0;
char name[89];
int chance1 = 6, chance2 = 6, chance3 = 6, chance4 = 6, chance5 = 6 , level = 0;
int score, guess = 0, levelScore = 0;

char s[500];
void updateHighScores(){
	score = levelScore - guess;
	
	sprintf_s(s, 500, "%d", score);
	
	

}
void chancefunction(int chance){
	if (chance == 1){
		iShowImage(0, 450, 130, 50, chanceimage[0]);
	}
	if (chance == 2){
		iShowImage(0, 450, 130, 100, chanceimage[1]);
	}
	if (chance == 3){
		iShowImage(0,450, 130, 100, chanceimage[2]);
	}
	if (chance == 4){
		iShowImage(0, 450, 130,100, chanceimage[3]);
	}
	if (chance == 5){
		iShowImage(0,450, 130, 100, chanceimage[4]);
	}
	if (chance == 6){
		iShowImage(0, 450, 130, 100, chanceimage[5]);
	}
}
void happy_or_angry(int mode){
	if (mode == 2){
		iShowImage(10,310,200,50, image[16]);
		iShowBMP2(800, 250, "FOR_HAPPY.bmp",0);
	}
	if (mode == 3){
		iShowImage(10,310, 200, 50, image[17]);
		iShowBMP2(800, 250, "FOR_ANGRY.bmp",0);
	}
}

void level_0(){
	iClear();
	
	iShowImage(0, 0, 1000, 500, image[26]);
	iShowImage(870, 10, 100, 50, image[19]);
	iShowImage(870, 70, 100, 50, image[20]);
	if (mode1 == 1){
		iSetColor(0, 0, 0);
		
		 iText(450,220, name, GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	

}


void level_1(){
	//iClear();

	iShowImage(0, 0, 1000, 500, image[11]);
	iShowImage(870, 10, 100, 50, image[19]);
	iShowImage(870, 70, 100, 50, image[20]);
	if (mode1 == 1){
		iSetColor(0, 0, 0);
		iText(450, 190, letter1, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	happy_or_angry(mode_for_level_1);


	if (levelcomplete == 1){
	
		iShowImage(650, 10, 200, 50, image[18]);
		iShowImage(770, 180, 200, 50, image[21]);
		iShowImage(0, 375, 130, 50, image[27]);
		
		
	}

}
void level_2(){
	//iClear();

	iShowImage(0, 0, 1000,500, image[12]);
	iShowImage(870,10, 100, 50, image[19]);
	iShowImage(870, 70, 100, 50, image[20]);
	iShowImage(0, 375, 130, 50, image[27]);
	if (mode1 == 1){
		iSetColor(0, 0, 0);
		iText(450,180, letter2, GLUT_BITMAP_TIMES_ROMAN_24);
	}

	happy_or_angry(mode_for_level_2);
	if (levelcomplete == 2){
		iShowImage(650,10, 200, 50, image[18]);
		iShowImage(770, 180, 200, 50, image[22]);
		iShowImage(0, 375, 130, 50, image[28]);
	}

}

void level_3(){
	//iClear();

	iShowImage(0, 0, 1000, 500, image[13]);
	iShowImage(870, 10, 100, 50, image[19]);
	iShowImage(870, 70, 100, 50, image[20]);
	iShowImage(0, 375, 130, 50, image[28]);
	if (mode1 == 1){
		iSetColor(0, 0, 0);
		iText(450, 180, letter3, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	happy_or_angry(mode_for_level_3);
	if (levelcomplete == 3){
		iShowImage(650,10, 200, 50, image[18]);
		iShowImage(770, 180, 200, 50, image[23]);
		iShowImage(0, 375, 130, 50, image[29]);
	}

}
void level_4(){
	//iClear();

	iShowImage(0, 0, 1000, 500, image[32]);
	iShowImage(870, 10, 100, 50, image[19]);
	iShowImage(870, 70, 100, 50, image[20]);
	iShowImage(0, 375, 130, 50, image[29]);
	if (mode1 == 1){
		iSetColor(0, 0, 0);
		iText(450, 210, letter4, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	happy_or_angry(mode_for_level_4);
	if (levelcomplete == 4){
		iShowImage(650, 10, 200, 50, image[18]);
		iShowImage(770, 180, 200, 50, image[34]);
		iShowImage(0, 375, 130, 50, image[30]);
	}

}
void level_5(){
	//iClear();

	iShowImage(0, 0, 1000, 500, image[33]);
	iShowImage(870, 10, 100, 50, image[19]);
	iShowImage(870, 70, 100, 50, image[20]);
	iShowImage(0, 375, 130, 50, image[30]);
	if (mode1 == 1){
		iSetColor(0, 0, 0);
		iText(450, 210, letter5, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	happy_or_angry(mode_for_level_5);
	if (levelcomplete == 5){
		iShowImage(650, 10, 200, 50, image[18]);
		iShowImage(770, 180, 200, 50, image[35]);
		iShowImage(0, 375, 130, 50, image[31]);
	}

}
void iDraw()
{
	iClear();




	if (gamestate == 0)
	{
		level = 0;
		
		iShowImage(0, 0, 1000, 500, image[0]);
		iShowImage(270, 230, 100, 50, image[1]);
		iShowImage(470, 230, 100, 50, image[2]);
		iShowImage(670, 230, 100, 50, image[3]);
		iShowImage(270, 160, 100, 50, image[4]);
		iShowImage(470, 160, 100, 50, image[5]);
		iShowImage(670, 160, 100, 50, image[24]);


	}
	else if (gamestate == 1)
	{
		if (level == 0){

			level_0();
			
		}
		
		if (level == 1){
			
			level_1();
			chancefunction(chance1);
		}
		if (level == 2){
			level_2();
			chancefunction(chance2);
		}
		
		if (level == 3){
			level_3();
			chancefunction(chance3);
		}
		if (level == 4){
			level_4();
			chancefunction(chance4);
		}
		if (level == 5){
			level_5();
			chancefunction(chance5);
		}
		if (level == 6){
			iShowImage(0, 0, 1000, 500, image[14]);
			iSetColor(255, 255, 0);
			iText(400, 100, "Your score is ", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(550, 100, s, GLUT_BITMAP_TIMES_ROMAN_24);
			gameover = 1;
			iShowImage(870, 70, 100, 50, image[20]);
			ofstream outfile;
			outfile.open("highscores.txt");
			outfile << name << endl;
			outfile << s << endl;

			outfile.close();
			gameover = 0;
			
			
			
		}
		if (chance1 == 0 || chance2 == 0 || chance3 == 0 || chance4 == 0 || chance5 == 0){
			iShowImage(0, 0, 1000, 500, image[15]);
			gameover = 1;
			ofstream outfile;
			outfile.open("highscores.txt");
			outfile << name << endl;
			outfile << s << endl;

			outfile.close();
			gameover = 0;
			
			
		}
			
			
		
		
		   
		   
	}

	
	else if (gamestate == 2)
	{
		iShowImage(0, 0, 1000, 500, image[6]);
		iShowImage(350, 200, 100, 50, image[9]);
		iShowImage(500, 200, 100, 50, image[10]);
		iShowImage(870, 10, 100, 50, image[20]);

	}
		
	else if (gamestate == 3)
	{
		iShowImage(0, 0, 1000, 500, image[7]);
		iShowImage(870, 57, 100, 50, image[20]);
	}
		
	else if (gamestate == 4)
	{
		
		iShowImage(0, 0, 1000, 500, image[8]);
		iShowImage(870, 10, 100, 50, image[20]);
		/*ofstream outfile;
		outfile.open("highscores.txt");
		outfile << name << endl;
		outfile << s << endl;
	
		outfile.close();*/
		ifstream infile;

		infile.open("highscores.txt");
		cout << "Reading from the file" << endl;
		infile >> name;
		cout << name << endl;
		infile >> s;
		cout << s << endl;
		infile.close();
		iSetColor(255, 255, 0);
		
		iText(400, 250, name, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(600, 250, s, GLUT_BITMAP_TIMES_ROMAN_24);
		
		
	}
		
	else if (gamestate == 6)
	{
		iShowImage(0, 0, 1000, 500, image[25]);
		iShowImage(870, 10, 100, 50, image[20]);
		
	}

	
		
		
			
		
	
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (mx >= 270 && mx <= 370 && my >= 230 && my <= 280)
			gamestate = 1;
		if (mx >= 470 && mx <= 570 && my >= 230 && my <= 280)
			gamestate = 2;
		if (levelcomplete == 0 && mx >= 870 && mx <= 970 && my >= 10 && my <= 60)
			level = 1;
		if (levelcomplete == 1 && mx >= 870 && mx <= 970 && my >= 10 && my <= 60)
			level = 2;
		if (levelcomplete == 2 && mx >= 870 && mx <= 970 && my >= 10 && my <= 60)
			level = 3;
		if (levelcomplete == 3 && mx >= 870 && mx <= 970 && my >= 10 && my <= 60)
			level = 4;
		if (levelcomplete == 4 && mx >= 870 && mx <= 970 && my >= 10 && my <= 60)
			level = 5;
		if (levelcomplete == 5 && mx >= 870 && mx <= 970 && my >= 10 && my <= 60)
			level = 6;
		if (mx >= 670 && mx <= 770 && my >= 230 && my <= 280)
			gamestate = 3;
		if (mx >= 270 && mx <= 370 && my >= 160 && my <= 210)
			
		{
			gamestate = 4;
			
			/*ifstream infile;
			infile.open("highscores.txt");
			cout << "Reading from the file" << endl;
			infile >> name;
			cout << name << endl;
			infile >> s;
			cout << s << endl;
			infile.close();
			iText(400, 250, name, GLUT_BITMAP_TIMES_ROMAN_24);
			iText(600, 250, s, GLUT_BITMAP_TIMES_ROMAN_24);*/

		}
			
			
			
		
		if (mx >= 470 && mx <= 570 && my >= 160 && my <= 210)
			gamestate = 5;
		if (mx >= 670 && mx <= 770 && my >= 160 && my <= 210)
			gamestate = 6;
		if (gamestate == 1 && mx >= 870 && mx <= 970 && my >= 70 && my <= 120)
			gamestate = 0;
		if (gamestate == 2 && mx >= 870 && mx <= 970 && my >= 10 && my <= 60)
			gamestate = 0;
		if (gamestate == 3 && mx >= 870 && mx <= 970 && my >= 57 && my <= 107)
			gamestate = 0;
		if (gamestate == 4 && mx >= 870 && mx <= 970 && my >= 10 && my <= 60)
			gamestate = 0;
		if (gamestate == 6 && mx >= 870 && mx <= 970 && my >= 10 && my <= 60)
			gamestate = 0;
		if (level == 0 && mx >= 870 && mx <= 970 && my >= 70 && my <= 120)
			gamestate = 0;
		if (level == 4 && mx >= 870 && mx <= 970 && my >= 70 && my <= 120)
			gamestate = 0;
		if (gamestate == 2 && mx >= 350 && mx <= 450 && my >= 200 && my <= 250){

			if (!musicOn)
			{
				musicOn = true;
				PlaySound("Guitar House - josh pan.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}
		if (gamestate == 2 && mx >= 500 && mx <= 600 && my >= 200 && my <= 250){
			if (musicOn){

				musicOn = false;
				PlaySound(0, 0, 0);
			}

		}
		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/

void level_0_keyboard(){
	
	lenOfName++;
	
}
void level_1_keyboard(){
	if (letter1[len1] == word1[len1]){
		mode_for_level_1 = 2;
	}
	else{
		mode_for_level_1 = 3;
		len1--;
		chance1--;
		guess++;
	
	}
	len1++;
	if (len1 == 5){
	
		
		levelcomplete = 1;
		levelScore = levelScore + 100;
		updateHighScores();
	}
}
void level_2_keyboard(){
	if (letter2[len2] == word2[len2]){
		mode_for_level_2 = 2;
	}
	else{
		mode_for_level_2 = 3;
		len2--;
		chance2--;
		guess++;
	}
	len2++;
	if (len2 == 3){
		
		levelcomplete = 2;
		levelScore = levelScore + 100;
		updateHighScores();
	}
}

void level_3_keyboard(){
	if (letter3[len3] == word3[len3]){
		mode_for_level_3 = 2;
	}
	else{
		mode_for_level_3 = 3;
		len3--;
		chance3--;
		guess++;
	}
	len3++;
	if (len3 == 4){
		
		
		levelcomplete = 3;
		levelScore = levelScore + 100;
		updateHighScores();
	}
}
void level_4_keyboard(){
	if (letter4[len4] == word4[len4]){
		mode_for_level_4 = 2;
	}
	else{
		mode_for_level_4 = 3;
		len4--;
		chance4--;
		guess++;
	}
	len4++;
	if (len4 == 5){


		levelcomplete = 4;
		levelScore = levelScore + 100;
		updateHighScores();
	}
}
void level_5_keyboard(){
	if (letter5[len5] == word5[len5]){
		mode_for_level_5 = 2;
	}
	else{
		mode_for_level_5 = 3;
		len5--;
		chance5--;
		guess++;
	}
	len5++;
	if (len5 == 4){


		levelcomplete = 5;
		levelScore = levelScore + 100;
		updateHighScores();
	}
}

void iKeyboard(unsigned char key)
{
	
	if (key == '\r')
	{
		
	}
	
	if (level ==0){
		
			name[lenOfName] = key;
			level_0_keyboard();
		
		
	}
	
	if (level == 1){
		letter1[len1] = key;
		level_1_keyboard();
	}

	if (level == 2){
		letter2[len2] = key;
		level_2_keyboard();
	}
	if (level == 3){
		letter3[len3] = key;
		level_3_keyboard();
	}
	if (level == 4){
		letter4[len4] = key;
		level_4_keyboard();
	}
	if (level == 5){
		letter5[len5] = key;
		level_5_keyboard();
	}
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
		gamestate = 0;
		//level_0();
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	

	
}


int main()
{
	///srand((unsigned)time(NULL));
	if (musicOn)
		PlaySound("Guitar House - josh pan.wav", NULL, SND_LOOP | SND_ASYNC);
	iInitialize(1000, 500, "Project Title");
	///updated see the documentations
	
	
	  image[0] = iLoadImage("bg.png");
	  image[1] = iLoadImage("start.png");
	  image[2] = iLoadImage("settings.png");
	  image[3] = iLoadImage("instructions.png");
	  image[4] = iLoadImage("scores.png");
	  image[5] = iLoadImage("exit.png");
	  image[6] = iLoadImage("settings page.png");
	  image[7] = iLoadImage("instructions page.png");
	  image[8] = iLoadImage("scores page.png");
	  image[9] = iLoadImage("music on.png");
	  image[10] = iLoadImage("music off.png");
	  image[11] = iLoadImage("LEVEL 1.png");
	  image[12] = iLoadImage("LEVEL 2.png");
	  image[13] = iLoadImage("LEVEL 3.png");
	  image[14] = iLoadImage("ALL LEVEL COMPLETE.png");
	  image[15] = iLoadImage("GAME OVER.png");
	  image[16] = iLoadImage("FOR_CORRECT.jpg");
	  image[17] = iLoadImage("FOR_WRONG.jpg");
	  image[18] = iLoadImage("FOR_LEVEL_COMPLETE.jpg");
	  image[19] = iLoadImage("next.png");
	  image[20] = iLoadImage("menu.png");
	  image[21] = iLoadImage("water.png");
	  image[22] = iLoadImage("pen.png");
	  image[23] = iLoadImage("head.png");
	  image[24] = iLoadImage("about us.png");
	  image[25] = iLoadImage("about us page.png");
	  image[26] = iLoadImage("taking user input.png");
	  image[27] = iLoadImage("for 100 coin.png");
	  image[28] = iLoadImage("for 200 coin.png");
	  image[29] = iLoadImage("for 300 coin.png");
	  image[30] = iLoadImage("for 400 coin.png");
	  image[31] = iLoadImage("for 500 coin.png");
	  image[32] = iLoadImage("LEVEL 4.png");
	  image[33] = iLoadImage("LEVEL 5.png");
	  image[34] = iLoadImage("house.png");
	  image[35] = iLoadImage("tree.png");
	  chanceimage[0] = iLoadImage("FOR_1_CHANCE.jpg");
	  chanceimage[1] = iLoadImage("FOR_2_CHANCE.jpg");
	  chanceimage[2] = iLoadImage("FOR_3_CHANCE.jpg");
	  chanceimage[3] = iLoadImage("FOR_4_CHANCE.jpg");
	  chanceimage[4] = iLoadImage("FOR_5_CHANCE.jpg");
	  chanceimage[5] = iLoadImage("FOR_6_CHANCE.jpg");

	 
	  
	
	
	iStart();
	return 0;
}