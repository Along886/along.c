#include <stdio.h>
#include <string.h>
struct Person
{
	char name[10];//张三
	short age;//22
	short weight;//60kg
	short height;//170
};
int main()
{
	struct Person p1 = {"张三",22,60,170};
	strcpy(p1.name,"李四");
	struct Person* pp = &p1;
	printf("姓名：%s\n",(*pp).name);
	printf("年龄：%d 岁\n",(*pp).age);
	printf("体重：%d 千克\n",(*pp).weight);
	printf("身高：%d 厘米\n",(*pp).height);
	printf("%s\n",pp->name);
	//.    结构体变量.成员
	//->   结构体指针->成员
	/*printf("姓名：%s\n年龄：%d 岁\n体重：%d kg\n身高：%d cm\n\n\n",p1.name,p1.age,p1.weight,p1.height);
	p1.age = 23;
	printf("2023年的年龄：%d岁\n",p1.age);*/
	return 0;
}
