/*****************************************************************
 *  filename   　 　 : main.c
 *  escription 　 　 : 
 *  Author     　 　 : Ogawa ocmikanmgmg@gmail.com
 *  Created    　　  : jun 1, 2025
 *  Compiler   　　  : arm-none-eabi-gcc
 *  MCU        　　  : RP2040
 *  License    　　  : MIT License
 *  Note       　　  : 
 *  RevisionHistory  :
 * 　　　　　　　　　　　2025/5/24:
 * 　　　　　　　　　　　2025/5/31:
 *                   2025/5/31:
 *****************************************************************/
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