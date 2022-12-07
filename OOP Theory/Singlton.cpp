#include<iostream>
using namespace std;

class GameSettings{
	static GameSettings* instance; // we need a static instance of SameSetting class so that it can be shared accross all screens in game 
	int height;
	int widht;
	int brightness;
	GameSettings(){    // Constructor of such classes will be always private because we dont want to create objects of such classes publicily.
		widht = 1700;
		height = 500;
		brightness = 75;
	}
	// now we will create a method to initiate only one instance of that class. its return type will be class as 
	//it will return us an object of class
	public:
		
		static GameSettings* getisntance(){
			if(instance ==NULL){
				instance = new GameSettings();   // to request memory allocation to the object of calss GameSettings:
			}
			return instance;
		}
		void setWidht(int widht){
			this->widht = widht;		}
		void setHeight(int height){
			this->height = widht;		}
		void setBrightness(int brightness){
			this->brightness = brightness;		}
		int getWidht(){
			return widht;
		}
		int getHieght(){
			return height;
		}
		int getBrightness(){
			return brightness;
		}
		void display(){
			cout<<brightness;
		}
};
GameSettings * GameSettings::instance = NULL;
void doSomething(){
	GameSettings* settings =GameSettings::getisntance();
	settings->display();
	
}

int main(){
	GameSettings* settings =GameSettings::getisntance();  // only one instance will be created; 
	GameSettings* settings1 =GameSettings::getisntance();;// other instances will get deleted
	settings->setBrightness(75);
	settings1->setBrightness(100);
	settings->display();
	settings1->display();
	doSomething();
	
	
	
	return 0;
}
