#pragma once
#include <iostream>
#include <string>

using namespace std;

// функция которая проверяет, является ли строка кратной числу K
/*Кратность — повторяемость строки каждые K символов (K должно быть больше 0). 
Например, abcabcabcabc имеет кратность 3,  так как она состоит из подстрок abc, имеющих длину 3*/


// на вход получаем строку которую проверяем и число кратности подстроки
bool IsKPeriodic(const string& txt, int K)
{
    string pat;
    int size = txt.size(); 
    if(size < K || K <= 0)
    {
        return false;
    }
    // находим чему равна подстрока
    for(int j = 0; j < K;j++)
    {
        pat += txt[j];
    }


    for(int i = K; i < size;i += K)
    {
        int h = i; 
        for(int l = 0;l < K;l++)
        {
            
            if(pat[l] != txt[h])
            {
                return false;
            }
            h++;
        }
    }
    return true;
}