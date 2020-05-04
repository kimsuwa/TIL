#include<stdio.h>
int main() {

	//자판기에 투입한 금액과 음료수 값이 입력되면 거스름돈과 거스름돈으로 500원의 개수와 100원의 개수를 출력하는 프로그램을작성하세요.
	//기본 단위는 100원, 거스름돈은 500원과 100원으로만 구성
	int money_in, juice_price, exchange_500, exchange_100;

	printf("자판기에 투입한 금액(10000원 이하):");
	// scanf(%d, %d, &money_in, &juice_price); 라고 표현하고 스페이스/엔터 키 사용해서 두 수 입력해도 됨
	scanf_s("%d", &money_in);
	// printf("%d", money_in); //값이 제대로 입력되는지 확인하기 위해서 printf를 사용!
	printf("음료수 값을 입력하세요:");
	scanf_s("%d", &juice_price);
	// printf("%d", juice_price);

	exchange_500 = (money_in - juice_price) / 500;
	exchange_100 = ((money_in - juice_price) % 500) / 100;
	/*아래와 같이 한 문자를 사용해서 거스름 표현 가능
	c = money_in - juice_price;
	c = c/500; // 500원 갯수
	c = c%500; // 500원 주고 남은 나머지
	c = c/100; // 100원 갯수 */


	printf("거스름돈은 500원 %d개이며, 100원은 %d개 입니다.\n", exchange_500, exchange_100);
	// 유의! '&'(엔퍼센드? 주소 연산자)이 붙으면 변수의 주소를 의미
	// printf 시에는 변수 값을 읽어와야 하므로 &를 붙여서 사용하는 것이 아니라 변수를 그대로 사용!
}