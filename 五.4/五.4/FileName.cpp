#include <iostream>
#include <iomanip>
struct Student {
	int id;
	int score;
};
void max(Student* students, int size)
{
	int max_score = students[0]. score;
	int max_id = students[0]. id;
	for (int i = 1; i < size; ++i)
	{
		if (students[i].score > max_score)
		{
			max_score = students[i].score;
			max_id = students[i].id;
		}
	}
	std::cout << "学号为：" << max_id << "的学生成绩最高" << std::endl;
}
int main() {
	const int size = 5;
	Student students[size];
	for (int i = 0; i < size; ++i) {
		std::cout << "请输入第 " << i + 1 << " 个学生的学号和成绩：";
		std::cin >> students[i].id >> students[i].score;
	}
	max(students, size);
	return 0;
}
