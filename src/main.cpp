#include <iostream>
#include <string>
#include <queue>
#include <ctime>

using namespace std;

class Person{
};

class Student : Person{//상속
    private:
        string name;
        int score;
    public:
        Student(string n,int s): score(s){this->name = n;}//생성자
        ~Student(){cout<<"student deleted";}//소멸자
        Student operator + (const Student& other){return Student(this->name+other.name,36);}//연산자 오버로딩
        void show(){std::cout<<this->name<<this->score<<std::endl;}//멤버 함수
};

int main(){
    std::cout<<"helloooo"<<std::endl;
    Student young = Student("young",36);
    young.show();

    queue<int> q;
    q.push(7);q.push(4);q.push(123);
    while(!q.empty()){
        cout<<q.front()<<' ';
        q.pop();
    }
    return 0;
}