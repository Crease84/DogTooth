//My random Libraries
#include<iostream>
#include<Windows.h>
#include<vector>
#include<string>
#include<algorithm>

using namespace std; //Hacker Codes

//Global Variables
vector<string> inventory;

void logo();
void Inventory();

int main() {

	//Local Variables
	int room = 1;
	int serverSwitch = 2;
	int floor = 1;
	string input;

	srand(time(NULL));


	logo();

	cout << " Thank you for playing DogTooth" << endl;
	cout << " ###############################" << endl;

	cout << " Learn how to play? (y/n)" << endl;

	getline(cin, input);

	if (input == "y") {
		system("CLS");
		cout << " Thank you for playing DogTooth" << endl;
		cout << " ###############################" << endl;
		cout << " HOW TO PLAY" << endl;
		cout << endl;
		cout << " Commands use Capitalization for the action and subject" << endl;
		cout << " EX: player inputs 'Go east' but nothing happens becuse it needs to be spelled 'Go East'" << endl;
		cout << endl;
		cout << " Anything thats Capitalized means you can use it in the command" << endl;
		cout << " EX: 'If you can get a closer look, you can find out whats in the Ashes." << endl;
		cout << " Play inputs 'Look at Ashes'" << endl;
		cout << " The player will get details of the ashes" << endl;
		system("pause");
		cout << " Your input and related console reponces will be displayed at the top of each turn" << endl;
		system("CLS");
	}
	else {
		system("CLS");
		cout << " --DogTooth--" << endl;
		cout << " ###############################" << endl;
		cout << endl;
	}

	system("color A");
	cout << " Your name is Cyd Campbell, " << endl;
	cout << " You work with an agency called 'Rise'" << endl;
	cout << " Rise has established multiple bases from your home town in Ohio to the edges of space, they're working on the many dimensions" << endl;
	cout << " You like to keep to your self and avoid contact with anyone outside of Rise...You have to be in the know to know, you know?" << endl;
	cout << " And theres absolutly nothing wrong with that...I guess." << endl;
	cout << " Your spot Rise is usally a 24/7 full time position" << endl;
	cout << " They give you missions and tasks to complete and send you money the next day through a third party " << endl;
	cout << " Though you dont have a concreate idea about what and who the organization you work with is" << endl;
	cout << " You never questioned it, and its never been a problem with you becuse you trust them and it pays the bills " << endl;
	cout << " Today is your birthday, and every one gets a chance at one higher ranked mission on such 'special occations'" << endl;
	cout << " Right now, youre waiting for your associate to contact you with the info for yout task " << endl;
	cout << endl;
	system("pause");
	Beep(300, 300);
	Beep(500, 200);
	Beep(300, 200);
	system("timeout /t 1 >nul");
	cout << endl;
	cout << " That must be them" << endl;
	cout << endl;
	system("pause");
	system("CLS");
	system("color E");
	cout << " ---INCOMING TRANSMISTION---" << endl;//motive
	system("timeout /t 3 >nul");// gives real life instant messanger feel
	cout << " Hey Cyd- I have a mission for the day," << endl;
	cout << " I need you to check out a warning signal coming from one of our transdemantional space station" << endl;
	system("timeout /t 3 >nul");
	cout << " The Staion is a multi-floor residencial office that serves base for our ''Supernatrual Prevaors'' branch" << endl;
	system("timeout /t 3 >nul");
	cout << " We havent heard back from them in...a while..." << endl;
	system("timeout /t 3 >nul");
	cout << " All I can find out is that theres was recent funding for investicatrions in something called - 'Veil'" << endl;
	system("timeout /t 3 >nul");
	cout << "I was able to get my hand on some more info about it but, its not alot as comunication has been termanated for the time being, Ill send you the file" << endl;
	system("timeout /t 3 >nul");
	cout << " Someone will be by to take you to the site" << endl;
	system("timeout /t 3 >nul");
	cout << " report back to ME, if you find anything...This is TOP PRIORITY" << endl;
	cout << endl;
	system("timeout /t 3 >nul");
	cout << " ---END OF TRANSMISTION---" << endl;
	cout << " 1 attached file" << endl;
	system("pause");
	system("CLS");

	system("color F");

	cout << " Would you like to open the file? (y/n)" << endl;

	getline(cin, input);

	if (input == "y") {
		system("CLS");
		cout << char(200)<<"###Property of the RISE coprpration###"<< char(188) << endl;
		cout << endl;
		for (int i = 0; i < 3; i++) { //Redacted Paragraph
			for (int i = 0; i <= 6; i++) {
				cout << " ";
				int numb = rand() % 5 + 1;

				for (int i = 0; i < numb; i++)
					cout << char(254);
			}
			cout << endl;
		}

		cout << " Gavin " << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << " is the head director of the Viel project, He has teamed up with " << endl;
		cout << " Gavin was made aware of the veil after using alchemy make the 'Crimson Divanation'" << endl;
		cout << " The divination stated 'The one to rise will cast out the fallen'" << endl;

		for (int i = 0; i < 3; i++) { //Redacted Paragraph
			for (int i = 0; i <= 7; i++) {
				cout << " ";
				int numb = rand() % 5 + 1;


				for (int i = 0; i < numb; i++)
					cout << char(254);
			}
		}
		cout << endl;
		cout << " The black viel shal be pierced and torn from this realm, and no longer have the power to imprison to this mortal plane" << endl;
		cout << endl;
		cout << endl;
		cout << " Gavin will partner up with the Supernatral provaours and use the mars orbit base as an office to be complety focused on research" << endl;
		cout << endl;
		cout << " The following is a transcript of the recent reserch on 'Viel'" << endl;
		cout << endl;
		cout << " 10/02/"<< char(254)<< char(254) << "23" << endl;
		cout <<" "<<char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << endl;
		cout << " The SP accociates helped me run an expiriment in which we used a house pet " << endl;
		cout << " and an alchemic formula to try and regenerate some of the missing tissue that it had been missing after an accident" << endl;
		for (int i = 0; i < 3; i++) { //Redacted Paragraph
			for (int i = 0; i <= 9; i++) {
				cout << " ";
				int numb = rand() % 5 + 1;


				for (int i = 0; i < numb; i++)
					cout << char(254);
			}
			cout << endl;
		}


	}
	else{}


	system("timeout /t 1 >nul");
	cout << endl;
	system("pause");
	system("CLS");
	cout << " Today marks your first day on the space mission" << endl;
	cout << " The sensors say that the 3rd level of the office is the most stable for climbing aboard" << endl;
	cout << " You can easily go through the emegancy excape pod chamber but you have to leave your main ship behind" << endl;
	cout << " So much for your ride back home..." << endl;
	system("pause");//stranded


	do { //-------------Game Loop -----------------
		switch (room) {
		case 1: //Living Room
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			cout << " A couch and an accent coffee table are flipped over and theres a futuristic tv that lights up the room with an EERIE blue light" << endl;
			cout << " This is probably the living room" << endl;
			cout << " Spiders are occupying the couch, looks like their favorite show is on...IDK" << endl;
			if (find(inventory.begin(), inventory.end(), "Hexagon Keycard") != inventory.end())
				cout << " Theres an empty coffee mug thats on the floor by the table" << endl;
			else
				cout << " Theres a Keycard inside a coffee mug thats on the floor by the table" << endl;

			cout << endl;
			cout << " You can see a door to the East and to the North" << endl;


			getline(cin, input);


			if (input == "Take Keycard") {
				cout << " You shoved the keycard in your pocket";
				inventory.insert(inventory.begin(), "Hexagon Keycard");
			}
			else if (input == "Inventory") {
				system("CLS");
				Inventory();
				system("pause");
			}
			else if (input == "Go North")
				room = 4;
			else if (input == "Go East")
				room = 2;
			else
				cout << " You WHAT?";
			system("PAUSE>nul");
			system("CLS");
			break;

		case 2: //Kitchen
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			cout << " Its pretty dark but,  the room looks like a kitchen" << endl;
			cout << " There's a stove, dishwasher, fridge, and complementing blue countertops" << endl;
			cout << " But spilling out of the darkness, the room is full of dolls! dolls everywhere!!!  " << endl;
			cout << " Falling out of the fridge, hanging from the ceiling, pinned to the walls" << endl;
			cout << " They all seems to trck you with their eyes" << endl;
			cout << endl;
			cout << " Theres a door that leads West and a hole in the wall to the North" << endl;

			getline(cin, input);

			if (input == "Inventory") {
				system("CLS");
				Inventory();
				system("pause");
			}
			else if (input == "Go West")
				room = 1;
			else if (input == "Go North")
				room = 3;
			else {
				cout << " Im not sure you can go that way";
			}
			system("CLS");
			break;

		case 3: // Bathroom
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			cout << " The Bathroom is pretty spacous" << endl;
			cout << " Espacially with the big hole" << endl;
			cout << " A shower and a sink take up most of the room" << endl;
			cout << " Theres toilet! AND ITS USED" << endl;
			cout << " The mirror has a brown hand print and smears" << endl;
			if (find(inventory.begin(), inventory.end(), "Pliers") != inventory.end())
				cout << " The sink is stained grey and brown" << endl;
			else
				cout << " A pair of Pliers rests in the grey and brown stained sink" << endl;

			cout << endl;
			cout << " Theres a door theres a door just ajar to the West and the big hole to the South" << endl;

			getline(cin, input);

			if (input == " Take Pliers") {
				cout << " You grabbed the pliers";
				inventory.insert(inventory.begin(), "Pliers");
			}

			if (input == "Inventory") {
				Inventory();
			}
			if (input == "Go West")
				room = 4;
			if (input == "Go South")
				room = 2;
			else
				cout << " But nobody came...";
			system("CLS");
			break;

		case 4: //Bedroom
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			cout << " Two bunk beds take up most of the room" << endl;
			cout << " would be comfy if it wasnt covered in maggots and cockroches" << endl;
			cout << " Watch your step, theres some glass on the foor" << endl;
			cout << " Theres a closed door to the west, Other exits include: South, and East" << endl;

			getline(cin, input);

			if (input == "Go South")
				room = 1;
			if (input == "Go East")
				room = 3;
			if (input == "Go West") {
				if (find(inventory.begin(), inventory.end(), "Hexagon Keycard") != inventory.end()) {
					cout << " You swipe the keycard and turn the terminal beeps";
					room = 5;
				}
				else {
					cout << "  Doesnt look like you have a key to open the door";
				}
			}

			if (input == "Inventory")
				Inventory();
			else
				cout << "Error - 404";
			system("CLS");
			break;

		case 5: //HexAgoty Stair-room TOP
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			if (floor == 3) {
				
				cout << endl;
				cout << " You are able to push open the heavy door" << endl;
				cout << " It seems like its been years since this door has been opened" << endl;
				cout << " The door SLAMS behind you" << endl;
				cout << " A big dark room with multiple corners surrounds you" << endl;
				cout << " A grand stair case spirals downward" << endl;
				cout << " Nothing much going on here other than that..." << endl;
				cout << " You can go Down the stairs or East to the bedroom" << endl;
			}
			else {
				
				cout << endl;
				cout << " The room makes you feel weird" << endl;
				cout << " A big dark room with multiple corners surrounds you" << endl;
				cout << " A grand stair case spirals downward" << endl;
				cout << " Nothing much going on here other than that..." << endl;
				cout << " You can go Down the stairs or East to the bedroom" << endl;
			}

			getline(cin, input);

			if (input == "Go Down") {
				
				cout << " You make your way down the steps casuasly" << endl;
				cout << " Theres nothing that seems out of normal..." << endl;
				cout << " Half way down the stair case, something grabs your ankle and pulls on your foot" << endl;
				cout << " The floor seems to be getting closer to you face" << endl;
				cout << " Your flashlight hits every step on the way down as your body follows its lead to the bottom" << endl;
				room = 52;
				floor = 2;
				system("pause");
			}
			if (input == "Go East")
				cout << " The door wont budge, not good" << endl;
			if (input =="Inventory")
				Inventory();
			else
				cout << " Yea, NO... ";
			system("CLS");
			break;


		case 52: //HexAgoty Stair-room BOTTOM
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			if (floor == 3) {
				
				cout << " Dusting your self off," << endl;
				cout << " The room smells like something burned " << endl;
				cout << " You can see the floor is a marble like material with some blue and green" << endl;
				cout << " Except that theres ashes covering the center of the floor" << endl;
			}
			else {
				
				cout << " The feeling of the room is- off" << endl;
				cout << " Youre un shure about whats on the floor" << endl;
				cout << " Theres barley anything left over to even tell what it was" << endl;
				cout << " You can tell theres some white chunks hidden under some soot" << endl;
				cout << " If you can get a closer Look, you can find out what they are" << endl;
			}

			getline(cin, input);

			if (input == "Look at Floor") {
				cout << " You kneel down and use your hands to dig through the ash" << endl;
				cout << " You pick one of the small hard pieces and shine your flashlight on it" << endl;
				cout << " IT'S A TOOTH" << endl;
				cout << " You took a couple of teeth";
				inventory.insert(inventory.begin(), "Teeth");
			}
			if (input =="Inventory")
				Inventory();
			if (input == "Go South")
				room = 3;
			if (input == "Go Up")
				room = 5;
			else
				cout << " Error - 404";
			system("CLS");
			break;


		case 6: //hallway
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			cout << " Not the best smell in the world" << endl;
			cout << " Other than the rotting carpet and broken hologen lights," << endl;
			cout << " The room is VERY empty" << endl;
			cout << " Theres an exit in every direction" << endl;

			getline(cin, input);

			if (input =="Inventory")
				Inventory();
			if (input == "Go South")
				room = 52;
			if (input == "Go North")
				room = 11;
			if (input == "Go West")
				room = 8;
			if (input == "Go East")
				room = 9;

			system("CLS");
			break;
		case 7://server room
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			cout << " The room is in better condition than the ones you've seen" << endl;
			cout << " Theres two large shelfs and a desk against the wall in between the two" << endl;
			cout << " Colurful wires and lights are flashing everywere" << endl;
			cout << " Theres a yellow Switch you can Use coming out of one of the shelves behind the desk " << endl;

			cout << " A doorway South of you leads back to the cubicals " << endl;

			getline(cin, input);

			if (input == "Use Switch") {
				if (serverSwitch == 2) {
					cout << " Move the switch Up or Down?" << endl;

					getline(cin, input);

					if (input == "Up") {
						serverSwitch = 1;
						cout << " You move the switch Up";
					}
						
					else if (input == "Down") {
						serverSwitch = 3;
						cout << " You move the switch down";
					}
						
				}
				else if (serverSwitch == 1) {
					cout << " You move the switch down";
					serverSwitch = 2;
				}
				else {
					cout << " You move the switch Up";

					serverSwitch = 2;
					
				}
			}
			else if (input == " Inventory")
				Inventory();
			else if (input == " Go South")
				room = 9;
			else
				cout << " Im not playing these games";

			system("CLS");
			break;

		case 8://closet
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			cout << " The door opens to a small closet" << endl;
			cout << " You can see a blue barrel in the back corner of the room next to a Fileing Cabinet" << endl;
			cout << " The vent on the cealing of the room makes a screeching noice everyonce in a while " << endl;

			cout << " You can leave the room to the East" << endl;

			if (input == "Inventory")
				Inventory();
			if (input == "Go East")
				room = 6;

			system("CLS");
			break;

		case 9://Office cubicals
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			

			if (input == "Go North")
				room = 7;
			if (input == "Go East")
				room = 10;
			if (input == "Go West")
				room = 6;

			system("CLS");
			break;

		case 10:
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			if (input == "Go West")
				room = 9;

			system("CLS");
			break;

		case 11:
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			if (input == "Go Up")
				room = 112;
			if (input == "Go South")
				room = 6;

			system("CLS");
			break;

		case 112:
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			if (input == "Go South")
				room = 12;

			system("CLS");
			break;

		case 12:
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			if (input == "Go South")
				room = 122;
			if (input == "Go North")
				room = 112;
			if (input == "Go East")
				room = 18;
			if (input == "Go South")
				
			system("CLS");
			break;


		case 122:
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;
			if (input == "Go East")
				if (serverSwitch == 2)
					room = 13;
				else if (serverSwitch == 1)
					room = 14;
				else
					room = 15;

			system("CLS");
			break;

		case 13:
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;

			system("CLS");
			break;

		case 14:
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;

			system("CLS");
			break;

		case 15:
			cout << " --DogTooth--" << endl;
			cout << " #####################" << endl;
			cout << endl;

			system("CLS");
			break;

		case 16:
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;

			system("CLS");
			break;

		case 17:
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;

			system("CLS");
			break;

		case 18:
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;

			system("CLS");
			break;

		case 19:
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;

			system("CLS");
			break;

		case 20:
			cout << " --DogTooth--" << endl;
			cout << " ######################" << endl;
			cout << endl;

			system("CLS");
			break;
		}//End Switch


	} while (input != "q");


}


