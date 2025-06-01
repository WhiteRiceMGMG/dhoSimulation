#include <stdio.h>
#include "harmonic.h"

int main(void) {
    static Parameters prm = {0};
    printf("単振動シミュレーション\n");
    printf("パラメータ入力に遷移します．");
    input_parameters(&prm);
    //↑input_parametersからprmのポインタもらう
    //もしくはinput_parametersから直接ポインタ渡す


    return 0;
}