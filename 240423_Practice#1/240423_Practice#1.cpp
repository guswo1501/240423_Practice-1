#include <iostream>

int main()
{
	//if문과 switch문의 차이
	// switch문은 한가지 상황에 여러 경우가 존재할 때 주로 사용 ex)색에 따라 동작을 다르게 한다고 했을 때 사용하면 if문보다 간결해짐
	
	float result;
	float num1;
	float num2;
	int cal;
	std::string initial;

	std::cout << "변수1를 입력해주십시오. \n";
	std::cin >> num1;

	std::cout << "변수2를 입력해주십시오. \n";
	std::cin >> num2;

	std::cout << "연산자를 입력해주십시오. \n";
	std::cin >> initial;

	if (initial == "+")
	{
		cal = 1;
	}
	else if (initial == "-")
	{
		cal = 2;
	}
	else if (initial == "*")
	{
		cal = 3;
	}
	else if (initial == "/")
	{
		cal = 4;
	}


	switch (cal)
	{
		case 1  :
			result = num1 + num2;
			std::cout << "결과는 " << result << " 입니다.";
			break;
		case 2 :
			result = num1 - num2;
			std::cout << "결과는 " << result << " 입니다.";
			break;
		case 3 :
			result = num1 * num2;
			std::cout << "결과는 " << result << " 입니다.";
			break;
		case 4:
			result = num1 / num2;
			std::cout << "결과는 " << result << " 입니다.";
			break;
	}
	
	return 0;
}