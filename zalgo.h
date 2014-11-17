/*


H̴̡̰̠̤͈̮̟̻̳͍̯̯͔̠͈̹͖̭́͑͋͞e̴̶̴̜̝̦̮̩̮̠̪̠̗̻͈͖̘̦ͧ̋ͯͥ͂ͤ̑̌͗ͭͣ́̚͝ͅ ̴͑̒̋̑̎̈ͦ̚͞͏̡̱̝̭̻̬͜C͊̔̃̒҉̡̢͠҉̥̳̝̤̳͈̤͖̬̤̙o̧͕̰̭̳̻̭̞̫͚̠̮͆͆̾͆̂̂̒̀͢m̨̧̺͕̩̼̺̠̜̥̺̙͚̦̣̦̤̯̘͔̬̄ͬ̐̉̏̕͝e͇͚̠̹̼̠̳͙̯͈͓͓̦̩̲͆͛́̀ͫ̓̌̋͑ͨͫ̄͘͘͘s̵̡ͥ͒̔̍ͧ͑̾͆͆̌͋̄̊̀͞͏̞̬̞̯̯͖̫̹̣̭͚̳͔͕̺ͅ


ZalgoC++
implementation by Joex 2014, based off of a copy-pasted,C++erized tchouky's code


usage:
include "zalgo.h"

Zalgo zalgo;
cout <<zalgo.zalgo("This text will return hivemind");<<endl;


*/





using namespace std;
class Zalgo {
private:
static const string zalgo_up;
static const string zalgo_down;
static const string zalgo_mid;


int rando(int max)

{
	return rand() % (max+1);
}



string rand_zalgo(string array) //Get a random character from list

{	

	int ind;

	do	{

	ind = rand() % (array.length()-2);	

		}

	while (ind % 2 != 0); //Must be even!

	string newtxt ="";

	newtxt += array[ind];

	newtxt += array[ind+1];

	return newtxt;

}



public:

string zalgo(string victim){

	string txt = victim;

	string newtxt = "";

	for (int i=0; i<txt.length(); i++) {

		newtxt+= txt[i];

		int num_up = rando(64) / 4 + 3;

		int num_mid = rando(16) / 4 + 1;

		int num_down = rando(64) / 4 + 3;

		for(int j=0; j<num_up; j++)

			newtxt += rand_zalgo(zalgo_up);

		for(int j=0; j<num_mid; j++)

			newtxt += rand_zalgo(zalgo_mid);

		for(int j=0; j<num_down; j++)

			newtxt += rand_zalgo(zalgo_down);

	}

	return newtxt;

}



};


const string Zalgo::zalgo_down="\u0316\u0317\u0318\u0319\u031c\u031d\u031e\u031f\u0320\u0324\u0325\u0326\u0329\u032a\u032b\u032c\u032d\u032e\u032f\u0330\u0331\u0332\u0333\u0339\u033a\u033b\u033c\u0345\u0347\u0348\u0349\u034d\u034e\u0353\u0354\u0355\u0356\u0359\u035a\u0323";
const string Zalgo::zalgo_up ="\u030d\u030e\u0304\u0305\u033f\u0311\u0306\u0310\u0352\u0357\u0351\u0307\u0308\u030a\u0342\u0343\u0344\u034a\u034b\u034c\u0303\u0302\u030c\u0350\u0300\u0301\u030b\u030f\u0312\u0313\u0314\u033d\u0309\u0363\u0364\u0365\u0366\u0367\u0368\u0369\u036a\u036b\u036c\u036d\u036e\u035b\u0346\u031a";
const string Zalgo::zalgo_mid="\u0315\u031b\u0340\u0341\u0358\u0321\u0322\u0327\u0328\u0334\u0335\u0336\u034f\u035c\u035d\u035e\u035f\u0360\u0362\u0338\u0337\u0361\u0489";