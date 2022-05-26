#ifndef DATA_H
# define DATA_H

#include <string>

class Data {
private:
	int _a;
	std::string _s;
public:
	Data();
	~Data();
	Data(const Data &other);
	Data &operator=(const Data &other);
	int getA() const;
	std::string getS() const;
	void setA(int a);
	void setS(std::string a);
};

#endif