void logo() { //Logo Defined
	cout << "RESIZE SCREEN TO FIT LINE" << endl;
	cout << "################################################################################################################################" << endl;
	system("pause");
	system("color 4");
	system("CLS");
	PlaySoundA((LPCSTR)"PI-Opening.wav", NULL, SND_FILENAME | SND_ASYNC);
	Sleep(400);
	cout << "##################################" << endl;
	cout << "#    _____                       #" << endl;
	cout << "#   /  /  \\                     #" << endl;
	cout << "#  /  / /\\ \\      /            #" << endl;
	cout << "# /  / /  \\ \\    /  / /        #" << endl;
	cout << "#\\  \\ \\ /  / / /__/           #" << endl;
	cout << "# \\  \\ \\  / /  \\             #" << endl;
	cout << "#  \\  \\ \\/ /                  #" << endl;
	cout << "#   \\  \\  /                    #" << endl;
	cout << "#    \\__\\/                     #" << endl;
	cout << "#                  \\_           #" << endl;
	cout << "##################################" << endl;
	Sleep(100);
	Beep(0, 300);
	Beep(0, 200);
	system("CLS");
	cout << "############################################" << endl;
	cout << "#    _____          __                     #" << endl;
	cout << "#   /  /  \\        /                      #" << endl;
	cout << "#  /  / /\\ \\      /  /                   #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\             #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\                #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\                   #" << endl;
	cout << "#  \\  \\ \\/ /    \\                      #" << endl;
	cout << "#   \\  \\  /      \\                      #" << endl;
	cout << "#    \\__\\/        \\                     #" << endl;
	cout << "#                  \\__                    #" << endl;
	cout << "############################################" << endl;
	Sleep(100);
	Beep(0, 200);
	Beep(0, 200);
	system("CLS");
	cout << "####################################################" << endl;
	cout << "#    _____          ___                            #" << endl;
	cout << "#   /  /  \\        /  /\\                         #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\                       #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\                     #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\__\\ \\ /__/            #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / /                 #" << endl;
	cout << "#  \\  \\ \\/ /    \\  \\ \\  / /   \\             #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /                    #" << endl;
	cout << "#    \\__\\/        \\  \\  /                      #" << endl;
	cout << "#                  \\__\\/                         #" << endl;
	cout << "####################################################" << endl;
	Sleep(100);
	Beep(0, 200);
	Beep(0, 200);
	system("CLS");
	cout << "####################################################################" << endl;
	cout << "#    _____          ___           ___                              #" << endl;
	cout << "#   /  /  \\        /  /\\         /  /\\                          #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /_                         #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\     /  / / /\\                      #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\__\\ \\ /__/ /__\\/\\ \\                #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                #" << endl;
	cout << "#  \\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                 #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                   #" << endl;
	cout << "#    \\__\\/        \\  \\  /       \\  \\  /                      #" << endl;
	cout << "#                  \\__\\/         \\__\\/                         #" << endl;
	cout << "####################################################################" << endl;
	Sleep(100);
	Beep(0, 200);
	Beep(0, 200);
	system("CLS");
	cout << "############################################################################################################" << endl;
	cout << "#    _____          ___           ___                                         ___                          #" << endl;
	cout << "#   /  /  \\        /  /\\         /  /\\                            ___        /  /\\         /           #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /                         /  /\\      /  /  \\                     #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\     /  / / /\\                        /  / /     /  / /\\ \\     /  / /     #" << endl;
	cout << "#/__/ / \\__\\ |  /  / /  \\ \\   /  / /_/  \\                      /  / /     /  / /  \\ \\  \\_ / \\     #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                   /__/ /\\ \\   \\  \\ \\ /  / / \\  \\#" << endl;
	cout << "#  \\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                    \\__\\/  \\ \\   \\  \\ \\  / /   \\ #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                          \\  \\ \\   \\  \\ \\/ /         #" << endl;
	cout << "#    \\__\\/        \\  \\  /       \\  \\  /                            \\__\\/    \\  \\  /              #" << endl;
	cout << "#                  \\__\\/         \\__\\/                                       \\__\\/                   #" << endl;
	cout << "############################################################################################################" << endl;
	Sleep(100);
	Beep(0, 200);
	Beep(0, 200);
	system("CLS");
	cout << "###########################################################################################################################" << endl;
	cout << "#    _____          ___           ___                                         ___           ___                       ___ #" << endl;
	cout << "#   /  /  \\        /  /\\         /  /\\                            ___        /  /\\         /  /\\      _/             #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /                         /  /\\      /  /  \\        \\    \\ \\                 #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\     /  / / /\\                        /  / /     /  / /\\ \\     /  / /\\ \\      /  /     #" << endl;
	cout << "#/__/ / \\__\\ |  /  / /  \\ \\   /  / /_/  \\                      /  / /     /  / /  \\ \\  \\_ / \\                    #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                   /__/ /\\ \\   \\  \\ \\ /  / / \\  \\ \\ /  / / /__ #" << endl;
	cout << "#  \\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                    \\__\\/  \\ \\   \\  \\ \\  / /   \\  \\ \\  / /  \\#" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                          \\  \\ \\   \\  \\ \\/ /     \\   \\ \\         #" << endl;
	cout << "#    \\__\\/        \\  \\  /       \\  \\  /                            \\__\\/    \\  \\  /       \\  \\   \\           #" << endl;
	cout << "#                  \\__\\/         \\__\\/                                       \\__\\/         \\__\\/     \\/          #" << endl;
	cout << "###########################################################################################################################" << endl;
	Sleep(100);
	Beep(0, 200);
	Beep(0, 200);
	system("CLS");
	cout << "################################################################################################################################" << endl;
	cout << "#    _____          ___           ___                                         ___           ___                       ___      #" << endl;
	cout << "# /  /  \\        /  /\\         /  /\\                            ___        /  /\\         /  /\\          ___        /__/\\     #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /_                          /  /\\      /  /  \\       /  /  \\        /  /\\       \\  \\ \\    #" << endl;
	cout << "#/  / /  \\ \\    /  / /\\ \\     /  / / /\\                        /  / /     /  / /\\ \\     /  / /\\ \\      /  / /        \\__\\ \\   #" << endl;
	cout << "#/__/ / \\__\\ |  /  / /  \\ \\   /  / /_/  \\                      /  / /     /  / /  \\ \\   /  / /  \\ \\    /  / /     ___ /  /  \\  #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\__\\ \\ /__/ /__\\/\\ \\                  /  /  \\    /__/ / \\__\\ \\ /__/ / \\__\\ \\  /  /  \\    /__/\\  / /\\ \\ #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                   /__/ /\\ \\   \\  \\ \\ /  / / \\  \\ \\ /  / / /__/ /\\ \\   \\  \\ \\/ /__\\/ #" << endl;
	cout << "#\\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                    \\__\\/  \\ \\   \\  \\ \\  / /   \\  \\ \\  / /  \\__\\/  \\ \\   \\  \\  /      #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                          \\  \\ \\   \\  \\ \\/ /     \\  \\ \\/ /        \\  \\ \\   \\  \\ \\      #" << endl;
	cout << "#  \\__\\/        \\  \\  /       \\  \\  /                            \\__\\/    \\  \\  /       \\  \\  /          \\__\\/    \\  \\ \\     #" << endl;
	cout << "#                  \\__\\/         \\__\\/                                       \\__\\/         \\__\\/                     \\__\\/     #" << endl;
	cout << "################################################################################################################################" << endl;
	Sleep(100);
	Beep(0, 200);
	Beep(0, 200);
	system("CLS");
	cout << "################################################################################################################################" << endl;
	cout << "#    _____          ___           ___                                         ___           ___                       ___      #" << endl;
	cout << "#   /  /  \\        /  /\\         /  /\\                            ___        /  /\\         /  /\\          ___        /__/\\     #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /_                          /  /\\      /  /  \\       /  /  \\        /  /\\       \\  \\ \\    #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\     /  / / /\\                        /  / /     /  / /\\ \\     /  / /\\ \\      /  / /        \\__\\ \\   #" << endl;
	cout << "#/__/ / \\__\\ |  /  / /  \\ \\   /  / /_/  \\                      /  / /     /  / /  \\ \\   /  / /  \\ \\    /  / /     ___ /  /  \\  #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\__\\ \\ /__/ /__\\/\\ \\                    /  /  \\    /__/ / \\__\\ \\ /__/ / \\__\\ \\  /  /  \\    /__/\\  / /\\ \\ #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                   /__/ /\\ \\   \\  \\ \\ /  / / \\  \\ \\ /  / / /__/ /\\ \\   \\  \\ \\/ /__\\/ #" << endl;
	cout << "#  \\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                    \\__\\/  \\ \\   \\  \\ \\  / /   \\  \\ \\  / /  \\__\\/  \\ \\   \\  \\  /      #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                          \\  \\ \\   \\  \\ \\/ /     \\  \\ \\/ /        \\  \\ \\   \\  \\ \\      #" << endl;
	cout << "#    \\__\\/        \\  \\  /       \\  \\  /                            \\__\\/    \\  \\  /       \\  \\  /          \\__\\/    \\  \\ \\     #" << endl;
	cout << "#                  \\__\\/         \\__\\/                                       \\__\\/         \\__\\/                     \\__\\/     #" << endl;
	cout << "################################################################################################################################" << endl;
	Sleep(100);
	Beep(0, 200);
	Beep(0, 200);
	system("CLS");
	cout << "################################################################################################################################" << endl;
	cout << "#    _____          ___           ___                                         ___           ___                       ___      #" << endl;
	cout << "# /  /  \\        /  /\\         /  /\\                            ___        /  /\\         /  /\\          ___        /__/\\     #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /_                          /  /\\      /  /  \\       /  /  \\        /  /\\       \\  \\ \\    #" << endl;
	cout << "#/  / /  \\ \\    /  / /\\ \\     /  / / /\\                        /  / /     /  / /\\ \\     /  / /\\ \\      /  / /        \\__\\ \\   #" << endl;
	cout << "#/__/ / \\__\\ |  /  / /  \\ \\   /  / /_/  \\                      /  / /     /  / /  \\ \\   /  / /  \\ \\    /  / /     ___ /  /  \\  #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\__\\ \\ /__/ /__\\/\\ \\                  /  /  \\    /__/ / \\__\\ \\ /__/ / \\__\\ \\  /  /  \\    /__/\\  / /\\ \\ #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                   /__/ /\\ \\   \\  \\ \\ /  / / \\  \\ \\ /  / / /__/ /\\ \\   \\  \\ \\/ /__\\/ #" << endl;
	cout << "#\\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                    \\__\\/  \\ \\   \\  \\ \\  / /   \\  \\ \\  / /  \\__\\/  \\ \\   \\  \\  /      #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                          \\  \\ \\   \\  \\ \\/ /     \\  \\ \\/ /        \\  \\ \\   \\  \\ \\      #" << endl;
	cout << "#  \\__\\/        \\  \\  /       \\  \\  /                            \\__\\/    \\  \\  /       \\  \\  /          \\__\\/    \\  \\ \\     #" << endl;
	cout << "#                  \\__\\/         \\__\\/                                       \\__\\/         \\__\\/                     \\__\\/     #" << endl;
	cout << "################################################################################################################################" << endl;
	Sleep(100);
	Beep(0, 200);
	Beep(0, 200);
	system("CLS");
	cout << "################################################################################################################################" << endl;
	cout << "#    _____          ___           ___                                         ___           ___                       ___      #" << endl;
	cout << "#   /  /  \\        /  /\\         /  /\\                            ___        /  /\\         /  /\\          ___        /__/\\     #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /_                          /  /\\      /  /  \\       /  /  \\        /  /\\       \\  \\ \\    #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\     /  / / /\\                        /  / /     /  / /\\ \\     /  / /\\ \\      /  / /        \\__\\ \\   #" << endl;
	cout << "#/__/ / \\__\\ |  /  / /  \\ \\   /  / /_/  \\                      /  / /     /  / /  \\ \\   /  / /  \\ \\    /  / /     ___ /  /  \\  #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\__\\ \\ /__/ /__\\/\\ \\                    /  /  \\    /__/ / \\__\\ \\ /__/ / \\__\\ \\  /  /  \\    /__/\\  / /\\ \\ #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                   /__/ /\\ \\   \\  \\ \\ /  / / \\  \\ \\ /  / / /__/ /\\ \\   \\  \\ \\/ /__\\/ #" << endl;
	cout << "#  \\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                    \\__\\/  \\ \\   \\  \\ \\  / /   \\  \\ \\  / /  \\__\\/  \\ \\   \\  \\  /      #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                          \\  \\ \\   \\  \\ \\/ /     \\  \\ \\/ /        \\  \\ \\   \\  \\ \\      #" << endl;
	cout << "#    \\__\\/        \\  \\  /       \\  \\  /                            \\__\\/    \\  \\  /       \\  \\  /          \\__\\/    \\  \\ \\     #" << endl;
	cout << "#                  \\__\\/         \\__\\/                                       \\__\\/         \\__\\/                     \\__\\/     #" << endl;
	cout << "################################################################################################################################" << endl;
	system("pause");
	Beep(0, 200);
	Beep(0, 300);
	system("CLS");
}

void Inventory() {
	system("CLS");
	cout << " Currenly, you are holding: " << endl;
	for (int i = 0; i < inventory.size(); i++)
		cout << " - " << inventory[i] << endl;
	system("pause");
}

