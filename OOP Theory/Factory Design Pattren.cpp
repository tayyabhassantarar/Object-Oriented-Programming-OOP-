#include<iostream>
using namespace std;
enum returnType{ bus, flight, train
    
};
// Interface use to create object of desired class
class Travel{
    public:
        virtual void fairEstimation() = 0;
        static Travel* createObject(returnType type);
};
class Bus: public Travel{
    public:
        void fairEstimation(){
            cout<<"Bus fair is:=2500"<<endl;
        }
};
class Flight: public Travel{
    public:
        void fairEstimation(){
            cout<<"Flight fair is:=10,000"<<endl;
        }
};
class Train: public Travel{
    public:
        void fairEstimation(){
            cout<<"train fair is:=500"<<endl;
        }
};

Travel* Travel::createObject(returnType type){
    if(type == bus){
        return new Bus();
    }
    else if(type == flight){
        return new Flight();
    }
    else if(type == train){
        return new Train();
    }
    
}
class Factory {
    private:
        Travel *ptr;
    public:
        Factory(returnType type){
            ptr = Travel::createObject(type);
        }
        Travel *getTravelObj(){
            return ptr;
        }
        ~Factory(){
            if(ptr){
                delete[] ptr;
                ptr = NULL;
            }
            
        }
}; 
// Main function
int main(){
    Factory *f = new Factory(flight);
    Travel * ptr = f->getTravelObj();
    ptr->fairEstimation();
    
    
    
    return 0;
}




