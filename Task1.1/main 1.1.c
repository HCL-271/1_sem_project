/*
* main 1.1.c
* Main for 1.1 task
* Created 14.11.2019
* (c) MIPT 2019
*/
#include <stdio.h> 
int main(void)
{
	test1();//Собственно тест с обещанным рандомом.

	/* На самом деле этот рандом полная фигня, т.к из-за ввода из консоли мы не можем
	*  создать 1000 списков по 1000000 элементов в каждом, чтобы проверить работоспособность
	*  программы на больших числах.
	*  Можно конечно создать файл с этими числами, но тогда любой юзер тоже должен иметь
	*  такой файл с числами у себя на пк. В программу можно добавить кусок с созданием
	*  кода, который создает файл. но это затратит слишком много времени, а баллов за это
	*  не дают, так что обойдемся без этого.
	*  P.S. В конце концов я не Подлесных, чтобы делать сверхжесткие тесты)
	*/

	test2();// Ломает код
	test_1337_gachi_king_code_breaker();
	// Эти два теста оставлены на исправление

	// Эти тесты нужны для демонстрации
	test_jojo_ORA_ORA_ORA_code_destructor();
	// Этот баг пофикшен, но я его оставлю как пример работы.
	test_fixed_bug();
	//Ещё один тест с исправленным багом
	test_Moon_prism_give_me_power();
	//И ещё один тест с исправленным багом

	return 0;

}
