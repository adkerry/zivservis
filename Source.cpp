#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<stdio.h>



using namespace std;


HANDLE hConsole;

enum ColorConsole {
	Green = 2,
	Reed = 4,
	Blue = 1,
	Purple = 5,
	Yellow = 6,
	White = 7
};

	int main() {
		int a = 0;

		while (a < 10) { // повтор всего цикла

			/*Получение дескриптора окна */

			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


			SetConsoleTextAttribute(hConsole, Green);
			cout << " ******************************" << endl;
			SetConsoleTextAttribute(hConsole, Yellow);
			cout << "  ___________  __   __      ___         " << endl;
			Sleep(500);
			cout << " |_______   //|__|||  ||   /  //       " << endl;
			Sleep(500);
			cout << "        /  //  __  |  ||  //       " << endl;
			Sleep(500);
			cout << "       /  //  |  |||  || /  //       " << endl;
			Sleep(500);
			cout << "      /  //   |  |||  ||/  // " << endl;
			Sleep(500);
			cout << "     /  //    |  |||  |/  //  " << endl;
			Sleep(500);
			cout << "    /  //     |  |||     //    " << endl;
			Sleep(500);
			cout << "   /  //      |  |||    //     " << endl;
			Sleep(500);
			cout << "  /  //______ |  |||   //          " << endl;
			Sleep(500);
			cout << " /___________||__|||__//     " << endl;
			Sleep(500);
			cout << " /___________||__|/|_";
			SetConsoleTextAttribute(hConsole, Reed);
			Sleep(500);
			cout << "*SERVIS*    " << endl;
			Sleep(700);
			cout << "                                         " << endl;
			SetConsoleTextAttribute(hConsole, Green);
			cout << " ******************************           " << endl;
			SetConsoleTextAttribute(hConsole, Yellow);

			cout << "           KTO TbI ?" << endl;
			cout << "           " << endl;
			SetConsoleTextAttribute(hConsole, Reed);
			cout << "       ##################                     " << endl;
			cout << "       #                #     " << endl;
			cout << "       #   1)termux   ! #     " << endl;
			cout << "       #   2)termenal ! #     " << endl;
			cout << "       #   3)KALI     ! #     " << endl;
			cout << "       #                #     " << endl;
			cout << "       ##################     " << endl;
			SetConsoleTextAttribute(hConsole, White);

			SetConsoleTextAttribute(hConsole, Blue);
			cout << "        BbIbEPN BAPNAHT" << endl;
			cout << "                        " << endl;

			SetConsoleTextAttribute(hConsole, Reed);
			cout << "      1-termux" << endl << "           2-termenal" << endl << "                3-KALi" << endl;

			SetConsoleTextAttribute(hConsole, White);

			int choice = 0;

			cin >> choice;

			SetConsoleTextAttribute(hConsole, Green);
			cout << "      HELLO :  ";

			SetConsoleTextAttribute(hConsole, White);

			switch (choice) {
			case 1:
				cout << "  TERMUX" << endl;
				SetConsoleTextAttribute(hConsole, Reed);
				cout << "     *************************  " << endl;
				SetConsoleTextAttribute(hConsole, White);
				break;
			case 2:
				cout << "  TERMENAL" << endl;
				SetConsoleTextAttribute(hConsole, Reed);
				cout << "     *************************  " << endl;
				SetConsoleTextAttribute(hConsole, White);
				break;
			case 3:
				cout << " KALi" << endl;
				SetConsoleTextAttribute(hConsole, Reed);
				cout << "     *************************  " << endl;
				SetConsoleTextAttribute(hConsole, White);
				break;

			default:
				cout << "ERROR, Mistake. Start from the beginning." << endl;

				SetConsoleTextAttribute(hConsole, Reed);
				cout << "     *************************  " << endl;
				SetConsoleTextAttribute(hConsole, White);
			}

			int main();
			SetConsoleTextAttribute(hConsole, Reed);
			cout << "   ####-BbIbEPN  NHFOPMATCIUY-####   " << endl;
			cout << "  " << endl;
			SetConsoleTextAttribute(hConsole, White);

			SetConsoleTextAttribute(hConsole, Yellow);
			Sleep(200);
			cout << "     %%%%%%%%%%%%%%%%%%%%%%%" << endl;
			Sleep(200);
			cout << "     %                     %" << endl;
			Sleep(200);
			cout << "     %   1-PECYPCbI        %" << endl << "     %   2-PCNXODELICA     %" << endl << "     %   3-ONION galereia  %" << endl;
			Sleep(200);
			cout << "     %                     %" << endl;
			Sleep(200);
			cout << "     %%%%%%%%%%%%%%%%%%%%%%%" << endl;


			int back = 0;
			cin >> back;

			SetConsoleTextAttribute(hConsole, Reed);
			cout << "   ##_BYDb OCTOPOjEH, HE ZABYDb OgLiaHYTbCiA_## " << endl;
			cout << "  " << endl;

			switch (back) {

			case 1:
				cout << " http://satfozod6hxm7dfu.onion/ - file sharing" << endl;
				Sleep(400);
				cout << " http://fhostingesps6bly.onion/ - hack man S " << endl;
				Sleep(400);
				cout << " ramp5bb7v2abm34a.onion - RAMP                " << endl;
				Sleep(400);
				cout << " anthilledowsdpbr.onion - Anthill " << endl;
				Sleep(400);
				cout << " buybit4xcbat2cwn.onion - BuyBit " << endl;
				Sleep(400);
				cout << " w.superbad.com/1/circles/circles.html" << endl;
				Sleep(300);
				cout << " ww.yyyyyyy.info" << endl;
				cout << "                     #  #  #                               " << endl;

				SetConsoleTextAttribute(hConsole, Reed);

				cout << "                       UDACHI" << endl;
				SetConsoleTextAttribute(hConsole, White);
				break;
			case 2:
				cout << " https://vk.com/videos3602186?z=video143205013_168929069%2Fpl_3602186_-2 " << endl;
				Sleep(400);
				cout << " https://www.youtube.com/watch?v=uqpXX5SNUnQ                 " << endl;
				Sleep(400);
				cout << " https://vk.com/videos315340612?z=video155224760_456239045%2Fpl_315340612_-2                 " << endl;
				Sleep(400);
				cout << " https://vk.com/deepwebpage?z=video-142675397_456239032%2Fe8d8d3ecbac99fb0ec%2Fpl_-142675397_-2 " << endl;
				Sleep(400);
				cout << " https://vk.com/videos-142675397?z=video-142675397_456239018%2Fpl_-142675397_-2                 " << endl;
				SetConsoleTextAttribute(hConsole, Reed);
				cout << "                       *************************  " << endl;
				SetConsoleTextAttribute(hConsole, White);
				break;
			case 3:
				cout << " http://zw3crggtadila2sg.onion/imageboard/" << endl;
				Sleep(400);
				cout << " http://od6j46sy5zg7aqze.onion/ 	                                 " << endl;
				Sleep(400);
				cout << " http://mc2wqhlkh6ffgrdi.onion/                                  " << endl;
				Sleep(400);
				cout << " b4yrk2nkydqfpzqm.onion/onionib                                " << endl;
				Sleep(400);
				cout << " utovvyhaflle76gh.onion/sTORage/exit%5Fthe%5Fmatrix/index.html                                 " << endl;
				Sleep(400);
				cout << " http://iacgq6y2j2nfudy7.onion/                                 " << endl;
				SetConsoleTextAttribute(hConsole, Reed);
				cout << "                             " << endl;

				cout << "     *************************  " << endl;
				SetConsoleTextAttribute(hConsole, White);
				break;

			default:
				cout << "ERROR, Mistake. Start from the beginning." << endl;

				SetConsoleTextAttribute(hConsole, Reed);
				cout << "                 *************************  " << endl;
				SetConsoleTextAttribute(hConsole, White);
			}

				int main();

				SetConsoleTextAttribute(hConsole, Reed);
				cout << "                                      " << endl;
				cout << "            # # #___PLEAS - 1___# # # " << endl;
				cout << "                                      " << endl;

				SetConsoleTextAttribute(hConsole, Yellow);
				cout << "                                      " << endl;
				cout << " 1-rest " << endl << " 2-rests" << endl;

				int ex = 0;
				cin >> ex;

				SetConsoleTextAttribute(hConsole, Reed);
				cout << "                                      " << endl;
				Sleep(500);
				cout << "                                      " << endl;
				Sleep(400);
				cout << "            .*=.               .++.       " << endl;
				Sleep(400);
				cout << "         .+#%.                    =#=.    " << endl;
				Sleep(400);
				cout << "       .%##*                       -##@.  " << endl;
				Sleep(400);
				cout << "      .####.                       .####- " << endl;
				Sleep(400);
				cout << "      *######+-. -:**=###%***-..-*@#####= " << endl;
				Sleep(400);
				cout << "      .###############################@#. " << endl;
				Sleep(400);
				cout << "        -##%%@#%@##############=##@%@#:   " << endl;
				Sleep(400);
				cout << "            .-:.##  #######@  #-::.       " << endl;
				Sleep(500);
				cout << "               +##=*%######:+##%          " << endl;
				Sleep(400);
				cout << "               -###############*          " << endl;
				Sleep(400);
				cout << "                 :###########+.           " << endl;
				Sleep(400);
				cout << "                   +#+@##*#%              " << endl;
				Sleep(400);
				cout << "                   *@= ## =%              " << endl;
				Sleep(300);
				cout << "                     =@##@.               " << endl;
				Sleep(300);
				cout << "                                       " << endl;
				Sleep(5000);
				cout << "                                      " << endl;

				switch (ex) {
				case 1:
					SetConsoleTextAttribute(hConsole, White);
					cout << " " << endl;
					cout << "GO RE NEW" << endl;
					cout << " " << endl;

					break;
				case 2:
					SetConsoleTextAttribute(hConsole, White);
					cout << " " << endl;
					cout << "GO RE NEW" << endl;
					cout << " " << endl;
					break;
				default:
					cout << " " << endl;
					cout << "ERROR, Mistake. Start from the beginning." << endl;
					cout << " " << endl;
					cout << "       *************************  " << endl;
					SetConsoleTextAttribute(hConsole, White);

				}
				




				}

			
			return 0;
		}

		
	
	