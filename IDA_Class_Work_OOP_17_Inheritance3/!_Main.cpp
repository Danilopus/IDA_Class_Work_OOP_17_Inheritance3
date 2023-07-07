//class template version 5.0 //07.07.2023//
#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <algorithm>
#include <conio.h>
#include <cassert>
//My own headers
#include "Service functions.h"
#include "Task_1.h"

#include <typeinfo>
#include <type_traits>



// Class Work 07.07.2023 -------------------------------------------

// Интерфейсы // ISP (=I from SOLID) // Преобразование типов

/*
В С++ интерфейсы организованы через абстрактные классы без реализаций

Категаории классов:
1) Обычный 
- имя: существительное (редко прилагательное)
- длина имени: 1-3 слова максимум
2) Абстрактный (с частичной реализацией)
- имя: существительное + префикс/суффикс А (Abstract) (редко прилагательное)
- длина имени: 1-3 слова максимум
3) Интерфейсы
- имя: чаще прилагательное + префикс I/i либо I_/i_ (Interface) (редко прилагательное)
- длина имени: 1-3 слова максимум

Правило ISP (Interface Segregation Principle)
- кол-во базовых классов: 1, кол-во интерфейсов: много (по числу разнотпных пользователей класса)
- интерфейсы лучше наследовать через virtual


Преобразование типов: 
0) в стиле С: int() и.т.п.					// не рекоммендуется
1) в стиле С++: static_cast <Type> (val)	//+ перепроверяет возможность преобразования типа

Прочие разновидности _cast:
2) dynamic_cast <Type [*|&]>(Base_class_Type)	// преобразует указатель/ссылку на класс-наследник в указатель/ссылку на базовый класс (Base_class_Type)   
												// + проверяет что классы вообще связаны наследнованием
												 
3) const_cast <Type&>(const Type&)  // преобразует const ссылки/указатели в обычные
									// также может ставить/снимать пометку volatile (доступ к области памяти для других программ, либо своей к чужим областям)

4) reinterpret_cast // преобразует ссылку/указатель на один тип в ссылку/указатель на другой тип

#include <typeinfo> - полезная библиотека для определения типов
#include <type_traits> - позволяет узнать св-ва типа данных


*/


void Bar(const I_Printable& obj)
{
	std::string type_id_str = typeid(obj).name();
	obj.Print();
}
void Bar2(const other_interface& obj)
{
	std::string type_id_str = typeid(obj).name();
	obj.Print();
}
//Task 1
void Task_1()
{
	A* ptr = new B;
	A* ptr_2 = nullptr;
	A* ptr_3 = new A;

	A& ref = *ptr;
	A& ref_2 = *ptr_3;
	A& ref_3 = *ptr_2;

	//std::cout << &ptr_2;
	//std::cout << ptr_2;
	//std::cout << ptr_2;

	Bar(*ptr);
	Bar(*ptr);








	std::string type_id_str = typeid(*ptr).name();
	try 
	{
		type_id_str = typeid(*ptr_2).name();
	}
	catch (std::bad_typeid)
	{
		std::cerr << "everything fine, No\n";
	}
	type_id_str = typeid(*ptr_3).name();
	type_id_str = typeid(ref).name();
	type_id_str = typeid(ref_2).name();

	
	//type_traits
	std::is_abstract<A>();

	//static_assert(std::is_abstract<A>(), "msg");
	assert(std::is_abstract<A>(), "msg");

	std::less<int>()(1, 5);

	std::hash<int>()(1);



	_getch();
}
//Task 2 <typeinfo>
void Task_2()
{
	//std::string type_id_str = typeid(*ptr).name();
}
//Task 3
void Task_3()
{

}


// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main()
{
srand(time(NULL));
		
	
Task_1();
Task_2();
Task_3();





std::cout << "\n\n";
//system("pause");	
_getch();
}


