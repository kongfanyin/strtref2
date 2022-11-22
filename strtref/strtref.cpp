#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<string>

struct free_throws
{
	std::string name;
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


	return 0;
}
void display(const free_throws &ft)
{


}
void set_pc(free_throws &ft)
{



}
free_throws &accumulate(free_throws &target, const free_throws &source)
{




}