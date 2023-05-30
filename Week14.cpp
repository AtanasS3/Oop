#include <iostream>
#include <string>


class Question
{
private:
	int value;
	const std::string YES = "yes";
	const std::string NO = "no";

public:
	virtual std::string ask() const = 0;
	virtual double grade() const = 0;
	virtual void print() const = 0;
	virtual ~Question() {};
	bool validYesNoAnswer(const std::string& ans)
	{
		if ((ans == YES) || (ans == NO))
			return true;
		else
			return false;	
	};
	bool correctYesNoAnswer(const std::string& ans, bool correct_is_yes)
	{
		if ((correct_is_yes == true && ans == YES) || (correct_is_yes == false && ans == NO))
			return true;
		else
			return false;
	};

};

class QuestionFactory:Question
{
private:
public:
	Question* CreateQuestion();
};


int main()
{

}