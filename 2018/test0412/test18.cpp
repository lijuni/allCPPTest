/*
                   _ooOoo_ 
                  o8888888o 
                  88" . "88 
                  (| -_- |) 
                  O\  =  /O 
               ____/`---'\____ 
             .'  \\|     |//  `. 
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   | 
           | \_|  ''\---/''  |   | 
           \  .-\__  `-`  ___/-. / 
         ___`. .'  /--.--\  `. . __ 
      ."" '<  `.___\_<|>_/___.'  >'"". 
     | | :  `- \`.;`\ _ /`;.`/ - ` : | | 
     \  \ `-.   \_ __\ /__ _/   .-` /  / 
======`-.____`-.___\_____/___.-`____.-'====== 
                   `=---=' 
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ 
         佛祖保佑       永无BUG 
    
           江城子 . 程序员之歌
 *
 *   十年生死两茫茫，写程序，到天亮。
 *       千行代码，Bug何处藏。
 *   纵使上线又怎样，朝令改，夕断肠。
 *
 *   领导每天新想法，天天改，日日忙。
 *       相顾无言，惟有泪千行。
 *   每晚灯火阑珊处，夜难寐，加班狂。
*/
// P363 第一个练习
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<fstream>
using namespace std;

int main()
{
	ifstream in("data_int.txt");
	ofstream out1("out_ji.txt");
	ofstream out2("out_ou.txt");

	istream_iterator<int> isit(in), eof;
	ostream_iterator<int> osit_ji(out1, " ");
	ostream_iterator<int> osit_ou(out2, "\n");

	while(isit!=eof)
	{
		if((*(isit))%2!=0)
			(*(osit_ji++))=(*(isit++));
		else
			(*(osit_ou++))=(*(isit++));
	}
}


















