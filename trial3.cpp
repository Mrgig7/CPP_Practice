// You are using GCC
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class PersonType{
    public:
    string firstName;
    string lastName;
    
    PersonType(string first, string last ="") : firstName(first), lastName(last) {}
    
    void printFullName() const{
        if(!lastName.empty()){
            cout<<firstName<<" "<<lastName<<endl;
        }else{
            cout<<firstName<<endl;
        }
    }
    
    bool hasLastName() const{
        return !lastName.empty();
    }
};

class PersonList {
    private:
    vector<PersonType> people;
    public:
    PersonList(int length){
        people.reserve(length);
    }
    
    void addPerson(const PersonType& person){
        people.push_back(person);
    }
    
    int countPeopleWithoutLastName() const{
        int count = 0;
        for (const PersonType& person : people){
            if(!person.hasLastName()){
                count++;
            }
        }
        
        return count;
    }
    
    void printFirstNamesWithoutLastName() const{
        for (const PersonType& person : people){
            if(!person.hasLastName()){
                cout<<person.firstName<<endl;
            }
        }
    }
};

int main(){
    int n;
    cin>>n;
    cin.ignore();
    PersonList personList(n);
    
    for(int i = 0; i<n; i++){
        string first, last;
     
        getline(cin, first);
        getline(cin, last);
        
        PersonType person(first, last);
        personList.addPerson(person);
    }
    
    int countWithoutLastName = personList.countPeopleWithoutLastName();
    cout<<"Count: "<<countWithoutLastName<<endl;
    personList.printFirstNamesWithoutLastName();
    
    return 0;
}