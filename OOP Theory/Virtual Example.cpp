#include<iostream>
using namespace std;
class Website{
	protected:
		char name;
		float star;
	public:
		Website(char name, float star){
			this->name = name;
			this->star = star;
		}
		virtual void display(){
		}
		
};
class Vid_website: public Website{
	float vid_len;
	public:
		Vid_website(char name, float star, float vid_len):Website(name, star){
			this->vid_len = vid_len;
		}
		void display(){
			cout<<"Title of the website is"<<name<<endl;
			cout<<"Rating of this website is"<<star<<endl;
			cout<<"Lenght of video is"<<vid_len<<endl;
		}
};

class Tutorial_website: public Website{
	int pages;
	public:
		Tutorial_website(char name, float star, int pages):Website(name, star){
			this->pages = pages;
		}
		void display(){
			cout<<"Title of the website is"<<name<<endl;
			cout<<"Rating of this website is"<<star<<endl;
			cout<<"Page of this website is"<<pages<<endl;
		}
};

int main(){
	char name;
	int pages;
	float star, vid_len;
	
	name = 'V';
	star = 5.3;
	vid_len = 20;
	Vid_website video_site(name, star, vid_len);
	//video_site.display(); 
	name = 'T';
	star = 4.3;
	pages = 20;
	Tutorial_website t(name, star, pages);
	//t.display(); 
	Website *ptr[2];
	ptr[0] = &video_site;
	ptr[1] = &t;
	ptr[0]->display();
	ptr[1]->display();
	return 0;
}