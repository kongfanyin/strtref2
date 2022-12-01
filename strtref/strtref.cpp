#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<string>
using std::string;
using std::cout;
struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};
void display(const free_throws &ft);
void set_pc(free_throws &ft);
free_throws &accumulate(free_throws &target, const free_throws &source);
int main()
{
	free_throws one = { "ifelsa branch",13,14 };
	free_throws two = {"andor knott",10,16};
	free_throws three = {"minne max",7,9};
	free_throws four = {"whily looper",5,9};
	free_throws five = {"long long",6,14};
	free_throws team = {"throw goods",0,0};
	free_throws dup;
	set_pc(one);
	display(one);
	accumulate(team, one);
	//use return value as aggument
	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);
	//use return value in assignment
	dup = accumulate(team, five);
	cout << "display team:" << '\n';
	display(team);
	cout << "displaying dup after assigenment: \n";
	display(dup);
	set_pc(four);
	//ill-advised assignment
	accumulate(dup, five) = four;
	cout << "display dup after ill-advised assigment\n";
	display(dup);
	return 0;
}
void display(const free_throws &ft)
{
	using std::cout;
	cout << "name:" << ft.name<<'\n';
	cout << " made:" << ft.made<<'\t';
	cout << " attemps:" << ft.attempts<<'\t';
	cout << " percent:" << ft.percent<<'\n';
}
void set_pc(free_throws &ft)
{
	if (ft.attempts != 0)
	{
		ft.percent = 100.0f*float(ft.made) / float(ft.attempts);
	}
	else
	{
		ft.percent = 0;
	}
}
free_throws &accumulate(free_throws &target, const free_throws &source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}